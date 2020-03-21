using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScriptMouse : MonoBehaviour
{

    public Vector3 mousePosition;



    private Camera cam;

    int i;
    int j; 


    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        
        //mousePosition = cam.ScreenToWorldPoint(Input.mousePosition);



        /*
        if (Input.GetMouseButtonDown(1))
        {
             Debug.Log("Click");
             Debug.Log("Position X:" + (mousePosition.x * 100.0f)); 
             Debug.Log("Position Y:" + (mousePosition.y * 100.0f)); 


            //Destroy(gameObject, 0);
        }
        */

        /*
        if (Input.GetMouseButtonDown(0)) {
            RaycastHit hit;
        
            if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 100)) {
                //agent.destination = hit.point;
                Destroy(gameObject, 0);
            }
        }
        */






    }

}
