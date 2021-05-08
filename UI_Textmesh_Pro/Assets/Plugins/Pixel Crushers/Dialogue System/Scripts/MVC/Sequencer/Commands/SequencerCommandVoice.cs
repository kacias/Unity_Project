// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;

namespace PixelCrushers.DialogueSystem.SequencerCommands
{

    /// <summary>
    /// Implements sequencer command: Voice(audioClip, animation[, finalAnimation[, gameobject|speaker|listener]])
    /// Works with Animation or Animator components.
    /// </summary>
    [AddComponentMenu("")] // Hide from menu.
    public class SequencerCommandVoice : SequencerCommand
    {

        private float stopTime = 0;
        Transform subject = null;
        private string finalClipName = string.Empty;
        private Animation anim = null;
        private Animator animator = null;
        private AudioSource audioSource = null;
        private AudioClip audioClip = null;

        public void Start()
        {
            string audioClipName = GetParameter(0);
            string animationClipName = GetParameter(1);
            finalClipName = GetParameter(2);
            subject = GetSubject(3);
            anim = (subject == null) ? null : subject.GetComponent<Animation>();
            animator = (subject == null) ? null : subject.GetComponent<Animator>();
            if ((anim == null) && (animator == null))
            {
                if (DialogueDebug.logWarnings) Debug.LogWarning(string.Format("{0}: Sequencer: Voice({1}, {2}, {3}, {4}) command: No Animator or Animation component found on {3}.", new System.Object[] { DialogueDebug.Prefix, audioClipName, animationClipName, finalClipName, (subject != null) ? subject.name : GetParameter(3) }));
            }
            else if (string.IsNullOrEmpty(audioClipName))
            {
                if (DialogueDebug.logWarnings) Debug.LogWarning(string.Format("{0}: Sequencer: Voice({1}, {2}, {3}, {4}) command: Audio clip name is blank.", new System.Object[] { DialogueDebug.Prefix, audioClipName, animationClipName, finalClipName, subject.name }));
            }
            else if (string.IsNullOrEmpty(animationClipName))
            {
                if (DialogueDebug.logWarnings) Debug.LogWarning(string.Format("{0}: Sequencer: Voice({1}, {2}, {3}, {4}) command: Animation name is blank.", new System.Object[] { DialogueDebug.Prefix, audioClipName, animationClipName, finalClipName, subject.name }));
            }
            else
            {
                DialogueManager.LoadAsset(audioClipName, typeof(AudioClip),
                    (asset) =>
                    {
                        audioClip = asset as AudioClip;
                        if (audioClip == null)
                        {
                            if (DialogueDebug.logWarnings) Debug.LogWarning(string.Format("{0}: Sequencer: Voice({1}, {2}, {3}, {4}) command: Audio clip is null.", new System.Object[] { DialogueDebug.Prefix, audioClipName, animationClipName, finalClipName, subject.name }));
                            stopTime = 0;
                        }
                        else
                        {
                            if (IsAudioMuted())
                            {
                                if (DialogueDebug.logInfo) Debug.Log(string.Format("{0}: Sequencer: Voice({1}, {2}, {3}, {4}): Audio is muted; not playing it.", new System.Object[] { DialogueDebug.Prefix, audioClipName, animationClipName, finalClipName, Tools.GetObjectName(subject) }));
                            }
                            else
                            {
                                audioSource.clip = audioClip;
                                audioSource.Play();
                            }
                            try
                            {
                                if (animator != null)
                                {
                                    animator.CrossFade(animationClipName, 0.3f);
                                    stopTime = DialogueTime.time + audioClip.length;
                                }
                                else
                                {
                                    anim.CrossFade(animationClipName);
                                    stopTime = DialogueTime.time + Mathf.Max(0.1f, anim[animationClipName].length - 0.3f);
                                    if (audioClip.length > anim[animationClipName].length) stopTime = DialogueTime.time + audioClip.length;
                                }
                            }
                            catch (System.Exception)
                            {
                                stopTime = 0;
                            }
                        }
                    });

            }
        }

        public void Update()
        {
            if (DialogueTime.time >= stopTime) Stop();
        }

        public void OnDialogueSystemPause()
        {
            if (audioSource == null) return;
            audioSource.Pause();
        }

        public void OnDialogueSystemUnpause()
        {
            if (audioSource == null) return;
            audioSource.Play();
        }

        public void OnDestroy()
        {
            if (animator != null)
            {
                if (!string.IsNullOrEmpty(finalClipName))
                {
                    animator.CrossFade(finalClipName, 0.3f);
                }
            }
            else if (anim != null)
            {
                if (!string.IsNullOrEmpty(finalClipName))
                {
                    anim.CrossFade(finalClipName);
                }
                else if (anim.clip != null)
                {
                    anim.CrossFade(anim.clip.name);
                }
            }
            if ((audioSource != null) && (DialogueTime.time < stopTime))
            {
                audioSource.Stop();
            }
            DialogueManager.UnloadAsset(audioClip);
        }

    }

}
