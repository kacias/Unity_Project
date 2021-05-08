// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEditor;
using System;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// Custom inspector editor for dialogue database assets. Works in coordination
    /// with DialogueEditorWindow.
    /// </summary>
    [CustomEditor(typeof(DialogueDatabase), true)]
    public class DialogueDatabaseEditor : Editor
    {

        public static DialogueDatabaseEditor instance = null;

        private static bool showDefaultInspector = false;

        public enum RefreshSource
        {
            None,
            ChatMapper,
            ArticyDraft,
            AuroraToolset
        };

        /// <summary>
        /// The refresh source for the quick Refresh button.
        /// </summary>
        public RefreshSource refreshSource = RefreshSource.None;

        void OnEnable()
        {
            instance = this;
            EditorApplication.projectWindowItemOnGUI -= OnProjectWindowItemOnGUI;
            EditorApplication.projectWindowItemOnGUI += OnProjectWindowItemOnGUI;
        }

        void OnDisable()
        {
            instance = null;
            EditorApplication.projectWindowItemOnGUI -= OnProjectWindowItemOnGUI;
            if (DialogueEditor.DialogueEditorWindow.instance != null) DialogueEditor.DialogueEditorWindow.instance.ResetLuaWizards();
        }

        /// <summary>
        /// Checks for double-clicks on the dialogue database to open the editor window.
        /// </summary>
        /// <param name="guid">GUID.</param>
        /// <param name="selectionRect">Selection rect.</param>
        private void OnProjectWindowItemOnGUI(string guid, Rect selectionRect)
        {
            if (Event.current.type == EventType.MouseDown && Event.current.clickCount == 2 && selectionRect.Contains(Event.current.mousePosition))
            {
                OpenDialogueEditorWindow();
            }
        }

        /// <summary>
        /// Draws the inspector GUI. Provides extra features such a button to 
        /// open the Dialogue Editor window, and a quick reconvert button.
        /// </summary>
        public override void OnInspectorGUI()
        {
            if (DialogueEditor.DialogueEditorWindow.inspectorSelection != null)
            {
                DrawInspectorSelection();
            }
            else
            {
                DrawExtraFeatures();
                if (showDefaultInspector)
                {
                    DrawDefaultInspector();
                }
                else
                {
                    DrawSummary();
                }
            }
        }

        private void DrawExtraFeatures()
        {
            EditorGUILayout.BeginHorizontal();
            if (GUILayout.Button("Edit...", EditorStyles.miniButton, GUILayout.Width(80))) OpenDialogueEditorWindow();
            GUILayout.FlexibleSpace();
            EditorGUI.BeginDisabledGroup(refreshSource == RefreshSource.None);
            var clickedReconvert = GUILayout.Button("Reconvert...", EditorStyles.miniButton, GUILayout.Width(80));
            EditorGUI.EndDisabledGroup();
            refreshSource = (RefreshSource)EditorGUILayout.EnumPopup(refreshSource, GUILayout.Width(100));
            EditorGUILayout.EndHorizontal();
            EditorWindowTools.DrawHorizontalLine();
            if (GUI.changed) EditorUtility.SetDirty(target);
            showDefaultInspector = EditorGUILayout.ToggleLeft("Show Default Inspector", showDefaultInspector);
            if (clickedReconvert)
            {
                ReconvertDatabase();
                EditorUtility.SetDirty(target);
            }
        }

        private void DrawSummary()
        {
            var database = target as DialogueDatabase;
            if (database == null) return;
            EditorGUI.BeginDisabledGroup(true);
            EditorGUILayout.TextField("Version", database.version);
            EditorGUILayout.TextField("Author", database.author);
            EditorGUILayout.TextField("Description", database.description);
            EditorGUI.EndDisabledGroup();
        }

        private void OpenDialogueEditorWindow()
        {
            PixelCrushers.DialogueSystem.DialogueEditor.DialogueEditorWindow.OpenDialogueEditorWindow();
        }

        private void ReconvertDatabase()
        {
            switch (refreshSource)
            {
                case RefreshSource.ChatMapper: RunChatMapperConverter(); break;
                case RefreshSource.ArticyDraft: RunArticyConverter(); break;
                case RefreshSource.AuroraToolset: RunAuroraConverter(); break;
            }
            if (DialogueEditor.DialogueEditorWindow.instance != null)
            {
                DialogueEditor.DialogueEditorWindow.instance.Repaint();
            }
        }

        private void RunChatMapperConverter()
        {
            bool alreadyOpen = ChatMapperConverter.IsOpen;
            if (!alreadyOpen) ChatMapperConverter.Init();
            ChatMapperConverter.Instance.ConvertChatMapperProjects();
            if (!alreadyOpen) ChatMapperConverter.Instance.Close();
        }

        private void RunArticyConverter()
        {
#if USE_ARTICY
            bool alreadyOpen = Articy.ArticyConverterWindow.IsOpen;
            if (!alreadyOpen) Articy.ArticyConverterWindow.Init();
            Articy.ArticyConverterWindow.Instance.ReviewArticyProject();
            Articy.ArticyConverterWindow.Instance.ConvertArticyProject();
            if (!alreadyOpen) Articy.ArticyConverterWindow.Instance.Close();
#else
            Debug.Log("Dialogue System: Enable articy:draft support first by adding USE_ARTICY to Edit > Project Settings > Player: Other Settings > Scripting Define Symbols.");
#endif
        }

        private void RunAuroraConverter()
        {
#if USE_AURORA
            bool alreadyOpen = Aurora.AuroraConverterWindow.IsOpen;
            if (!alreadyOpen) Aurora.AuroraConverterWindow.Init();
            Aurora.AuroraConverterWindow.Instance.ConvertAuroraFiles();
            if (!alreadyOpen) Aurora.AuroraConverterWindow.Instance.Close();
#else
            Debug.Log("Dialogue System: Enable Aurora support first by adding USE_AURORA to Edit > Project Settings > Player: Other Settings > Scripting Define Symbols.");
#endif
        }

        private void DrawInspectorSelection()
        {
            if (DialogueEditor.DialogueEditorWindow.instance == null) return;
            try
            {
                object selection = DialogueEditor.DialogueEditorWindow.inspectorSelection;
                if (selection == null) return;
                Type selectionType = selection.GetType();
                if (selectionType == typeof(Actor))
                {
                    DrawInspectorSelectionTitle("Actor");
                    var actor = selection as Actor;
                    DialogueEditor.DialogueEditorWindow.instance.DrawAssetSpecificPropertiesFirstPart(actor);
                    DialogueEditor.DialogueEditorWindow.instance.DrawSelectedActorSecondPart();
                }
                else if (selectionType == typeof(Item))
                {
                    DrawInspectorSelectionTitle((selection as Item).IsItem ? "Item" : "Quest");
                    var item = selection as Item;
                    DialogueEditor.DialogueEditorWindow.instance.DrawAssetSpecificPropertiesFirstPart(item);
                    DialogueEditor.DialogueEditorWindow.instance.DrawSelectedItemSecondPart();
                }
                else if (selectionType == typeof(Location))
                {
                    DrawInspectorSelectionTitle("Location");
                    var location = selection as Location;
                    DialogueEditor.DialogueEditorWindow.instance.DrawAssetSpecificPropertiesFirstPart(location);
                    DialogueEditor.DialogueEditorWindow.instance.DrawSelectedLocationSecondPart();
                }
                else if (selectionType == typeof(Conversation))
                {
                    DrawInspectorSelectionTitle("Conversation");
                    if (DialogueEditor.DialogueEditorWindow.instance.showNodeEditor)
                    {
                        if (DialogueEditor.DialogueEditorWindow.instance.DrawConversationProperties())
                        {
                            DialogueEditor.DialogueEditorWindow.instance.UpdateConversationTitles();
                        }
                        DialogueEditor.DialogueEditorWindow.instance.DrawConversationFieldsFoldout();
                    }
                    else
                    {
                        DialogueEditor.DialogueEditorWindow.instance.DrawConversationOutline();
                    }
                }
                else if (selectionType == typeof(DialogueEntry))
                {
                    DrawInspectorSelectionTitle("Dialogue Entry");
                    if (DialogueEditor.DialogueEditorWindow.instance.DrawDialogueEntryInspector())
                    {
                        DialogueEditor.DialogueEditorWindow.instance.ResetDialogueEntryText(selection as DialogueEntry);
                        DialogueEditor.DialogueEditorWindow.instance.Repaint();
                    }
                }
                else if (selectionType == typeof(Link))
                {
                    DrawInspectorSelectionTitle("Link");
                    DialogueEditor.DialogueEditorWindow.instance.DrawSelectedLinkContents();
                }
                else if (selectionType == typeof(DialogueEditor.DialogueEditorWindow.MultinodeSelection))
                {
                    DrawInspectorSelectionTitle("Multiple Dialogue Entries");
                    //--- Now supports multiple entry editing: EditorGUILayout.HelpBox("Dialogue entries cannot be multi-edited.", MessageType.None);
                    if (DialogueEditor.DialogueEditorWindow.instance.DrawMultinodeSelectionInspector())
                    {
                        DialogueEditor.DialogueEditorWindow.instance.ResetDialogueEntryText(selection as DialogueEntry);
                        DialogueEditor.DialogueEditorWindow.instance.Repaint();
                    }
                }
            }
            catch (ArgumentException)
            {
                // Editor may change GUI elements between Layout and Repaint events.
                // Silence the issue since it's effectively harmless.
                // We may in the future check the current event and prevent changes
                // between Layout and Repaint.
            }
        }

        private void DrawInspectorSelectionTitle(string title)
        {
            EditorGUILayout.LabelField(title, EditorStyles.boldLabel);
        }

    }

}
