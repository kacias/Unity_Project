using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class TestEditor : EditorWindow
{
    [MenuItem("Custom/ColliderSelector")]
    static void Init()
    {
        TestEditor window = (TestEditor)EditorWindow.GetWindow(typeof(TestEditor));
    }

    // 그려주는 함수
    private void OnGUI()
    {
        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button("동그라미 선택"))
        {
            SphereCollider[] colliders = FindObjectsOfType(typeof(SphereCollider)) as SphereCollider[];

            List<GameObject> listGO = new List<GameObject>();
            if (colliders != null)
            {
                for (int i = 0; i < colliders.Length; i++)
                    listGO.Add(colliders[i].gameObject);
            }

            Selection.objects = listGO.ToArray();
        }

        if (GUILayout.Button("네모 선택"))
        {
            BoxCollider[] colliders = FindObjectsOfType(typeof(BoxCollider)) as BoxCollider[];

            List<GameObject> listGO = new List<GameObject>();
            if (colliders != null)
            {
                for (int i = 0; i < colliders.Length; i++)
                    listGO.Add(colliders[i].gameObject);
            }

            Selection.objects = listGO.ToArray();
        }

        if (GUILayout.Button("콜라이더 전체 선택"))
        {
            Collider[] colliders = FindObjectsOfType(typeof(Collider)) as Collider[];

            List<GameObject> listGO = new List<GameObject>();
            if (colliders != null)
            {
                for (int i = 0; i < colliders.Length; i++)
                    listGO.Add(colliders[i].gameObject);
            }

            Selection.objects = listGO.ToArray();
        }
        EditorGUILayout.EndHorizontal();
    }
}

