using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class Radio_Script : MonoBehaviour
{



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [SerializeField]
    void Check_Toggle()
    {

        UI_Manager.bHardware = "DX";
        Debug.Log("Current hardware" + UI_Manager.bHardware); 

    }
}
