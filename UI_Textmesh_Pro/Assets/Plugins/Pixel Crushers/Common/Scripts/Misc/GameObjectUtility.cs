// Copyright (c) Pixel Crushers. All rights reserved.

using UnityEngine;

namespace PixelCrushers
{

    /// <summary>
    /// Utility functions for working with GameObjects.
    /// </summary>
    public static class GameObjectUtility
    {

        /// <summary>
        /// Determines if a GameObject reference is a non-instantiated prefab or a scene object.
        /// If `go` is `null`, active in the scene, or its parent is active in the scene, it's
        /// considered a scene object. Otherwise this method searches all scene objects for
        /// matches. If it doesn't find any matches, this is a prefab.
        /// </summary>
        /// <returns><c>true</c> if a prefab; otherwise, <c>false</c>.</returns>
        /// <param name="go">GameObject.</param>
        public static bool IsPrefab(GameObject go)
        {
            if (go == null) return false;
            if (go.activeInHierarchy) return false;
            if ((go.transform.parent != null) && go.transform.parent.gameObject.activeSelf) return false;
            var list = GameObject.FindObjectsOfType<GameObject>();
            for (int i = 0; i < list.Length; i++)
            {
                if (list[i] == go) return false;
            }
            return true;
        }

        /// <summary>
        /// Finds an in-scene GameObject by name even if it's inactive.
        /// </summary>
        /// <returns>The GameObject.</returns>
        /// <param name="goName">Name of the GameObject.</param>
        public static GameObject GameObjectHardFind(string goName)
        {
            // Try the normal method to find an active GameObject first:
            GameObject result = GameObject.Find(goName);
            if (result != null) return result;

            // Otherwise check all GameObjects, active and inactive:
            var rootGameObjects = UnityEngine.SceneManagement.SceneManager.GetActiveScene().GetRootGameObjects();
            for (int i = 0; i < rootGameObjects.Length; i++)
            {
                result = GameObjectSearchHierarchy(rootGameObjects[i].transform, goName, string.Empty);
                if (result != null) return result;
            }
            return null;
        }

        /// <summary>
        /// Finds an in-scene GameObject by name and tag even if it's inactive.
        /// </summary>
        /// <param name="goName"></param>
        /// <param name="tag"></param>
        /// <returns></returns>
        public static GameObject GameObjectHardFind(string goName, string tag)
        {
            // Try the normal method to find active GameObjects with tag first:
            GameObject result = null;
            var gameObjects = GameObject.FindGameObjectsWithTag(tag);
            foreach (var go in gameObjects)
            {
                if (string.Equals(go.name, goName)) return go;
            }

            var rootGameObjects = UnityEngine.SceneManagement.SceneManager.GetActiveScene().GetRootGameObjects();
            for (int i = 0; i < rootGameObjects.Length; i++)
            {
                result = GameObjectSearchHierarchy(rootGameObjects[i].transform, goName, tag);
                if (result != null) return result;
            }
            return null;
        }

        private static GameObject GameObjectSearchHierarchy(Transform t, string goName, string tag)
        {
            if (t == null) return null;
            if (string.Equals(t.name, goName) && (string.IsNullOrEmpty(tag) || string.Equals(t.tag, tag))) return t.gameObject;
            foreach (Transform child in t)
            {
                var result = GameObjectSearchHierarchy(child, goName, tag);
                if (result != null) return result;
            }
            return null;
        }

        #region Old GameObjectHardFind

        ///// <summary>
        ///// Specifies how deep to recurse in GameObjectHardFind.
        ///// </summary>
        //public static int maxHardFindRecursion = 16;

        ///// <summary>
        ///// Finds an in-scene GameObject even if it's inactive, as long as the inactive
        ///// GameObject is a child of an active GameObject.
        ///// </summary>
        ///// <returns>The GameObject.</returns>
        ///// <param name="str">Name of the GameObject.</param>
        ///// <remarks>Based on code by cawas: http://answers.unity3d.com/questions/48252/how-to-find-inactive-gameobject.html</remarks>
        //public static GameObject GameObjectHardFind(string str)
        //{
        //    GameObject result = GameObject.Find(str);
        //    if (result != null) return result;
        //    var gameObjects = GameObject.FindObjectsOfType(typeof(GameObject)) as GameObject[];
        //    for (int i = 0; i < gameObjects.Length; i++)
        //    {
        //        GameObject root = gameObjects[i];
        //        if (root.transform.parent == null)
        //        { // means it's a root GO
        //            result = GameObjectHardFind(root, str, 0, 0);
        //            if (result != null) break;
        //        }
        //    }
        //    return result;
        //}
        //public static GameObject GameObjectHardFind(string str, string tag)
        //{
        //    GameObject result = null;
        //    var gameObjects = GameObject.FindGameObjectsWithTag(tag);
        //    for (int i = 0; i < gameObjects.Length; i++)
        //    {
        //        var parent = gameObjects[i];
        //        result = GameObjectHardFind(parent, str, 0, 0);
        //        if (result != null) break;
        //    }
        //    return result;
        //}

        //private static GameObject GameObjectHardFind(GameObject item, string str, int index, int recursionDepth)
        //{
        //    if (recursionDepth > maxHardFindRecursion) return null;
        //    if (index == 0 && item.name == str) return item;
        //    if (index < item.transform.childCount)
        //    {
        //        GameObject result = GameObjectHardFind(item.transform.GetChild(index).gameObject, str, 0, recursionDepth + 1);
        //        if (result == null)
        //        {
        //            return GameObjectHardFind(item, str, ++index, recursionDepth + 1);
        //        }
        //        else
        //        {
        //            return result;
        //        }
        //    }
        //    return null;
        //}

        #endregion

        /// <summary>
        /// Finds all objects of a type, including on inactive GameObjects.
        /// </summary>
        public static T[] FindObjectsOfTypeAlsoInactive<T>() where T : Component
        {
            var list = new System.Collections.Generic.List<T>();

            var rootGameObjects = UnityEngine.SceneManagement.SceneManager.GetActiveScene().GetRootGameObjects();
            for (int i = 0; i < rootGameObjects.Length; i++)
            {
                FindObjectsSearchHierarchy<T>(rootGameObjects[i].transform, list);
            }

            return list.ToArray();
        }

        private static void FindObjectsSearchHierarchy<T>(Transform t, System.Collections.Generic.List<T> list) where T : Component
        {
            if (t == null) return;
            var components = t.GetComponents<T>();
            if (components.Length > 0) list.AddRange(components);
            foreach (Transform child in t)
            {
                FindObjectsSearchHierarchy<T>(child, list);
            }
        }

        /// <summary>
        /// Like GetComponentInChildren(), but also searches parents.
        /// </summary>
        /// <returns>The component, or <c>null</c> if not found.</returns>
        /// <param name="gameObject">Game object to search.</param>
        /// <typeparam name="T">The component type.</typeparam>
        public static T GetComponentAnywhere<T>(GameObject gameObject) where T : Component
        {
            if (!gameObject) return null;
            T component = gameObject.GetComponentInChildren<T>();
            if (component) return component;
            Transform ancestor = gameObject.transform.parent;
            int safeguard = 0;
            while (!component && ancestor && safeguard < 256)
            {
                component = ancestor.GetComponentInChildren<T>();
                ancestor = ancestor.parent;
            }
            return component;
        }

        /// <summary>
        /// Gets the height of the game object based on its collider. This only works if the
        /// game object has a CharacterController, CapsuleCollider, BoxCollider, or SphereCollider.
        /// </summary>
        /// <returns>The game object height if it has a recognized type of collider; otherwise <c>0</c>.</returns>
        /// <param name="gameObject">Game object.</param>
        public static float GetGameObjectHeight(GameObject gameObject)
        {
            CharacterController controller = gameObject.GetComponent<CharacterController>();
            if (controller != null)
            {
                return controller.height;
            }
            else
            {
                CapsuleCollider capsuleCollider = gameObject.GetComponent<CapsuleCollider>();
                if (capsuleCollider != null)
                {
                    return capsuleCollider.height;
                }
                else
                {
                    BoxCollider boxCollider = gameObject.GetComponent<BoxCollider>();
                    if (boxCollider != null)
                    {
                        return boxCollider.center.y + boxCollider.size.y;
                    }
                    else
                    {
                        SphereCollider sphereCollider = gameObject.GetComponent<SphereCollider>();
                        if (sphereCollider != null)
                        {
                            return sphereCollider.center.y + sphereCollider.radius;
                        }
                    }
                }
            }
            return 0;
        }

    }

}