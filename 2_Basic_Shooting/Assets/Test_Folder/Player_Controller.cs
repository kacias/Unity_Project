using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Controller : MonoBehaviour
{
    float x_pos = 0.0f;
    float y_pos = 0.0f;
    private float moving_speed;
    float rot_speed;

    public GameObject obj;

    void Shoot()
    {

        if (Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("space pressed");
            Instantiate(obj, new Vector3(transform.position.x, transform.position.y, transform.position.z), Quaternion.identity);

        }

    }




    // Start is called before the first frame update
    void Start()
    {
        this.x_pos = 0.0f;
        this.y_pos = 0.0f;
        this.moving_speed = 10.0f;
        this.rot_speed = 50.0f;

    }



    void Translatiton()
    {

        float keyHorizontal = Input.GetAxis("Horizontal");
        float keyVertical = Input.GetAxis("Vertical");

        transform.Translate(Vector3.right * this.moving_speed * Time.smoothDeltaTime * keyHorizontal, Space.World);
        transform.Translate(Vector3.up * this.moving_speed * Time.smoothDeltaTime * keyVertical, Space.World);


        //======================================
        //이렇게 하면 컨트롤이 잘 안됨 
        /*
        transform.Translate(x_pos, y_pos, 0.0f);


        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            Debug.Log("left pressed");
            this.x_pos -= 0.05f ;
        }

        else if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            Debug.Log("right pressed");
            this.x_pos += 0.05f ;
        }


        else if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            Debug.Log("up pressed");
            this.y_pos += 0.05f ;
        }


        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            Debug.Log("down pressed");
            this.y_pos += 0.05f ;
        }
        //======================================
        */


    }

    //==========================================
    //Rotation 함수 
    void Rotation()
    {

        //keybord input
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        h = h * this.rot_speed * Time.deltaTime;
        v = v * this.rot_speed * Time.deltaTime;

        transform.Rotate(Vector3.back * h);
        transform.Rotate(Vector3.right * v);

    }




    // Update is called once per frame
    void Update()
    {
        Translatiton();
        Rotation();

        Shoot();

    }
}
