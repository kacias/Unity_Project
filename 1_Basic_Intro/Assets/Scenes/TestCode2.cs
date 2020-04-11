using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestCode2 : MonoBehaviour
{

    public GameObject myObject; 


    private void Start()
    {
        
    }



    private void Update()
    {
        float randomX = Random.Range(-5f, 5f);

        Instantiate(myObject, new Vector3(randomX, 0, 0), Quaternion.identity); 


    }





}

/*
 *     private float x_pos = 0.0f;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(transform.position.y); 
    }

    // Update is called once per frame
    void Update()
    {
     
        transform.Rotate(1.0f, 0.0f, 0.0f);
        transform.Translate(x_pos, 0.0f, 0.0f);

        if (transform.position.y < 0)
        {
            Debug.Log("I am about to hit");

        }

        if(Input.GetKeyDown(KeyCode.Space))
        {
            x_pos += 0.1f; 
            Debug.Log("space is pressed");

        }
    }

    */
