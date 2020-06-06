using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // Add the TextMesh Pro namespace to access the various functions.


public class Text_Mseh_Pro_Combo : MonoBehaviour
{
    // Start is called before the first frame update
    TextMeshProUGUI resourceText;
    private int resource;



    // Start is called before the first frame update
    void Start()
    {
        resourceText = GetComponent<TextMeshProUGUI>();

        //resource = 1000;
        //Debug.Log(GameManger.score); 
    }

    // Update is called once per frame
    void Update()
    {
        resource = Game_Parameter_Script.combo_counter;
        resourceText.text = "Combo: " + resource.ToString();
    }

}
