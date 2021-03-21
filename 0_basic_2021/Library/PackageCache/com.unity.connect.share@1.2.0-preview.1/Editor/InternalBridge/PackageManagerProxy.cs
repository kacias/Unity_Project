using UnityEditor;
using UnityEditorInternal;

namespace Unity.Connect.Share.Editor
{
    /// <summary>
    /// Allows access to Unity's internal PackageManager APIs
    /// </summary>
    public static class PackageManagerProxy
    {
        /// <summary>
        /// Returns also hidden packages
        /// </summary>
        /// <returns></returns>
        public static UnityEditor.PackageManager.PackageInfo[] GetAllVisiblePackages()
        {
            return PackageManagerUtilityInternal.GetAllVisiblePackages(
#if UNITY_2019_2_OR_NEWER
                skipHiddenPackages: false
#endif
            );
        }

        /// <summary>
        /// As Application.identifier cannot be trusted (it can return empty on WebGL, for example)
        /// Reads the value directly from the ProjectSettings.
        /// TODO Move to a dedicated class
        /// </summary>
        /// <returns>null if value not set</returns>
        public static string GetApplicationIdentifier()
        {
            var projectSettings = InternalEditorUtility.LoadSerializedFileAndForget("ProjectSettings/ProjectSettings.asset");
            using(var so = new SerializedObject(projectSettings[0]))
                return so.FindProperty("applicationIdentifier.Array.data[0].second")?.stringValue;
        }
    }
}