using System.IO;
using System.Text;
using System.Collections.Generic;

namespace PixelCrushers.DialogueSystem
{

    /// <summary>
    /// This part of the Dialogue Editor window contains the language text export code.
    /// </summary>
    public static class LanguageTextExporter
    {

        private static HashSet<string> languages = new HashSet<string>();

        /// <summary>
        /// The main export method. Exports one text file for each language.
        /// </summary>
        /// <param name="database">Source database.</param>
        /// <param name="filename">Target filename for default text.</param>
        public static void Export(DialogueDatabase database, string filename, EncodingType encodingType)
        {
            FindAllLanguages(database);
            ExportLanguage(database, string.Empty, filename, encodingType);
            var originalLanguage = Localization.language;
            foreach (var language in languages)
            {
                Localization.language = language;
                ExportLanguage(database, language, filename, encodingType);
            }
            Localization.language = originalLanguage; ;
        }

        private static void ExportLanguage(DialogueDatabase database, string language, string baseFilename, EncodingType encodingType)
        {
            var filename = string.IsNullOrEmpty(language) ? baseFilename
                : Path.GetDirectoryName(baseFilename) + "/" + Path.GetFileNameWithoutExtension(baseFilename) + "_" + language + ".txt";
            using (StreamWriter file = new StreamWriter(filename, false, EncodingTypeTools.GetEncoding(encodingType)))
            {
                ExportTextFields(database, file);
            }
        }

        private static void FindAllLanguages(DialogueDatabase database)
        {
            languages.Clear();
            foreach (var conversation in database.conversations)
            {
                foreach (var entry in conversation.dialogueEntries)
                {
                    foreach (var field in entry.fields)
                    {
                        if ((field.type == FieldType.Localization) &&
                            !field.title.Contains(" "))
                        {
                            languages.Add(field.title);
                        }
                    }
                }
            }
        }

        private static void ExportTextFields(DialogueDatabase database, StreamWriter file)
        {
            // Actors:
            foreach (var actor in database.actors)
            {
                file.WriteLine(actor.localizedName + "," + actor.LookupLocalizedValue("Description"));
            }
            file.WriteLine(string.Empty);

            // Locations:
            foreach (var location in database.locations)
            {
                file.WriteLine(location.localizedName + "," + location.LookupLocalizedValue("Description"));
            }
            file.WriteLine(string.Empty);

            // Items/Quests:
            foreach (var item in database.items)
            {
                if (item.IsItem)
                {
                    file.WriteLine(item.localizedName + "," + item.LookupLocalizedValue("Description"));
                }
                else
                {
                    file.WriteLine(item.localizedName + "," + item.LookupLocalizedValue("Description") + "," +
                        item.LookupLocalizedValue("Display Name") + "," + item.LookupLocalizedValue("Group") + "," +
                        item.LookupLocalizedValue("Success Description") + "," + item.LookupLocalizedValue("Failure Description"));
                    var entryCount = item.LookupInt("Entry Count");
                    for (int i = 0; i < entryCount; i++)
                    {
                        file.WriteLine(item.LookupLocalizedValue("Entry " + (i + 1)));
                    }
                }
            }
            file.WriteLine(string.Empty);

            // Export all conversations:
            foreach (var conversation in database.conversations)
            {
                foreach (var entry in conversation.dialogueEntries)
                {
                    if (entry.id > 0)
                    {
                        file.WriteLine(entry.currentMenuText + "," + entry.currentDialogueText + "," + entry.userScript);
                    }
                }
            }
        }

    }

}