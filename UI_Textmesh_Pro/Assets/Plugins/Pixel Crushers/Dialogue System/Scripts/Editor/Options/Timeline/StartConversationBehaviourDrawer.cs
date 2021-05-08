#if USE_TIMELINE
#if UNITY_2017_1_OR_NEWER
using UnityEngine;
using UnityEditor;
using UnityEngine.Playables;
using UnityEngine.Timeline;
using UnityEditor.Timeline;

namespace PixelCrushers.DialogueSystem
{

    [CustomPropertyDrawer(typeof(StartConversationBehaviour))]
    public class StartConversationBehaviourDrawer : PropertyDrawer
    {
        private DialogueEntryPicker entryPicker = null;

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            int fieldCount = 4;
            return fieldCount * EditorGUIUtility.singleLineHeight;
        }

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            SerializedProperty conversationProp = property.FindPropertyRelative(nameof(StartConversationBehaviour.conversation));
            SerializedProperty jumpToSpecificEntryProp = property.FindPropertyRelative(nameof(StartConversationBehaviour.jumpToSpecificEntry));
            SerializedProperty entryIDProp = property.FindPropertyRelative(nameof(StartConversationBehaviour.entryID));

            Rect singleFieldRect = new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight);

            if (GUI.Button(singleFieldRect, "Update Duration"))
            {
                UpdateLength(conversationProp.stringValue, jumpToSpecificEntryProp.boolValue, entryIDProp.intValue);
            }

            singleFieldRect.y += EditorGUIUtility.singleLineHeight;
            EditorGUI.PropertyField(singleFieldRect, conversationProp);

            singleFieldRect.y += EditorGUIUtility.singleLineHeight;
            EditorGUI.PropertyField(singleFieldRect, jumpToSpecificEntryProp);

            if (jumpToSpecificEntryProp.boolValue)
            {
                singleFieldRect.y += EditorGUIUtility.singleLineHeight;
                if (entryPicker == null)
                {
                    entryPicker = new DialogueEntryPicker(conversationProp.stringValue);
                }
                if (entryPicker.isValid)
                {
                    entryIDProp.intValue = entryPicker.Draw(singleFieldRect, "Entry ID", entryIDProp.intValue);
                }
                else
                {
                    EditorGUI.PropertyField(singleFieldRect, entryIDProp);
                }
            }
        }

        private void UpdateLength(string conversation, bool jumpToSpecificEntry, int entryID = -1)
        {
            var duration = PreviewUI.GetSequenceDuration(conversation, jumpToSpecificEntry ? entryID : -1);
            Debug.Log("Best estimate duration: " + duration + "sec");
            var clip = TimelineEditor.selectedClip;
            if (clip == null) return;
            var startConversationClip = clip.asset as StartConversationClip;
            if (startConversationClip == null) return;
            startConversationClip.SetDuration(duration);
        }
    }
}
#endif
#endif
