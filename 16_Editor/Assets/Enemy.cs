using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public MonsterType monsterType;
    public int hp;
    public float damage;
    public string tag;
    public bool canRun;
}
public enum MonsterType
{
    Slime,
    Ent,
    Goblin
}

