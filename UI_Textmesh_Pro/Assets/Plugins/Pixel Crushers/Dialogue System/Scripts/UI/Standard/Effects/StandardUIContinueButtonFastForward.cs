// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// This script replaces the normal continue button functionality with
    /// a two-stage process. If the typewriter effect is still playing, it
    /// simply stops the effect. Otherwise it sends OnContinue to the UI.
    /// </summary>
    [AddComponentMenu("")] // Use wrapper.
    public class StandardUIContinueButtonFastForward : MonoBehaviour
    {

        [Tooltip("Dialogue UI that the continue button affects.")]
        public StandardDialogueUI dialogueUI;

        [Tooltip("Typewriter effect to fast forward if it's not done playing.")]
        public AbstractTypewriterEffect typewriterEffect;

        [Tooltip("Hide the continue button when continuing.")]
        public bool hideContinueButtonOnContinue = false;

        [Tooltip("If subtitle is displaying, continue past it.")]
        public bool continueSubtitlePanel = true;

        [Tooltip("If alert is displaying, continue past it.")]
        public bool continueAlertPanel = true;

        private UnityEngine.UI.Button continueButton;

        private AbstractDialogueUI m_runtimeDialogueUI;
        private AbstractDialogueUI runtimeDialogueUI
        {
            get
            {
                if (m_runtimeDialogueUI == null)
                {
                    m_runtimeDialogueUI = dialogueUI;
                    if (m_runtimeDialogueUI == null)
                    {
                        m_runtimeDialogueUI = GetComponentInParent<AbstractDialogueUI>();
                        if (m_runtimeDialogueUI == null)
                        {
                            m_runtimeDialogueUI = DialogueManager.dialogueUI as AbstractDialogueUI;
                        }
                    }
                }
                return m_runtimeDialogueUI;
            }
        }

        public virtual void Awake()
        {
            if (typewriterEffect == null)
            {
                typewriterEffect = GetComponentInChildren<UnityUITypewriterEffect>();
            }
            continueButton = GetComponent<UnityEngine.UI.Button>();
        }

        public virtual void OnFastForward()
        {
            if ((typewriterEffect != null) && typewriterEffect.isPlaying)
            {
                typewriterEffect.Stop();
            }
            else
            {
                if (hideContinueButtonOnContinue && continueButton != null) continueButton.gameObject.SetActive(false);
                if (runtimeDialogueUI != null)
                {
                    if (continueSubtitlePanel && continueAlertPanel) runtimeDialogueUI.OnContinue();
                    else if (continueSubtitlePanel) runtimeDialogueUI.OnContinueConversation();
                    else if (continueAlertPanel) runtimeDialogueUI.OnContinueAlert();
                }
            }
        }

    }

}
