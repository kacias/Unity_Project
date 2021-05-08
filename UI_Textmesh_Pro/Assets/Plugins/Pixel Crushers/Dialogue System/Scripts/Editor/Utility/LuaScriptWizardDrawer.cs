// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEditor;

namespace PixelCrushers.DialogueSystem
{

    [CustomPropertyDrawer(typeof(LuaScriptWizardAttribute))]
    public class LuaScriptWizardDrawer : PropertyDrawer
    {

        private LuaScriptWizard luaWizard = new LuaScriptWizard(EditorTools.selectedDatabase);
        private string currentLuaWizardContent = string.Empty;
        private float lastComputedHeight = 16f;

        private bool ShowReferenceDatabase()
        {
            var attr = attribute as LuaScriptWizardAttribute;
            return (attr != null) ? attr.showReferenceDatabase : false;
        }

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            EditorTools.SetInitialDatabaseIfNull();
            var height = (EditorTools.selectedDatabase == null) ? EditorGUIUtility.singleLineHeight : (lastComputedHeight - EditorGUIUtility.singleLineHeight + 2f);
            if (ShowReferenceDatabase()) height += EditorGUIUtility.singleLineHeight;
            return height;
        }

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            if (string.IsNullOrEmpty(currentLuaWizardContent)) currentLuaWizardContent = property.stringValue;

            EditorGUI.BeginProperty(position, label, property);
            try
            {
                EditorTools.SetInitialDatabaseIfNull();
                try
                {
                    if (ShowReferenceDatabase())
                    {
                        EditorTools.DrawReferenceDatabase(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight));
                        position = new Rect(position.x, position.y + EditorGUIUtility.singleLineHeight, position.width, position.height - EditorGUIUtility.singleLineHeight);
                    }
                    luaWizard.database = EditorTools.selectedDatabase;
                    if (luaWizard.database == null)
                    {
                        EditorGUI.PropertyField(position, property);
                    }
                    else
                    {
                        if (!luaWizard.IsOpen)
                        {
                            luaWizard.OpenWizard(currentLuaWizardContent);
                        }
                        lastComputedHeight = luaWizard.GetHeight() + GUI.skin.textArea.CalcHeight(new GUIContent(currentLuaWizardContent), position.width);
                        currentLuaWizardContent = luaWizard.Draw(position, label, currentLuaWizardContent);
                        property.stringValue = currentLuaWizardContent;
                        if (!luaWizard.IsOpen && !string.IsNullOrEmpty(currentLuaWizardContent))
                        {
                            property.stringValue = currentLuaWizardContent;
                            luaWizard.OpenWizard(currentLuaWizardContent);
                        }
                    }
                }
                catch (System.Exception)
                {
                    // Don't cause editor problems if Lua wizard has problems.
                }
            }
            finally
            {
                EditorGUI.EndProperty();
            }
        }

    }

}
