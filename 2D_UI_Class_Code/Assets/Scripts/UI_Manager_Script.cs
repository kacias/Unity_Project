using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class UI_Manager_Script : MonoBehaviour
{

    public InputField input_name;
    //[SerializeField] private InputField input_name;
    public Slider my_slider; 
    public static bool bFlip; 

    // Start is called before the first frame update
    void Start()
    {
        bFlip = true;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void MySlider()
    {
        Debug.Log("Slider Value: " + my_slider.value);
    }

    public void MyTextBox()
    {
        Debug.Log("Input name: " + input_name.text); 

    }

    public void MyButton_in_UIManger()
    {

        Debug.Log("button 1 pressed by UI Manger"); 

    }

    public void MYSilder()
    {
        Debug.Log("slider 1 pressed");
    }

    public void MyCheckBox()
    {
        Debug.Log("check box 1 pressed");
    }


    public void MyRadioButton()
    {
        if (bFlip == true)
        {
            bFlip = false; 

        }
        else
        {

            bFlip = true;

        }
        Debug.Log("Radio Button 1 pressed" + bFlip);
    }


}
