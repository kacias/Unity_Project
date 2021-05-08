using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy_Manager : MonoBehaviour
{

    public GameObject obj;
    private int counter;


    // Start is called before the first frame update
    void Start()
    {
        counter = 0;
    }

    // Update is called once per frame
    void Update()
    {

        int a;

        ++counter;

        a = counter % 100;
        if (a == 1)
        {
            for (int i = 0; i < 5; i++)
            {

                float randomX = Random.Range(-5f, 5f);

                Instantiate(obj, new Vector3(randomX, 0.0f, 50.0f), Quaternion.identity);

            }
        }




    }
}
