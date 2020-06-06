using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro; // Add the TextMesh Pro namespace to access the various functions.



public class GameManager_Update : MonoBehaviour
{
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


    //===================================================================
    //글로벌 이펙트    

    public GameObject prefab_effect;


    //블럭 Pool
    private List<GameObject> Effect_Pool = new List<GameObject>();
 
    //내가 생성할 블럭 갯수
    private readonly int EffectMaxCount = 10;
 
    //현재 생성된 블럭 인덱스
    private int curEffectIndex = 0;
 
    void Initialize_Map_Render_by_Object_Pooling()
    {
        //블럭 9개 미리 생성
        for(int i = 0; i < EffectMaxCount; ++i)
        {
            int x_rand = UnityEngine.Random.Range(10, 10);
            int y_rand = UnityEngine.Random.Range(-10, 10);


            GameObject b = Instantiate<GameObject>(prefab_effect,new Vector3(x_rand, y_rand,0), Quaternion.identity);
            
            //버튼 누리기 전까지는 비활성화 해준다.
            b.gameObject.SetActive(false);
 
            Effect_Pool.Add(b);
        }

    }
    //=====================================================================   

    // Start is called before the first frame update
    void Start()
    {
        Initialize_Map_Array();
        Initialize_Map_Render();
        Initialize_Map_Render_by_Object_Pooling(); 

    }
    
    //렌더러 초기화 
    void Initialize_Map_Render()
    {  
                                          
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


    //데이터 초기화 
    void Initialize_Map_Array()
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


    //=================================
    //이펙트 렌더러 
    void Rendering_Effect()
    { 
        //발사되어야할 순번의 총알이 이전에 발사한 후로 아직 떨어지고 있는 중이라면, 발사를 못하게 한다.
        if(Effect_Pool[curEffectIndex].gameObject.activeSelf)
        {
            return;
        }
 
        //총알 초기 위치는 매니저와 같게
        Effect_Pool[curEffectIndex].transform.position = this.transform.position;
 
        //총알 활성화 해주기
        Effect_Pool[curEffectIndex].gameObject.SetActive(true);
 
        //방금 9번째 총알을 발사했다면 다시 0번째 총알을 발사할 준비를 한다.
        if (curEffectIndex >= EffectMaxCount - 1)
        {
            curEffectIndex = 0;
        }
        else
        {
            curEffectIndex++;
        }

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



            //==================
            //이펙트 생성 함수 
            Rendering_Effect();




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

