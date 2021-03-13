using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    int a = 0;
    int b = 0; 

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello world");
    }


    // Update is called once per frame
    void Update()        
    {
        int c; 

        a = a + 1; 
        Debug.Log("a: " + a);

        c = Add(a, b);
        Debug.Log("c:" + c ); 

    }

   
    int Add(int a, int b)
    {

        int result;

        result = a + b;
        return result; 
    }



}
