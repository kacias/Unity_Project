﻿// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

namespace PixelCrushers.DialogueSystem
{

    public class ActorPicker
    {

        public DialogueDatabase database = null;
        public string currentActor = string.Empty;
        public bool usePicker = false;
        public bool showReferenceDatabase = true;

        private string[] titles = null;
        private int currentIndex = -1;

        public ActorPicker(DialogueDatabase database, string currentActor, bool usePicker)
        {
            this.database = database ?? EditorTools.FindInitialDatabase();
            this.currentActor = currentActor;
            this.usePicker = usePicker;
            UpdateTitles();
            bool currentActorIsInDatabase = (database != null) || (currentIndex >= 0);
            if (usePicker && !string.IsNullOrEmpty(currentActor) && !currentActorIsInDatabase)
            {
                this.usePicker = false;
            }
        }

        public void UpdateTitles()
        {
            currentIndex = -1;
            if (database == null || database.actors == null)
            {
                titles = new string[0];
            }
            else
            {
                List<string> list = new List<string>();
                foreach (var actor in database.actors)
                {
                    list.Add(actor.Name);
                }
                titles = list.ToArray();
                for (int i = 0; i < titles.Length; i++)
                {
                    if (string.Equals(currentActor, titles[i]))
                    {
                        currentIndex = i;
                    }
                }
            }
        }

        public void Draw()
        {
            if (showReferenceDatabase)
            {

                // Show with reference database field:
                EditorGUILayout.BeginHorizontal();
                if (usePicker)
                {
                    var newDatabase = EditorGUILayout.ObjectField("Reference Database", database, typeof(DialogueDatabase), false) as DialogueDatabase;
                    if (newDatabase != database)
                    {
                        database = newDatabase;
                        UpdateTitles();
                    }
                }
                else
                {
                    currentActor = EditorGUILayout.TextField("Actor", currentActor);
                }
                DrawToggle();
                EditorGUILayout.EndHorizontal();

                if (usePicker)
                {
                    currentIndex = EditorGUILayout.Popup("Actor", currentIndex, titles);
                    if (0 <= currentIndex && currentIndex < titles.Length) currentActor = titles[currentIndex];
                    if (!showReferenceDatabase)
                    {
                        DrawToggle();
                    }
                }
            }
            else
            {

                // Show without reference database field:
                EditorGUILayout.BeginHorizontal();
                if (usePicker)
                {
                    currentIndex = EditorGUILayout.Popup("Actor", currentIndex, titles);
                    if (0 <= currentIndex && currentIndex < titles.Length) currentActor = titles[currentIndex];
                }
                else
                {
                    currentActor = EditorGUILayout.TextField("Actor", currentActor);
                }
                DrawToggle();
                EditorGUILayout.EndHorizontal();
            }
        }

        private void DrawToggle()
        {
            var newToggleValue = EditorGUILayout.Toggle(usePicker, EditorStyles.radioButton, GUILayout.Width(20));
            if (newToggleValue != usePicker)
            {
                usePicker = newToggleValue;
                if (usePicker && (database == null)) database = EditorTools.FindInitialDatabase();
                UpdateTitles();
            }
        }

        /// <summary>
        /// Draw the picker using the specified position (for EditorGUI instead of EditorGUILayout).
        /// </summary>
        /// <param name="position">Position.</param>
        public void Draw(Rect position)
        {
            int originalIndentLevel = EditorGUI.indentLevel;
            EditorGUI.indentLevel = 0;

            // Make sure actor is in popup:
            if (!string.IsNullOrEmpty(currentActor))
            {
                var isInList = false;
                for (int i = 0; i < titles.Length; i++)
                {
                    if (string.Equals(currentActor, titles[i]))
                    {
                        isInList = true;
                        break;
                    }
                }
                if (!isInList) usePicker = false;
            }

            // Draw popup:
            var rect = new Rect(position.x, position.y, position.width - 22, EditorGUIUtility.singleLineHeight);
            if (usePicker)
            {
                currentIndex = EditorGUI.Popup(rect, currentIndex, titles);
                if (0 <= currentIndex && currentIndex < titles.Length) currentActor = titles[currentIndex];
            }
            else
            {
                currentActor = EditorGUI.TextField(rect, currentActor);
            }

            // Draw toggle:
            rect = new Rect(position.x + position.width - 20, position.y, 20, EditorGUIUtility.singleLineHeight);
            var newToggleValue = EditorGUI.Toggle(rect, usePicker, EditorStyles.radioButton);
            if (newToggleValue != usePicker)
            {
                usePicker = newToggleValue;
                if (usePicker && (database == null)) database = EditorTools.FindInitialDatabase();
                if (usePicker) currentActor = null;
                UpdateTitles();
            }

            EditorGUI.indentLevel = originalIndentLevel;
        }

    }

}
