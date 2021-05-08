// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// StandardDialogueUI input field implementation.
    /// </summary>
    [AddComponentMenu("")] // Use wrapper.
    public class StandardUIInputField : UIPanel, ITextFieldUI
    {

        [Tooltip("(Optional) Text field panel.")]
        public UnityEngine.UI.Graphic panel;

        [Tooltip("(Optional) Text element for prompt.")]
        public UITextField label;

        [Tooltip("Input field.")]
        public UIInputField inputField;

        [Tooltip("(Optional) Key code that accepts input.")]
        public KeyCode acceptKey = KeyCode.Return;

        [Tooltip("(Optional) key code that cancels input.")]
        public KeyCode cancelKey = KeyCode.Escape;

        [Tooltip("Automatically open touchscreen keyboard.")]
        public bool showTouchScreenKeyboard = false;

        public UnityEvent onAccept = new UnityEvent();

        public UnityEvent onCancel = new UnityEvent();

        /// <summary>
        /// Call this delegate when the player accepts the input in the text field.
        /// </summary>
        private AcceptedTextDelegate m_acceptedText = null;

        private bool m_isAwaitingInput = false;

        private TouchScreenKeyboard m_touchScreenKeyboard = null;

        protected override void Start()
        {
            if (DialogueDebug.logWarnings && (inputField == null)) Debug.LogWarning("Dialogue System: No InputField is assigned to the text field UI " + name + ". TextInput() sequencer commands or [var?=] won't work.");
            SetActive(false);
        }

        /// <summary>
        /// Starts the text input field.
        /// </summary>
        /// <param name="labelText">The label text.</param>
        /// <param name="text">The current value to use for the input field.</param>
        /// <param name="maxLength">Max length, or <c>0</c> for unlimited.</param>
        /// <param name="acceptedText">The delegate to call when accepting text.</param>
        public void StartTextInput(string labelText, string text, int maxLength, AcceptedTextDelegate acceptedText)
        {
            label.text = labelText;
            inputField.text = text;
            inputField.characterLimit = maxLength;
            m_acceptedText = acceptedText;
            m_isAwaitingInput = true;
            Show();
        }

        protected override void Update()
        {
            if (m_isAwaitingInput && !DialogueManager.IsDialogueSystemInputDisabled())
            {
                if (InputDeviceManager.IsKeyDown(acceptKey))
                {
                    AcceptTextInput();
                }
                else if (InputDeviceManager.IsKeyDown(cancelKey))
                {
                    CancelTextInput();
                }
            }
        }

        /// <summary>
        /// Cancels the text input field.
        /// </summary>
        public void CancelTextInput()
        {
            m_isAwaitingInput = false;
            Hide();
            onCancel.Invoke();
        }

        /// <summary>
        /// Accepts the text input and calls the accept handler delegate.
        /// </summary>
        public void AcceptTextInput()
        {
            m_isAwaitingInput = false;
            if (m_acceptedText != null)
            {
                if (inputField != null) m_acceptedText(inputField.text);
                m_acceptedText = null;
            }
            Hide();
            onAccept.Invoke();
        }

        private void Show()
        {
            SetActive(true);
            Open();
            if (showTouchScreenKeyboard) m_touchScreenKeyboard = TouchScreenKeyboard.Open(inputField.text);
            inputField.ActivateInputField();
            EventSystem.current.SetSelectedGameObject(inputField.gameObject);
        }

        private void Hide()
        {
            Close();
            SetActive(false);
            if (m_touchScreenKeyboard != null)
            {
                m_touchScreenKeyboard.active = false;
                m_touchScreenKeyboard = null;
            }
        }

        private void SetActive(bool value)
        {
            if (panel != null) panel.gameObject.SetActive(value);
            if (panel == null || value == true)
            {
                label.SetActive(value);
                inputField.SetActive(value);
            }
        }

    }

}
