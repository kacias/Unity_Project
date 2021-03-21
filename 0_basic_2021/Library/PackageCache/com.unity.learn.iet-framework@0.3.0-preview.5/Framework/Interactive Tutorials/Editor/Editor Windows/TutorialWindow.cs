using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor.UIElements;

using UnityObject = UnityEngine.Object;
using System.Collections;
using Unity.EditorCoroutines.Editor;

namespace Unity.InteractiveTutorials
{
    public sealed class TutorialWindow : EditorWindowProxy
    {
        const int kMinWidth = 300;
        const int kMinHeight = 300;
        const int k_MaxTitleLength = 26;
        const int k_NumberOfPixelsThatTriggerLongerTitle = 8;
        const float footerHeight = 100;

        static TutorialWindow instance;
        //  static readonly string s_BackTooltip = "Back to Previous Page";

        string m_Title = ""; // TODO remove title biz for good?
        string m_NextButtonText = "";
        string m_BackButtonText = "";

        static readonly bool s_AuthoringMode = ProjectMode.IsAuthoringMode();

        static readonly GUIContent s_WindowTitleContent = new GUIContent("Tutorials");

        static readonly GUIContent s_HomePromptTitle = new GUIContent("Return to Tutorials?");
        static readonly GUIContent s_HomePromptText = new GUIContent(
          "Returning to the Tutorial Selection means exiting the tutorial and losing all of your progress\n" +
          "Do you wish to continue?"
      );

        static readonly GUIContent s_PromptYes = new GUIContent("Yes");
        static readonly GUIContent s_PromptNo = new GUIContent("No");
        static readonly GUIContent s_PromptOk = new GUIContent("OK");

        //  static readonly GUIContent s_RestartPromptTitle = new GUIContent("Restart Tutorial?");
        //  static readonly string s_RestartTooltip = "Restart Tutorial";
        //  static readonly GUIContent s_RestartPromptText = new GUIContent(
        //    "Returning to the first step will restart the tutorial and you will lose all of your progress. Do you wish to restart?"
        //);

        // Unity's menu guide convetion: text in italics, '>' used as a separator
        // TODO EditorUtility.DisplayDialog doesn't support italics so cannot use rich text here.
        static readonly string kMenuPathGuide = TutorialWindowMenuItem.Menu + ">" + TutorialWindowMenuItem.Item;

        static readonly GUIContent s_ExitPromptTitle = new GUIContent("Exit Tutorial?");
        static readonly string s_ExitTooltip = "Exit Tutorial";
        static readonly GUIContent s_ExitPromptText = new GUIContent(
          $"You are about to exit the tutorial and lose all of your progress.\n\n" +
          $"You can find the tutorials later from the menu by choosing {kMenuPathGuide}.\n\n" +
          $"Do you wish to exit?"
      );

        static readonly GUIContent s_TabClosedDialogTitle = new GUIContent("Close Tutorials");
        static readonly GUIContent s_TabClosedDialogText = new GUIContent(
          $"You can find the tutorials later from the menu by choosing {kMenuPathGuide}."
      );

        List<TutorialParagraphView> m_Paragraphs = new List<TutorialParagraphView>();
        int[] m_Indexes;
        [SerializeField]
        List<TutorialParagraphView> m_AllParagraphs = new List<TutorialParagraphView>();

        internal static readonly float s_AuthoringModeToolbarButtonWidth = 115;
        bool canMoveToNextPage =>
          currentTutorial.currentPage.allCriteriaAreSatisfied ||
          currentTutorial.currentPage.hasMovedToNextPage;



        internal Tutorial currentTutorial;

        internal TutorialContainer readme
        {
            get { return m_Readme; }
            set
            {
                var oldReadme = m_Readme;
                m_Readme = value;
                if (oldReadme != m_Readme)
                    FetchTutorialStates();
            }
        }
        [SerializeField] TutorialContainer m_Readme;
        [SerializeField] Card[] m_Cards = { };

        bool maskingEnabled
        {
            get
            {
                var forceDisableMask = EditorPrefs.GetBool("Unity.InteractiveTutorials.forceDisableMask", false);
                return !forceDisableMask && (m_MaskingEnabled || !s_AuthoringMode);
            }
            set { m_MaskingEnabled = value; }
        }
        [SerializeField]
        bool m_MaskingEnabled = true;

        TutorialStyles styles { get { return TutorialProjectSettings.instance.TutorialStyle; } }

        [SerializeField]
        Vector2 m_ScrollPosition;

        [SerializeField]
        int m_FarthestPageCompleted = -1;

        [SerializeField]
        bool m_PlayModeChanging;

        internal VideoPlaybackManager videoPlaybackManager { get; } = new VideoPlaybackManager();

        internal bool showStartHereMarker;
        internal bool showTabClosedDialog = true;
        public VisualElement videoBoxElement;

        internal static TutorialWindow CreateWindow()
        {
            instance = GetWindow<TutorialWindow>(s_WindowTitleContent.text);
            instance.minSize = new Vector2(kMinWidth, kMinHeight);
            var readme = FindReadme();
            if (readme != null)
            {
                readme.LoadTutorialProjectLayout();
            }
            return instance;
        }

        internal static TutorialWindow GetWindow()
        {
            if (instance == null)
            {
                instance = CreateWindow();
            }
            return instance;
        }


        void TrackPlayModeChanging(PlayModeStateChange change)
        {
            switch (change)
            {
                case PlayModeStateChange.ExitingEditMode:
                case PlayModeStateChange.ExitingPlayMode:
                    m_PlayModeChanging = true;
                    break;
                case PlayModeStateChange.EnteredEditMode:
                case PlayModeStateChange.EnteredPlayMode:
                    m_PlayModeChanging = false;
                    break;
            }
        }

        void OnFocus()
        {
            readme = FindReadme();
        }

        public void UpdateVideoFrame(Texture newTexture)
        {
            if (!UIElementsUtils.IsVisible(videoBoxElement)) { return; }
            videoBoxElement.style.backgroundImage = Background.FromTexture2D((Texture2D)newTexture);
        }

        void OnEnable()
        {
            instance = this;

            GUIViewProxy.positionChanged += OnGUIViewPositionChanged;
            HostViewProxy.actualViewChanged += OnHostViewActualViewChanged;
            Tutorial.tutorialPagesModified += OnTutorialPagesModified;
            // test for page completion state changes (rather than criteria completion/invalidation directly)
            // so that page completion state will be up-to-date
            TutorialPage.criteriaCompletionStateTested += OnTutorialPageCriteriaCompletionStateTested;
            TutorialPage.tutorialPageMaskingSettingsChanged += OnTutorialPageMaskingSettingsChanged;
            TutorialPage.tutorialPageNonMaskingSettingsChanged += OnTutorialPageNonMaskingSettingsChanged;
            EditorApplication.playModeStateChanged -= TrackPlayModeChanging;
            EditorApplication.playModeStateChanged += TrackPlayModeChanging;

            SetUpTutorial();

            maskingEnabled = true;

            readme = FindReadme();
            InitCards();

            EditorCoroutineUtility.StartCoroutineOwnerless(DelayedOnEnable());
        }

        void OnDisable()
        {
            if (!m_PlayModeChanging)
            {
                AnalyticsHelper.TutorialEnded(TutorialConclusion.Quit);
            }

            ClearTutorialListener();

            Tutorial.tutorialPagesModified -= OnTutorialPagesModified;
            TutorialPage.criteriaCompletionStateTested -= OnTutorialPageCriteriaCompletionStateTested;
            TutorialPage.tutorialPageMaskingSettingsChanged -= OnTutorialPageMaskingSettingsChanged;
            TutorialPage.tutorialPageNonMaskingSettingsChanged -= OnTutorialPageNonMaskingSettingsChanged;
            GUIViewProxy.positionChanged -= OnGUIViewPositionChanged;
            HostViewProxy.actualViewChanged -= OnHostViewActualViewChanged;

            videoPlaybackManager.OnDisable();

            ApplyMaskingSettings(false);

            if (showTabClosedDialog && !TutorialManager.IsLoadingLayout)
            {
                // Without delayed call the Inspector appears completely black
                EditorApplication.delayCall += delegate
                {
                    EditorUtility.DisplayDialog(s_TabClosedDialogTitle.text, s_TabClosedDialogText.text, s_PromptOk.text);
                };
            }
        }

        void OnDestroy()
        {
            // TODO SkipTutorial();
        }

        void WindowForParagraph()
        {
            foreach (var p in m_Paragraphs)
            {
                p.SetWindow(instance);
            }
        }

        void OnHostViewActualViewChanged()
        {
            if (TutorialManager.IsLoadingLayout) { return; }
            // do not mask immediately in case unmasked GUIView doesn't exist yet
            // TODO disabled for now in order to get Welcome dialog masking working
            //QueueMaskUpdate();
        }

        void QueueMaskUpdate()
        {
            EditorApplication.update -= ApplyQueuedMask;
            EditorApplication.update += ApplyQueuedMask;
        }

        void OnTutorialPageCriteriaCompletionStateTested(TutorialPage sender)
        {
            if (currentTutorial == null || currentTutorial.currentPage != sender) { return; }

            foreach (var paragraph in m_Paragraphs)
            {
                paragraph.ResetState();
            }

            if (sender.allCriteriaAreSatisfied && sender.autoAdvanceOnComplete && !sender.hasMovedToNextPage)
            {
                if (currentTutorial.TryGoToNextPage())
                {
                    return;
                }
            }

            ApplyMaskingSettings(true);
        }

        void SkipTutorial()
        {
            if (currentTutorial == null) { return; }

            switch (currentTutorial.skipTutorialBehavior)
            {
                case Tutorial.SkipTutorialBehavior.SameAsExitBehavior: ExitTutorial(false); break;
                case Tutorial.SkipTutorialBehavior.SkipToLastPage: currentTutorial.SkipToLastPage(); break;
                default: throw new ArgumentOutOfRangeException();
            }
        }

        void ExitTutorial(bool completed)
        {
            switch (currentTutorial.exitBehavior)
            {
                case Tutorial.ExitBehavior.ShowHomeWindow:
                    if (completed)
                    {
                        HomeWindowProxy.ShowTutorials();
                    }
                    else if (
                        !IsInProgress() ||
                        EditorUtility.DisplayDialog(s_HomePromptTitle.text, s_HomePromptText.text, s_PromptYes.text, s_PromptNo.text))
                    {
                        HomeWindowProxy.ShowTutorials();
                        GUIUtility.ExitGUI();
                    }
                    return; // Return to avoid selecting asset on exit
                case Tutorial.ExitBehavior.CloseWindow:
                    // New behaviour: exiting resets and nullifies the current tutorial and shows the project's tutorials.
                    if (completed)
                    {
                        SetTutorial(null);
                        ResetTutorial();
                        TutorialManager.instance.RestoreOriginalState();
                    }
                    else if (
                        !IsInProgress() ||
                        EditorUtility.DisplayDialog(s_ExitPromptTitle.text, s_ExitPromptText.text, s_PromptYes.text, s_PromptNo.text))
                    {
                        SetTutorial(null);
                        ResetTutorial();
                        TutorialManager.instance.RestoreOriginalState();
                    }
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }

            // TODO new behaviour testing: assetSelectedOnExit was originally used for selecting
            // Readme but this is not required anymore as the TutorialWindow contains Readme's functionality.
            //if (currentTutorial?.assetSelectedOnExit != null)
            //    Selection.activeObject = currentTutorial.assetSelectedOnExit;

            //SaveTutorialStates();
        }

        void OnTutorialInitiated()
        {
            if (!currentTutorial) { return; }

            AnalyticsHelper.TutorialStarted(currentTutorial);
            GenesisHelper.LogTutorialStarted(currentTutorial.lessonId);
            CreateTutorialViews();
        }

        void OnTutorialCompleted()
        {
            if (!currentTutorial) { return; }

            AnalyticsHelper.TutorialEnded(TutorialConclusion.Completed);
            GenesisHelper.LogTutorialEnded(currentTutorial.lessonId);
            MarkTutorialCompleted(currentTutorial.lessonId, currentTutorial.completed);
            ExitTutorial(currentTutorial.completed);
        }

        internal void CreateTutorialViews()
        {
            m_AllParagraphs.Clear();
            foreach (var page in currentTutorial.pages)
            {
                if (page == null) { continue; }

                var instructionIndex = 0;
                foreach (var paragraph in page.paragraphs)
                {
                    if (paragraph.type == ParagraphType.Instruction)
                    {
                        ++instructionIndex;
                    }
                    m_AllParagraphs.Add(new TutorialParagraphView(paragraph, instance, styles.orderedListDelimiter, styles.unorderedListBullet, instructionIndex));
                }
            }
        }

        List<TutorialParagraphView> GetCurrentParagraph()
        {
            if (m_Indexes == null || m_Indexes.Length != currentTutorial.pageCount)
            {
                // Update page to paragraph index
                m_Indexes = new int[currentTutorial.pageCount];
                var pageIndex = 0;
                var paragraphIndex = 0;
                foreach (var page in currentTutorial.pages)
                {
                    m_Indexes[pageIndex++] = paragraphIndex;
                    if (page != null)
                        paragraphIndex += page.paragraphs.Count();
                }
            }

            List<TutorialParagraphView> tmp = new List<TutorialParagraphView>();
            if (m_Indexes.Length > 0)
            {
                var endIndex = currentTutorial.currentPageIndex + 1 > currentTutorial.pageCount - 1 ? m_AllParagraphs.Count : m_Indexes[currentTutorial.currentPageIndex + 1];
                for (int i = m_Indexes[currentTutorial.currentPageIndex]; i < endIndex; i++)
                {
                    tmp.Add(m_AllParagraphs[i]);
                }
            }
            return tmp;
        }

        // TODO 'page' and 'index' unused
        internal void PrepareNewPage(TutorialPage page = null, int index = 0)
        {
            if (currentTutorial == null) return;
            if (!m_AllParagraphs.Any())
            {
                CreateTutorialViews();
            }
            m_Paragraphs.Clear();

            if (currentTutorial.currentPage == null)
            {
                m_NextButtonText = string.Empty;
            }
            else
            {
                m_NextButtonText = IsLastPage()
                    ? currentTutorial.currentPage.doneButton
                    : currentTutorial.currentPage.nextButton;

            }
            m_BackButtonText = IsFirstPage() ? "All Tutorials" : "Back";

            FormatTitle();

            m_Paragraphs = GetCurrentParagraph();

            m_Paragraphs.TrimExcess();

            WindowForParagraph();
        }

        internal void ForceInititalizeTutorialAndPage()
        {
            m_FarthestPageCompleted = -1;

            CreateTutorialViews();
            PrepareNewPage();
        }

        static void OpenLoadTutorialDialog()
        {
            string assetPath = EditorUtility.OpenFilePanel("Load a Tutorial", "Assets", "asset");
            if (string.IsNullOrEmpty(assetPath)) { return; }
            assetPath = string.Format("Assets{0}", assetPath.Substring(Application.dataPath.Length));
            TutorialManager.instance.StartTutorial(AssetDatabase.LoadAssetAtPath<Tutorial>(assetPath));
            GUIUtility.ExitGUI();
        }

        bool IsLastPage() { return currentTutorial != null && currentTutorial.pageCount - 1 <= currentTutorial.currentPageIndex; }

        bool IsFirstPage() { return currentTutorial != null && currentTutorial.currentPageIndex == 0; }

        // Returns true if some real progress has been done (criteria on some page finished).
        bool IsInProgress()
        {
            return currentTutorial
                ?.pages.Any(pg => pg.paragraphs.Any(p => p.criteria.Any() && pg.allCriteriaAreSatisfied))
                ?? false;
        }

        protected override void OnResized_Internal() { FormatTitle(); }

        void FormatTitle()
        {
            if (currentTutorial == null) { return; }

            var index = k_MaxTitleLength;
            var title = string.Empty;
            if (currentTutorial != null)
            {
                title = string.IsNullOrEmpty(currentTutorial.tutorialTitle) ? currentTutorial.name : currentTutorial.tutorialTitle;
            }

            if (instance != null)
            {
                var extraCharactersForTitle = Mathf.RoundToInt((instance.position.width - instance.minSize.x) / k_NumberOfPixelsThatTriggerLongerTitle);
                index += extraCharactersForTitle;
            }
            index = index < title.Length ? index : title.Length - 1;

            m_Title = index == title.Length - 1 ? title : string.Format("{0}{1}", title.Substring(0, index - 1).TrimEnd(), "...");
        }

        void ClearTutorialListener()
        {
            if (currentTutorial == null) { return; }

            currentTutorial.tutorialInitiated -= OnTutorialInitiated;
            currentTutorial.tutorialCompleted -= OnTutorialCompleted;
            currentTutorial.pageInitiated -= OnShowPage;
            currentTutorial.StopTutorial();
        }

        internal void SetTutorial(Tutorial tutorial, bool reload = true)
        {
            ClearTutorialListener();

            currentTutorial = tutorial;
            if (currentTutorial != null)
            {
                if (reload)
                {
                    currentTutorial.ResetProgress();
                }
                m_AllParagraphs.Clear();
                m_Paragraphs.Clear();
            }

            ApplyMaskingSettings(currentTutorial != null);

            SetUpTutorial();
        }

        void SetUpTutorial()
        {
            // bail out if this instance no longer exists such as when e.g., loading a new window layout
            if (this == null || currentTutorial == null || currentTutorial.currentPage == null) { return; }

            if (currentTutorial.currentPage != null)
            {
                currentTutorial.currentPage.Initiate();
            }

            currentTutorial.tutorialInitiated += OnTutorialInitiated;
            currentTutorial.tutorialCompleted += OnTutorialCompleted;
            currentTutorial.pageInitiated += OnShowPage;

            if (m_AllParagraphs.Any())
            {
                PrepareNewPage();
                return;
            }
            ForceInititalizeTutorialAndPage();
        }

        void ApplyQueuedMask()
        {
            if (IsParentNull()) { return; }

            EditorApplication.update -= ApplyQueuedMask;
            ApplyMaskingSettings(true);
        }

        IEnumerator DelayedOnEnable()
        {
            yield return new WaitUntil(() => allTutorialStyles != null);

            if (s_AuthoringMode)
            {
                IMGUIContainer authoringToolBar = new IMGUIContainer(ToolbarGUI);
                rootVisualElement.Add(authoringToolBar);
            }

            if (currentTutorial != null)
            {
                IMGUIContainer topbarContainer = new IMGUIContainer(TopBar);
                rootVisualElement.Add(topbarContainer);
            }
            // set here instead of CreateWindow() so that title of old saved layouts is overwritten
            instance.titleContent = s_WindowTitleContent;
            var videoBox = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Packages/com.unity.learn.iet-framework/Framework/Interactive Tutorials/Editor/Editor Windows/uievideobox.uxml");
            videoBoxElement = videoBox.CloneTree();
            rootVisualElement.Add(videoBoxElement);
            if (currentTutorial == null)
            {
                UIElementsUtils.Hide(videoBoxElement);
            }
            videoPlaybackManager.OnEnable();

            
            IMGUIContainer imguiContainer = new IMGUIContainer(OnGUIOld);
            imguiContainer.style.flexGrow = 1f;
            rootVisualElement.Add(imguiContainer);
        }

        void OnGUI()
        {
            if (allTutorialStyles != null) { return; }
            GUI.skin = styles.skin;
            allTutorialStyles = new AllStylesHACK();
        }

        void OnGUIOld()
        {
            if (styles == null)
            {
                TutorialStyles.DisplayErrorMessage("TutorialWindow.cs");
                return;
            }

            if (!m_DeprecatedStylesInitialized)
            {
                InitDeprecatedStyles();
            }

            //Force the GUI color to always be white, so the tutorial window
            //will not be darkened  while in playmode
            //GUI.color = Color.white;

            GUISkin oldSkin = GUI.skin;
            GUI.skin = styles.skin;

            if (currentTutorial == null)
            {
                var context = currentTutorial != null ? "TUTORIAL" : "INTERACTIVE TUTORIALS";
                var title = (currentTutorial != null ? currentTutorial.tutorialTitle : readme?.projectName) ?? string.Empty;
                var bgTex = readme?.headerBackground;
                // For now drawing header only for Readme
                if (readme)
                {
                    Header(context, title, bgTex);
                }
            }
            else
            {
                // Tutorials have top bar visible
                //
            }

            //Force the GUI color to always be white, so the tutorial window
            //will not be darkened  while in playmode
            //GUI.color = Color.white;

            // TODO Show scroll vertical scroll bar when necessary. For now showing it always as invisible
            // so that it doesn't mess up the layout when (dis)appearing.
            var hStyle = GUIStyle.none;
            var contentFitsWithinTheWindow = true; // Antti: set to 'false' to see the scroll bar
            var vStyle = contentFitsWithinTheWindow
                ? GUIStyle.none
                : GUI.skin.verticalScrollbar;

            using (var sv =
                new EditorGUILayout.ScrollViewScope(
                    m_ScrollPosition,
                    alwaysShowHorizontal: true,
                    alwaysShowVertical: true,
                    hStyle,
                    vStyle,
                    allTutorialStyles.background
                ))
            {
                m_ScrollPosition = sv.scrollPosition;

                if (currentTutorial == null)
                {
                    if (!readme)
                    {
                        EditorGUILayout.HelpBox("No Tutorial Container found/selected. Please create/select one.", MessageType.Info);
                        return;
                    }
                    else
                    {
                        DrawReadme();
                    }

                    return;
                }

                //Might be used later if a completed page is desired
                /*if (m_CurrentTutorial.IsCompletedPageShowing)
                {
                    DrawCompletedPage();
                }*/

                if (currentTutorial.currentPage == null)
                {
                    GUILayout.Label(string.Format("No step {0} assigned for {1}.", currentTutorial.currentPageIndex, currentTutorial));
                }
                else
                {
                    RenderVideoIfPossible();
                    // TODO dropping sectionTitle for good probably
                    //if (!string.IsNullOrEmpty(currentTutorial.currentPage.sectionTitle))
                    //{
                    //    using (var bg = new EditorGUILayout.HorizontalScope(allTutorialStyles.sectionTitleBackground, GUILayout.ExpandWidth(true)))
                    //    {
                    //        GUILayout.Label(currentTutorial.currentPage.sectionTitle, allTutorialStyles.sectionTitleLabel);
                    //    }
                    //}

                    var pageCompleted = currentTutorial.currentPageIndex <= m_FarthestPageCompleted;
                    var previousTaskState = true;
                    foreach (var paragraph in m_Paragraphs)
                    {
                        if (paragraph.paragraph.type == ParagraphType.Instruction)
                            GUILayout.Space(2f);

                        paragraph.Draw(ref previousTaskState, pageCompleted);
                    }

                    GUILayout.FlexibleSpace();
                }
            }

            Footer();

            GUI.skin = oldSkin;
        }

        //Might be desirable if a completed page is something we want
        /*  void DrawCompletedPage()
        {
            if (m_CurrentTutorial.completedPage != null)
            {
                TutorialModalWindow.TryToShow(m_CurrentTutorial.completedPage, true, () =>
                    {
                        m_CurrentTutorial.IsCompletedPageShowing = false;
                        if (Event.current.shift)
                        {
                            OpenLoadTutorialDialog();
                        }
                        else
                        {
                            HomeWindow.Show(HomeWindow.HomeMode.Tutorial);
                        }
                    }
                    );
            }
            else if (m_CurrentTutorial.welcomePage != null)
            {
                TutorialModalWindow.TryToShow(m_CurrentTutorial.welcomePage, true, () =>
                    {
                        Debug.Log("Open next tutorial");
                        m_CurrentTutorial.IsCompletedPageShowing = false;
                    }
                    );
            }
            else
            {
                m_CurrentTutorial.IsCompletedPageShowing = false;
            }
        }*/

        void TopBar()
        {
            using (new EditorGUILayout.HorizontalScope(allTutorialStyles.topBarBackground, GUILayout.ExpandHeight(true), GUILayout.ExpandWidth(true)))
            {
                GUILayout.FlexibleSpace();

                using (new EditorGUI.DisabledScope(currentTutorial.skipped))
                {
                    // Exit tutorial
                    var icon = (currentTutorial.exitBehavior == Tutorial.ExitBehavior.ShowHomeWindow) ? allTutorialStyles.iconButtonHome : allTutorialStyles.iconButtonClose;
                    if (GUILayout.Button(new GUIContent("", s_ExitTooltip), icon))
                    {
                        SkipTutorial();
                        GUIUtility.ExitGUI();
                    }
                }
            }
        }

        void PreviousButtonPressed()
        {
            if (IsFirstPage())
                SkipTutorial();
            else
            {
                currentTutorial.GoToPreviousPage();
                //ShowCurrentTutorialContent();
            }
        }

        void NextButtonPressed()
        {
            bool GotToNextPage = false;
            if (currentTutorial != null)
                GotToNextPage = currentTutorial.TryGoToNextPage();
            // exit GUI to prevent InvalidOperationException when disposing DisabledScope
            // some other GUIView might clear the disabled stack when repainting immediately to be unmasked
            Repaint();
            //if (GotToNextPage) ShowCurrentTutorialContent();
        }

        // Resets the contents of this window. Use this before saving layouts for tutorials.
        internal void Reset()
        {
            m_AllParagraphs.Clear();
            SetTutorial(null);
            readme = null;
            InitCards();
        }

        void ToolbarGUI()
        {
            EditorGUILayout.BeginHorizontal(EditorStyles.toolbar, GUILayout.ExpandWidth(true));

            Func<string, bool> Button = (string text) =>
                GUILayout.Button(text, EditorStyles.toolbarButton, GUILayout.MaxWidth(s_AuthoringModeToolbarButtonWidth));

            // scenes cannot be loaded while in play mode
            // Not needing this for now
            //using (new EditorGUI.DisabledScope(EditorApplication.isPlaying))
            //{
            //    if (Button("Load Tutorial"))
            //    {
            //        OpenLoadTutorialDialog();
            //        GUIUtility.ExitGUI(); // Workaround: Avoid re-entrant OnGUI call when calling EditorSceneManager.NewScene
            //    }
            //}

            using (new EditorGUI.DisabledScope(currentTutorial == null))
            {
                if (Button("Skip To Last Page"))
                {
                    currentTutorial.SkipToLastPage();
                }
            }

            GUILayout.FlexibleSpace();

            if (Button("Run Startup Code"))
            {
                UserStartupCode.RunStartupCode();
            }

            using (new EditorGUI.DisabledScope(currentTutorial == null))
            {
                EditorGUI.BeginChangeCheck();
                maskingEnabled = GUILayout.Toggle(
                    maskingEnabled, "Preview Masking", EditorStyles.toolbarButton,
                    GUILayout.MaxWidth(s_AuthoringModeToolbarButtonWidth)
                );
                if (EditorGUI.EndChangeCheck())
                {
                    ApplyMaskingSettings(true);
                    GUIUtility.ExitGUI();
                    return;
                }
            }

            EditorGUILayout.EndHorizontal();
        }

        void Footer(/*Rect windowRect*/)
        {
            if (currentTutorial == null) { return; }

            using (new EditorGUILayout.VerticalScope(
                allTutorialStyles.darkBackground, GUILayout.Height(62), GUILayout.ExpandWidth(true)))
            {
                GUILayout.FlexibleSpace();

                using (new GUILayout.HorizontalScope())
                {
                    using (new EditorGUI.DisabledScope(currentTutorial.skipped))
                    {
                        if (GUILayout.Button(m_BackButtonText, allTutorialStyles.backButton))
                        {
                            if (IsFirstPage())
                                SkipTutorial();
                            else
                                PreviousButtonPressed();// currentTutorial.GoToPreviousPage();

                            // Masking could potentially change when pressing this button which causes an immediate repaint
                            // Exit GUI here to avoid re-entrant GUI errors
                            GUIUtility.ExitGUI();
                        }
                    }

                    GUILayout.FlexibleSpace();

                    var pgText = $"{currentTutorial.currentPageIndex + 1}/{currentTutorial.pageCount}";
                    GUILayout.Label(pgText, allTutorialStyles.paginationLabel);

                    GUILayout.FlexibleSpace();

                    using (new EditorGUI.DisabledScope(!canMoveToNextPage))
                    {
                        var nextButtonStyle = GUI.enabled
                            ? allTutorialStyles.nextButton
                            : allTutorialStyles.nextButtonDisabled;

                        if (GUILayout.Button(m_NextButtonText, nextButtonStyle))
                        {
                            NextButtonPressed();///// currentTutorial.TryGoToNextPage();
                            // exit GUI to prevent InvalidOperationException when disposing DisabledScope
                            // some other GUIView might clear the disabled stack when repainting immediately to be unmasked
                            GUIUtility.ExitGUI();
                            Repaint();
                        }
                    }
                }

                GUILayout.FlexibleSpace();
            }

            // Disabled for now, visually not appealing + we already have the page counter.
            //float sizeOfEachBox = (windowRect.width / currentTutorial.pageCount) * (currentTutorial.currentPageIndex + 1);
            //var style = allTutorialStyles.progressBar;
            //GUI.DrawTexture(new Rect(0, windowRect.yMax - style.fixedHeight, sizeOfEachBox, style.fixedHeight), style.normal.background);
        }

        public AllStylesHACK allTutorialStyles;

        void Header(string context, string title, Texture bg)
        {
            var w = EditorGUIUtility.currentViewWidth;
            const float headerHeight = 120;
            context = RichText.Size(RichText.Color(context, "#ffffff95"), 12);
            context = RichText.Bold(context);
            var contextContent = new GUIContent(context);
            title = RichText.Size(RichText.Color(title, "white"), 16);
            title = RichText.Bold(title);
            var titleContent = new GUIContent(title);
            Rect contextRect, titleRect;
            // In order to draw a background using ScaleAndCrop, fake the area first using GUILayout
            // functionality and then draw the actual content using GUI functionality.
            using (new GUILayout.VerticalScope(GUILayout.Height(headerHeight)))
            {
                GUILayout.FlexibleSpace();
                using (new GUILayout.HorizontalScope())
                {
                    GUILayout.FlexibleSpace();
                    titleRect = GUILayoutUtility.GetRect(titleContent, allTutorialStyles.headerLabel);
                    GUILayout.FlexibleSpace();
                }

                GUILayout.Space(2f);

                using (new GUILayout.HorizontalScope())
                {
                    GUILayout.FlexibleSpace();
                    contextRect = GUILayoutUtility.GetRect(contextContent, allTutorialStyles.headerLabel);
                    GUILayout.FlexibleSpace();
                }

                GUILayout.Space(15);
            }

            if (bg != null)
            {
                var r = GUILayoutUtility.GetLastRect();
                GUI.DrawTexture(r, bg, ScaleMode.ScaleAndCrop);
            }
            GUI.Label(contextRect, contextContent, allTutorialStyles.headerLabel);
            GUI.Label(titleRect, titleContent, allTutorialStyles.headerLabel);
        }

        void DrawReadme()
        {
            var tutorials = m_Cards
                .Where(card => card.section.CanDrawButton)
                .OrderBy(card => card.section.orderInView)
                .ToList();


            if (tutorials.Any())
            {
                GUILayout.Space(15f);

                // "Start Here" marker, will be replaced by tooltip when we have such.
                showStartHereMarker = !tutorials.Any(t => t.section.tutorialCompleted);
                if (showStartHereMarker)
                {
                    using (new GUILayout.HorizontalScope())
                    {
                        GUILayout.FlexibleSpace();
                        GUILayout.Label("Start Here", allTutorialStyles.tooltip);
                        GUILayout.FlexibleSpace();
                    }
                }
            }


            for (int index = 0; index < tutorials.Count; ++index)
            {
                GUILayout.BeginHorizontal();
                GUILayout.FlexibleSpace();

                var card = tutorials[index];
                var section = card.section;
                if (section.image != null)
                {
                    if (GUILayout.Button(card.content, allTutorialStyles.tutorialCard))
                    {
                        if (!string.IsNullOrEmpty(section.TutorialId))
                        {
                            section.StartTutorial();
                            GUIUtility.ExitGUI();
                        }
                        else if (!string.IsNullOrEmpty(section.linkText))
                        {
                            Application.OpenURL(section.url);
                        }
                    }
                }
                else // old-style tutorial section
                {
                    GUILayout.BeginVertical(allTutorialStyles.linkCard);

                    if (!string.IsNullOrEmpty(section.heading))
                    {
                        GUILayout.Label(section.heading, HeadingStyle);
                    }

                    if (!string.IsNullOrEmpty(section.text))
                    {
                        GUILayout.Label(section.text, BodyStyle);
                    }

                    if (!string.IsNullOrEmpty(section.linkText))
                    {
                        if (LinkLabel(new GUIContent(section.linkText), LinkStyle))
                        {
                            section.OpenUrl();
                        }
                    }

                    if (section.CanDrawButton)
                    {
                        if (Button(new GUIContent(section.buttonText), ButtonStyle))
                        {
                            section.StartTutorial();
                            GUIUtility.ExitGUI();
                        }
                    }
                    GUILayout.EndVertical();
                }

                GUILayout.FlexibleSpace();
                GUILayout.EndHorizontal();
            }

            var others = m_Cards
                .Where(card => !card.section.CanDrawButton)
                .OrderBy(card => card.section.orderInView)
                .ToList();

            for (int index = 0; index < others.Count; ++index)
            {
                GUILayout.BeginHorizontal();
                GUILayout.FlexibleSpace();

                var card = others[index];
                var section = card.section;
                if (section.image != null)
                {
                    var isTutorial = !string.IsNullOrEmpty(section.TutorialId);
                    if (GUILayout.Button(card.content, allTutorialStyles.linkCard))
                    {
                        if (isTutorial)
                        {
                            section.StartTutorial();
                            GUIUtility.ExitGUI();
                        }
                        else if (!string.IsNullOrEmpty(section.linkText))
                        {
                            section.OpenUrl();
                        }
                    }
                }
                else // old-style tutorial section
                {
                    GUILayout.BeginVertical(allTutorialStyles.linkCard);

                    if (!string.IsNullOrEmpty(section.heading))
                    {
                        GUILayout.Label(section.heading, HeadingStyle);
                    }

                    if (!string.IsNullOrEmpty(section.text))
                    {
                        GUILayout.Label(section.text, BodyStyle);
                    }

                    if (!string.IsNullOrEmpty(section.linkText))
                    {
                        if (LinkLabel(new GUIContent(section.linkText), LinkStyle))
                        {
                            section.OpenUrl();
                        }
                    }

                    if (section.CanDrawButton)
                    {
                        if (Button(new GUIContent(section.buttonText), ButtonStyle))
                        {
                            section.StartTutorial();
                            GUIUtility.ExitGUI();
                        }
                    }
                    GUILayout.EndVertical();
                }

                GUILayout.FlexibleSpace();
                GUILayout.EndHorizontal();
            }
        }

        void OnTutorialPagesModified(Tutorial sender)
        {
            if (sender == null || currentTutorial == null || currentTutorial != sender) { return; }

            FormatTitle();
            CreateTutorialViews();

            ApplyMaskingSettings(true);
        }

        void OnTutorialPageMaskingSettingsChanged(TutorialPage sender)
        {
            if (sender == null || currentTutorial == null || currentTutorial.currentPage != sender) { return; }

            ApplyMaskingSettings(true);
        }

        void OnTutorialPageNonMaskingSettingsChanged(TutorialPage sender)
        {
            if (sender == null || currentTutorial == null || currentTutorial.currentPage != sender) { return; }
            Repaint();
        }

        void OnShowPage(TutorialPage page, int index)
        {
            m_FarthestPageCompleted = Mathf.Max(m_FarthestPageCompleted, index - 1);
            ApplyMaskingSettings(true);

            AnalyticsHelper.PageShown(page, index);
            PrepareNewPage();

            videoPlaybackManager.ClearCache();
        }

        void OnGUIViewPositionChanged(UnityObject sender)
        {
            if (TutorialManager.IsLoadingLayout || sender.GetType().Name == "TooltipView") { return; }

            ApplyMaskingSettings(true);
        }

        void ApplyMaskingSettings(bool applyMask)
        {
            // TODO IsParentNull() probably not needed anymore as TutorialWindow is always parented in the current design & layout.
            if (!applyMask || !maskingEnabled || currentTutorial == null
            || currentTutorial.currentPage == null || IsParentNull() || TutorialManager.IsLoadingLayout)
            {
                MaskingManager.Unmask();
                InternalEditorUtility.RepaintAllViews();
                return;
            }

            MaskingSettings maskingSettings = currentTutorial.currentPage.currentMaskingSettings;

            try
            {
                if (maskingSettings != null && maskingSettings.enabled)
                {
                    bool foundAncestorProperty;
                    var unmaskedViews = UnmaskedView.GetViewsAndRects(maskingSettings.unmaskedViews, out foundAncestorProperty);
                    if (foundAncestorProperty)
                    {
                        // Keep updating mask when target property is not unfolded
                        QueueMaskUpdate();
                    }

                    if (currentTutorial.currentPageIndex <= m_FarthestPageCompleted)
                    {
                        unmaskedViews = new UnmaskedView.MaskData();
                    }

                    UnmaskedView.MaskData highlightedViews;

                    // if the current page contains no instructions, assume unmasked views should be highlighted because they are called out in narrative text
                    if (unmaskedViews.Count > 0 && !currentTutorial.currentPage.paragraphs.Any(p => p.type == ParagraphType.Instruction))
                    {
                        highlightedViews = (UnmaskedView.MaskData)unmaskedViews.Clone();
                    }
                    else if (canMoveToNextPage) // otherwise, if the current page is completed, highlight this window
                    {
                        highlightedViews = new UnmaskedView.MaskData();
                        highlightedViews.AddParentFullyUnmasked(this);
                    }
                    else // otherwise, highlight manually specified control rects if there are any
                    {
                        var unmaskedControls = new List<GUIControlSelector>();
                        var unmaskedViewsWithControlsSpecified =
                            maskingSettings.unmaskedViews.Where(v => v.GetUnmaskedControls(unmaskedControls) > 0).ToArray();
                        // if there are no manually specified control rects, highlight all unmasked views
                        highlightedViews = UnmaskedView.GetViewsAndRects(
                                unmaskedViewsWithControlsSpecified.Length == 0 ?
                                maskingSettings.unmaskedViews : unmaskedViewsWithControlsSpecified
                                );
                    }

                    // ensure tutorial window's HostView and tooltips are not masked
                    unmaskedViews.AddParentFullyUnmasked(this);
                    unmaskedViews.AddTooltipViews();

                    // tooltip views should not be highlighted
                    highlightedViews.RemoveTooltipViews();

                    MaskingManager.Mask(
                        unmaskedViews,
                        styles == null ? Color.magenta * new Color(1f, 1f, 1f, 0.8f) : styles.maskingColor,
                        highlightedViews,
                        styles == null ? Color.cyan * new Color(1f, 1f, 1f, 0.8f) : styles.highlightColor,
                        styles == null ? new Color(1, 1, 1, 0.5f) : styles.blockedInteractionColor,
                        styles == null ? 3f : styles.highlightThickness
                        );
                }
            }
            catch (ArgumentException e)
            {
                if (s_AuthoringMode)
                    Debug.LogException(e, currentTutorial.currentPage);
                else
                    Console.WriteLine(StackTraceUtility.ExtractStringFromException(e));

                MaskingManager.Unmask();
            }
            finally
            {
                InternalEditorUtility.RepaintAllViews();
            }
        }

        void ResetTutorialOnDelegate(PlayModeStateChange playmodeChange)
        {
            switch (playmodeChange)
            {
                case PlayModeStateChange.EnteredEditMode:
                    EditorApplication.playModeStateChanged -= ResetTutorialOnDelegate;
                    ResetTutorial();
                    break;
            }
        }

        internal void ResetTutorial()
        {
            if (EditorApplication.isPlaying)
            {
                EditorApplication.playModeStateChanged += ResetTutorialOnDelegate;
                EditorApplication.isPlaying = false;
                return;
            }
            else if (!EditorApplication.isPlaying)
            {
                m_FarthestPageCompleted = -1;
                TutorialManager.instance.ResetTutorial();
            }
        }

        #region Migrated from ReadmeEditor

        class Card
        {
            public TutorialContainer.Section section;
            public GUIContent content;
        }

        // Deprecated styles for old-style sections
        GUIStyle ButtonStyle { get; set; } = new GUIStyle();
        GUIStyle LinkStyle { get; set; } = new GUIStyle();
        GUIStyle TitleStyle { get; set; } = new GUIStyle();
        GUIStyle DescriptionStyle { get; set; } = new GUIStyle();
        GUIStyle HeadingStyle { get; set; } = new GUIStyle();
        GUIStyle BodyStyle { get; set; } = new GUIStyle();
        bool m_DeprecatedStylesInitialized;

        // Returns Readme iff one Readme exists in the project.
        public static TutorialContainer FindReadme()
        {
            var ids = AssetDatabase.FindAssets($"t:{typeof(TutorialContainer).FullName}");
            return ids.Length == 1
                ? (TutorialContainer)AssetDatabase.LoadMainAssetAtPath(AssetDatabase.GUIDToAssetPath(ids[0]))
                : null;
        }

        void Update()
        {
            // TODO semi-hack to make sure the UI is up-to-date at all times. Need some better event-based solution for this.
            if (LoadTutorialStates() < 1) { return; }
            Repaint();
        }

        internal int LoadTutorialStates()
        {
            int numUpdated = 0;
            readme?.sections.ToList().ForEach(s =>
            {
                var wasCompleted = s.tutorialCompleted;
                s.LoadState();
                if (s.tutorialCompleted != wasCompleted)
                {
                    UpdateCard(s);
                    ++numUpdated;
                }
            });
            return numUpdated;
        }

        void SaveTutorialStates()
        {
            readme.sections.ToList().ForEach(s => s.SaveState());
        }

        internal void ClearCurrentTutorialStates()
        {
            readme.sections.ToList().ForEach(s => MarkTutorialCompleted(s.TutorialId, false));
        }

        // Fetches statuses from the web API
        internal void FetchTutorialStates()
        {
            GenesisHelper.GetAllTutorials((tutorials) =>
            {
                tutorials.ForEach(t => MarkTutorialCompleted(t.lessonId, t.status == "Finished"));
            });
        }

        void MarkTutorialCompleted(string lessonId, bool completed)
        {
            var sections = readme?.sections ?? new TutorialContainer.Section[0];
            var section = Array.Find(sections, s => s.TutorialId == lessonId);
            if (section != null)
            {
                section.tutorialCompleted = completed;
                section.SaveState();
                UpdateCard(section);
            }
        }

        void InitDeprecatedStyles()
        {
            const int TextTitleSize = 14;
            const int TextProjectDescriptionSize = 12;
            const int TextHeadingSize = 14;
            const int TextBodySize = 12;
            const int ButtonTextSize = 12;

            BodyStyle = new GUIStyle(EditorStyles.label)
            {
                wordWrap = true,
                fontSize = TextBodySize
            };

            TitleStyle = new GUIStyle(EditorStyles.boldLabel)
            {
                wordWrap = true,
                fontSize = TextTitleSize,
                richText = true
            };

            DescriptionStyle = new GUIStyle(BodyStyle)
            {
                fontSize = TextProjectDescriptionSize
            };

            HeadingStyle = new GUIStyle(EditorStyles.boldLabel)
            {
                wordWrap = true,
                fontSize = TextHeadingSize
            };

            LinkStyle = new GUIStyle(BodyStyle) { wordWrap = false };
            // Match selection color which works nicely for both light and dark skins
            LinkStyle.normal.textColor = new Color(0x00 / 255f, 0x78 / 255f, 0xDA / 255f, 1f);
            LinkStyle.stretchWidth = false;

            ButtonStyle = new GUIStyle(GUI.skin.button)
            {
                fontSize = ButtonTextSize,
                stretchWidth = false
            };

            if (EditorGUIUtility.isProSkin)
            {
                TitleStyle.normal.textColor = styles.TextColorMainDarkSkin;
                DescriptionStyle.normal.textColor = styles.TextColorMainDarkSkin;
                HeadingStyle.normal.textColor = styles.TextColorMainDarkSkin;
                BodyStyle.normal.textColor = styles.TextColorSecondaryDarkSkin;
            }
            else
            {
                TitleStyle.normal.textColor = styles.TextColorMainLightSkin;
                DescriptionStyle.normal.textColor = styles.TextColorMainLightSkin;
                HeadingStyle.normal.textColor = styles.TextColorMainLightSkin;
                BodyStyle.normal.textColor = styles.TextColorSecondaryLightSkin;
            }

            m_DeprecatedStylesInitialized = true;
        }

        void InitCards()
        {
            var sections = readme?.sections ?? new TutorialContainer.Section[0];
            m_Cards = new Card[sections.Length];
            for (int i = 0; i < sections.Length; ++i)
            {
                var section = sections[i];
                m_Cards[i] = new Card { section = section };
                if (section.image != null)
                {
                    m_Cards[i].content = CreateCardContent(section);
                }
            }
        }

        void UpdateCard(TutorialContainer.Section section)
        {
            var card = Array.Find(m_Cards, c => c.section == section);
            if (card != null && card.section.image != null)
            {
                card.content = CreateCardContent(section);
            }
        }

        static GUIContent CreateCardContent(TutorialContainer.Section s, int titleTextSize = 12, int descriptionTextSize = 11, int completedTextSize = 10)
        {
            return new GUIContent
            {
                image = s.tutorialCompleted ? s.completedImage : s.image,
                text = RichText.Size(RichText.Bold(s.heading), titleTextSize)
                      + "\n" + RichText.Size(s.text, descriptionTextSize) +
                      (s.tutorialCompleted ? "\n" + RichText.Size(RichText.Color(RichText.Bold("COMPLETED"), "grey"), completedTextSize) : "")
            };
        }

        static bool LinkLabel(GUIContent label, GUIStyle linkStyle, params GUILayoutOption[] options)
        {
            var position = GUILayoutUtility.GetRect(label, linkStyle, options);

            Handles.BeginGUI();
            Handles.color = linkStyle.normal.textColor;
            Handles.DrawLine(new Vector3(position.xMin, position.yMax), new Vector3(position.xMax, position.yMax));
            Handles.color = Color.white;
            Handles.EndGUI();

            EditorGUIUtility.AddCursorRect(position, MouseCursor.Link);

            return GUI.Button(position, label, linkStyle);
        }

        static bool Button(GUIContent label, GUIStyle style) { return GUILayout.Button(label, style, GUILayout.Height(32), GUILayout.Width(200)); }

        void RenderVideoIfPossible()
        {
            EditorApplication.delayCall += () => 
            {
                if (currentTutorial
                && currentTutorial.currentPage
                && currentTutorial.currentPage.paragraphs.ElementAt(0).type == ParagraphType.Video)
                {
                    //bool pageCompleted = currentTutorial.currentPageIndex <= m_FarthestPageCompleted;
                    //bool previousTaskState = true;
                    //  GetCurrentParagraph().Draw(ref previousTaskState, pageCompleted);
                    //GetCurrentParagraph().ElementAt(0).Draw(ref previousTaskState, pageCompleted);
                    if (!UIElementsUtils.IsVisible(videoBoxElement))
                    {
                        UIElementsUtils.Show(videoBoxElement);
                    }
                    return;
                }

                if (!UIElementsUtils.IsVisible(videoBoxElement)) { return; }
                UIElementsUtils.Hide(videoBoxElement);
            };
        }

        /// <summary>
        /// https://docs.unity3d.com/Manual/StyledText.html 
        /// </summary>
        public static class RichText
        {
            public static string Bold(string text) => $"<b>{text}</b>";

            public static string Italic(string text) => $"<i>{text}</i>";

            public static string Size(string text, int size) => $"<size={size}>{text}</size>";

            public static string Color(string text, string color) => $"<color={color}>{text}</color>";
        }
        #endregion
    }

    /// <summary>
    /// An hack version of AllTutorialStyles that allows the main window to not blow up due to crazy
    /// static constructor initialization. Should be removed when migrating to UIElements
    /// </summary>
    public class AllStylesHACK
    {
        public static GUIStyle FindStyle(GUIStyle style, string name)
        {
            if (style == null)
            {
                style = GUI.skin.FindStyle(name);
            }
            return style;
        }

        public AllStylesHACK()
        {
            headerLabel = FindStyle(headerLabel, s_HeaderStyleName);
            instructionLabel = FindStyle(instructionLabel, s_InstructionLabelStyleName);
            line = FindStyle(line, s_LineStyleName);
            listPrefix = FindStyle(listPrefix, s_ListPrefixStyleName);
            list = FindStyle(list, s_ListStyleName);
            progressLabel = FindStyle(progressLabel, s_ProgressLabelStyle);
            sectionTitleLabel = FindStyle(sectionTitleLabel, s_SectionTitleLabelStyle);
            theInBetweenText = FindStyle(theInBetweenText, s_TheInBetweenTextStyle);
            narrativeStyle = FindStyle(narrativeStyle, s_Narrative);
            switchTutorialStyle = FindStyle(switchTutorialStyle, s_SwitchTutorialStyleName);
            imageStyle = FindStyle(imageStyle, s_ImageStyle);
            videoStyle = FindStyle(videoStyle, s_VideoStyle);

            sectionTitleBackground = FindStyle(sectionTitleBackground, s_SectionTitleBackground);
            topBarBackground = FindStyle(topBarBackground, s_TopBarBackground);

            headerBGStyle = FindStyle(headerBGStyle, s_HeaderStyleBG);
            listBGStyle = FindStyle(listBGStyle, s_ListBG);
            theInBetweenTextNotActiveOrCompleted = FindStyle(theInBetweenTextNotActiveOrCompleted, s_TheInBetweenTextStyleNotActiveOrCompleted);
            completedElementBackground = FindStyle(completedElementBackground, s_CompletedElementBackgroundStyle);
            activeElementBackground = FindStyle(activeElementBackground, s_ActiveElementBackgroundStyle);
            inActiveElementBackground = FindStyle(inActiveElementBackground, s_InActiveElementBackgroundStyle);
            darkBackground = FindStyle(darkBackground, s_DarkBackground);
            bgTheInBetweenText = FindStyle(bgTheInBetweenText, s_BGTheInBetweenText);
            background = FindStyle(background, s_Background);

            footer = FindStyle(footer, s_Footer);
            paginationLabel = FindStyle(paginationLabel, s_PaginationLabel);
            nextButton = FindStyle(nextButton, s_NextButton);
            nextButtonDisabled = FindStyle(nextButtonDisabled, s_NextButtonDisabled);
            backButton = FindStyle(backButton, s_BackButton);
            backButtonDisabled = FindStyle(backButtonDisabled, s_BackButtonDisabled);
            progressBar = FindStyle(progressBar, s_ProgressBar);

            //iconButtonBack = FindStyle(,s_IconButtonBack);
            iconButtonReset = FindStyle(iconButtonReset, s_IconButtonReset);
            iconButtonHome = FindStyle(iconButtonHome, s_IconButtonHome);
            iconButtonClose = FindStyle(iconButtonClose, s_IconButtonClose);
            instructionLabelIconCompleted = FindStyle(instructionLabelIconCompleted, s_InstructionLabelIconStyleCompleted);
            instructionLabelIconNotCompleted = FindStyle(instructionLabelIconNotCompleted, s_InstructionLabelIconStyleNotCompleted);

            tutorialCard = FindStyle(tutorialCard, s_TutorialCard);
            linkCard = FindStyle(linkCard, s_LinkCard);

            welcomeDialogButton = FindStyle(welcomeDialogButton, s_WelcomeDialogButton);

            tooltip = FindStyle(tooltip, s_Tooltip);
        }

        private static readonly string s_InstructionLabelStyleName = "Instruction Label";
        private static readonly string s_Narrative = "NarrativeStyle";
        private static readonly string s_SwitchTutorialStyleName = "SwitchTutorialStyle";
        private static readonly string s_ImageStyle = "ImageStyle";
        private static readonly string s_VideoStyle = "VideoStyle";
        private static readonly string s_HeaderStyleName = "Header";
        private static readonly string s_LineStyleName = "Line";
        private static readonly string s_ListStyleName = "List";
        private static readonly string s_ListPrefixStyleName = "ListPrefix";
        private static readonly string s_ProgressLabelStyle = "Progress Label";
        private static readonly string s_SectionTitleLabelStyle = "Section Title Label";
        private static readonly string s_TheInBetweenTextStyle = "TheInBetweenText";

        private static readonly string s_Background = "Background";
        private static readonly string s_HeaderStyleBG = "SectionTitleBackground";
        private static readonly string s_ListBG = "ListBackground";
        private static readonly string s_SectionTitleBackground = "SectionTitleBackground";
        private static readonly string s_TopBarBackground = "TopBarBackground";
        private static readonly string s_DarkBackground = "DarkBackground";
        private static readonly string s_CompletedElementBackgroundStyle = "CompletedElementBackground";
        private static readonly string s_ActiveElementBackgroundStyle = "ActiveElementBackground";
        private static readonly string s_InActiveElementBackgroundStyle = "InActiveElementBackground";
        private static readonly string s_BGTheInBetweenText = "BGTheInBetweenText";
        private static readonly string s_TheInBetweenTextStyleNotActiveOrCompleted = "BGTheInBetweenTextNotActiveOrCompleted";

        private static readonly string s_Footer = "Footer";
        private static readonly string s_PaginationLabel = "PaginationLabel";
        private static readonly string s_NextButton = "NextButton";
        private static readonly string s_NextButtonDisabled = "NextButtonDisabled";
        private static readonly string s_BackButton = "BackButton";
        private static readonly string s_BackButtonDisabled = "BackButtonDisabled";
        private static readonly string s_ProgressBar = "ProgressBar";

        private static readonly string s_InstructionLabelIconStyleNotCompleted = "InstructionLabelIconNotCompleted";
        private static readonly string s_InstructionLabelIconStyleCompleted = "InstructionLabelIconCompleted";
        //private static readonly string s_IconButtonBack = "IconButtonBack";
        private static readonly string s_IconButtonReset = "IconButtonReset";
        private static readonly string s_IconButtonHome = "IconButtonHome";
        private static readonly string s_IconButtonClose = "IconButtonClose";

        private static readonly string s_TutorialCard = "TutorialCard";
        private static readonly string s_LinkCard = "LinkCard";

        private static readonly string s_WelcomeDialogButton = "WelcomeDialogButton";

        private static readonly string s_Tooltip = "Tooltip";

        public GUIStyle narrativeStyle;
        public GUIStyle switchTutorialStyle;
        public GUIStyle imageStyle;
        public GUIStyle videoStyle;
        public GUIStyle theInBetweenText;
        public GUIStyle headerLabel;
        public GUIStyle instructionLabel;
        public GUIStyle line;
        public GUIStyle list;
        public GUIStyle listPrefix;
        public GUIStyle progressLabel;
        public GUIStyle sectionTitleLabel;

        public GUIStyle footer;
        public GUIStyle paginationLabel;
        public GUIStyle nextButton;
        public GUIStyle nextButtonDisabled;
        public GUIStyle backButton;
        public GUIStyle backButtonDisabled;
        public GUIStyle progressBar;

        public GUIStyle background;
        public GUIStyle sectionTitleBackground;
        public GUIStyle topBarBackground;
        public GUIStyle bgTheInBetweenText;
        public GUIStyle completedElementBackground;
        public GUIStyle activeElementBackground;
        public GUIStyle inActiveElementBackground;
        public GUIStyle darkBackground;
        public GUIStyle theInBetweenTextNotActiveOrCompleted;
        public GUIStyle headerBGStyle;
        public GUIStyle listBGStyle;

        public GUIStyle instructionLabelIconNotCompleted;
        public GUIStyle instructionLabelIconCompleted;
        //public GUIStyle iconButtonBack;
        public GUIStyle iconButtonReset;
        public GUIStyle iconButtonHome;
        public GUIStyle iconButtonClose;

        public GUIStyle tutorialCard;
        public GUIStyle linkCard;

        public GUIStyle welcomeDialogButton;

        public GUIStyle tooltip;
    }
}
