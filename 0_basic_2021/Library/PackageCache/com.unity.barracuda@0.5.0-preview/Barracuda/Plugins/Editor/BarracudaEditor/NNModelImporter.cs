using System.IO;
using UnityEditor;
using UnityEngine;


namespace Barracuda
{
    /// <summary>
    /// Asset Importer of barracuda models.
    /// </summary>
    [UnityEditor.AssetImporters.ScriptedImporter(2, new[] {"nn"})]
    public class NNModelImporter : UnityEditor.AssetImporters.ScriptedImporter {
        private const string iconName = "NNModelIcon";

        private Texture2D iconTexture;

        public override void OnImportAsset(UnityEditor.AssetImporters.AssetImportContext ctx)
        {
            var model = File.ReadAllBytes(ctx.assetPath);

            var assetData = ScriptableObject.CreateInstance<NNModelData>();
            assetData.Value = model;
            assetData.name = "Data";
            assetData.hideFlags = HideFlags.HideInHierarchy;

            var asset = ScriptableObject.CreateInstance<NNModel>();
            asset.modelData = assetData;
            ctx.AddObjectToAsset("main obj", asset, LoadIconTexture());
            ctx.AddObjectToAsset("model data", assetData);

            ctx.SetMainObject(asset);
        }

        private Texture2D LoadIconTexture()
        {
            if (iconTexture == null)
            {
                string[] allCandidates = AssetDatabase.FindAssets(iconName);

                if (allCandidates.Length > 0)
                {
                    iconTexture = AssetDatabase.LoadAssetAtPath(AssetDatabase.GUIDToAssetPath(allCandidates[0]), typeof(Texture2D)) as Texture2D;
                }
            }
            return iconTexture;
        }
        
    }
}
