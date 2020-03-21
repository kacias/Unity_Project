using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript2 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(-0.01f, 0.0f, 0.0f); 

    }

    void OnTriggerEnter( Collider col )

    {

        if( col.gameObject.tag == "Sphere_tag" )
        {
            Debug.Log("Collision with sphere"); 
        }

    }





}
