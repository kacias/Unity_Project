using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    //정수
    int a = 0;
    string b = "hi";
    float c = 1.5f;
    bool d = false; 
    private int[] reading = new int[6] { 4, 9, 1, 0, 21, 12 };
    public int counter = 0;
    int result = 0;

    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(a);
        Debug.Log("================================");
        for (int i = 0; i < 5; i++)
            Debug.Log(reading[i]);
        
        Debug.Log(c);
        Debug.Log(d);

    }

    // Update is called once per frame
    void Update()
    {


        /*
        counter = counter + 1;
        Debug.Log(counter);
        */
        //Debug.Log("A value: " + a);

        result = MyFunc(counter);
        Debug.Log("hi" + result);       

    }

    int MyFunc(int a)
    {
        int b = 0; 

        b = a + 1;
        return b; 


    }
}
