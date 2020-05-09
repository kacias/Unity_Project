using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement; 


public class GameManger : MonoBehaviour
{

    //블럭 스프라이트 3종 
    public GameObject block0;
    public GameObject block1;
    public GameObject block2;

    //테스트용 배열 
    public int[,] array = new int[3, 3];

    //점수 
    public int score = 0;
    public Text countText;

    //초기 시간 
    private int time = 1000;
    public Text TimeText;

    //파티클 
    public GameObject particle_success;


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


        //시간이 0이 되면 실패 
        if  (time >= 1)
        {
            time -= 1;
            TimeText.text = "Time: " + time.ToString();

        }
        else
        {

            SceneManager.LoadScene("ending");



        }


        //점수가 1000점 이상이면 성공 
        if (score > 1000)
        {

            SceneManager.LoadScene("game_clear");


        }


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

            if (hit)
            {
                hit.transform.GetComponent<SpriteRenderer>().color = Color.red;                
                //파티클 생성 
                Instantiate(particle_success, new Vector2(clickPos.x, clickPos.y), Quaternion.identity);

            }



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
