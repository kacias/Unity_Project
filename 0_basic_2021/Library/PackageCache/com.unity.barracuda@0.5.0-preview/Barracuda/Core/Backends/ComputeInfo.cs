﻿using UnityEngine;
using UnityEngine.Rendering;

namespace Barracuda
{
    public class ComputeInfo
    {
        public static bool supportsComputeSharedMemory = true;
        public static bool supportsDense32x32 = true;
        public static bool supportsDense64x64 = true;
        public static bool supportsCompute = true;
        public static uint maxComputeWorkGroupSize = 1024;

        static ComputeInfo()
        {
            supportsCompute = SystemInfo.supportsComputeShaders;

            // TODO switch to SystemInfo.maxComputeWorkGroupSize when we bump min spec to 2019.3
            if (Application.platform == RuntimePlatform.Android)
            {
                maxComputeWorkGroupSize = (SystemInfo.graphicsDeviceType == GraphicsDeviceType.Vulkan) ? 256u : 128u;

                var gpuName = SystemInfo.graphicsDeviceName ?? "";
                var osName = SystemInfo.operatingSystem ?? "";
                
                // Known issue with Adreno Vulkan drivers on Android 8.x
                if (gpuName.Contains("Adreno") && osName.StartsWith("Android OS 8") &&
                    SystemInfo.graphicsDeviceType == GraphicsDeviceType.Vulkan)
                    maxComputeWorkGroupSize = 128u;
            }
            else if (Application.platform == RuntimePlatform.IPhonePlayer || Application.platform == RuntimePlatform.tvOS)
            {
                var gpuName = SystemInfo.graphicsDeviceName;
                if (gpuName != null && gpuName.StartsWith("Apple A"))
                {
                    int gpuNumber = 0, idx = "Apple A".Length;
                    while (idx < gpuName.Length && '0' <= gpuName[idx] && gpuName[idx] <= '9')
                    {
                        gpuNumber = gpuNumber * 10 + gpuName[idx++] - '0';
                    }

                    // TODO check on lower end iOS devices
                    maxComputeWorkGroupSize = (gpuNumber <= 10) ? 224u : 256u;
                }
                else
                {
                    maxComputeWorkGroupSize = 256u;
                }
            }
        }
}
}
