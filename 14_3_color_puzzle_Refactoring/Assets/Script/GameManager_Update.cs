using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro; // Add the TextMesh Pro namespace to access the various functions.


public class GameManager_Update : MonoBehaviour
{

    //블럭 스프라이트 3종 
    public GameObject block0;
    public GameObject block1;
    public GameObject block2;
    
    //점수 
    public Text countText;


    //초기 시간 
    public Text TimeText;

    //파티클 
    public GameObject particle_success;

    //콤보 체크 
    private int previous_value = -99;


    // Start is called before the first frame update
    void Start()
    {        

        //게임 데이터 초기화 
        Game_Parameter_Script.array[0, 0] = 0;
        Game_Parameter_Script.array[0, 1] = 0;
        Game_Parameter_Script.array[0, 2] = 0;

        Game_Parameter_Script.array[1, 0] = 1;
        Game_Parameter_Script.array[1, 1] = 1;
        Game_Parameter_Script.array[1, 2] = 1;

        Game_Parameter_Script.array[2, 0] = 2;
        Game_Parameter_Script.array[2, 1] = 2;
        Game_Parameter_Script.array[2, 2] = 2;
                                       
        for (int x=0; x<3; x++)
        {
            for (int y=0; y<3; y++)
            {
                Debug.Log("[x,y]" + Game_Parameter_Script.array[x, y]);

                float x_pos = x * 1.0f;
                float y_pos = y * 1.0f;

                if (Game_Parameter_Script.array[x,y] == 0)
                {     
                    Instantiate(block0, new Vector3(x_pos,y_pos,0), Quaternion.identity);
                }
                else if (Game_Parameter_Script.array[x,y] == 1)
                {     
                    Instantiate(block1, new Vector3(x_pos,y_pos,0), Quaternion.identity);
    
                }
                else if (Game_Parameter_Script.array[x,y] == 2)
                {   
                    Instantiate(block2, new Vector3(x_pos,y_pos,0), Quaternion.identity);

                }
            }
        }


        Debug.Log("test textmesh_pro");

    }
    

    //====================================================================
    // Update is called once per frame
    void Update()
    {
        //===============
        //시간 업데이트   
        Update_Time(); 

        //======================
        //점수 업데이트 
        Update_Score();

        //======================
        //마우스 픽킹 충돌 처리 함수 
        Collision_Check();


        Debug.Log("best score:" + Global_Game_Manager.instance.Best_Score);

    }


    //===========================
    //마우스 픽킹 충돌 처리 함수 
    void Collision_Check()
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

            if (hit)
            {
                hit.transform.GetComponent<SpriteRenderer>().color = Color.red;

                //파티클 생성 
                Instantiate(particle_success, new Vector2(clickPos.x, clickPos.y), Quaternion.identity);

            }try{
                //=============================
                //태그 검사 함수 
                Collision_Check_Tag(clickColl); 

            }catch(NullReferenceException ex) {
                Debug.Log(ex);
                //Debug.Log("myLight was not set in the inspector");
            }            
        }        
        Game_Parameter_Script.combo_counter = 0;

        Debug.Log("==========================");
        foreach (int value in Game_Parameter_Script.player_select)
        {
            if (previous_value == value)
            {
                Game_Parameter_Script.combo_counter += 1;
                //Debug.Log("chain combo!" + combo_counter);

            }
            //Debug.Log(value);
            previous_value = value;
        }
        Debug.Log("CameraShaking_On:" + Game_Parameter_Script.CameraShaking_On); 
    }


    void Collision_Check_Tag(Collider2D clickColl)
    {

        //태그 비교 함수 1 
        //Compare_Tag(clickColl.gameObject.tag);


        //태그 비교 함수 2 
        //string[] Object_Tag_Name = new string[] { "Block1", "Block2", "Block3"};
        //Compare_Tag_Adv(clickColl.gameObject.tag, Object_Tag_Name);


        //태그 비교 함수 3
        string[] Object_Tag_Name = new string[] { "Block1", "Block2", "Block3"};
        bool tag_result = Compare_Tag_Adv_Update(clickColl.gameObject.tag, Object_Tag_Name);

        if (tag_result == true)
        {
            Game_Parameter_Script.score += 1;
            countText.text = "Count: " + Game_Parameter_Script.score.ToString();            
            Game_Parameter_Script.player_select.Add(1);            
            Game_Parameter_Script.CameraShaking_On = true;
        }
        else
        {
            Debug.Log("no object!");
        }       


    }

    //===============================================================
    //태그 비교 함수 3번: 찾으려는 리스트와 비교하는 함수로 일반화시켜서 검색하려는 리스트값을 받아옴
    bool Compare_Tag_Adv_Update(string tag_name, string[] Object_Tag_Name)
    {    
        for (int i=0; i<Object_Tag_Name.Length; i++)
        {
            if (tag_name == Object_Tag_Name[i])
            {
                return true;  
            }

        }
        return false;
    }
    

    //==============================================================
    //태그 비교 함수 2번: 일반화시켜서 검색하려는 리스트값을 받아옴
    /*
    void Compare_Tag_Adv(string tag_name, string[] Object_Tag_Name)
    {    

        for (int i=0; i<Object_Tag_Name.Length; i++)
        {
            if (tag_name == Object_Tag_Name[i])
            {
                score += 1;
                countText.text = "Count: " + score.ToString();
                //Debug.Log("Block1");
                player_select.Add(1);
                //Destroy(clickColl.gameObject);
                CameraShaking_On = true;

            }else{
                Debug.Log("no object!"); 
            }

        }
    }
    */



    /*
    //태그 비교 함수 1번 
     
    void Compare_Tag(string tag_name)
    {        

        string[] Object_Tag_Name = new string[] { "Block1", "Block2", "Block3"};


        for (int i=0; i<Object_Tag_Name.Length; i++)
        {
            if (tag_name == Object_Tag_Name[i])
            {
                score += 1;
                countText.text = "Count: " + score.ToString();
                //Debug.Log("Block1");
                player_select.Add(1);
                //Destroy(clickColl.gameObject);
                CameraShaking_On = true;

            }else{

                Debug.Log("no object!"); 

            }

        }
    }
    */



    //======================
    // 점수 업데이트 
    void Update_Score()
    {
        //점수가 1000점 이상이면 성공 
        if (Game_Parameter_Script.score > 1000)
        {
            //SceneManager.LoadScene("game_clear");
        }


    }


    //======================
    // 시 업데이트

    void Update_Time()
    {
        //시간이 0이 되면 실패 
        if  (Game_Parameter_Script.time >= 1)
        {
            Game_Parameter_Script.time -= 1;
            TimeText.text = "Time: " + Game_Parameter_Script.time.ToString();

        }
        else
        {
            Global_Game_Manager.instance.Update_Global_Score(Game_Parameter_Script.score);  
            SceneManager.LoadScene("ending");
            

        }


    }


}

