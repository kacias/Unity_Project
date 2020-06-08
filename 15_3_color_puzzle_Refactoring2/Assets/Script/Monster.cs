using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour
{
    Abstract_Class monster1 = new Abstract_Class();
    Monster_Sub monster2 = new Monster_Sub(); 

    //public GameObject red_monster1_prefab;
    //public GameObject green_monster1_prefab;
         
    // Start is called before the first frame update
    void Start()
    {
        monster1.name = "Dragon";
        monster1.hp = 100;
    

        //Red_Monster greenGoblin = new Red_Monster();
        
        //일반 코딩 
        //Instantiate(red_monster1_prefab, new Vector3(10,0,0), Quaternion.identity);
        //Instantiate(green_monster1_prefab, new Vector3(-10,0,0), Quaternion.identity);

        //팩토리 패턴으로 생성 
        Factory_Pattern.instance.CreateMonster("red");
        Factory_Pattern.instance.CreateMonster("green");



    }

    // Update is called once per frame
    void Update()
    {
         //monster1.Debug_Log();
         monster2.Debug_Log_Override();        
    }       

}
