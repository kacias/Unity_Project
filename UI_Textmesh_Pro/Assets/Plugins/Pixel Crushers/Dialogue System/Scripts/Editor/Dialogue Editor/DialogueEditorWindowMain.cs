// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEditor;
using System.IO;

namespace PixelCrushers.DialogueSystem.DialogueEditor
{

    /// <summary>
    /// Dialogue database editor window. This is the main part of a class that spans 
    /// several files using partial classes. Each file handles one aspect of the 
    /// Dialogue Editor, such as the Actors tab or the Items tab.
    /// </summary>
    public partial class DialogueEditorWindow : EditorWindow
    {

        public static DialogueEditorWindow instance = null;

        public static object inspectorSelection
        {
            get
            {
                return _inspectorSelection;
            }
            set
            {
                _inspectorSelection = value;
                if ((value != null) && (instance != null) && (EditorWindow.focusedWindow == instance))
                {
                    Selection.activeObject = DialogueEditorWindow.instance.database;
                }
                if (DialogueDatabaseEditor.instance != null) DialogueDatabaseEditor.instance.Repaint();
            }
        }
        [SerializeField]
        private static object _inspectorSelection = null;

        [SerializeField]
        private Toolbar toolbar = new Toolbar();

        [SerializeField]
        private DialogueDatabase database = null;
        public static DialogueDatabase GetCurrentlyEditedDatabase() { return (instance != null) ? instance.database : null; }

        private SerializedObject serializedObject = null;

        [SerializeField]
        private bool debug = false;

        [SerializeField]
        private bool registerCompleteObjectUndo = true;

        private bool verboseDebug = false;

        [SerializeField]
        private Vector2 scrollPosition = Vector2.zero;

        private Template template = Template.FromDefault();

        private const string CompleteUndoKey = "PixelCrushers.DialogueSystem.DialogueEditor.registerCompleteObjectUndo";
        private const string ShowNodeEditorKey = "PixelCrushers.DialogueSystem.DialogueEditor.ShowNodeEditor";
        private const string ShowDatabaseNameKey = "PixelCrushers.DialogueSystem.DialogueEditor.ShowDatabaseName";
        private const string AutoBackupKey = "PixelCrushers.DialogueSystem.DialogueEditor.AutoBackupFrequency";
        private const string AutoBackupFolderKey = "PixelCrushers.DialogueSystem.DialogueEditor.AutoBackupFolder";
        private const string AddNewNodesToRightKey = "PixelCrushers.DialogueSystem.DialogueEditor.AddNewNodesToRight";
        private const string TrimWhitespaceAroundPipesKey = "PixelCrushers.DialogueSystem.DialogueEditor.TrimWhitespaceAroundPipes";
        private const string LocalizationLanguagesKey = "PixelCrushers.DialogueSystem.DialogueEditor.LocalizationLanguages";
        private const string SequencerDragDropCommandsKey = "PixelCrushers.DialogueSystem.DialogueEditor.SequencerDragDropCommands";

        private const float RuntimeUpdateFrequency = 0.5f;
        private float timeSinceLastRuntimeUpdate = 0;

        private const float DefaultAutoBackupFrequency = 600;
        private float autoBackupFrequency = DefaultAutoBackupFrequency;
        private float timeForNextAutoBackup = 0;
        private string autoBackupFolder = string.Empty;

        private bool showDatabaseName = true;

        private void OnEnable()
        {
            if (debug) Debug.Log("<color=green>Dialogue Editor: OnEnable (Selection.activeObject=" + Selection.activeObject + ", database=" + database + ")</color>", Selection.activeObject);
            instance = this;
            template = TemplateTools.LoadFromEditorPrefs();
            minSize = new Vector2(720, 240);
            if (Selection.activeObject != null)
            {
                SelectObject(Selection.activeObject);
            }
            else if (EditorWindow.focusedWindow == this)
            {
                SelectObject(database);
            }
            toolbar.UpdateTabNames(template.treatItemsAsQuests);
            if (database != null) ValidateConversationMenuTitleIndex();
#if UNITY_2017_2_OR_NEWER
            EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
            EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
#else
            EditorApplication.playmodeStateChanged -= OnPlaymodeStateChanged;
            EditorApplication.playmodeStateChanged += OnPlaymodeStateChanged;
#endif
            //nodeStyle = null;
            showQuickDialogueTextEntry = false;
            LoadEditorSettings();
        }

        private void OnDisable()
        {
            if (debug) Debug.Log("<color=orange>Dialogue Editor: OnDisable</color>");
#if UNITY_2017_2_OR_NEWER
            EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
#else
            EditorApplication.playmodeStateChanged -= OnPlaymodeStateChanged;
#endif
            SaveTemplate();
            inspectorSelection = null;
            instance = null;
            //nodeStyle = null;
            SaveEditorSettings();
        }

        private void SaveTemplate()
        {
            TemplateTools.SaveToEditorPrefs(template);
            SaveTemplateToDatabase();
        }

        private void LoadEditorSettings()
        {
            registerCompleteObjectUndo = EditorPrefs.GetBool(CompleteUndoKey, true);
            showDatabaseName = EditorPrefs.GetBool(ShowDatabaseNameKey, true);
            autoBackupFrequency = EditorPrefs.GetFloat(AutoBackupKey, DefaultAutoBackupFrequency);
            autoBackupFolder = EditorPrefs.GetString(AutoBackupFolderKey, string.Empty);
            timeForNextAutoBackup = Time.realtimeSinceStartup + autoBackupFrequency;
            addNewNodesToRight = EditorPrefs.GetBool(AddNewNodesToRightKey, false);
            trimWhitespaceAroundPipes = EditorPrefs.GetBool(TrimWhitespaceAroundPipesKey, true);
            if (EditorPrefs.HasKey(LocalizationLanguagesKey)) localizationLanguages = JsonUtility.FromJson<LocalizationLanguages>(EditorPrefs.GetString(LocalizationLanguagesKey));
            if (EditorPrefs.HasKey(SequencerDragDropCommandsKey)) SequenceEditorTools.RestoreDragDropCommands(EditorPrefs.GetString(SequencerDragDropCommandsKey));
        }

        private void SaveEditorSettings()
        { 
            EditorPrefs.SetBool(CompleteUndoKey, registerCompleteObjectUndo);
            EditorPrefs.SetBool(ShowDatabaseNameKey, showDatabaseName);
            EditorPrefs.SetFloat(AutoBackupKey, autoBackupFrequency);
            EditorPrefs.SetString(AutoBackupFolderKey, autoBackupFolder);
            EditorPrefs.SetBool(AddNewNodesToRightKey, addNewNodesToRight);
            EditorPrefs.SetBool(TrimWhitespaceAroundPipesKey, trimWhitespaceAroundPipes);
            EditorPrefs.SetString(LocalizationLanguagesKey, JsonUtility.ToJson(localizationLanguages));
            EditorPrefs.SetString(SequencerDragDropCommandsKey, SequenceEditorTools.SaveDragDropCommands());
        }

        private void LoadTemplateFromDatabase()
        {
            if (database == null || string.IsNullOrEmpty(database.templateJson)) return;
            var databaseTemplate = JsonUtility.FromJson<Template>(database.templateJson);
            if (databaseTemplate != null) template = databaseTemplate;
        }

        private void SaveTemplateToDatabase()
        {
            if (database == null) return;
            database.templateJson = JsonUtility.ToJson(template);
            SetDatabaseDirty("Save template");
        }

#if UNITY_2017_2_OR_NEWER
        private void OnPlayModeStateChanged(PlayModeStateChange obj)
        {
            HandlePlayModeStateChanged();
        }
#else
        private void OnPlaymodeStateChanged()
        {
            HandlePlayModeStateChanged();
        }
#endif

        private void HandlePlayModeStateChanged()
        {
            if (debug) Debug.Log("<color=cyan>Dialogue Editor: OnPlaymodeStateChanged - isPlaying=" + EditorApplication.isPlaying + "/" + EditorApplication.isPlayingOrWillChangePlaymode + "</color>");
            toolbar.UpdateTabNames(template.treatItemsAsQuests);
            currentConversationState = null;
            currentRuntimeEntry = null;
            actorPortraitCache = null;
            UITools.ClearSpriteCache();
            ResetWatchSection();
            SetReorderableListInspectorSelection();
            SelectObject(database);
        }

        private void SetReorderableListInspectorSelection()
        {
            if (database == null) return;
            if (EditorWindow.focusedWindow != instance) return;
            switch (toolbar.current)
            {
                case Toolbar.Tab.Actors:
                    if (0 <= actorListSelectedIndex && actorListSelectedIndex < database.actors.Count) inspectorSelection = database.actors[actorListSelectedIndex];
                    break;
                case Toolbar.Tab.Items:
                    if (0 <= itemListSelectedIndex && itemListSelectedIndex < database.items.Count) inspectorSelection = database.items[itemListSelectedIndex];
                    break;
                case Toolbar.Tab.Locations:
                    if (0 <= locationListSelectedIndex && locationListSelectedIndex < database.locations.Count) inspectorSelection = database.locations[locationListSelectedIndex];
                    break;
            }
        }

        private void OnSelectionChange()
        {
            SelectObject(Selection.activeObject);
        }

        public void SelectObject(UnityEngine.Object obj)
        {
            var newDatabase = obj as DialogueDatabase;
            if (newDatabase != null)
            {
                var databaseID = (database != null) ? database.GetInstanceID() : -1;
                var newDatabaseID = newDatabase.GetInstanceID();
                var needToReset = (database != null) && (databaseID != newDatabaseID);
                if (debug) Debug.Log("<color=yellow>Dialogue Editor: SelectDatabase " + newDatabase + "(ID=" + newDatabaseID + "), old=" + database + "(ID=" + databaseID + "), reset=" + needToReset + "</color>", newDatabase);
                database = newDatabase;
                ClearDatabaseNameStyle();
                LoadTemplateFromDatabase();
                serializedObject = new SerializedObject(database);
                if (needToReset)
                {
                    Reset();
                }
                else
                {
                    ResetVariableSection();
                    ResetConversationSection();
                    ResetConversationNodeEditor();
                    UpdateReferencesByID();
                }
                Repaint();
            }
        }

        private void UpdateReferencesByID()
        {
            SetCurrentConversationByID();
            ValidateConversationMenuTitleIndex();
        }

        public void Reset()
        {
            ResetActorSection();
            ResetItemSection();
            ResetLocationSection();
            ResetVariableSection();
            ResetConversationSection();
            ResetConversationNodeEditor();
        }

        void Update()
        {
            if (Application.isPlaying)
            {
                // At runtime, check if we need to update the display:
                timeSinceLastRuntimeUpdate += Time.unscaledDeltaTime;
                if (timeSinceLastRuntimeUpdate > RuntimeUpdateFrequency)
                {
                    timeSinceLastRuntimeUpdate = 0;
                    switch (toolbar.Current)
                    {
                        case Toolbar.Tab.Conversations:
                            UpdateRuntimeConversationsTab();
                            break;
                        case Toolbar.Tab.Templates:
                            UpdateRuntimeWatchesTab();
                            break;
                    }
                }
            }
            else
            {
                if (autoBackupFrequency > 0.001f && Time.realtimeSinceStartup > timeForNextAutoBackup)
                {
                    timeForNextAutoBackup = Time.realtimeSinceStartup + autoBackupFrequency;
                    if (EditorWindow.focusedWindow == this) MakeAutoBackup();
                }
            }
        }

        public void OnGUI()
        {
            try
            {
                if (instance == null) instance = this;
                RecordUndo();
                var isInNodeEditor = (toolbar.Current == Toolbar.Tab.Conversations) && showNodeEditor;
                if (!isInNodeEditor) DrawDatabaseName(); // Node editor draws name after grid.
                DrawToolbar();
                DrawMainBody();
            }
            catch (System.ArgumentException)
            {
                // Not ideal to hide ArgumentException, but window can change layout during a repaint,
                // which can cause this exception.
            }
        }

        private Color proDatabaseNameColor = new Color(1, 1, 1, 0.2f);
        private Color freeDatabaseNameColor = new Color(0, 0, 0, 0.2f);
        private Color proDatabaseBackupNameColor = new Color(1, 0, 0, 0.5f);
        private Color freeDatabaseBackupNameColor = new Color(1, 0, 0, 0.5f);

        private GUIStyle _databaseNameStyle = null;
        private GUIStyle databaseNameStyle
        {
            get
            {
                if (_databaseNameStyle == null || _databaseNameStyle.fontSize != 20)
                {
                    _databaseNameStyle = new GUIStyle(EditorStyles.label);
                    _databaseNameStyle.fontSize = 20;
                    _databaseNameStyle.fontStyle = FontStyle.Bold;
                    _databaseNameStyle.alignment = TextAnchor.LowerLeft;
                    _databaseNameStyle.normal.textColor = database.name.EndsWith("(Auto-Backup)")
                        ? EditorGUIUtility.isProSkin
                            ? proDatabaseBackupNameColor
                            : freeDatabaseBackupNameColor
                        : EditorGUIUtility.isProSkin
                            ? proDatabaseNameColor
                            : freeDatabaseNameColor;
                }
                return _databaseNameStyle;
            }
        }
        private void ClearDatabaseNameStyle() { _databaseNameStyle = null; }

        private GUIStyle _conversationParticipantsStyle = null;
        private GUIStyle conversationParticipantsStyle
        {
            get
            {
                if (_conversationParticipantsStyle == null || _conversationParticipantsStyle.fontSize != 20)
                {
                    _conversationParticipantsStyle = new GUIStyle(databaseNameStyle);
                    _conversationParticipantsStyle.alignment = TextAnchor.UpperRight;
                }
                return _conversationParticipantsStyle;
            }
        }

        private void DrawDatabaseName()
        {
            if (!showDatabaseName) return;
            if (database == null) return;
            if (IsSearchBarVisible || IsLuaWatchBarVisible) return;
            EditorGUI.LabelField(new Rect(4, position.height - 30, position.width, 30), database.name, databaseNameStyle);
        }

        private void DrawToolbar()
        {
            Toolbar.Tab previous = toolbar.Current;
            toolbar.Draw();
            if (toolbar.Current != previous)
            {
                ResetAssetLists();
                ResetDialogueTreeGUIStyles();
                ResetLanguageList();
                if (toolbar.Current == Toolbar.Tab.Conversations)
                {
                    UpdateConversationTitles();
                    ResetNodeEditorConversationList();
                }
                if (toolbar.Current == Toolbar.Tab.Items)
                {
                    BuildLanguageListFromItems();
                }
                else if (!((toolbar.Current == Toolbar.Tab.Conversations) && showNodeEditor))
                {
                    inspectorSelection = null;
                }
            }
        }

        private void DrawMainBody()
        {
            if ((database != null) || (toolbar.Current == Toolbar.Tab.Templates))
            {
                DrawCurrentSection();
            }
            else {
                DrawNoDatabaseSection();
            }
        }

        private void DrawCurrentSection()
        {
            EditorGUI.BeginChangeCheck();
            EditorStyles.textField.wordWrap = true;
            var isInNodeEditor = (toolbar.Current == Toolbar.Tab.Conversations) && showNodeEditor;
            if (isInNodeEditor) HandleNodeEditorScrollWheelEvents();
            if (!isInNodeEditor) scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);
            try
            {
                switch (toolbar.Current)
                {
                    case Toolbar.Tab.Database:
                        DrawDatabaseSection();
                        break;
                    case Toolbar.Tab.Actors:
                        DrawActorSection();
                        break;
                    case Toolbar.Tab.Items:
                        DrawItemSection();
                        break;
                    case Toolbar.Tab.Locations:
                        DrawLocationSection();
                        break;
                    case Toolbar.Tab.Variables:
                        DrawVariableSection();
                        break;
                    case Toolbar.Tab.Conversations:
                        DrawConversationSection();
                        break;
                    case Toolbar.Tab.Templates:
                        if (Application.isPlaying)
                        {
                            DrawWatchSection();
                        }
                        else {
                            DrawTemplateSection();
                        }
                        break;
                }
            }
            finally
            {
                if (!isInNodeEditor) EditorGUILayout.EndScrollView();
            }
            if (IsSearchBarVisible) DrawDialogueTreeSearchBar();
            if (IsLuaWatchBarVisible) DrawLuaWatchBar();

            try
            {
                if (EditorGUI.EndChangeCheck()) SetDatabaseDirty("Standard Editor Change");
            }
            catch (System.InvalidOperationException) { }
        }

        private void RecordUndo()
        {
            if (database == null) return;
            var eventType = Event.current.type;
            if (eventType == EventType.MouseUp || eventType == EventType.MouseDrag ||
                eventType == EventType.KeyUp || eventType == EventType.ContextClick)
            {
                if (registerCompleteObjectUndo)
                {
                    Undo.RegisterCompleteObjectUndo(database, "Dialogue Database");
                }
                else
                {
                    Undo.RecordObject(database, "Dialogue Database");
                }
            }
        }

        public void SetDatabaseDirty(string reason)
        {
            if (debug)
            {
                if (database == null)
                {
                    if (string.IsNullOrEmpty(reason))
                    {
                        Debug.LogWarning("Dialogue Editor wants to mark database to be saved, but it doesn't have a reference to a database!");
                    }
                    else {
                        Debug.LogWarning("Dialogue Editor wants to mark database to be saved after change '" + reason + "', but it doesn't have a reference to a database!");
                    }
                }
                else {
                    if (string.IsNullOrEmpty(reason))
                    {
                        Debug.Log("Dialogue Editor marking database '" + database.name + "' to be saved.", database);
                    }
                    else {
                        Debug.Log("Dialogue Editor marking database '" + database.name + "' to be saved after change '" + reason + "'.", database);
                    }
                }
            }
            if (database != null) EditorUtility.SetDirty(database);
        }

        private void MakeAutoBackup()
        {
            if (database == null) return;
            try
            {
                var path = AssetDatabase.GetAssetPath(database);
                if (path.EndsWith("(Auto-Backup).asset"))
                {
                    Debug.Log("Dialogue Editor: Not creating an auto-backup. You're already editing the auto-backup file.");
                    return;
                }
                var backupPath = Path.GetDirectoryName(path) + "/" + Path.GetFileNameWithoutExtension(path) + " (Auto-Backup).asset";
                if (!string.IsNullOrEmpty(autoBackupFolder))
                {
                    backupPath = autoBackupFolder + "/" + Path.GetFileNameWithoutExtension(path) + " (Auto-Backup).asset";
                }
                if (debug) Debug.Log("Dialogue Editor: Making auto-backup " + backupPath);
                EditorUtility.DisplayProgressBar("Dialogue Editor Auto-Backup", "Creating auto-backup " + Path.GetFileNameWithoutExtension(backupPath), 0);
                AssetDatabase.DeleteAsset(backupPath);
                AssetDatabase.CopyAsset(path, backupPath);
                AssetDatabase.Refresh();
#if !(UNITY_4_6 || UNITY_4_7 || UNITY_4_8 || UNITY_4_9)
                if (!string.IsNullOrEmpty(AssetImporter.GetAtPath(backupPath).assetBundleName))
                {
                    AssetImporter.GetAtPath(backupPath).assetBundleVariant = string.Empty;
                    AssetImporter.GetAtPath(backupPath).assetBundleName = string.Empty;
                }
#endif
            }
            finally
            {
                EditorUtility.ClearProgressBar();
            }
        }

    }

}