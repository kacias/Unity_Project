using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{

    public GameObject obj; 

    void Start() 
    {
        for (int i = 0; i < 5; i++) 
        {

            float randomX = Random.Range(-5f, 5f); //적이 나타날 X좌표를 랜덤으로 생성해 줍니다.
            //float randomY = Random.Range(0f, 100f); //적이 나타날 X좌표를 랜덤으로 생성해 줍니다.

            Instantiate(obj, new Vector3(randomX,0,0), Quaternion.identity);
        }
    }


}
