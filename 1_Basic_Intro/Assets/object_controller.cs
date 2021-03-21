using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class object_controller : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject obj;


    void Awake()
    {

        Debug.Log("Awake");

    }

    void Start()
    {

        Debug.Log("Start");

    }

    // Update is called once per frame
    void Update()
    {
        float randomX = Random.Range(-5f, 5f);



        //Debug.Log(transform.position.y);

        if (transform.position.y < -10.0f)
        {
            Destroy(gameObject, 0); 

        }

        //transform.Translate(0.1f, 0.0f, 0.0f);
        transform.localScale += new Vector3(0.00001f, 0.0001f, 0.0f);

        if (Input.GetKeyDown(KeyCode.A))
        {
            Debug.Log("A Pressed");
            Instantiate(obj, new Vector3(randomX, transform.position.y, transform.position.z), Quaternion.identity);

        }

    }

    void OnEanble()
    {
        Debug.Log("On Enable");
    }


    void OnDisable()
    {
        Debug.Log("On Disable");

    }







}
