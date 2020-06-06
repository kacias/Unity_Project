using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Global_Game_Manager : MonoBehaviour
{
    
    public static Global_Game_Manager instance; 
    public int Best_Score;


    void Awake () {

        if (instance == null)
        {
            instance = this;
            Debug.Log("Global Game Manager Created");       
            Best_Score  = 0;


        }


    }

    public void Update_Global_Score(int a)
    {

        Best_Score = a;


    }

    
}
