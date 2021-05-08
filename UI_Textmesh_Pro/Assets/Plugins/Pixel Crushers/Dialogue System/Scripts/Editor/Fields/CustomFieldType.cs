using UnityEngine;
using System.Collections;
using UnityEditor;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// The abstract base custom field type.
    /// </summary>
    public abstract class CustomFieldType
    {

        public virtual FieldType storeFieldAsType
        {
            get
            {
                return FieldType.Text;
            }
        }

        public abstract string Draw(string currentValue, DialogueDatabase dataBase);

        public virtual string Draw(GUIContent label, string currentValue, DialogueDatabase dataBase)
        {
            return Draw(currentValue, dataBase);
        }

        public virtual string Draw(Rect rect, string currentValue, DialogueDatabase dataBase)
        {
            Debug.LogWarning("Dialogue System: API change notice: Since version 1.6.8, CustomFieldType has added an overload to Draw() that uses a Rect. Please add an implementation of this overload to " + GetType().Name + ".");
            return EditorGUI.TextField(rect, currentValue);
        }
    }

}
