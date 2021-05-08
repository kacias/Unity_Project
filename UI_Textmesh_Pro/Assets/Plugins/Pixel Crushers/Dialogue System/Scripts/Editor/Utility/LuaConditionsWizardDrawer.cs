// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEditor;

namespace PixelCrushers.DialogueSystem
{

    [CustomPropertyDrawer(typeof(LuaConditionsWizardAttribute))]
    public class LuaConditionsWizardDrawer : PropertyDrawer
    {

        private LuaConditionWizard luaConditionWizard = new LuaConditionWizard(EditorTools.selectedDatabase);
        private string currentLuaWizardContent = string.Empty;

        private bool ShowReferenceDatabase()
        {
            var attr = attribute as LuaConditionsWizardAttribute;
            return (attr != null) ? attr.showReferenceDatabase : false;
        }

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            EditorTools.SetInitialDatabaseIfNull();
            var height = (EditorTools.selectedDatabase == null) ? EditorGUIUtility.singleLineHeight : luaConditionWizard.GetHeight();
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
                    luaConditionWizard.database = EditorTools.selectedDatabase;
                    if (luaConditionWizard.database == null)
                    {
                        EditorGUI.PropertyField(position, property);
                    }
                    else
                    {
                        if (!luaConditionWizard.IsOpen)
                        {
                            luaConditionWizard.OpenWizard(currentLuaWizardContent);
                        }
                        currentLuaWizardContent = luaConditionWizard.Draw(position, new GUIContent("Lua Condition Wizard", "Use to add Lua conditions below"), currentLuaWizardContent);
                        property.stringValue = currentLuaWizardContent;
                        if (!luaConditionWizard.IsOpen && !string.IsNullOrEmpty(currentLuaWizardContent))
                        {
                            property.stringValue = currentLuaWizardContent;
                            luaConditionWizard.OpenWizard(currentLuaWizardContent);
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
