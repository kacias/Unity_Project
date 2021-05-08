// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEditor;
using UnityEditorInternal;
using System.Collections.Generic;

namespace PixelCrushers.DialogueSystem.DialogueEditor
{

    /// <summary>
    /// This part of the Dialogue Editor window handles the Variables tab. Variables are
    /// just treated as basic assets, so it uses the generic asset methods.
    /// </summary>
    public partial class DialogueEditorWindow
    {
        [SerializeField]
        private DialogueEditorVariableView variableView;

        private void ResetVariableSection()
        {
            variableView = new DialogueEditorVariableView();
            variableView.Initialize(database, template, true);
        }

        public void RefreshVariableView()
        {
            variableView.RefreshView();
            Repaint();
        }

        private void DrawVariableSection()
        {
            if (variableView == null || (variableView.database == null && database != null))
            {
                ResetVariableSection();
            }
            variableView.Draw();
        }

        //[SerializeField]
        //private bool showVariableGroups = false;

        //[SerializeField]
        //private List<string> variableGroupFoldouts = new List<string>();

        //[SerializeField]
        //private AssetFoldouts variableFoldouts = new AssetFoldouts();

        //[SerializeField]
        //private string variableFilter = string.Empty;

        //private double lastTimeVariableNamesChecked = 0;
        //private const double VariableNameCheckFrequency = 0.5f;
        //private HashSet<string> conflictedVariableNames = new HashSet<string>();

        //// VariableGroup defined below.

        //private const string UngroupedVariableGroup = "(Ungrouped)";
        //private Dictionary<string, VariableGroup> m_variableGroups = null;
        //private Dictionary<string, VariableGroup> variableGroups
        //{
        //    get
        //    {
        //        if (m_variableGroups == null) m_variableGroups = GenerateGroupedVariableList();
        //        return m_variableGroups;
        //    }
        //}

        //private void ResetVariableSection()
        //{
        //    m_variableGroups = null;
        //}

        //private List<Variable> GenerateFilteredVariableList()
        //{
        //    var list = new List<Variable>();
        //    if (database == null) return list;
        //    if (string.IsNullOrEmpty(variableFilter))
        //    {
        //        list.AddRange(database.variables);
        //    }
        //    else
        //    {
        //        for (int i = 0; i < database.variables.Count; i++)
        //        {
        //            var variable = database.variables[i];
        //            if (EditorTools.IsAssetInFilter(variable, variableFilter))
        //            {
        //                list.Add(variable);
        //            }
        //        }
        //    }
        //    return list;
        //}

        //private Dictionary<string, VariableGroup> GenerateGroupedVariableList()
        //{
        //    var dict = new Dictionary<string, VariableGroup>();
        //    // If no filter and not showing groups, use database.variables directly to allow dragging:
        //    if (string.IsNullOrEmpty(variableFilter) && !showVariableGroups)
        //    {
        //        var variableGroup = new VariableGroup();
        //        variableGroup.group = UngroupedVariableGroup;
        //        variableGroup.variableList = database.variables;
        //        dict.Add(UngroupedVariableGroup, variableGroup);
        //    }
        //    else
        //    {
        //        var filteredVariableList = GenerateFilteredVariableList();
        //        for (int i = 0; i < filteredVariableList.Count; i++)
        //        {
        //            var variable = filteredVariableList[i];
        //            var variableName = variable.Name;
        //            var dotPos = variable.Name.IndexOf('.');
        //            var group = (showVariableGroups && dotPos > 0) ? variableName.Substring(0, dotPos - 1) : UngroupedVariableGroup;
        //            var variableGroup = new VariableGroup();
        //            variableGroup.group = group;
        //            if (!dict.ContainsKey(group)) dict.Add(group, variableGroup);
        //            dict[group].variableList.Add(variable);
        //        }
        //    }
        //    return dict;
        //}

        //private void DrawVariableSection()
        //{
        //    EditorGUILayout.BeginHorizontal();
        //    EditorGUILayout.LabelField("Variables", EditorStyles.boldLabel);
        //    GUILayout.FlexibleSpace();

        //    EditorGUI.BeginChangeCheck();
        //    variableFilter = EditorGUILayout.TextField(GUIContent.none, variableFilter, "ToolbarSeachTextField");
        //    GUILayout.Label(string.Empty, "ToolbarSeachCancelButtonEmpty");
        //    if (EditorGUI.EndChangeCheck())
        //    {
        //        ResetVariableSection();
        //    }

        //    DrawVariableMenu();
        //    EditorGUILayout.EndHorizontal();
        //    if (database.syncInfo.syncVariables) DrawVariableSyncDatabase();
        //    DrawVariables();
        //}

        //private void DrawVariableMenu()
        //{
        //    if (GUILayout.Button("Menu", "MiniPullDown", GUILayout.Width(56)))
        //    {
        //        GenericMenu menu = new GenericMenu();
        //        menu.AddItem(new GUIContent("New Variable"), false, AddNewVariable);
        //        menu.AddItem(new GUIContent("Sort/By Name"), false, SortVariablesByName);
        //        menu.AddItem(new GUIContent("Sort/By ID"), false, SortVariablesByID);
        //        menu.AddItem(new GUIContent("Sync From DB"), database.syncInfo.syncVariables, ToggleSyncVariablesFromDB);
        //        menu.AddItem(new GUIContent("Use Group Foldouts"), showVariableGroups, ToggleShowVariableGroups);
        //        menu.AddItem(new GUIContent("Variable Viewer..."), false, () => { VariableViewWindow.OpenVariableViewWindow(); });
        //        menu.ShowAsContext();
        //    }
        //}

        //private void AddNewVariable()
        //{
        //    CreateNewVariable();
        //}

        //private void SortVariablesByName()
        //{
        //    database.variables.Sort((x, y) => x.Name.CompareTo(y.Name));
        //    ResetVariableSection();
        //    SetDatabaseDirty("Sort Variables by Name");
        //}

        //private void SortVariablesByID()
        //{
        //    database.variables.Sort((x, y) => x.id.CompareTo(y.id));
        //    ResetVariableSection();
        //    SetDatabaseDirty("Sort Variables by ID");
        //}

        //private void ToggleSyncVariablesFromDB()
        //{
        //    database.syncInfo.syncVariables = !database.syncInfo.syncVariables;
        //    SetDatabaseDirty("Toggle Sync Variables");
        //}

        //private void ToggleShowVariableGroups()
        //{
        //    showVariableGroups = !showVariableGroups;
        //    ResetVariableSection();
        //}

        //private void DrawVariableSyncDatabase()
        //{
        //    EditorGUILayout.BeginHorizontal();
        //    DialogueDatabase newDatabase = EditorGUILayout.ObjectField(new GUIContent("Sync From", "Database to sync variables from."),
        //                                                               database.syncInfo.syncVariablesDatabase, typeof(DialogueDatabase), false) as DialogueDatabase;
        //    if (newDatabase != database.syncInfo.syncVariablesDatabase)
        //    {
        //        database.syncInfo.syncVariablesDatabase = newDatabase;
        //        database.SyncVariables();
        //        SetDatabaseDirty("Change Sync Variables Database");
        //    }
        //    if (GUILayout.Button(new GUIContent("Sync Now", "Syncs from the database."), EditorStyles.miniButton, GUILayout.Width(72)))
        //    {
        //        database.SyncVariables();
        //        ResetVariableSection();
        //        SetDatabaseDirty("Manual Sync Variables");
        //    }
        //    EditorGUILayout.EndHorizontal();
        //}

        //private void DrawVariables()
        //{
        //    if (EditorApplication.timeSinceStartup - lastTimeVariableNamesChecked >= VariableNameCheckFrequency)
        //    {
        //        lastTimeVariableNamesChecked = EditorApplication.timeSinceStartup;
        //        CheckVariableNamesForConflicts();
        //    }
        //    if (variableGroups.Count == 0)
        //    {
        //        return;
        //    }
        //    else if (!showVariableGroups || (variableGroups.Count == 1 && variableGroups.ContainsKey(UngroupedVariableGroup)))
        //    {
        //        variableGroups[UngroupedVariableGroup].Draw(false, string.IsNullOrEmpty(variableFilter));
        //    }
        //    else
        //    {
        //        foreach (var variableGroup in variableGroups.Values)
        //        {
        //            variableGroup.Draw(true, false);
        //        }
        //    }
        //}

        //private void CheckVariableNamesForConflicts()
        //{
        //    if (database == null) return;
        //    conflictedVariableNames.Clear();
        //    var variableNames = new HashSet<string>();
        //    for (int i = 0; i < database.variables.Count; i++)
        //    {
        //        var variableName = database.variables[i].Name;
        //        if (variableNames.Contains(variableName)) conflictedVariableNames.Add(variableName);
        //        variableNames.Add(variableName);
        //    }
        //}

        //private class VariableGroup
        //{
        //    public string group = string.Empty;
        //    public List<Variable> variableList = new List<Variable>();
        //    public ReorderableList reorderableList;

        //    public void Draw(bool drawFoldout, bool draggable)
        //    {
        //        if (drawFoldout)
        //        {
        //            var foldout = instance.variableGroupFoldouts.Contains(group);
        //            var newFoldout = EditorGUILayout.Foldout(foldout, group);
        //            if (newFoldout != foldout)
        //            {
        //                foldout = newFoldout;
        //                if (foldout) instance.variableGroupFoldouts.Add(group);
        //                else instance.variableGroupFoldouts.Remove(group);
        //            }
        //            if (!foldout) return;
        //        }
        //        if (reorderableList == null)
        //        {
        //            reorderableList = new ReorderableList(variableList, typeof(Variable), draggable, false, true, true);
        //            reorderableList.drawHeaderCallback = OnDrawVariableHeader;
        //            reorderableList.drawElementCallback = OnDrawVariableElement;
        //            reorderableList.onAddDropdownCallback = OnAddVariableDropdown;
        //            reorderableList.onRemoveCallback = OnRemoveVariable;
        //        }
        //        EditorWindowTools.StartIndentedSection();
        //        reorderableList.DoLayoutList();
        //        EditorWindowTools.EndIndentedSection();
        //    }

        //    private void OnDrawVariableHeader(Rect rect)
        //    {
        //        var handleWidth = 16f;
        //        var wholeWidth = rect.width - 6f - handleWidth;
        //        var typeWidth = Mathf.Min(wholeWidth / 4, 80f);
        //        var fieldWidth = (wholeWidth - typeWidth) / 3;
        //        EditorGUI.LabelField(new Rect(rect.x + handleWidth, rect.y, fieldWidth, EditorGUIUtility.singleLineHeight), "Name");
        //        EditorGUI.LabelField(new Rect(rect.x + handleWidth + fieldWidth + 2, rect.y, fieldWidth, EditorGUIUtility.singleLineHeight), "Initial Value");
        //        EditorGUI.LabelField(new Rect(rect.x + handleWidth + 2 * (fieldWidth + 2), rect.y, fieldWidth, EditorGUIUtility.singleLineHeight), "Description");
        //        EditorGUI.LabelField(new Rect(rect.x + handleWidth + 3 * (fieldWidth + 2), rect.y, typeWidth, EditorGUIUtility.singleLineHeight), "Type");
        //    }

        //    private void OnDrawVariableElement(Rect rect, int index, bool isActive, bool isFocused)
        //    {
        //        if (!(reorderableList != null && 0 <= index && index < reorderableList.count)) return;
        //        var variable = reorderableList.list[index] as Variable;
        //        if (variable == null) return;
        //        var nameControl = "VarName" + index;
        //        var descriptionControl = "VarDescription" + index;
        //        if (!variable.FieldExists("Initial Value")) variable.fields.Add(new Field("Initial Value", string.Empty, FieldType.Text));
        //        if (!variable.FieldExists("Description")) variable.fields.Add(new Field("Description", string.Empty, FieldType.Text));
        //        var initialValueField = Field.Lookup(variable.fields, "Initial Value");
        //        var descriptionField = Field.Lookup(variable.fields, "Description");
        //        var wholeWidth = rect.width - 6f;
        //        var typeWidth = Mathf.Min(wholeWidth / 4, 80f);
        //        var fieldWidth = (wholeWidth - typeWidth) / 3;
        //        var originalColor = GUI.backgroundColor;
        //        var variableName = variable.Name;
        //        var conflicted = instance.conflictedVariableNames.Contains(variableName);
        //        if (conflicted) GUI.backgroundColor = Color.red;
        //        EditorGUI.BeginChangeCheck();
        //        GUI.SetNextControlName(nameControl);
        //        variable.Name = EditorGUI.TextField(new Rect(rect.x, rect.y + 2, fieldWidth, EditorGUIUtility.singleLineHeight), variableName);
        //        if (EditorGUI.EndChangeCheck()) instance.ResetVariableSection();
        //        if (conflicted) GUI.backgroundColor = originalColor;
        //        initialValueField.value = CustomFieldTypeService.DrawField(new Rect(rect.x + fieldWidth + 2, rect.y + 2, fieldWidth, EditorGUIUtility.singleLineHeight), initialValueField, instance.database);
        //        GUI.SetNextControlName(descriptionControl);
        //        descriptionField.value = EditorGUI.TextField(new Rect(rect.x + 2 * (fieldWidth + 2), rect.y + 2, fieldWidth, EditorGUIUtility.singleLineHeight), descriptionField.value);
        //        CustomFieldTypeService.DrawFieldType(new Rect(rect.x + 3 * (fieldWidth + 2), rect.y + 2, typeWidth, EditorGUIUtility.singleLineHeight), initialValueField);
        //        var focusedControl = GUI.GetNameOfFocusedControl();
        //        if (string.Equals(nameControl, focusedControl) || string.Equals(descriptionControl, focusedControl))
        //        {
        //            inspectorSelection = variable;
        //        }
        //    }

        //    private void OnRemoveVariable(ReorderableList list)
        //    {
        //        if (!(reorderableList != null && 0 <= list.index && list.index < reorderableList.count)) return;
        //        var variable = reorderableList.list[list.index] as Variable;
        //        if (variable == null) return;
        //        if (EditorUtility.DisplayDialog(string.Format("Delete '{0}'?", EditorTools.GetAssetName(variable)), "Are you sure you want to delete this?", "Delete", "Cancel"))
        //        {
        //            instance.database.variables.Remove(variable);
        //            instance.SetDatabaseDirty("Delete Variable");
        //            instance.ResetVariableSection();
        //        }
        //    }

        //    private void OnAddVariableDropdown(Rect buttonRect, ReorderableList list)
        //    {
        //        var menu = new GenericMenu();
        //        string[] fieldTypes = CustomFieldTypeService.GetDialogueSystemTypes();
        //        string[] fieldPublicNames = CustomFieldTypeService.GetDialogueSystemPublicNames();
        //        for (int i = 0; i < fieldPublicNames.Length; i++)
        //        {
        //            var fieldType = (i < fieldTypes.Length) ? fieldTypes[i] : "CustomFieldType_Text";
        //            menu.AddItem(new GUIContent(fieldPublicNames[i]), false, OnSelectVariableTypeToAdd, fieldType);
        //        }
        //        menu.ShowAsContext();
        //    }

        //    private void OnSelectVariableTypeToAdd(object data)
        //    {
        //        if (data == null || data.GetType() != typeof(string)) return;
        //        var typeName = (string)data;
        //        Dictionary<string, CustomFieldType> types = CustomFieldTypeService.GetTypesDictionary();
        //        var variable = instance.CreateNewVariable();
        //        var field = Field.Lookup(variable.fields, "Initial Value");
        //        if (types.ContainsKey(typeName) && field != null)
        //        {
        //            field.type = types[typeName].storeFieldAsType;
        //            field.typeString = typeName;
        //        }
        //    }
        //}

        //private Variable CreateNewVariable()
        //{
        //    Variable newVariable = AddNewAsset<Variable>(database.variables);
        //    if (!Field.FieldExists(newVariable.fields, "Name")) newVariable.fields.Add(new Field("Name", string.Empty, FieldType.Text));
        //    if (!Field.FieldExists(newVariable.fields, "Initial Value")) newVariable.fields.Add(new Field("Initial Value", string.Empty, FieldType.Text));
        //    if (!Field.FieldExists(newVariable.fields, "Description")) newVariable.fields.Add(new Field("Description", string.Empty, FieldType.Text));
        //    int index = database.variables.Count - 1;
        //    if (!variableFoldouts.properties.ContainsKey(index)) variableFoldouts.properties.Add(index, false);
        //    variableFoldouts.properties[index] = true;
        //    SetDatabaseDirty("Add New Variable");
        //    ResetVariableSection();
        //    return newVariable;
        //}

        //#region Old Variable Drawing Format

        ////private void DrawVariablesTraditional()
        ////{
        ////    List<Variable> assets = database.variables;
        ////    AssetFoldouts foldouts = variableFoldouts;
        ////    EditorWindowTools.StartIndentedSection();
        ////    Variable assetToRemove = null;
        ////    int indexToMoveUp = -1;
        ////    int indexToMoveDown = -1;
        ////    for (int index = 0; index < assets.Count; index++)
        ////    {
        ////        Variable asset = assets[index];
        ////        EditorGUILayout.BeginHorizontal();
        ////        if (!foldouts.properties.ContainsKey(index)) foldouts.properties.Add(index, false);
        ////        foldouts.properties[index] = EditorGUILayout.Foldout(foldouts.properties[index], GetAssetName(asset));
        ////        EditorGUI.BeginDisabledGroup(index >= (assets.Count - 1));
        ////        if (GUILayout.Button(new GUIContent("↓", "Move down"), GUILayout.Width(16))) indexToMoveDown = index;
        ////        EditorGUI.EndDisabledGroup();
        ////        EditorGUI.BeginDisabledGroup(index == 0);
        ////        if (GUILayout.Button(new GUIContent("↑", "Move up"), GUILayout.Width(16))) indexToMoveUp = index;
        ////        EditorGUI.EndDisabledGroup();
        ////        if (GUILayout.Button(new GUIContent(" ", string.Format("Delete {0}.", GetAssetName(asset))), "OL Minus", GUILayout.Width(16))) assetToRemove = asset;
        ////        EditorGUILayout.EndHorizontal();
        ////        if (foldouts.properties[index]) DrawVariable(asset, index, foldouts);
        ////    }
        ////    if (indexToMoveDown >= 0)
        ////    {
        ////        Variable asset = assets[indexToMoveDown];
        ////        assets.RemoveAt(indexToMoveDown);
        ////        assets.Insert(indexToMoveDown + 1, asset);
        ////        SetDatabaseDirty("Move Variable Down");
        ////    }
        ////    else if (indexToMoveUp >= 0)
        ////    {
        ////        Variable asset = assets[indexToMoveUp];
        ////        assets.RemoveAt(indexToMoveUp);
        ////        assets.Insert(indexToMoveUp - 1, asset);
        ////        SetDatabaseDirty("Move Variable Up");
        ////    }
        ////    else if (assetToRemove != null)
        ////    {
        ////        if (EditorUtility.DisplayDialog(string.Format("Delete '{0}'?", GetAssetName(assetToRemove)), "Are you sure you want to delete this?", "Delete", "Cancel"))
        ////        {
        ////            assets.Remove(assetToRemove);
        ////            SetDatabaseDirty("Delete Variable");
        ////        }
        ////    }
        ////    EditorWindowTools.EndIndentedSection();
        ////}

        ////private void DrawVariable(Variable asset, int index, AssetFoldouts foldouts)
        ////{
        ////    EditorWindowTools.StartIndentedSection();
        ////    EditorGUILayout.BeginVertical("button");
        ////    List<Field> fields = asset.fields;
        ////    for (int i = 0; i < fields.Count; i++)
        ////    {
        ////        EditorGUILayout.BeginHorizontal();
        ////        if (IsTextAreaField(fields[i]))
        ////        {
        ////            DrawTextAreaFirstPart(fields[i], false);
        ////            DrawTextAreaSecondPart(fields[i]);
        ////        }
        ////        else {
        ////            DrawField(fields[i], false);
        ////        }
        ////        EditorGUILayout.EndHorizontal();
        ////    }
        ////    EditorGUILayout.EndVertical();
        ////    EditorWindowTools.EndIndentedSection();
        ////}

        //#endregion

    }

}