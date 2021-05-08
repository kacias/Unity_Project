using UnityEngine;
using System.Collections;
using UnityEditor;

namespace PixelCrushers.DialogueSystem
{

    [CustomFieldTypeService.Name("Location")]
    public class CustomFieldType_Location : CustomFieldType
    {
        public override FieldType storeFieldAsType
        {
            get
            {
                return FieldType.Location;
            }
        }
        public override string Draw(string currentValue, DialogueDatabase dataBase)
        {
            //return EditorGUILayout.TextField(currentValue);
            return PixelCrushers.DialogueSystem.DialogueEditor.DialogueEditorWindow.instance.DrawAssetPopup<Location>(currentValue, (dataBase != null) ? dataBase.locations : null, null);
        }

        public override string Draw(Rect rect, string currentValue, DialogueDatabase dataBase)
        {
            return PixelCrushers.DialogueSystem.DialogueEditor.DialogueEditorWindow.instance.DrawAssetPopup<Location>(rect, currentValue, (dataBase != null) ? dataBase.locations : null, null);
        }

    }
}