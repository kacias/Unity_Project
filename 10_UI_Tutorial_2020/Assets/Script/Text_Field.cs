using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Text_Field : MonoBehaviour
{


    public InputField Name_Input;
    //[SerializeField] private InputField Password_Input;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("Input text:" + Name_Input.text);

    }


    void Print_Status()
    {

        Debug.Log("Text Input filed was changed.");


    }

}
