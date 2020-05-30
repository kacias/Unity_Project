using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ending_Script : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("best score:" + Global_Game_Manager.instance.Best_Score);
        
    }
}
