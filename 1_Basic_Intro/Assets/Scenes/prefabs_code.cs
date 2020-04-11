using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class prefabs_code : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.position.y < -3.0f)
        {
            Destroy(gameObject, 0);

        }

    }
}
