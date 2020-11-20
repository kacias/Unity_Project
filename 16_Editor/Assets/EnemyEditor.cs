using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

// Editor를 상속받으면 에디터에서만 작동함
// Enemy 클래스는 내가만든 에디터로 제어하겠다.
[CustomEditor(typeof(Enemy))]
public class EnemyEditor : Editor
{
    // EnemyEditor와 Enemy는 별개의 클래스이므로 실제 선택된 Enemy를 찾아올수 있어야함
    public Enemy selected;

    // Editor에서 OnEnable은 실제 에디터에서 오브젝트를 눌렀을때 활성화됨
    private void OnEnable()
    {
        // target은 Editor에 있는 변수로 선택한 오브젝트를 받아옴.
        if (AssetDatabase.Contains(target))
        {
            selected = null;
        }
        else
        {
            // target은 Object형이므로 Enemy로 형변환
            selected = (Enemy)target;
        }
    }

    // 유니티가 인스펙터를 GUI로 그려주는함수
    public override void OnInspectorGUI()
    {
        if (selected == null)
            return;

        EditorGUILayout.Space();
        EditorGUILayout.Space();
        EditorGUILayout.Space();
        EditorGUILayout.LabelField("****** 몬스터 정보 입력툴 ******");
        EditorGUILayout.Space();
        EditorGUILayout.Space();
        EditorGUILayout.Space();

        // 씬 첫화면에 광고를 나오게한다. 뭘한다 등등 세팅을 쭉 띄워줄 수 있다.
        Color tempColor = Color.white;
        switch (selected.monsterType)
        {
            case MonsterType.Slime:
                tempColor = Color.yellow;
                break;
            case MonsterType.Ent:
                tempColor = Color.cyan;
                break;
            case MonsterType.Goblin:
                tempColor = Color.green;
                break;
            default:
                break;
        }

        GUI.color = tempColor;
        selected.monsterType = (MonsterType)EditorGUILayout.EnumPopup("몬스터 종류", selected.monsterType);

        GUI.color = Color.white;
        selected.hp = EditorGUILayout.IntField("몬스터 체력", selected.hp);
        if (selected.hp < 0)
            selected.hp = 0;

        selected.damage = EditorGUILayout.FloatField("몬스터 공격력", selected.damage);
        selected.tag = EditorGUILayout.TextField("설명", selected.tag);

        // Release 세팅하고 버튼누르면 모든변수가 다바뀌게. Test 세팅하면 그렇게 바뀌게 그런식으로 사용할 수 있음.
        if (GUILayout.Button("Resize"))
        {
            selected.transform.localScale = Vector3.one * Random.Range(0.5f, 1f);
        }
    }
}