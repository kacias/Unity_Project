// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;

namespace PixelCrushers.DialogueSystem.SequencerCommands
{

    /// <summary>
    /// Implements sequencer command: WaitForMessage(message), which waits
    /// until it receives OnSequencerMessage(message).
    /// </summary>
    [AddComponentMenu("")] // Hide from menu.
    public class SequencerCommandWaitForMessage : SequencerCommand
    {

        private string requiredMessage;

        public void Start()
        {
            requiredMessage = GetParameter(0);
            if (DialogueDebug.logInfo) Debug.Log(string.Format("{0}: Sequencer: WaitForMessage({1})", new System.Object[] { DialogueDebug.Prefix, requiredMessage }));
        }

        public void OnSequencerMessage(string message)
        {
            if (string.Equals(message, requiredMessage))
            {
                if (DialogueDebug.logInfo) Debug.Log(string.Format("{0}: Sequencer: WaitForMessage({1}) received message", new System.Object[] { DialogueDebug.Prefix, requiredMessage }));
                Stop();
            }
        }

    }

}
