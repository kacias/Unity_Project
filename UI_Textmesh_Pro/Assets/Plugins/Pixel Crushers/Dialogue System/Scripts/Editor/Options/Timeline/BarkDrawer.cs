#if USE_TIMELINE
#if UNITY_2017_1_OR_NEWER
using UnityEngine;
using UnityEditor;

namespace PixelCrushers.DialogueSystem
{

    [CustomPropertyDrawer(typeof(BarkBehaviour))]
    public class BarkDrawer : PropertyDrawer
    {
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            int fieldCount = 3;
            return fieldCount * EditorGUIUtility.singleLineHeight;
        }

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            SerializedProperty useConversationProp = property.FindPropertyRelative("useConversation");
            SerializedProperty conversationProp = property.FindPropertyRelative("conversation");
            SerializedProperty textProp = property.FindPropertyRelative("text");

            Rect singleFieldRect = new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight);
            EditorGUI.PropertyField(singleFieldRect, useConversationProp);

            singleFieldRect.y += EditorGUIUtility.singleLineHeight;
            if (useConversationProp.boolValue)
            {
                EditorGUI.PropertyField(singleFieldRect, conversationProp);
            }
            else
            {
                EditorGUI.PropertyField(singleFieldRect, textProp);
            }
        }
    }
}
#endif
#endif
