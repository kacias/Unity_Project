using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestCode : MonoBehaviour
{


    private int[] reading = new int[6] { 4, 9, 1, 0, 21, 12 };

    private void Awake()
    {
        
       
        for (int i = 0; i < reading.Length; i++)
        { 
            UnityEngine.Debug.Log("reading[" + i + "]=" +reading[i]);

            //System.Console.WriteLine("reading[" + i + "]={0}", reading[i]);
        }


    }

}


/*
private int a = 10;
public int b = 20;


int[] c = { 1, 2, 3, 4, 5 };



private void Awake()
{

    foreach (int i in c)
    {

        Debug.Log(i);

    }


}
*/


/*

private void Update()
{

    //업데이트 간격이 보장안됨 
    print(Time.deltaTime);
    Debug.Log(a + b);


}


//고정 프레임 업데이트 확인 
private void FixedUpdate()
{

    //업데이트 간격이 보장됨 
    //print(Time.deltaTime); 

}
*/



/*
private void OnDestroy()
{
Debug.Log("hi I am Destory");
}

private void OnDisable()
{
Debug.Log("hi I am OnDisable");

}

private void OnEnable()
{
Debug.Log("hi I am OnEnable");

}

private void OnMouseDown()
{
Debug.Log("hi I am OnMouseDown");

}

private void OnMouseDrag()
{
Debug.Log("hi I am OnMouseDrag");
}

*/

//순서 파악 
// Start is called before the first frame update
/*
private void Awake()
{
    //해당 오브젝트를 씬에서 Load할 때 호출 (생성자) 
    Debug.Log("hi I am Awake"); 
}

void Start()
{
    //실제 사용될 때 (최초 Update) 전에 1번 호출 
    Debug.Log("hi I am Start");

}

// Update is called once per frame
void Update()
{

    //Debug.Log("hi I am Update");

}
*/

