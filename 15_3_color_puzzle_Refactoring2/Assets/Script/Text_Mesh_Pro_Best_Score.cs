using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // Add the TextMesh Pro namespace to access the various functions.


public class Text_Mesh_Pro_Best_Score : MonoBehaviour
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
        resource = Global_Game_Manager.instance.Best_Score;
        resourceText.text = "Best Score: " + resource.ToString();
    }
}
