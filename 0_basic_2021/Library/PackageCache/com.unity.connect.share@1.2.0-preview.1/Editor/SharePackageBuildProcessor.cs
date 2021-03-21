using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;

namespace Unity.Connect.Share.Editor
{
    class SharePackageBuildProcessor : IPostprocessBuildWithReport
    {
        public int callbackOrder { get { return 0; } }

        public void OnPostprocessBuild(BuildReport report)
        {
            if (report.summary.platform != BuildTarget.WebGL) { return; }

            string buildOutputDir = report.summary.outputPath;
            string buildGUID = report.summary.guid.ToString();

            SharePackageUtils.SetEditorPreference("buildOutputDir", buildOutputDir);
            SharePackageUtils.SetEditorPreference("buildGUID", buildGUID);

            StoreFactory.Get().Dispatch(new BuildFinishAction
            {
                outputDir = buildOutputDir,
                buildGUID = buildGUID
            });

            WriteMetadataFile(report.summary.outputPath);
        }

        /// <summary>
        /// Write metadata files into the build directory
        /// </summary>
        /// <param name="outputPath"></param>
        void WriteMetadataFile(string outputPath)
        {
            try
            {
                // dependencies.txt: list of "depepedency@version"
                string dependenciesFilePath = $"{outputPath}/dependencies.txt";
                using (StreamWriter streamWriter = new StreamWriter(dependenciesFilePath, false))
                {
                    PackageManagerProxy.GetAllVisiblePackages()
                        .Select(pkg => $"{pkg.name}@{pkg.version}")
                        // We probably don't have the package.json of the used Microgame available,
                        // so add the information manually
                        .Concat(new [] { $"{PackageManagerProxy.GetApplicationIdentifier() ?? Application.productName}@{Application.version}" })
                        .Distinct()
                        .ToList()
                        .ForEach(depStr => streamWriter.WriteLine(depStr));
                }

                // The Unity version used
                string versionFilePath = $"{outputPath}/ProjectVersion.txt";
                File.Copy("ProjectSettings/ProjectVersion.txt", versionFilePath, true);
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
        }
    }
}
