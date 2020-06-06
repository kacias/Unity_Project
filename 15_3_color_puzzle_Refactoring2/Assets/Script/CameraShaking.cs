using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraShaking : MonoBehaviour
{

    public float shakes = 1.0f;
    public float shakeAmount = 0.7f;
    public float decreaseFactor = 1.0f;
    Vector3 originalPos;


    void Start()
    {
        originalPos = gameObject.transform.position;
        Game_Parameter_Script.CameraShaking_On = false;
    }

    public void ShakeCamera(float shaking)
    {
        shakes = shaking;
        originalPos = gameObject.transform.position;
        Game_Parameter_Script.CameraShaking_On = true;
    }


    void FixedUpdate()
    {
        if (Game_Parameter_Script.CameraShaking_On)
        {
            if (shakes > 0)
            {
                gameObject.transform.localPosition = originalPos + Random.insideUnitSphere * shakeAmount;
                gameObject.transform.position += new Vector3(0f, 0f, -50f);
                shakes -= Time.deltaTime * decreaseFactor;
                //print("shakes:" + shakes); 
            }
            else
            {
                shakes = 1.0f;
                gameObject.transform.localPosition = originalPos;
                Game_Parameter_Script.CameraShaking_On = false;
            }
        }

    }

}
