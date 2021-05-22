using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // Add the TextMesh Pro namespace to access the various functions.


public class Text_Mesh_Pro_Test : MonoBehaviour
{

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
        resource = GameManger.score;
        resourceText.text = "Count: " + resource.ToString();
    }

        
}
