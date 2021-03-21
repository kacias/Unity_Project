using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.IO.Compression;
using Unity.EditorCoroutines.Editor;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;

namespace Unity.Connect.Share.Editor
{
    public class ShareMiddleware
    {
        private static UnityWebRequest uploadRequest;
        private const string webglSharingFile = "webgl_sharing";
        private const string zipName = "connectwebgl.zip";
        private const string thumbnail = "thumbnail.png";
        private const string uploadEndpoint = "/api/webgl/upload";
        private const string queryProgressEndpoint = "/api/webgl/progress";
        private const int ZipFileLimitBytes = 100 * 1024 * 1024;

        static EditorCoroutine waitUntilUserLogsInRoutine;

        public static Middleware<AppState> Create()
        {
            return (store) => (next) => (action) =>
            {
                var result = next(action);

                switch (action)
                {
                    case ShareStartAction shared: ZipAndShare(shared.title, store); break;
                    case UploadStartAction upload: Upload(store); break;
                    case QueryProgressAction query: CheckProgress(store, query.key); break;
                    case StopUploadAction stopUpload: StopUploadAction(); break;
                    case NotLoginAction login: CheckLoginStatus(store); break;
                }
                return result;
            };
        }

        private static void ZipAndShare(string title, Store<AppState> store)
        {
            store.Dispatch(new TitleChangeAction { title = title });

            if (!SharePackageUtils.LastBuildIsValid())
            {
                store.Dispatch(new OnErrorAction { errorMsg = "Please build project first!" });
                return;
            }

            string buildOutputDir = SharePackageUtils.GetBuildOutputDirectory(); 
            if (!Zip(store, buildOutputDir)) { return; }
            store.Dispatch(new UploadStartAction());
        }

        private static bool Zip(Store<AppState> store, string buildOutputDir)
        {
            var projectDir = Directory.GetParent(Application.dataPath).FullName;
            var destPath = Path.Combine(projectDir, zipName);

            File.Delete(destPath);

            CopyThumbnail(store);

            ZipFile.CreateFromDirectory(buildOutputDir, destPath);
            FileInfo fileInfo = new FileInfo(destPath);

            if (fileInfo.Length > ZipFileLimitBytes)
            {
                store.Dispatch(new OnErrorAction { errorMsg = $"Max. allowed WebGL game .zip size is {SharePackageUtils.FormatBytes(ZipFileLimitBytes)}." });
                return false;
            }
            store.Dispatch(new ZipPathChangeAction { zipPath = destPath });
            return true;
        }

        private static void CopyThumbnail(Store<AppState> store)
        {
            var buildOutputDir = SharePackageUtils.GetBuildOutputDirectory();
            var thumbnailDestPath = Path.Combine(buildOutputDir, thumbnail);

            File.Delete(thumbnailDestPath);

            string thumbnailDir = SharePackageUtils.GetThumbnailPath();

            if (string.IsNullOrEmpty(thumbnailDir)) { return; }

            FileUtil.CopyFileOrDirectory(thumbnailDir, thumbnailDestPath);
        }

        private static void Upload(Store<AppState> store)
        {
            var token = UnityConnectSession.instance.GetAccessToken();
            if (token.Length == 0)
            {
                CheckLoginStatus(store);
                return;
            }

            var path = store.state.shareState.zipPath;
            var title = string.IsNullOrEmpty(store.state.shareState.title) ? "Untitled" : store.state.shareState.title;
            var buildGUID = SharePackageUtils.GetBuildGUID();

            var baseUrl = GetAPIBaseUrl();
            var projectId = GetProjectId();
            var formSections = new List<IMultipartFormSection>();

            formSections.Add(new MultipartFormDataSection("title", title));

            if (buildGUID.Length > 0)
            {
                formSections.Add(new MultipartFormDataSection("buildGUID", buildGUID));
            }

            if (projectId.Length > 0)
            {
                formSections.Add(new MultipartFormDataSection("projectId", projectId));
            }

            formSections.Add(new MultipartFormFileSection("file",
                File.ReadAllBytes(path), Path.GetFileName(path), "application/zip"));

            uploadRequest = UnityWebRequest.Post(baseUrl + uploadEndpoint, formSections);
            uploadRequest.SetRequestHeader("Authorization", $"Bearer {token}");
            uploadRequest.SetRequestHeader("X-Requested-With", "XMLHTTPREQUEST");

            var op = uploadRequest.SendWebRequest();

            EditorCoroutineUtility.StartCoroutineOwnerless(UpdateProgress(store, uploadRequest));

            op.completed += operation =>
            {
                if (uploadRequest.isNetworkError || uploadRequest.isHttpError)
                {
                    if (uploadRequest.error != "Request aborted")
                    {
                        store.Dispatch(new OnErrorAction { errorMsg = "Internal server error" });
                    }
                }
                else
                {
                    var response = JsonUtility.FromJson<UploadResponse>(op.webRequest.downloadHandler.text);
                    if (!string.IsNullOrEmpty(response.key))
                    {
                        store.Dispatch(new QueryProgressAction { key = response.key });
                    }
                }
            };
        }

        private static void StopUploadAction()
        {
            if (uploadRequest == null) { return; }
            uploadRequest.Abort();
        }

        private static void CheckProgress(Store<AppState> store, string key)
        {
            var token = UnityConnectSession.instance.GetAccessToken();
            if (token.Length == 0)
            {
                CheckLoginStatus(store);
                return;
            }

            key = key ?? store.state.shareState.key;
            var baseUrl = GetAPIBaseUrl();
            var uploadRequest = UnityWebRequest.Get($"{baseUrl + queryProgressEndpoint}?key={key}");
            uploadRequest.SetRequestHeader("Authorization", $"Bearer {token}");
            uploadRequest.SetRequestHeader("X-Requested-With", "XMLHTTPREQUEST");
            var op = uploadRequest.SendWebRequest();

            op.completed += operation =>
            {
                if (uploadRequest.isNetworkError || uploadRequest.isHttpError)
                {
                    Debug.LogError(uploadRequest.error);
                    StopUploadAction();
                    return;
                }
                var response = JsonUtility.FromJson<GetProgressResponse>(op.webRequest.downloadHandler.text);

                store.Dispatch(new QueryProgressResponseAction { response = response });
                if (response.progress == 100 || !string.IsNullOrEmpty(response.error))
                {
                    SaveProjectID(response.projectId);
                    return;
                }
                EditorCoroutineUtility.StartCoroutineOwnerless(RefreshProcessingProgress(1.5f, store));
            };
        }

        private static void SaveProjectID(string projectId)
        {
            if (projectId.Length == 0) { return; }

            StreamWriter writer = new StreamWriter(webglSharingFile, false);
            writer.Write(projectId);
            writer.Close();
        }

        private static string GetProjectId()
        {
            if (!File.Exists(webglSharingFile)) { return string.Empty; }

            var reader = new StreamReader(webglSharingFile);
            var projectId = reader.ReadLine();

            reader.Close();
            return projectId;
        }

        private static IEnumerator UpdateProgress(Store<AppState> store, UnityWebRequest request)
        {
            WaitForSeconds waitForSeconds = new WaitForSeconds(0.5f);
            while (true)
            {
                if (request.isDone) { break; }

                int progress = (int)(Mathf.Clamp(request.uploadProgress, 0, 1) * 100);
                store.Dispatch(new UploadProgressAction { progress = progress });
                yield return waitForSeconds;
            }
            yield return null;
        }

        private static void CheckLoginStatus(Store<AppState> store)
        {
            var token = UnityConnectSession.instance.GetAccessToken();
            if (token.Length != 0)
            {
                store.Dispatch(new LoginAction());
                return;
            }

            if (waitUntilUserLogsInRoutine != null) { return; }

            waitUntilUserLogsInRoutine = EditorCoroutineUtility.StartCoroutineOwnerless(WaitUntilUserLogsIn(2f, store));
        }

        private static IEnumerator WaitUntilUserLogsIn(float refreshDelay, Store<AppState> store)
        {
            WaitForSeconds waitAmount = new WaitForSeconds(refreshDelay);
            while (EditorWindow.HasOpenInstances<ConnectShareEditorWindow>())
            {
                yield return waitAmount; //Debug.LogError("Rechecking login in " + seconds);
                if (UnityConnectSession.instance.GetAccessToken().Length != 0)
                {
                    store.Dispatch(new LoginAction()); //Debug.LogError("Connected!");
                    waitUntilUserLogsInRoutine = null;
                    yield break;
                }
            }
            waitUntilUserLogsInRoutine = null; //Debug.LogError("Window closed");
        }

        private static IEnumerator RefreshProcessingProgress(float refreshDelay, Store<AppState> store)
        {
            WaitForSeconds waitAmount = new WaitForSeconds(refreshDelay);
            yield return waitAmount;
            store.Dispatch(new QueryProgressAction());
        }

        private static string GetAPIBaseUrl()
        {
            string env = UnityConnectSession.instance.GetEnvironment();
            if (env == "staging")
            {
                return "https://connect-staging.unity.com";
            }
            else if (env == "dev")
            {
                return "https://connect-dev.unity.com";
            }

            return "https://connect.unity.com";
        }
    }

    [Serializable]
    public class UploadResponse
    {
        public string key;
    }

    [Serializable]
    public class GetProgressResponse
    {
        public string projectId;
        public string url;
        public int progress;
        public string error;
    }
}
