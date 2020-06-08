using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour
{
    Abstract_Class monster1 = new Abstract_Class();
    Monster_Sub monster2 = new Monster_Sub(); 

    // Start is called before the first frame update
    void Start()
    {
        monster1.name = "Dragon";
        monster1.hp = 100;
    

    }

    // Update is called once per frame
    void Update()
    {
         //monster1.Debug_Log();
         monster2.Debug_Log_Override();        
    }
}
