using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster_Sub : Abstract_Class
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // 상속받은 추상 함수 재정의 
    public override void Debug_Log_Override()
    {
        Debug.Log("I am override function"); 

    }
}
