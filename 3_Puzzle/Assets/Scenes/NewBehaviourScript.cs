using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{

    int i=0;
    int j=0; 
    public GameObject obj;
    public GameObject obj_side;
    private GameObject target;

    int random_num; 

    int count = 0;
    public int score = 50; 


    // Start is called before the first frame update
    void Start()
    {
        random_num = Random.Range(1, 10);
        Debug.Log(random_num); 


        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {

                count += 1; 
                
                if (random_num == count)
                {
                    //옆모습을 출력
                    Instantiate(obj_side, new Vector3(i*0.4f - 0.4f, j*0.4f- 0.4f, 0), Quaternion.identity);

                }else{

                    //정면을 출력
                    Instantiate(obj, new Vector3(i*0.4f - 0.4f, j*0.4f- 0.4f, 0), Quaternion.identity);
                }
                

            }
  
        }
       
    }


    void FixedUpdate()
    {

        if (Input.GetMouseButtonDown (0)) {
            CastRay ();
            if (target == this.gameObject) {  //타겟 오브젝트가 스크립트가 붙은 오브젝트라면

                // 여기에 실행할 코드를 적습니다.

            } 

        }

    }


    void CastRay() // 유닛 히트처리 부분.  레이를 쏴서 처리
    {

        target = null;
        Vector2 pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
        RaycastHit2D hit = Physics2D.Raycast (pos, Vector2.zero, 0f);

        if (hit.collider != null) 
        { 
            //히트되었다면 여기서 실행
            Debug.Log (hit.collider.name);  //이 부분을 활성화 하면, 선택된 오브젝트의 이름이 찍혀 나옵니다. 
            

            
            target = hit.collider.gameObject;  //히트 된 게임 오브젝트를 타겟으로 지정
            
            Destroy(target);                //타겟을 삭제 하고 싶을 때 

            if (hit.collider.name == "Block_Run_Side(Clone)")
            {
                Debug.Log ("두더지 클릭성공!");
                score += 100; 

            }else{

                Debug.Log ("잘못 클릭했습니다!");
                score -= 10; 

            }
            
            Debug.Log (score);
                
        }

    }









    // Update is called once per frame
    void Update()
    {
        /*
        if (Input.GetMouseButtonDown(0))
        {

            Vector3 wp= Camera.main.ScreenToWorldPoint(Input.mousePosition);
            PolygonCollider2D coll = obj.GetComponent<PolygonCollider2D>();

            //Debug.Log("x:" + wp.x);
            //Debug.Log("y:" + wp.y);

            if (coll.OverlapPoint(wp))
            {
                Destroy(obj);

                Debug.Log("Click");
            }
        }
        */

        /*
        if (Input.GetMouseButtonDown(0)) {
            RaycastHit hit = new RaycastHit();

    
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray.origin,ray.direction, out hit)) {
                hit.transform.gameObject.SendMessage("HandleInput");
            }
        }

        */


        /*

        if (Input.GetMouseButtonUp (0))
        {
            Debug.Log("hit !!");

            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hitInfo;

            if( Physics.Raycast(ray,out hitInfo, 100f) )
            {
                Debug.Log("hit point : " + hitInfo.point);

                int l = hitInfo.transform.gameObject.layer;
                Debug.Log(" hit object : " + hitInfo.collider.name);


                if( l == clickLayer )
                {
                    Debug.Log(" hit object : " + hitInfo.collider.name);
                }
  
                
            }
        }
    

        */



    }
}
