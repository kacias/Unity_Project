﻿// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System;

namespace PixelCrushers.DialogueSystem
{

    [AddComponentMenu("")] // Use wrapper.
    public class StandardUISubtitlePanel : UIPanel
    {

        #region Serialized Fields

        [Tooltip("(Optional) Main panel for subtitle.")]
        public RectTransform panel;

        [Tooltip("(Optional) Image for actor's portrait.")]
        public UnityEngine.UI.Image portraitImage;

        [Tooltip("(Optional) Text element for actor's name.")]
        public UITextField portraitName;

        [Tooltip("Subtitle text.")]
        public UITextField subtitleText;

        [Tooltip("Add speaker's name to subtitle text.")]
        public bool addSpeakerName = false;

        [Tooltip("Format to add speaker name, where {0} is name and {1} is subtitle text.")]
        public string addSpeakerNameFormat = "{0}: {1}";

        [Tooltip("Each subtitle adds to Subtitle Text instead of replacing it.")]
        public bool accumulateText = false;

        [Tooltip("If panel has a typewriter effect, don't start typing until panel's Show animation has completed.")]
        public bool delayTypewriterUntilOpen = false;

        [Tooltip("(Optional) Continue button. Only shown if Dialogue Manager's Continue Button mode uses continue button.")]
        public UnityEngine.UI.Button continueButton;

        [Tooltip("When the subtitle UI elements should be visible.")]
        public UIVisibility visibility = UIVisibility.OnlyDuringContent;

        [Tooltip("When focusing panel, set this animator trigger.")]
        public string focusAnimationTrigger = string.Empty;

        [Tooltip("When unfocusing panel, set this animator trigger.")]
        public string unfocusAnimationTrigger = string.Empty;

        [Tooltip("Check Dialogue Actors for portrait animator controllers. Portrait image must have an Animator.")]
        public bool useAnimatedPortraits = false;

        [Tooltip("If a player actor uses this panel, don't show player portrait name & image; keep previous NPC portrait visible instead.")]
        public bool onlyShowNPCPortraits = false;

        [Tooltip("Wait for panels within this dialogue UI (not external panels) to close before showing.")]
        public bool waitForClose = false;

        [Tooltip("Clear text when closing panel, including when hiding using SetDialoguePanel().")]
        public bool clearTextOnClose = true;

        /// <summary>
        /// Invoked when the subtitle panel gains focus.
        /// </summary>
        public UnityEvent onFocus = new UnityEvent();

        /// <summary>
        /// Invoked when the subtitle panel loses focus.
        /// </summary>
        public UnityEvent onUnfocus = new UnityEvent();

        #endregion

        #region Public Properties

        [SerializeField, Tooltip("Panel is currently in focused state.")]
        private bool m_hasFocus = true;
        public bool hasFocus
        {
            get { return m_hasFocus; }
            set { m_hasFocus = value; }
        }

        public override bool waitForShowAnimation { get { return true; } }

        private Subtitle m_currentSubtitle = null;
        public virtual Subtitle currentSubtitle
        {
            get { return m_currentSubtitle; }
            protected set { m_currentSubtitle = value; }
        }

        /// <summary>
        /// The database name of the actor whose display name appears in the Portrait Name field.
        /// </summary>
        public string portraitActorName { get; protected set; }

        #endregion

        #region Internal Properties

        private bool m_haveSavedOriginalColor = false;
        protected bool haveSavedOriginalColor { get { return m_haveSavedOriginalColor; } set { m_haveSavedOriginalColor = value; } }
        protected Color originalColor { get; set; }
        private string m_accumulatedText = string.Empty;
        public string accumulatedText { get { return m_accumulatedText; } set { m_accumulatedText = value; } }
        private Animator m_animator = null;
        protected Animator animator { get { if (m_animator == null && portraitImage != null) m_animator = portraitImage.GetComponent<Animator>(); return m_animator; } set { m_animator = value; } }
        private bool m_isDefaultNPCPanel = false;
        public bool isDefaultNPCPanel { get { return m_isDefaultNPCPanel; } set { m_isDefaultNPCPanel = value; } }
        private bool m_isDefaultPCPanel = false;
        public bool isDefaultPCPanel { get { return m_isDefaultPCPanel; } set { m_isDefaultPCPanel = value; } }
        private int m_panelNumber = -1;
        public int panelNumber { get { return m_panelNumber; } set { m_panelNumber = value; } }
        public Transform m_actorOverridingPanel = null;
        public Transform actorOverridingPanel { get { return m_actorOverridingPanel; } set { m_actorOverridingPanel = value; } }
        protected int frameLastSetContent = -1; // Frame when we last set this panel's content.
        protected bool shouldShowContinueButton = false;
        protected const float WaitForCloseTimeoutDuration = 8f;
        private StandardDialogueUI m_dialogueUI = null;
        protected StandardDialogueUI dialogueUI
        {
            get
            {
                if (m_dialogueUI == null) m_dialogueUI = GetComponentInParent<StandardDialogueUI>();
                return m_dialogueUI;
            }
        }

        private Coroutine m_focusWhenOpenCoroutine = null;

        #endregion

        #region Initialization

        protected virtual void Awake()
        {
            if (addSpeakerName)
            {
                addSpeakerNameFormat = addSpeakerNameFormat.Replace("\\n", "\n").Replace("\\t", "\t");
            }
            if (waitForClose) clearTextOnClose = false;
        }

        #endregion

        #region Typewriter Control

        /// <summary>
        /// Returns the typewriter effect on the subtitle text element, or null if there is none.
        /// </summary>
        public AbstractTypewriterEffect GetTypewriter()
        {
            return TypewriterUtility.GetTypewriter(subtitleText);
        }

        /// <summary>
        /// Checks if the subtitle text element has a typewriter effect.
        /// </summary>
        public bool HasTypewriter()
        {
            return GetTypewriter() != null;
        }

        /// <summary>
        /// Returns the speed of the typewriter effect on the subtitle element if it has one.
        /// </summary>
        public float GetTypewriterSpeed()
        {
            return TypewriterUtility.GetTypewriterSpeed(subtitleText);
        }

        /// <summary>
        /// Sets the speed of the typewriter effect on the subtitle element if it has one.
        /// </summary>
        public void SetTypewriterSpeed(float charactersPerSecond)
        {
            TypewriterUtility.SetTypewriterSpeed(subtitleText, charactersPerSecond);
        }

        #endregion

        #region Show & Hide

        /// <summary>
        /// Shows the panel at the start of the conversation; called if it's configured to be visible at the start.
        /// </summary>
        /// <param name="portraitSprite">The image of the first actor who will use this panel.</param>
        /// <param name="portraitName">The name of the first actor who will use this panel.</param>
        /// <param name="dialogueActor">The actor's DialogueActor component, or null if none.</param>
        public virtual void OpenOnStartConversation(Sprite portraitSprite, string portraitName, DialogueActor dialogueActor)
        {
            Open();
            SetUIElementsActive(true);
            Tools.SetGameObjectActive(this.portraitImage, portraitSprite != null);
            if (this.portraitImage != null) this.portraitImage.sprite = portraitSprite;
            if (this.portraitName != null) this.portraitName.text = portraitName;
            if (subtitleText.text != null) subtitleText.text = string.Empty;
            portraitActorName = (dialogueActor != null) ? dialogueActor.actor : portraitName;
            CheckDialogueActorAnimator(dialogueActor);
        }

        [System.Obsolete("Use OpenOnStartConversation(Sprite,string,DialogueActor) instead.")]
        public virtual void OpenOnStartConversation(Texture2D portraitTexture, string portraitName, DialogueActor dialogueActor)
        {
            OpenOnStartConversation(UITools.CreateSprite(portraitTexture), portraitName, dialogueActor);
        }

        public virtual void OnConversationStart(Transform actor)
        {
            if (frameLastSetContent < (Time.frameCount - 1)) // If we just set content, don't clear the text.
            {
                ClearText();
            }
        }

        /// <summary>
        /// Shows a subtitle, playing the open and focus animations.
        /// </summary>
        public virtual void ShowSubtitle(Subtitle subtitle)
        {
            if (waitForClose && dialogueUI.AreAnyPanelsClosing())
            {
                DialogueManager.instance.StartCoroutine(ShowSubtitleAfterClosing(subtitle));
            }
            else
            {
                ShowSubtitleNow(subtitle);
            }
        }

        protected virtual void ShowSubtitleNow(Subtitle subtitle)
        {
            SetUIElementsActive(true);
            if (!isOpen) hasFocus = false;
            Open();
            Focus();
            SetContent(subtitle);
            actorOverridingPanel = null;
        }

        protected virtual IEnumerator ShowSubtitleAfterClosing(Subtitle subtitle)
        {
            shouldShowContinueButton = false;
            float safeguardTime = Time.realtimeSinceStartup + WaitForCloseTimeoutDuration;
            while (dialogueUI.AreAnyPanelsClosing() && Time.realtimeSinceStartup < safeguardTime)
            {
                yield return null;
            }
            ShowSubtitleNow(subtitle);
            if (shouldShowContinueButton) ShowContinueButton();
        }

        /// <summary>
        /// Hides a subtitle, playing the unfocus and close animations.
        /// </summary>
        public virtual void HideSubtitle(Subtitle subtitle)
        {
            if (panelState != PanelState.Closed) Unfocus();
            Close();
        }

        /// <summary>
        /// Immediately hides the panel without playing any animations.
        /// </summary>
        public virtual void HideImmediate()
        {
            DeactivateUIElements();
        }

        protected override void OnHidden()
        {
            base.OnHidden();
            if (deactivateOnHidden) DeactivateUIElements();
        }

        /// <summary>
        /// Opens the panel.
        /// </summary>
        public override void Open()
        {
            base.Open();
        }

        /// <summary>
        /// Closes the panel.
        /// </summary>
        public override void Close()
        {
            if (isOpen) base.Close();
            if (clearTextOnClose) ClearText();
            hasFocus = false;
        }

        /// <summary>
        /// Focuses the panel.
        /// </summary>
        public virtual void Focus()
        {
            if (panelState == PanelState.Opening && enabled && gameObject.activeInHierarchy)
            {
                if (m_focusWhenOpenCoroutine != null) StopCoroutine(m_focusWhenOpenCoroutine);
                m_focusWhenOpenCoroutine = StartCoroutine(FocusWhenOpen());
            }
            else
            {
                FocusNow();
            }
        }

        protected IEnumerator FocusWhenOpen()
        {
            float timeout = Time.realtimeSinceStartup + 5f;
            while (panelState != PanelState.Open && Time.realtimeSinceStartup < timeout)
            {
                yield return null;
            }
            m_focusWhenOpenCoroutine = null;
            FocusNow();
        }

        protected virtual void FocusNow()
        {
            panelState = PanelState.Open;
            if (hasFocus) return;
            if (string.IsNullOrEmpty(focusAnimationTrigger))
            {
                OnFocused();
            }
            else
            {
                animatorMonitor.SetTrigger(focusAnimationTrigger, OnFocused, true);
            }
            onFocus.Invoke();
        }

        private void OnFocused()
        {
            hasFocus = true;
        }

        /// <summary>
        /// Unfocuses the panel.
        /// </summary>
        public virtual void Unfocus()
        {
            if (m_focusWhenOpenCoroutine != null)
            {
                StopCoroutine(m_focusWhenOpenCoroutine);
                m_focusWhenOpenCoroutine = null;
            }
            if (!string.IsNullOrEmpty(focusAnimationTrigger) && animatorMonitor.currentTrigger == focusAnimationTrigger)
            {
                animatorMonitor.CancelCurrentAnimation();
            }
            else
            {
                if (!hasFocus) return;
            }
            if (panelState == PanelState.Opening) panelState = PanelState.Open;
            hasFocus = false;
            animatorMonitor.SetTrigger(unfocusAnimationTrigger, null, false);
            onUnfocus.Invoke();
        }

        public virtual void ActivateUIElements()
        {
            SetUIElementsActive(true);
        }

        public virtual void DeactivateUIElements()
        {
            SetUIElementsActive(false);
            if (clearTextOnClose) ClearText();
        }

        protected virtual void SetUIElementsActive(bool value)
        {
            Tools.SetGameObjectActive(panel, value);
            Tools.SetGameObjectActive(portraitImage, value && portraitImage != null && portraitImage.sprite != null);
            portraitName.SetActive(value);
            subtitleText.SetActive(value);
            Tools.SetGameObjectActive(continueButton, false); // Let ConversationView determine if continueButton should be shown.
        }

        public virtual void ClearText()
        {
            m_accumulatedText = string.Empty;
            subtitleText.text = string.Empty;
        }

        public virtual void ShowContinueButton()
        {
            Tools.SetGameObjectActive(continueButton, true);
            if (InputDeviceManager.autoFocus) Select(); 
            if (continueButton != null && continueButton.onClick.GetPersistentEventCount() == 0)
            {
                continueButton.onClick.RemoveAllListeners();
                var fastForward = continueButton.GetComponent<StandardUIContinueButtonFastForward>();
                if (fastForward != null)
                {
                    continueButton.onClick.AddListener(fastForward.OnFastForward);
                }
                else
                {
                    continueButton.onClick.AddListener(OnContinue);
                }
            }
            shouldShowContinueButton = true;
        }

        public virtual void HideContinueButton()
        {
            Tools.SetGameObjectActive(continueButton, false);
        }

        /// <summary>
        /// Finishes the subtitle without hiding the panel. Called if the panel is configured to stay open.
        /// Hides the continue button and stops the typewriter effect.
        /// </summary>
        public virtual void FinishSubtitle()
        {
            HideContinueButton();
            var typewriter = GetTypewriter();
            if (typewriter != null && typewriter.isPlaying) typewriter.Stop();
        }

        /// <summary>
        /// Selects the panel's continue button (i.e., navigates to it).
        /// </summary>
        /// <param name="allowStealFocus">Select continue button even if another element is already selected.</param>
        public virtual void Select(bool allowStealFocus = true)
        {
            UITools.Select(continueButton, allowStealFocus);
        }

        /// <summary>
        /// The continue button should call this method to continue.
        /// </summary>
        public virtual void OnContinue()
        {
            var dialogueUI = GetComponentInParent<AbstractDialogueUI>();
            if (dialogueUI == null) dialogueUI = DialogueManager.dialogueUI as AbstractDialogueUI;
            if (dialogueUI != null) dialogueUI.OnContinueConversation();
        }

        /// <summary>
        /// Sets the content of the panel. Assumes the panel is already open.
        /// </summary>
        public virtual void SetContent(Subtitle subtitle)
        {
            if (subtitle == null) return;
            currentSubtitle = subtitle;
            CheckSubtitleAnimator(subtitle);
            if (!onlyShowNPCPortraits || subtitle.speakerInfo.isNPC)
            {                
                if (portraitImage != null)
                {
                    var sprite = subtitle.GetSpeakerPortrait();
                    portraitImage.sprite = sprite;
                    Tools.SetGameObjectActive(portraitImage, sprite != null);
                }
                portraitActorName = subtitle.speakerInfo.nameInDatabase;
                portraitName.text = subtitle.speakerInfo.Name;
                UITools.SendTextChangeMessage(portraitName);
            }
            TypewriterUtility.StopTyping(subtitleText);
            var previousText = accumulateText ? m_accumulatedText : string.Empty;
            var previousChars = accumulateText ? UITools.StripRPGMakerCodes(Tools.StripTextMeshProTags(Tools.StripRichTextCodes(previousText))).Length : 0;
            SetFormattedText(subtitleText, previousText, subtitle.formattedText);
            if (accumulateText) m_accumulatedText = subtitleText.text + "\n";
            if (delayTypewriterUntilOpen && !hasFocus)
            {
                StartCoroutine(StartTypingWhenFocused(subtitleText, subtitleText.text, previousChars));
            }
            else
            {
                TypewriterUtility.StartTyping(subtitleText, subtitleText.text, previousChars);
            }
            frameLastSetContent = Time.frameCount;
        }

        protected virtual IEnumerator StartTypingWhenFocused(UITextField subtitleText, string text, int fromIndex)
        {
            subtitleText.text = string.Empty;
            float timeout = Time.realtimeSinceStartup + 5f;
            while (!hasFocus && panelState != PanelState.Open && Time.realtimeSinceStartup < timeout)
            {
                yield return null;
            }
            subtitleText.text = text;
            TypewriterUtility.StartTyping(subtitleText, text, fromIndex);
        }

        protected virtual void SetFormattedText(UITextField textField, string previousText, FormattedText formattedText)
        {
            textField.text = previousText + UITools.GetUIFormattedText(formattedText);
            UITools.SendTextChangeMessage(textField);
            if (!haveSavedOriginalColor)
            {
                originalColor = textField.color;
                haveSavedOriginalColor = true;
            }
            textField.color = (formattedText.emphases != null && formattedText.emphases.Length > 0) ? formattedText.emphases[0].color : originalColor;
        }

        public virtual void SetActorPortraitSprite(string actorName, Sprite portraitSprite)
        {
            if (portraitImage == null) return;
            var sprite = AbstractDialogueUI.GetValidPortraitSprite(actorName, portraitSprite);
            portraitImage.sprite = sprite;
            Tools.SetGameObjectActive(portraitImage, sprite != null);
        }

        public virtual void CheckSubtitleAnimator(Subtitle subtitle)
        {
            if (subtitle != null && useAnimatedPortraits && animator != null)
            {
                var dialogueActor = DialogueActor.GetDialogueActorComponent(subtitle.speakerInfo.transform);
                if (dialogueActor != null) // && dialogueActor.standardDialogueUISettings.portraitAnimatorController != null)
                {
                    var speakerPanelNumber = dialogueActor.GetSubtitlePanelNumber();
                    var isMyPanel =
                        (actorOverridingPanel == subtitle.speakerInfo.transform) ||
                        (PanelNumberUtility.GetSubtitlePanelIndex(speakerPanelNumber) == this.panelNumber) ||
                        (speakerPanelNumber == SubtitlePanelNumber.Default && subtitle.speakerInfo.isNPC && isDefaultNPCPanel) ||
                        (speakerPanelNumber == SubtitlePanelNumber.Default && subtitle.speakerInfo.isPlayer && isDefaultPCPanel) ||
                        (speakerPanelNumber == SubtitlePanelNumber.Custom && dialogueActor.standardDialogueUISettings.customSubtitlePanel == this);
                    if (isMyPanel)
                    {
                        StartCoroutine(SetAnimatorAtEndOfFrame(dialogueActor.standardDialogueUISettings.portraitAnimatorController));
                    }
                }
                else
                {
                    StartCoroutine(SetAnimatorAtEndOfFrame(null));
                }
            }
        }

        protected virtual void CheckDialogueActorAnimator(DialogueActor dialogueActor)
        {
            if (dialogueActor != null && useAnimatedPortraits && animator != null &&
                dialogueActor.standardDialogueUISettings.portraitAnimatorController != null)
            {
                StartCoroutine(SetAnimatorAtEndOfFrame(dialogueActor.standardDialogueUISettings.portraitAnimatorController));
            }
        }

        protected virtual IEnumerator SetAnimatorAtEndOfFrame(RuntimeAnimatorController animatorController)
        {
            if (animator.runtimeAnimatorController != animatorController)
            {
                animator.runtimeAnimatorController = animatorController;
            }
            if (animatorController != null)
            {
                Tools.SetGameObjectActive(portraitImage, true);
            }
            yield return new WaitForEndOfFrame();
            if (animator.runtimeAnimatorController != animatorController)
            {
                animator.runtimeAnimatorController = animatorController;
            }
            if (animatorController != null)
            {
                Tools.SetGameObjectActive(portraitImage, true);
            }
        }

        #endregion

    }
}
