﻿// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEditor;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// This is the Dialogue System welcome window. It provides easy shortcuts to
    /// tools, documentation, and support.
    /// </summary>
    [InitializeOnLoad]
    public class WelcomeWindow : EditorWindow
    {

        private const string ShowOnStartEditorPrefsKey = "PixelCrushers.DialogueSystem.WelcomeWindow.ShowOnStart";

        private static bool showOnStartPrefs
        {
            get { return EditorPrefs.GetBool(ShowOnStartEditorPrefsKey, true); }
            set { EditorPrefs.SetBool(ShowOnStartEditorPrefsKey, value); }
        }

        [MenuItem("Tools/Pixel Crushers/Dialogue System/Welcome Window", false, -2)]
        public static WelcomeWindow ShowWindow()
        {
            var window = GetWindow<WelcomeWindow>(false, "Welcome");
            window.minSize = new Vector2(370, 530);
            window.showOnStart = true; // Can't check EditorPrefs when constructing window: showOnStartPrefs;
            return window;
        }

        [InitializeOnLoadMethod]
        private static void InitializeOnLoadMethod()
        {
            RegisterWindowCheck();
        }

        private static void RegisterWindowCheck()
        {
            if (!EditorApplication.isPlayingOrWillChangePlaymode)
            {
                EditorApplication.update -= CheckShowWelcomeWindow;
                EditorApplication.update += CheckShowWelcomeWindow;
            }
        }

        private static void CheckShowWelcomeWindow()
        {
            EditorApplication.update -= CheckShowWelcomeWindow;
            if (showOnStartPrefs)
            {
                ShowWindow();
            }
        }

        public bool showOnStart = true;

        private static Texture2D icon = null;
        private static GUIStyle iconButtonStyle = null;

        private void OnGUI()
        {
            DrawBanner();
            DrawButtons();
            DrawDefines();
            DrawFooter();
        }

        private void DrawBanner()
        {
            if (icon == null) icon = DialogueSystemControllerEditor.FindIcon();
            if (icon == null) return;
            if (iconButtonStyle == null)
            {
                iconButtonStyle = new GUIStyle(EditorStyles.label);
                iconButtonStyle.normal.background = icon;
                iconButtonStyle.active.background = icon;
            }
            GUI.DrawTexture(new Rect(5, 5, icon.width, icon.height), icon);
            var version = DialogueSystemMenuItems.GetVersion();
            if (!string.IsNullOrEmpty(version))
            {
                var versionSize = EditorStyles.label.CalcSize(new GUIContent(version));
                GUI.Label(new Rect(position.width - (versionSize.x + 5) - 5, 5, versionSize.x + 5, versionSize.y), version);
            }
        }

        private const float ButtonWidth = 68;
        private const float ButtonHeight = 50;

        private void DrawButtons()
        {
            GUILayout.BeginArea(new Rect(5, 40, position.width - 10, position.height - 40));
            try
            {
                EditorWindowTools.DrawHorizontalLine();
                EditorGUILayout.HelpBox("Welcome to the Dialogue System for Unity!\n\nThe buttons below are shortcuts to commonly-used functions. You can find even more in Tools > Pixel Crushers > Dialogue System.", MessageType.None);
                EditorWindowTools.DrawHorizontalLine();
                GUILayout.Label("Help", EditorStyles.boldLabel);
                GUILayout.BeginHorizontal();
                try
                {
                    if (GUILayout.Button(new GUIContent("Quick\nStart\n", "Open Quick Start tutorial"), GUILayout.Width(ButtonWidth)))
                    {
                        Application.OpenURL("http://www.pixelcrushers.com/dialogue_system/manual2x/html/quick_start.html");
                    }
                    if (GUILayout.Button(new GUIContent("\nManual\n", "Open online manual"), GUILayout.Width(ButtonWidth)))
                    {
                        Application.OpenURL("http://www.pixelcrushers.com/dialogue_system/manual2x/html/");
                    }
                    if (GUILayout.Button(new GUIContent("\nVideos\n", "Open video tutorial list"), GUILayout.Width(ButtonWidth)))
                    {
                        Application.OpenURL("http://www.pixelcrushers.com/dialogue-system-tutorials/");
                    }
                    if (GUILayout.Button(new GUIContent("Scripting\nReference\n", "Open scripting & API reference"), GUILayout.Width(ButtonWidth)))
                    {
                        Application.OpenURL("http://www.pixelcrushers.com/dialogue_system/manual2x/html/scripting.html");
                    }
                    if (GUILayout.Button(new GUIContent("\nForum\n", "Go to the Pixel Crushers forum"), GUILayout.Width(ButtonWidth)))
                    {
                        Application.OpenURL("http://www.pixelcrushers.com/phpbb");
                    }
                }
                finally
                {
                    GUILayout.EndHorizontal();
                }
                EditorWindowTools.DrawHorizontalLine();
                GUILayout.Label("Wizards & Resources", EditorStyles.boldLabel);
                GUILayout.BeginHorizontal();
                try
                {
                    if (GUILayout.Button(new GUIContent("Dialogue\nEditor\n", "Open the Dialogue Editor window"), GUILayout.Width(ButtonWidth)))
                    {
                        PixelCrushers.DialogueSystem.DialogueEditor.DialogueEditorWindow.OpenDialogueEditorWindow();
                    }
                    if (GUILayout.Button(new GUIContent("Dialogue\nManager\nWizard", "Configure a Dialogue Manager, the component that coordinates all Dialogue System activity"), GUILayout.Width(ButtonWidth)))
                    {
                        DialogueManagerWizard.Init();
                    }
                    if (GUILayout.Button(new GUIContent("Player\nSetup\nWizard", "Configure a player GameObject to work with the Dialogue System"), GUILayout.Width(ButtonWidth)))
                    {
                        PlayerSetupWizard.Init();
                    }
                    if (GUILayout.Button(new GUIContent("NPC\nSetup\nWizard", "Configure a non-player character or other interactive GameObject to work with the Dialogue System"), GUILayout.Width(ButtonWidth)))
                    {
                        NPCSetupWizard.Init();
                    }
                    if (GUILayout.Button(new GUIContent("Free\nExtras\n", "Go to the Dialogue System free extras website"), GUILayout.Width(ButtonWidth)))
                    {
                        Application.OpenURL("http://www.pixelcrushers.com/dialogue-system-extras/");
                    }
                }
                finally
                {
                    GUILayout.EndHorizontal();
                }
                EditorWindowTools.DrawHorizontalLine();
            }
            finally
            {
                GUILayout.EndArea();
            }
        }

        private void DrawDefines()
        {
            GUILayout.BeginArea(new Rect(5, 256, position.width - 10, position.height - 256));
            EditorGUILayout.LabelField("Current Build Target: " + ObjectNames.NicifyVariableName(EditorUserBuildSettings.activeBuildTarget.ToString()), EditorStyles.boldLabel);

            var define_USE_PHYSICS2D = false;
            var define_USE_NEW_INPUT = false;
            var define_USE_ADDRESSABLES = false;
            var define_USE_TIMELINE = false;
            var define_USE_CINEMACHINE = false;
            var define_USE_ARTICY = false;
            var define_USE_AURORA = false;
            var define_USE_TWINE = false;
            var define_TMP_PRESENT = false;
            var define_USE_STM = false;
            var defines = PlayerSettings.GetScriptingDefineSymbolsForGroup(EditorUserBuildSettings.selectedBuildTargetGroup).Split(';');
            for (int i = 0; i < defines.Length; i++)
            {
                if (string.Equals(ScriptingSymbolNames.USE_PHYSICS2D, defines[i].Trim())) define_USE_PHYSICS2D = true;
                if (string.Equals(ScriptingSymbolNames.USE_NEW_INPUT, defines[i].Trim())) define_USE_NEW_INPUT = true;
                if (string.Equals(ScriptingSymbolNames.USE_ADDRESSABLES, defines[i].Trim())) define_USE_ADDRESSABLES = true;
                if (string.Equals(ScriptingSymbolNames.USE_TIMELINE, defines[i].Trim())) define_USE_TIMELINE = true;
                if (string.Equals(ScriptingSymbolNames.USE_CINEMACHINE, defines[i].Trim())) define_USE_CINEMACHINE = true;
                if (string.Equals(ScriptingSymbolNames.USE_ARTICY, defines[i].Trim())) define_USE_ARTICY = true;
                if (string.Equals(ScriptingSymbolNames.USE_AURORA, defines[i].Trim())) define_USE_AURORA = true;
                if (string.Equals(ScriptingSymbolNames.USE_TWINE, defines[i].Trim())) define_USE_TWINE = true;
                if (string.Equals(ScriptingSymbolNames.TMP_PRESENT, defines[i].Trim())) define_TMP_PRESENT = true;
                if (string.Equals(ScriptingSymbolNames.USE_STM, defines[i].Trim())) define_USE_STM = true;
            }
#if EVALUATION_VERSION || !UNITY_2018_1_OR_NEWER
            define_USE_PHYSICS2D = true;
            define_USE_NEW_INPUT = false;
            define_USE_ADDRESSABLES = false;
            define_TMP_PRESENT = false;
            define_USE_STM = false;
            define_USE_ARTICY = true;
            define_USE_AURORA = true;
            define_USE_TWINE = true;
#endif

            EditorGUI.BeginChangeCheck();
            EditorGUILayout.LabelField(new GUIContent("Enable support for:", "NOTE: Enables Dialogue System support. You must still enable each package in Package Manager."));
#if UNITY_2018_1_OR_NEWER && !EVALUATION_VERSION
            var new_USE_PHYSICS2D = EditorGUILayout.ToggleLeft("2D Physics (USE_PHYSICS2D)", define_USE_PHYSICS2D);
            var new_USE_NEW_INPUT = EditorGUILayout.ToggleLeft("New Input System (USE_NEW_INPUT)", define_USE_NEW_INPUT);
            var new_USE_ADDRESSABLES = EditorGUILayout.ToggleLeft("Addressables (USE_ADDRESSABLES)", define_USE_ADDRESSABLES);
#else
            EditorGUI.BeginDisabledGroup(true);
            EditorGUILayout.ToggleLeft(new GUIContent("2D Physics (USE_PHYSICS2D)", "Support is built in for evaluation version or Unity 2017 and earlier."), define_USE_PHYSICS2D);
            EditorGUILayout.ToggleLeft(new GUIContent("New Input System (USE_NEW_INPUT)", "New Input System support not available in evaluation version."), define_USE_NEW_INPUT);
            EditorGUI.EndDisabledGroup();
            var new_USE_PHYSICS2D = define_USE_PHYSICS2D;
            var new_USE_NEW_INPUT = define_USE_NEW_INPUT;
            var new_USE_ADDRESSABLES = define_USE_ADDRESSABLES;
#endif

            var new_USE_TIMELINE = EditorGUILayout.ToggleLeft(new GUIContent("Timeline (USE_TIMELINE)", "Enable Dialogue System support for Timeline. You must still enable Timeline in Package Manager."), define_USE_TIMELINE);
            var new_USE_CINEMACHINE = EditorGUILayout.ToggleLeft(new GUIContent("Cinemachine (USE_CINEMACHINE)", "Enable Dialogue System support for Cinemachine. You must still enable Cinemachine in Package Manager."), define_USE_CINEMACHINE);

#if EVALUATION_VERSION
            EditorGUI.BeginDisabledGroup(true);
            EditorGUILayout.ToggleLeft(new GUIContent("articy:draft (USE_ARTICY)", "Enable Dialogue System support for articy:draft XML import."), define_USE_ARTICY);
            EditorGUILayout.ToggleLeft(new GUIContent("Aurora Toolset (USE_AURORA)", "Enable Dialogue System support for Aurora (Neverwinter Nights) Toolset import."), define_USE_AURORA);
            EditorGUI.EndDisabledGroup();
            var new_USE_ARTICY = define_USE_ARTICY;
            var new_USE_AURORA = define_USE_AURORA;
            var new_USE_TWINE = define_USE_TWINE;
#else
            var new_USE_ARTICY = EditorGUILayout.ToggleLeft(new GUIContent("articy:draft (USE_ARTICY)", "Enable Dialogue System support for articy:draft XML import."), define_USE_ARTICY);
            var new_USE_AURORA = EditorGUILayout.ToggleLeft(new GUIContent("Aurora Toolset (USE_AURORA)", "Enable Dialogue System support for Aurora (Neverwinter Nights) Toolset import."), define_USE_AURORA);
            var new_USE_TWINE = EditorGUILayout.ToggleLeft(new GUIContent("Twine (USE_TWINE)", "Enable Dialogue System support for Twine import."), define_USE_TWINE);
#endif

#if EVALUATION_VERSION
            EditorGUI.BeginDisabledGroup(true);
            EditorGUILayout.ToggleLeft(new GUIContent("TextMesh Pro (TMP_PRESENT)", "TextMesh Pro support not available in evaluation version."), define_TMP_PRESENT);
            EditorGUILayout.ToggleLeft(new GUIContent("Super Text Mesh (USE_STM)", "Super Text Mesh support not available in evaluation version."), define_USE_STM);
            EditorGUI.EndDisabledGroup();
            var new_TMP_PRESENT = define_TMP_PRESENT;
            var new_USE_STM = define_USE_STM;
#else
            var new_TMP_PRESENT = EditorGUILayout.ToggleLeft(new GUIContent("TextMesh Pro (TMP_PRESENT)", "Enable Dialogue System support for TextMesh Pro. You must still enable TextMesh Pro in Package Manager."), define_TMP_PRESENT);
            var new_USE_STM = EditorGUILayout.ToggleLeft(new GUIContent("Super Text Mesh (USE_STM)", "Enable Dialogue System support for Super Text Mesh. Requires Super Text Mesh in project."), define_USE_STM);
#endif
            var changed = EditorGUI.EndChangeCheck();

            if (new_USE_PHYSICS2D != define_USE_PHYSICS2D) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_PHYSICS2D, new_USE_PHYSICS2D);
            if (new_USE_NEW_INPUT != define_USE_NEW_INPUT) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_NEW_INPUT, new_USE_NEW_INPUT);
            if (new_USE_ADDRESSABLES != define_USE_ADDRESSABLES) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_ADDRESSABLES, new_USE_ADDRESSABLES);
            if (new_USE_TIMELINE != define_USE_TIMELINE) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_TIMELINE, new_USE_TIMELINE, true);
            if (new_USE_CINEMACHINE != define_USE_CINEMACHINE) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_CINEMACHINE, new_USE_CINEMACHINE);
            if (new_USE_ARTICY != define_USE_ARTICY) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_ARTICY, new_USE_ARTICY);
            if (new_USE_AURORA != define_USE_AURORA) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_AURORA, new_USE_AURORA);
            if (new_USE_TWINE != define_USE_TWINE) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_TWINE, new_USE_TWINE);
            if (new_TMP_PRESENT != define_TMP_PRESENT) MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.TMP_PRESENT, new_TMP_PRESENT, true);
            if (new_USE_STM != define_USE_STM)
            {
                if (new_USE_STM)
                {
                    if (EditorUtility.DisplayDialog("Enable Super Text Mesh Support", "This will enable Super Text Mesh support. Your project must already contain Super Text Mesh.\n\n*IMPORTANT*: Before pressing OK, you MUST move the Clavian folder into the Plugins folder!\n\nTo continue, press OK. If you need to install Super Text Mesh or move the folder first, press Cancel.", "OK", "Cancel"))
                    {
                        MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_STM, new_USE_STM);
                    }
                    else
                    {
                        changed = false;
                    }
                }
                else
                {
                    MoreEditorUtility.ToggleScriptingDefineSymbol(ScriptingSymbolNames.USE_STM, new_USE_STM);
                }
            }

            EditorWindowTools.DrawHorizontalLine();
            GUILayout.EndArea();

            if (changed) EditorTools.ReimportScripts();
        }

        private void DrawFooter()
        {
            var newShowOnStart = EditorGUI.ToggleLeft(new Rect(5, position.height - 5 - EditorGUIUtility.singleLineHeight, position.width - (70+150), EditorGUIUtility.singleLineHeight), "Show at start", showOnStart);
            if (newShowOnStart != showOnStart)
            {
                showOnStart = newShowOnStart;
                showOnStartPrefs = newShowOnStart;
            }
            if (GUI.Button(new Rect(position.width - 80, position.height - 5 - EditorGUIUtility.singleLineHeight, 70, EditorGUIUtility.singleLineHeight), new GUIContent("Support", "Contact the developer for support")))
            {
                Application.OpenURL("http://www.pixelcrushers.com/support-form/");
            }
#if EVALUATION_VERSION
            if (GUI.Button(new Rect(position.width - 154, position.height - 5 - EditorGUIUtility.singleLineHeight, 70, EditorGUIUtility.singleLineHeight), new GUIContent("Buy", "Buy a license")))
            {
                Application.OpenURL("https://assetstore.unity.com/packages/tools/ai/dialogue-system-for-unity-11672");
            }
#endif
        }

    }

}
