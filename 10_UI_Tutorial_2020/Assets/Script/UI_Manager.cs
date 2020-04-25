using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 



public class UI_Manager : MonoBehaviour
{
    public static string bHardware;

    public InputField Name_Input;
    public Slider Slider_Value;



    // Start is called before the first frame update
    void Start()
    {

        bHardware = "";
    }

    // Update is called once per frame
    void Update()
    {
            
            
    }

    public void Print_Name()
    {
        Debug.Log("Hi");

        
    }

    public void Update_Field()
    {
        Debug.Log("Input text:" + Name_Input.text);
    }

    public void Update_Slider()
    {

        Debug.Log("slider value:"+Slider_Value.value);


    }
}
    