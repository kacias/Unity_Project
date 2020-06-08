using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Abstract_Class 
{
    // Start is called before the first frame update

    public string name;
    public int hp; 


    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //일반 함수 
    public void Debug_Log()
    {
        Debug.Log("My name is " + name + "hp is" + hp);

    }

    //추상 인터페이스 함수 
    public virtual void Debug_Log_Override()
    {
        

    }


}
