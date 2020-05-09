using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement; 


public class GameManger : MonoBehaviour
{
    public GameObject block0;
    public GameObject block1;
    public GameObject block2;

    public int[,] array = new int[3, 3];


    public int score = 0;
    public Text countText;

    private int time = 100;
    public Text TimeText;
    


    // Start is called before the first frame update
    void Start()
    {        
        array[0, 0] = 0;
        array[0, 1] = 0;
        array[0, 2] = 0;

        array[1, 0] = 1;
        array[1, 1] = 1;
        array[1, 2] = 1;

        array[2, 0] = 2;
        array[2, 1] = 2;
        array[2, 2] = 2;
                                       
        for (int x=0; x<3; x++)
        {
            for (int y=0; y<3; y++)
            {
                Debug.Log("[x,y]" + array[x, y]);

                float x_pos = x * 1.0f;
                float y_pos = y * 1.0f;

                if (array[x,y] == 0)
                {     
                    Instantiate(block0, new Vector3(x_pos,y_pos,0), Quaternion.identity);

                }
                else if (array[x,y] == 1)
                {     
                    Instantiate(block1, new Vector3(x_pos,y_pos,0), Quaternion.identity);
    
                }
                else if (array[x,y] == 2)
                {   
                    Instantiate(block2, new Vector3(x_pos,y_pos,0), Quaternion.identity);

                }
            }
        }
    }

    //====================================================================
    // Update is called once per frame
    void Update()
    {
        Collider2D clickColl = null;
        Vector3 worldPos;
        Vector2 clickPos;


        if  (time >= 1)
        {
            time -= 1;
            TimeText.text = "Time: " + time.ToString();

        }
        else
        {

            SceneManager.LoadScene("ending");



        }



        if (Input.GetMouseButtonDown(0))
        {
            worldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            clickPos = new Vector2(worldPos.x, worldPos.y);
            clickColl = Physics2D.OverlapPoint(clickPos);

            //Debug.Log(clickColl.gameObject);

            try{            

                if (clickColl.gameObject.tag == "Block1")
                {
                    score += 1;
                    countText.text = "Count: " + score.ToString();
                    Debug.Log("Block1"); 
                }
                else if (clickColl.gameObject.tag == "Block2")
                {
                    score += 2;
                    countText.text = "Count: " + score.ToString();


                    Debug.Log("Block2"); 
                }
                else if (clickColl.gameObject.tag == "Block3")
                {

                    score += 3;
                    countText.text = "Count: " + score.ToString();

                    Debug.Log("Block3");
                }
                else {

                    Debug.Log("no object!"); 

                }

            }catch(NullReferenceException ex) {

                Debug.Log(ex);

                //Debug.Log("myLight was not set in the inspector");
            }
            
        }

    }
}
