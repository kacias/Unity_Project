using UnityEditor;
using UnityEditor.Modules;

namespace Unity.Connect.Share.Editor
{
    /// <summary>
    /// Allows access to Unity's internal ModuleManager APIs
    /// </summary>
    public static class ModuleManagerProxy
    {
        public static bool IsBuildPlatformInstalled(BuildTarget buildTarget)
        {
            string target = ModuleManager.GetTargetStringFromBuildTarget(buildTarget);
            return ModuleManager.IsPlatformSupportLoaded(target);
        }
    }
}