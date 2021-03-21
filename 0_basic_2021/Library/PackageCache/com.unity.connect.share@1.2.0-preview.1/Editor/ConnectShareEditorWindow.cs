using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;

namespace Unity.Connect.Share.Editor
{
    /// <summary>
    /// An Editor window that allows the user to share a WebGL build of the game to Unity Connect
    /// </summary>
    public class ConnectShareEditorWindow : EditorWindow
    {
        /// <summary>
        /// The prefix used by all the UIElements files of this EditorWindow
        /// </summary>
        const string WINDOW_FILES_PREFIX = "ConnectShareEditorWindow_";
        const string TAB_NOT_LOGGED_IN = "NotLoggedIn";
        const string TAB_NO_BUILD = "NoBuild";
        const string TAB_SUCCESS = "Success";
        const string TAB_ERROR = "Error";
        const string TAB_UPLOADING = "Uploading";
        const string TAB_PROCESSING = "Processing";
        const string TAB_UPLOAD = "Upload";

        // TODO these are state of *this* window, make non-static.
        /// <summary>
        /// Holds all the Fronted setup methods of the available tabs
        /// </summary>
        static Dictionary<string, Action> tabFrontendSetupMethods;
        static VisualElement root;
        static Store<AppState> store { get { return StoreFactory.Get(); } }
        ShareStep currentShareStep;
        static string currentTab;
        static string previousTab;
        static string gameTitle = SharePackageUtils.DefaultGameName;

        [MenuItem("Window/Share WebGL Game")]
        static void OpenShareWindow()
        {
            // TODO Bug in Editor/UnityConnect API: loggedIn returns true but token is expired/empty.
            string token = UnityConnectSession.instance.GetAccessToken();
            if (token.Length == 0)
            {
                UnityConnectSession.instance.ShowLogin();
                store.Dispatch(new NotLoginAction());
            }

            var window = GetWindow<ConnectShareEditorWindow>();
            window.titleContent.text = "Share";
            window.minSize = new Vector2(500f, 410f);
            window.maxSize = new Vector2(600f, 600f);
            window.Show();
        }

        void OnEnable()
        {
            SetupBackend();
            SetupFrontend();
        }

        void OnDisable()
        {
            TeardownBackend();
        }

        public void OnBeforeAssemblyReload()
        {
            SharePackageUtils.SaveStateToSessionState();
        }

        void Update()
        {
            if (currentShareStep != store.state.shareState.step)
            {
                string token = UnityConnectSession.instance.GetAccessToken();
                if (token.Length != 0)
                {
                    //Debug.LogErrorFormat("State went from {0} to {1}, rebuilding frontend", currentShareStep, store.state.shareState.step);
                    currentShareStep = store.state.shareState.step;
                    return;
                }
                store.Dispatch(new NotLoginAction());
            }
            RebuildFrontend();
        }

        void SetupFrontend()
        {
            root = rootVisualElement;
            RebuildFrontend();
        }

        void RebuildFrontend()
        {
            if (currentShareStep != store.state.shareState.step)
            {
                currentShareStep = store.state.shareState.step;
            }

            bool loggedOut = (currentShareStep == ShareStep.Login);
            if (loggedOut)
            {
                LoadTab(TAB_NOT_LOGGED_IN);
                return;
            }

            bool buildIsUnavailable = !SharePackageUtils.LastBuildIsValid();
            if (buildIsUnavailable)
            {
                LoadTab(TAB_NO_BUILD);
                return;
            }

            string projectUrl = store.state.shareState.url;
            if (!string.IsNullOrEmpty(projectUrl))
            {
                LoadTab(TAB_SUCCESS);
                return;
            }

            string errorMsg = store.state.shareState.errorMsg;
            if (!string.IsNullOrEmpty(errorMsg))
            {
                LoadTab(TAB_ERROR);
                return;
            }

            if (currentShareStep == ShareStep.Upload)
            {
                LoadTab(TAB_UPLOADING);
                return;
            }

            if (currentShareStep == ShareStep.Process)
            {
                LoadTab(TAB_PROCESSING);
                return;
            }

            LoadTab(TAB_UPLOAD);
        }

        void SetupBackend()
        {
            AssemblyReloadEvents.beforeAssemblyReload += OnBeforeAssemblyReload;
            currentShareStep = store.state.shareState.step;
            currentTab = string.Empty;
            previousTab = string.Empty;

            tabFrontendSetupMethods = new Dictionary<string, Action>();
            tabFrontendSetupMethods.Add(TAB_NOT_LOGGED_IN, SetupNotLoggedInTab);
            tabFrontendSetupMethods.Add(TAB_NO_BUILD, SetupNoBuildTab);
            tabFrontendSetupMethods.Add(TAB_SUCCESS, SetupSuccessTab);
            tabFrontendSetupMethods.Add(TAB_ERROR, SetupErrorTab);
            tabFrontendSetupMethods.Add(TAB_UPLOADING, SetupUploadingTab);
            tabFrontendSetupMethods.Add(TAB_PROCESSING, SetupProcessingTab);
            tabFrontendSetupMethods.Add(TAB_UPLOAD, SetupUploadTab);
        }

        void TeardownBackend()
        {
            AssemblyReloadEvents.beforeAssemblyReload -= OnBeforeAssemblyReload;
            store.Dispatch(new DestroyAction());
        }

        void LoadTab(string tabName)
        {
            if (!CanSwitchToTab(tabName)) { return; } //Debug.LogFormat("Switching from {0} to {1}", currentTab, tabName);
            previousTab = currentTab;
            currentTab = tabName;
            root.Clear();

            string uxmlDefinitionFilePath = string.Format("Packages/com.unity.connect.share/UI/{0}{1}.uxml", WINDOW_FILES_PREFIX, tabName);
            string commonStyleSheetFilePath = string.Format("Packages/com.unity.connect.share/UI/{0}Styles.uss", WINDOW_FILES_PREFIX);
            string styleSheetFilePath = string.Format("Packages/com.unity.connect.share/UI/{0}{1}.uss", WINDOW_FILES_PREFIX, tabName);
            root.styleSheets.Add(AssetDatabase.LoadAssetAtPath<StyleSheet>(styleSheetFilePath));
            root.styleSheets.Add(AssetDatabase.LoadAssetAtPath<StyleSheet>(commonStyleSheetFilePath));
            VisualTreeAsset windowContent = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>(uxmlDefinitionFilePath);
            windowContent.CloneTree(root);

            tabFrontendSetupMethods[tabName].Invoke();
        }

        static bool CanSwitchToTab(string tabName) { return tabName != currentTab; }

        #region Tabs Generation
        void SetupNoBuildTab()
        {
            SetupButton("btnShare", null, false);
        }

        void SetupNotLoggedInTab()
        {
            SetupButton("btnShare", null, false);
        }

        void SetupSuccessTab()
        {
            UpdateHeader();
            SetupLabel("lblLink", store.state.shareState.url, new SharePackageUtils.LeftClickManipulator(OnLinkLabelClick));
            SetupButton("btnFinish", OnFinishClicked, true);
            OpenGameURL(store.state.shareState.url);
        }

        void SetupErrorTab()
        {
            UpdateHeader();
            SetupLabel("lblError", store.state.shareState.errorMsg);
            SetupButton("btnBack", OnBackClicked, true);
        }

        void SetupUploadingTab()
        {
            UpdateHeader();
            SetupButton("btnCancel", OnCancelUploadClicked, true);
        }

        void SetupProcessingTab()
        {
            UpdateHeader();
            SetupButton("btnCancel", OnCancelUploadClicked, true);
        }

        void SetupUploadTab()
        {
            SetupButton("btnShare", OnShareClicked, true);
            SetupButton("btnSelectImage", OnSelectImageClicked, true);
            SetupImage("imgThumbnail", SharePackageUtils.GetThumbnailPath());

            TextField txtProjectName = root.Query<TextField>("txtProjectName");
            txtProjectName.RegisterValueChangedCallback(OnGameTitleChanged);
            txtProjectName.value = gameTitle;

            if (SharePackageUtils.LastBuildIsValid())
            {
                string lastOutputDirectory = SharePackageUtils.GetBuildOutputDirectory();
                SetupLabel(
                    "lblLastBuildInfo",
                    $"Last build located at {lastOutputDirectory}, created {File.GetLastWriteTime(lastOutputDirectory)}"
                );
                return;
            }
            
            //[NOTE]: you should never get here
            SetupLabel("lblLastBuildInfo", "No previous build available...");
        }

        static void UpdateHeader()
        {
            gameTitle = SharePackageUtils.GetFilteredGameTitle(gameTitle);
            SetupLabel("lblProjectName", gameTitle, new SharePackageUtils.LeftClickManipulator(OnLinkLabelClick));
            SetupLabel("lblUserEmail", string.Format("By {0}", CloudProjectSettings.userName));
            SetupImage("imgThumbnail", SharePackageUtils.GetThumbnailPath());
        }

        static bool DisplayDialogWindow(string title, string message, string yesButtonText, string noButtonText)
        {
            return EditorUtility.DisplayDialog(title, message, yesButtonText, noButtonText);
        }

        #endregion

        #region UI Events and Callbacks

        void OnGameTitleChanged(ChangeEvent<string> changeEvent)
        {
            gameTitle = SharePackageUtils.GetFilteredGameTitle(changeEvent.newValue);
        }

        void OnBackClicked()
        {
            store.Dispatch(new DestroyAction());
            LoadTab(previousTab);
        }

        void OnFinishClicked()
        {
            store.Dispatch(new DestroyAction());
        }

        void OnCancelUploadClicked()
        {
            store.Dispatch(new StopUploadAction());
        }

        void OnSelectImageClicked()
        {
            long ThumbnailLimitBytes = 5 * 1024 * 1024; // 5 MBs

            string path = EditorUtility.OpenFilePanel("Select thumbnail", "", "jpg,jpeg,png");
            if (path.Length == 0) { return; }

            FileInfo fileInfo = new FileInfo(path);

            if (fileInfo.Length > ThumbnailLimitBytes)
            {
                //[TODO] Just show the error without using the middleware?
                store.Dispatch(new OnErrorAction() { errorMsg = $"Max. file size {SharePackageUtils.FormatBytes((ulong)ThumbnailLimitBytes)}" });
                return;
            }
            SharePackageUtils.SetThumbnailPath(path);
            SetupImage("imgThumbnail", path);
        }

        void OnShareClicked()
        {
            if (!SharePackageUtils.LastBuildIsValid() && !SharePackageUtils.WasBuildWarningDisplayed())
            {
                bool userWantsToBuild = DisplayDialogWindow
                (
                    "Are you sure?",
                    "Building the game may take several minutes, and the editor will not respond to any input in the meanwhile. Are you sure you want to build the game now?",
                    "Yes!",
                    "Not really"
                );
                if (!userWantsToBuild) { return; }
            }

            if (!ModuleManagerProxy.IsBuildPlatformInstalled(BuildTarget.WebGL))
            {
                bool userWantsToInstallWebGL = DisplayDialogWindow
                (
                    "Missing Build Platform",
                    "Your Unity Editor does not have the WebGL module installed. Therefore, it is not possible to make a WebGL build.\nWould you like to install it now?",
                    "Yes!",
                    "Not really"
                );

                if (userWantsToInstallWebGL)
                {
                    SharePackageUtils.TellUnityHubToInstallWebGL();
                }
                return;
            }
            store.Dispatch(new ShareStartAction() { title = gameTitle });
        }

        public static void OnUploadProgress(int percentage)
        {
            if (currentTab != TAB_UPLOADING) { return; }

            ProgressBar progressBar = root.Query<ProgressBar>("barProgress");
            progressBar.value = percentage;
            SetupLabel("lblProgress", string.Format("Uploading ({0}%)...", percentage));
        }

        public static void OnProcessingProgress(int percentage)
        {
            if (currentTab != TAB_PROCESSING) { return; }

            ProgressBar progressBar = root.Query<ProgressBar>("barProgress");
            progressBar.value = percentage;
            SetupLabel("lblProgress", string.Format("Processing ({0}%)...", percentage));
        }

        #endregion

        #region UI Setup Helpers

        static void SetupButton(string buttonName, Action onClickAction, bool isEnabled)
        {
            Button button = root.Query<Button>(buttonName);
            button.SetEnabled(isEnabled);
            button.clickable.clicked += onClickAction;
            button.tooltip = button.text;
        }

        static void SetupLabel(string labelName, string text, Manipulator manipulator = null)
        {
            Label label = root.Query<Label>(labelName);
            label.text = text;
            if (manipulator == null) { return; }
            label.AddManipulator(manipulator);
        }

        static void OnLinkLabelClick(VisualElement label)
        {
            OpenGameURL((label as Label).text);
        }

        static void OpenGameURL(string url)
        {
            if (UnityConnectSession.loggedIn)
            {
                UnityConnectSession.OpenAuthorizedURLInWebBrowser(url);
                return;
            }
            Application.OpenURL(url);
        }

        static void SetupImage(string imageName, string imagePath)
        {
            Texture2D imageToLoad = new Texture2D(2, 2);
            if (!File.Exists(imagePath))
            {
                //[TODO] Load some placeholder image and remove the return statement
                return;
            }
            else
            {
                imageToLoad.LoadImage(File.ReadAllBytes(imagePath));
            }
            Image image = root.Query<Image>(imageName);
            image.image = imageToLoad;
        }

        static bool ShowSwitchToWebGLPopup()
        {
            string title = "Platform switching required";
            string message = string.Format("This package creates a WebGL build, but your current target platform is not WebGL (it is: {0}). Do you want to switch platform now?\nNOTE: it might take several minutes", EditorUserBuildSettings.activeBuildTarget.ToString());
            string yesButtonText = "Yes!";
            string noButtonText = "Not really";

            return EditorUtility.DisplayDialog(title, message, yesButtonText, noButtonText);
        }

        #endregion
    }
}
