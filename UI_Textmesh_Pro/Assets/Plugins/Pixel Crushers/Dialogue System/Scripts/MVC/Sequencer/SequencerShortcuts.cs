// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using System;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// Registers shortcuts with the sequencer.
    /// </summary>    
    [AddComponentMenu("")] // Use wrapper.
    public class SequencerShortcuts : MonoBehaviour
    {

        [Serializable]
        public class Shortcut
        {
            [Tooltip("Shortcut. Wrap in double braces to reference in sequences, such as {{foo}}.")]
            public string shortcut;

            [Tooltip("Value to replace shortcut with.")]
            [TextArea]
            public string value;
        }

        public Shortcut[] shortcuts = new Shortcut[0];


        void OnEnable()
        {
            for (int i = 0; i < shortcuts.Length; i++)
            {
                Sequencer.RegisterShortcut(shortcuts[i].shortcut, shortcuts[i].value);
            }
        }

        void OnDisable()
        {
            for (int i = 0; i < shortcuts.Length; i++)
            {
                Sequencer.UnregisterShortcut(shortcuts[i].shortcut);
            }
        }
    }

}
