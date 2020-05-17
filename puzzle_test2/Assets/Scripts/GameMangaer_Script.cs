using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using UnityEngine;
using UnityEngine.UI;

public class GameMangaer_Script : MonoBehaviour
{
    public GameObject block0;
    public GameObject block1;
    public GameObject block2;

    public int score = 0;
    public Text countText; 



    public int[] array_1d = new int[5];
    public int[,] map_array = new int[5, 5];


    // Start is called before the first frame update
    void Start()
    {


        map_array[0, 1] = 1;
        map_array[0, 2] = 1;
        map_array[0, 3] = 1;

        map_array[1, 1] = 2;
        map_array[1, 2] = 2;
        map_array[1, 3] = 2;

        map_array[2, 1] = 3;
        map_array[2, 2] = 3;
        map_array[2, 3] = 3;

        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                float x_pos = j * 1.0f;
                float y_pos = k * 1.0f;


                if (map_array[j, k] == 1)
                {
                    Instantiate(block0, new Vector3(x_pos, y_pos, 0), Quaternion.identity);
                }
                if (map_array[j, k] == 2)
                {
                    Instantiate(block1, new Vector3(x_pos, y_pos, 0), Quaternion.identity);
                }
                if (map_array[j, k] == 3)
                {
                    Instantiate(block2, new Vector3(x_pos, y_pos, 0), Quaternion.identity);
                }


            }

        }

        Debug.Log(map_array[1, 3]);


    }

    // Update is called once per frame
    void Update()
    {
        Collider2D clickColl = null;
        Vector3 worldPos;
        Vector2 clickPos;
        //충돌 시 파티클 생성 및 대상 오브젝트 색깔 변경 
        if (Input.GetMouseButtonDown(0))
        {
            worldPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            clickPos = new Vector2(worldPos.x, worldPos.y);
            clickColl = Physics2D.OverlapPoint(clickPos);



            //=========================================================================
            //2D 충돌 처리 
            RaycastHit2D hit = Physics2D.Raycast(worldPos, transform.forward, 100);
            Debug.DrawRay(worldPos, transform.forward * 10, Color.red, 0.3f);


            try
            {

                if (clickColl.gameObject.tag == "Block1")
                {

                    score += 1;


                    countText.text = "Count:" + score.ToString(); 
                    Debug.Log("Block1");





                }
                else if (clickColl.gameObject.tag == "Block2")
                {


                    score += 2;
                    countText.text = "Count:" + score.ToString();
                    Debug.Log("Block2");
                }
                else if (clickColl.gameObject.tag == "Block3")
                {

                    score += 3;
                    countText.text = "Count:" + score.ToString();
                    Debug.Log("Block3");
                }
                else
                {

                    Debug.Log("no object!");

                }

            }
            catch (NullReferenceException ex)
            {

                Debug.Log(ex);

                //Debug.Log("myLight was not set in the inspector");
            }



        }
    }
}

