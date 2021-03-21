using System;

namespace Unity.Connect.Share.Editor
{
    public class AppState
    {
        public AppState(ShareState shareState = null)
        {
            this.shareState = shareState;
        }

        public readonly ShareState shareState;
    }

    [Serializable]
    public class ShareState
    {
        public ShareState(string title = null, string buildOutputDir = null, string buildGUID = null,
            string zipPath = null, ShareStep step = default, string errorMsg = null,
            string key = null, string url = null)
        {
            this.title = title;
            this.buildOutputDir = buildOutputDir;
            this.buildGUID = buildGUID;
            this.zipPath = zipPath;
            this.step = step;
            this.errorMsg = errorMsg;
            this.url = url;
            this.key = key;
        }

        public ShareState CopyWith(string title = null, string buildOutputDir = null, string buildGUID = null, string zipPath = null,
            ShareStep? step = default, string errorMsg = null, string key = null,
            string url = null)
        {
            return new ShareState(
                title: title ?? this.title,
                buildOutputDir: buildOutputDir ?? this.buildOutputDir,
                buildGUID: buildGUID ?? this.buildGUID,
                zipPath: zipPath ?? this.zipPath,
                step: step ?? this.step,
                errorMsg: errorMsg ?? this.errorMsg,
                key: key ?? this.key,
                url: url ?? this.url
                );
        }

        // NOTE not readonly in order to work with JSON serialization
        public /*readonly*/ string title;
        public /*readonly*/ string buildOutputDir;
        public /*readonly*/ string buildGUID;
        public /*readonly*/ string zipPath;
        public /*readonly*/ ShareStep step;
        public /*readonly*/ string key;
        public /*readonly*/ string errorMsg;
        public /*readonly*/ string url;
    }

    public enum ShareStep
    {
        Idle,
        Login,
        Zip,
        Upload,
        Process
    }
}
