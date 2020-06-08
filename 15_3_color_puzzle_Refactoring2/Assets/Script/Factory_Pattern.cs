using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Factory_Pattern : MonoBehaviour
{
    public static Factory_Pattern instance = null;

    public GameObject red_monster1_prefab;
    public GameObject green_monster1_prefab;


    void Awake()
    {
        //싱글톤
        instance = this;
    }

    public void CreateMonster(string type)
    {

        if(type.Equals("red"))
        {
            
            Instantiate(red_monster1_prefab, new Vector3(10,0,0), Quaternion.identity);

        }
        else if(type.Equals("green"))
        {            

            Instantiate(green_monster1_prefab, new Vector3(-10,0,0), Quaternion.identity);

        }

    }

}
