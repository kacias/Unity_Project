using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private float z_pos;
    public GameObject fx_obj; 



    // Start is called before the first frame update
    void Start()
    {
        z_pos = 0.0f;

    }

    // Update is called once per frame
    void Update()
    {

        z_pos += 0.2f; 
        transform.Translate(0.0f, 0.0f, z_pos * Time.deltaTime);

        //Debug.Log(z_pos);

        if (z_pos > 40.0f)
        {
            // Kills the game object in 0 seconds 
            Destroy(gameObject, 0);

        }


    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Enemy_Tag")
        {

            Debug.Log("collision");
            Destroy(gameObject, 0);
            Destroy(other.gameObject, 0);
            Instantiate(fx_obj, new Vector3(transform.position.x, transform.position.y, transform.position.z), Quaternion.identity);
        }
    }


}
