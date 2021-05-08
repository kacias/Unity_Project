// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace PixelCrushers.DialogueSystem
{

    [AddComponentMenu("")] // Use wrapper.
    public class StandardDialogueUI : CanvasDialogueUI, IStandardDialogueUI
    {

        #region Serialized Fields

        public StandardUIAlertControls alertUIElements;
        public StandardUIDialogueControls conversationUIElements;
        public StandardUIQTEControls QTEIndicatorElements;

        [Tooltip("Add an EventSystem if one isn't in the scene.")]
        public bool addEventSystemIfNeeded = true;

        #endregion

        #region Properties & Private Fields

        private Queue<QueuedUIAlert> m_alertQueue = new Queue<QueuedUIAlert>();
        private StandardUIRoot m_uiRoot = new StandardUIRoot();
        public override AbstractUIRoot uiRootControls { get { return m_uiRoot; } }
        public override AbstractUIAlertControls alertControls { get { return alertUIElements; } }
        public override AbstractDialogueUIControls dialogueControls { get { return conversationUIElements; } }
        public override AbstractUIQTEControls qteControls { get { return QTEIndicatorElements; } }

        protected Queue<QueuedUIAlert> alertQueue { get { return m_alertQueue; } }

        protected Coroutine closeCoroutine;

        #endregion

        #region Initialization

        /// <summary>
        /// Sets up the component.
        /// </summary>
        public override void Awake()
        {
            base.Awake();
            VerifyAssignments();
            conversationUIElements.Initialize();
            alertUIElements.HideImmediate();
            conversationUIElements.HideImmediate();
            QTEIndicatorElements.HideImmediate();
        }

        private void VerifyAssignments()
        {
            if (addEventSystemIfNeeded) UITools.RequireEventSystem();
            if (DialogueDebug.logWarnings)
            {
                if (alertUIElements.alertText.gameObject == null) Debug.LogWarning("Dialogue System: No UI text element is assigned to Standard Dialogue UI's Alert UI Elements.", this);
                if (conversationUIElements.subtitlePanels.Length == 0) Debug.LogWarning("Dialogue System: No subtitle panels are assigned to Standard Dialogue UI.", this);
                if (conversationUIElements.menuPanels.Length == 0) Debug.LogWarning("Dialogue System: No response menu panels are assigned to Standard Dialogue UI.", this);
            }
        }

#if UNITY_5_3 // SceneManager.sceneLoaded wasn't implemented for all Unity 5.3.x versions.
        public void OnLevelWasLoaded(int level)
        {
            if (addEventSystemIfNeeded) UITools.RequireEventSystem();
        }
        public virtual void OnEnable() { }
        public virtual void OnDisable() { }
#else
        public virtual void OnEnable()
        {
            UnityEngine.SceneManagement.SceneManager.sceneLoaded -= OnSceneLoaded;
            UnityEngine.SceneManagement.SceneManager.sceneLoaded += OnSceneLoaded;
        }

        public virtual void OnDisable()
        {
            UnityEngine.SceneManagement.SceneManager.sceneLoaded -= OnSceneLoaded;
        }

        public void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
        {
            if (addEventSystemIfNeeded) UITools.RequireEventSystem();
        }
#endif

        public override void Open()
        {
            if (closeCoroutine != null) StopCoroutine(closeCoroutine);
            base.Open();
            conversationUIElements.OpenSubtitlePanelsOnStart();
        }

        public override void Close()
        {
            if (conversationUIElements.waitForClose && AreAnyPanelsClosing())
            {
                closeCoroutine = StartCoroutine(CloseAfterPanelsAreClosed());
            }
            else
            {
                CloseNow();
            }
        }

        protected virtual void CloseNow()
        {
            base.Close();
            conversationUIElements.ClearCaches();
        }

        protected IEnumerator CloseAfterPanelsAreClosed()
        {
            while (AreAnyPanelsClosing())
            {
                yield return null;
            }
            CloseNow();
        }

        public virtual bool AreAnyPanelsClosing()
        {
            foreach (var panel in conversationUIElements.subtitlePanels)
            {
                if (panel != null && panel.panelState == UIPanel.PanelState.Closing) return true;
            }
            foreach (var panel in conversationUIElements.menuPanels)
            {
                if (panel != null && panel.panelState == UIPanel.PanelState.Closing) return true;
            }
            if (conversationUIElements.mainPanel != null && conversationUIElements.mainPanel.panelState == UIPanel.PanelState.Closing) return true;
            return false;
        }

        #endregion

        #region Update

        public override void Update()
        {
            base.Update();
            UpdateAlertQueue();
        }

        #endregion

        #region Alerts

        public override void ShowAlert(string message, float duration)
        {
            if (string.IsNullOrEmpty(message)) return;
            if (alertUIElements.dontQueueDuplicates)
            {
                if (alertUIElements.isVisible && string.Equals(alertUIElements.alertText.text, message)) return;
                foreach (var queuedItem in alertQueue)
                {
                    if (string.Equals(message, queuedItem.message)) return;
                }
            }
            if (alertUIElements.allowForceImmediate && message.Contains("[f]"))
            {
                base.ShowAlert(message.Replace("[f]", string.Empty), duration);
            }
            else if (alertUIElements.queueAlerts)
            {
                m_alertQueue.Enqueue(new QueuedUIAlert(message, duration));
            }
            else
            {
                base.ShowAlert(message, duration);
            }
        }

        private void UpdateAlertQueue()
        {
            if (alertUIElements.queueAlerts && m_alertQueue.Count > 0 && !alertUIElements.isVisible && !(alertUIElements.waitForHideAnimation && alertUIElements.isHiding))
            {
                ShowNextQueuedAlert();
            }
        }

        private void ShowNextQueuedAlert()
        {
            if (m_alertQueue.Count > 0)
            {
                var queuedAlert = m_alertQueue.Dequeue();
                base.ShowAlert(queuedAlert.message, queuedAlert.duration);
            }
        }

        #endregion

        #region Subtitles

        public override void ShowSubtitle(Subtitle subtitle)
        {
            conversationUIElements.standardMenuControls.Close();
            conversationUIElements.standardSubtitleControls.ShowSubtitle(subtitle);
        }

        public override void HideSubtitle(Subtitle subtitle)
        {
            conversationUIElements.standardSubtitleControls.HideSubtitle(subtitle);
        }

        /// <summary>
        /// Returns the speed of the first typewriter effect found.
        /// </summary>
        public virtual float GetTypewriterSpeed()
        {
            return conversationUIElements.standardSubtitleControls.GetTypewriterSpeed();
        }

        /// <summary>
        /// Sets the speed of all typewriter effects.
        /// </summary>
        public virtual void SetTypewriterSpeed(float charactersPerSecond)
        {
            conversationUIElements.standardSubtitleControls.SetTypewriterSpeed(charactersPerSecond);
        }

        /// <summary>
        /// Changes a dialogue actor's subtitle panel for the currently active conversation.
        /// </summary>
        public virtual void SetActorSubtitlePanelNumber(DialogueActor dialogueActor, SubtitlePanelNumber subtitlePanelNumber)
        {
            conversationUIElements.standardSubtitleControls.SetActorSubtitlePanelNumber(dialogueActor, subtitlePanelNumber);
        }

        /// <summary>
        /// Changes a dialogue actor's menu panel for the currently active conversation.
        /// </summary>
        public virtual void SetActorMenuPanelNumber(DialogueActor dialogueActor, MenuPanelNumber menuPanelNumber)
        {
            conversationUIElements.standardMenuControls.SetActorMenuPanelNumber(dialogueActor, menuPanelNumber);
        }

        public virtual void OverrideActorPanel(Actor actor, SubtitlePanelNumber subtitlePanelNumber)
        {
            conversationUIElements.standardSubtitleControls.OverrideActorPanel(actor, subtitlePanelNumber);
        }

        public virtual void ForceOverrideSubtitlePanel(StandardUISubtitlePanel customPanel)
        {
            conversationUIElements.standardSubtitleControls.ForceOverrideSubtitlePanel(customPanel);
        }

        #endregion

        #region Response Menu

        public override void ShowResponses(Subtitle subtitle, Response[] responses, float timeout)
        {
            conversationUIElements.standardSubtitleControls.UnfocusAll();
            base.ShowResponses(subtitle, responses, timeout);
        }

        public override void OnClick(object data)
        {
            conversationUIElements.standardMenuControls.MakeButtonsNonclickable();
            base.OnClick(data);
        }

        public virtual void OverrideActorMenuPanel(Transform actorTransform, MenuPanelNumber menuPanelNumber, StandardUIMenuPanel customPanel)
        {
            conversationUIElements.standardMenuControls.OverrideActorMenuPanel(actorTransform, menuPanelNumber, customPanel ?? conversationUIElements.defaultMenuPanel);
        }

        public virtual void OverrideActorMenuPanel(Actor actor, MenuPanelNumber menuPanelNumber, StandardUIMenuPanel customPanel)
        {
            conversationUIElements.standardMenuControls.OverrideActorMenuPanel(actor, menuPanelNumber, customPanel ?? conversationUIElements.defaultMenuPanel);
        }

        public virtual void ForceOverrideMenuPanel(StandardUIMenuPanel customPanel)
        {
            conversationUIElements.standardMenuControls.ForceOverrideMenuPanel(customPanel);
        }

        #endregion

    }

}
