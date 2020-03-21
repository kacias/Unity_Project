using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript4 : MonoBehaviour
{
    public GameObject obj;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.A))
        {

            transform.Translate(-0.1f, 0.0f, 0.0f); 

        }

        if(Input.GetKeyDown(KeyCode.D))
        {

            transform.Translate(0.1f, 0.0f, 0.0f); 

        }


        if(Input.GetKeyDown(KeyCode.Space))
        {

            //transform.Translate(0.1f, 0.0f, 0.0f); 
            //Instantiate(obj, new Vector3(0,0,0), Quaternion.identity);
            Instantiate(obj, new Vector3(transform.position.x,transform.position.y,transform.position.z), Quaternion.identity);

        }



    }
}
