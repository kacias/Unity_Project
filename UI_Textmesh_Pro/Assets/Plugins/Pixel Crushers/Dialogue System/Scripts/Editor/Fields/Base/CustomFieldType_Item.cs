using UnityEngine;
using System.Collections;
using UnityEditor;
using PixelCrushers.DialogueSystem;


namespace PixelCrushers.DialogueSystem
{

    [CustomFieldTypeService.Name("Item")]
    public class CustomFieldType_Item : CustomFieldType
    {
        public override FieldType storeFieldAsType
        {
            get
            {
                return FieldType.Item;
            }
        }
        public override string Draw(string currentValue, DialogueDatabase dataBase)
        {
            return PixelCrushers.DialogueSystem.DialogueEditor.DialogueEditorWindow.instance.DrawAssetPopup<Item>(currentValue, (dataBase != null) ? dataBase.items : null, null);
        }

        public override string Draw(Rect rect, string currentValue, DialogueDatabase dataBase)
        {
            return PixelCrushers.DialogueSystem.DialogueEditor.DialogueEditorWindow.instance.DrawAssetPopup<Item>(rect, currentValue, (dataBase != null) ? dataBase.items : null, null);
        }

    }
}