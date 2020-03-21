using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;  

public class NewBehaviourScript : MonoBehaviour
{

    int result = 0; 
    int a = 0; 


    // Start is called before the first frame update
    void Start()
    {
        print("hello world"); 

    }

    // Update is called once per frame
    void Update()
    {
        
        a = a + 1; 
        result = result + 1; 
                
        Debug.Log("a is " + a);
        result = Add(1,3); 
        Debug.Log("result:" + result);
        
    }

    int Add(int a, int b)
    {
        return (a+b); 

    }
}
