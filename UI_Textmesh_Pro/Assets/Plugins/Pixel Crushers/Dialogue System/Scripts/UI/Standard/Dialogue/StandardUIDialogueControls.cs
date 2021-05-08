// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using System;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// Contains all dialogue (conversation) controls for a Standard Dialogue UI.
    /// </summary>
    [Serializable]
    public class StandardUIDialogueControls : AbstractDialogueUIControls
    {

        #region Serialized Variables

        [Tooltip("Main panel for conversation UI (optional).")]
        public UIPanel mainPanel;

        [Tooltip("Never deactivate Main Panel. Will still play show & hide animations if specified.")]
        public bool dontDeactivateMainPanel = false;

        public StandardUISubtitlePanel[] subtitlePanels;

        [Tooltip("Default panel for NPC subtitles.")]
        public StandardUISubtitlePanel defaultNPCSubtitlePanel;

        [Tooltip("Default panel for PC subtitles.")]
        public StandardUISubtitlePanel defaultPCSubtitlePanel;

        [Tooltip("Check for subtitle panels that are configured to immediately open when conversation starts. Untick to bypass check.")]
        public bool allowOpenSubtitlePanelsOnStartConversation = true;

        public StandardUIMenuPanel[] menuPanels;

        [Tooltip("Default panel for response menus.")]
        public StandardUIMenuPanel defaultMenuPanel;

        [Tooltip("When showing response menu, use portrait info of player actor assigned to first response.")]
        public bool useFirstResponseForMenuPortrait;

        [Tooltip("When closing, wait for all subtitle panels and menu panels to close.")]
        public bool waitForClose = true;

        #endregion

        #region Private Variables

        private StandardUISubtitleControls m_standardSubtitleControls = new StandardUISubtitleControls();
        public StandardUISubtitleControls standardSubtitleControls { get { return m_standardSubtitleControls; } }
        public override AbstractUISubtitleControls npcSubtitleControls { get { return m_standardSubtitleControls; } }
        public override AbstractUISubtitleControls pcSubtitleControls { get { return m_standardSubtitleControls; } }
        private StandardUIResponseMenuControls m_standardMenuControls = new StandardUIResponseMenuControls();
        public StandardUIResponseMenuControls standardMenuControls { get { return m_standardMenuControls; } }
        public override AbstractUIResponseMenuControls responseMenuControls { get { return m_standardMenuControls; } }

        private bool m_initializedAnimator = false;

        #endregion

        #region Initialization

        public void Initialize()
        {
            m_standardSubtitleControls.Initialize(subtitlePanels, defaultNPCSubtitlePanel, defaultPCSubtitlePanel);
            m_standardMenuControls.Initialize(menuPanels, defaultMenuPanel, useFirstResponseForMenuPortrait);
        }

        #endregion

        #region Show & Hide Main Panel

        public override void SetActive(bool value)
        {
            if (value == true) ShowPanel(); else HidePanel();
        }

        public override void ShowPanel()
        {
            m_initializedAnimator = true;
            if (mainPanel != null) mainPanel.Open();
            standardSubtitleControls.ApplyQueuedActorPanelCache();
        }

        private void HidePanel()
        {
            if (!m_initializedAnimator || (mainPanel != null && !mainPanel.gameObject.activeSelf))
            {
                HideImmediate();
                m_initializedAnimator = true;
            }
            else
            {
                standardSubtitleControls.Close();
                standardMenuControls.Close();
                if (mainPanel != null && !dontDeactivateMainPanel) mainPanel.Close();
            }
        }

        public void HideImmediate()
        {
            HideSubtitlePanelsImmediate();
            HideMenuPanelsImmediate();
            if (mainPanel != null && !dontDeactivateMainPanel) 
            { 
                mainPanel.gameObject.SetActive(false); 
                mainPanel.panelState = UIPanel.PanelState.Closed; 
            }
        }

        private void HideSubtitlePanelsImmediate()
        {
            for (int i = 0; i < subtitlePanels.Length; i++)
            {
                var subtitlePanel = subtitlePanels[i];
                if (subtitlePanel != null) subtitlePanel.HideImmediate();
            }
        }

        private void HideMenuPanelsImmediate()
        {
            for (int i = 0; i < menuPanels.Length; i++)
            {
                var menuPanel = menuPanels[i];
                if (menuPanel != null) menuPanel.HideImmediate();
            }
        }

        public void OpenSubtitlePanelsOnStart()
        {
            if (allowOpenSubtitlePanelsOnStartConversation) standardSubtitleControls.OpenSubtitlePanelsOnStartConversation();
        }

        public void ClearCaches()
        {
            standardSubtitleControls.ClearCache();
            standardMenuControls.ClearCache();
        }

        public virtual void ClearAllSubtitleText()
        {
            // Clear all built-in panels:
            for (int i = 0; i < subtitlePanels.Length; i++)
            {
                if (subtitlePanels[i] == null) continue;
                subtitlePanels[i].ClearText();
            }

            // Clear any custom panels:
            standardSubtitleControls.ClearSubtitlesOnCustomPanels();
        }

        #endregion

    }
}
