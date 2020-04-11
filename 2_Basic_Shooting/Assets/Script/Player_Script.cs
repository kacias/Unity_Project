using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Script : MonoBehaviour
{


    private float x_pos;
    private float y_pos;
    private float moving_speed;
    private float rot_speed;

    public GameObject obj; 
        

    // Start is called before the first frame update
    void Start()
    {
        this.x_pos = 0.0f;
        this.y_pos = 0.0f;
        this.moving_speed = 10.0f;
        this.rot_speed = 50.0f;
    }

    // Update is called once per frame
    void Update()
    {
        Translatiton();
        Rotation();
        Shoot();
    }

    void Shoot()
    {

        if (Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("space pressed");
            Instantiate(obj, new Vector3(transform.position.x, transform.position.y, transform.position.z), Quaternion.identity);

        }

    }

    void Translatiton()
    {



        float keyHorizontal = Input.GetAxis("Horizontal");
        float keyVertical = Input.GetAxis("Vertical");

        transform.Translate(Vector3.right * this.moving_speed * Time.smoothDeltaTime * keyHorizontal, Space.World);
        transform.Translate(Vector3.up * this.moving_speed * Time.smoothDeltaTime * keyVertical, Space.World);


        //===========================================
        //직접 구현
        /*

        transform.Translate(x_pos, y_pos, 0.0f);


        if (Input.GetKeyUp(KeyCode.LeftArrow))
        {
            Debug.Log("left pressed");
            this.x_pos -= 0.05f * Time.deltaTime;
        }

        else if (Input.GetKeyUp(KeyCode.RightArrow))
        {
            Debug.Log("right pressed");
            this.x_pos += 0.05f * Time.deltaTime;
        }


        else if (Input.GetKeyUp(KeyCode.UpArrow))
        {
            Debug.Log("up pressed");
            this.y_pos += 0.05f * Time.deltaTime;
        }


        else if (Input.GetKeyUp(KeyCode.DownArrow))
        {
            Debug.Log("down pressed");
            this.y_pos += 0.05f * Time.deltaTime;
        }
        */

    }

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

    


}
