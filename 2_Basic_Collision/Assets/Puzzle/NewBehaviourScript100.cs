using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript100 : MonoBehaviour
{
    public GameObject obj;
    int i=0;
    int j=0; 
    public int clickLayer = 0;
    public int blockLayer = 9;

    public GameObject Glove = null;

    // Start is called before the first frame update
    void Start()
    {
       
        for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
            {
                Instantiate(obj, new Vector3(i*10, j*10, 0), Quaternion.identity);
            }
  

        }
       
    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetMouseButtonDown(0))
        {

            Vector3 wp= Camera.main.ScreenToWorldPoint(Input.mousePosition);
            PolygonCollider2D coll = obj.GetComponent<PolygonCollider2D>();

            Debug.Log("x:" + wp.x);
            Debug.Log("y:" + wp.y);

            if (coll.OverlapPoint(wp))
            {
                Destroy(obj);

                Debug.Log("Click");
            }
        }




        //====================================================
        //월드에서 정보 얻어오기 
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
 
                if( l == clickLayer )
                {
                    Debug.Log(" hit object : " + hitInfo.collider.name);
                }
                  
            }
        }
         */
        //========================================================


        
    }
}
