using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine.UIElements;

namespace Unity.Connect.Share.Editor
{
    /// <summary>
    /// A collection of utility methods used by the Share Package
    /// </summary>
    public static class SharePackageUtils
    {
        const string BUILD_WARNING_DISPLAYED = "Y";
        public const string DefaultGameName = "Untitled";
        public static string GetBuildGUID() { return GetEditorPreference("buildGUID"); }
        public static string GetBuildOutputDirectory() { return GetEditorPreference("buildOutputDir"); }

        // TODO This function makes asumptions about the structure of the build folder
        // and we cannot know for certain that the assumptions are correct for every Unity version
        // Hence, needs unit tests. Also, for future reference, BuildReport API can be used to retrived information about the created files.
        public static bool LastBuildIsValid()
        {
            string lastOutputDirectory = GetBuildOutputDirectory();
            if (string.IsNullOrEmpty(lastOutputDirectory)) { return false; }

            string descriptorFileName = lastOutputDirectory.Split('/').Last();
            return File.Exists(Path.Combine(lastOutputDirectory, string.Format("Build/{0}.data.unityweb", descriptorFileName)))
                && File.Exists(Path.Combine(lastOutputDirectory, string.Format("Build/{0}.wasm.code.unityweb", descriptorFileName)))
                && File.Exists(Path.Combine(lastOutputDirectory, string.Format("Build/{0}.wasm.framework.unityweb", descriptorFileName)))
                && File.Exists(Path.Combine(lastOutputDirectory, string.Format("Build/{0}.json", descriptorFileName)))
                && File.Exists(Path.Combine(lastOutputDirectory, string.Format("Build/UnityLoader.js", descriptorFileName)));
        }

        public static string GetThumbnailPath() { return GetEditorPreference("thumbnailPath"); }
        public static bool WasBuildWarningDisplayed()
        {
            string result = GetEditorPreference("buildWarningDisplayed");
            if (string.IsNullOrEmpty(result))
            {
                SetEditorPreference("buildWarningDisplayed", BUILD_WARNING_DISPLAYED);
                return false;
            }
            return result == BUILD_WARNING_DISPLAYED;
        }

        public static void SetThumbnailPath(string path) { SetEditorPreference("thumbnailPath", path); }
        static string projectPrefsPrefix;

        public static void SetEditorPreference(string key, string value)
        {
            if (string.IsNullOrEmpty(projectPrefsPrefix))
            {
                projectPrefsPrefix = string.Format("{0}.{1}.", PlayerSettings.companyName, PlayerSettings.productName);
            }
            EditorPrefs.SetString(projectPrefsPrefix + key, value);
        }

        public static string GetEditorPreference(string key)
        {
            if (string.IsNullOrEmpty(projectPrefsPrefix))
            {
                projectPrefsPrefix = string.Format("{0}.{1}.", PlayerSettings.companyName, PlayerSettings.productName);
            }
            return EditorPrefs.GetString(projectPrefsPrefix + key);
        }

        public static string GetFilteredGameTitle(string currentGameTitle)
        {
            if (string.IsNullOrEmpty(currentGameTitle?.Trim())) return DefaultGameName;
            else return currentGameTitle;
        }

        /// <summary>
        /// Supports GB, MB, KB, or B
        /// </summary>
        /// <param name="bytes"></param>
        /// <returns></returns>
        public static string FormatBytes(ulong bytes)
        {
            double gb = bytes / (1024.0 * 1024.0 * 1024.0);
            double mb = bytes / (1024.0 * 1024.0);
            double kb = bytes / 1024.0;
            // Use :#.000 to specify further precision if wanted
            if (mb >= 1000) return $"{gb/*:#.000*/} GB";
            if (kb >= 1000) return $"{mb/*:#.000*/} MB";
            if (kb >= 1) return $"{kb/*:*#.000*/} KB";
            return $"{bytes} B";
        }

        public static void SaveStateToSessionState()
        {
            var shareState = StoreFactory.Get().state.shareState;
            SessionState.SetString(typeof(ConnectShareEditorWindow).Name, EditorJsonUtility.ToJson(shareState));
        }

        public static void TellUnityHubToInstallWebGL()
        {
            //[TODO] Do some HUB magic here to install the WebGL module
        }

        /// <summary>
        /// Allows a visual element to react on left click
        /// </summary>
        public class LeftClickManipulator : MouseManipulator
        {
            Action<VisualElement> OnClick;
            bool active;

            public LeftClickManipulator(Action<VisualElement> OnClick)
            {
                activators.Add(new ManipulatorActivationFilter { button = MouseButton.LeftMouse });
                this.OnClick = OnClick;
            }

            protected override void RegisterCallbacksOnTarget()
            {
                target.RegisterCallback<MouseDownEvent>(OnMouseDown);
                target.RegisterCallback<MouseUpEvent>(OnMouseUp);
            }

            protected override void UnregisterCallbacksFromTarget()
            {
                target.UnregisterCallback<MouseUpEvent>(OnMouseUp);
                target.UnregisterCallback<MouseDownEvent>(OnMouseDown);
            }

            protected void OnMouseDown(MouseDownEvent e)
            {
                if (active)
                {
                    e.StopImmediatePropagation();
                    return;
                }

                if (CanStartManipulation(e))
                {
                    active = true;
                    target.CaptureMouse();
                    e.StopPropagation();
                }
            }

            protected void OnMouseUp(MouseUpEvent e)
            {
                if (!active || !target.HasMouseCapture() || !CanStopManipulation(e)) { return; }

                active = false;
                target.ReleaseMouse();
                e.StopPropagation();

                if (OnClick == null) { return; }
                OnClick.Invoke(target);
            }
        }
    }
}
