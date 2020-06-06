using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//=====================================
//일반 클래스 선언
/*
public class Block_Object
{
    public int x, y;

    public Block_Object()
    {
        this.x = 10;
        this.y = 20;        
    }


     public int Calculate_Math(int a, int b)
    {
        return (a+b); 
    }
}
*/


//=======================================
//클래스 사용 
public class Class_Test : MonoBehaviour
{

    Block_Object a; 
    Block_Object b; 

    
    // Start is called before the first frame update
    void Start()
    {
  
        a = new Block_Object();
        b = new Block_Object();
       
    }

    // Update is called once per frame
    void Update()
    {
        int c = a.Calculate_Math(1,3); 
        int d = b.Calculate_Math(5,6); 

        Debug.Log("hi I am class" + c + "_" + d);

                       
    }
}




//=====================================
//제네릭 클래스 선언 
/*
public class Block_Object<T>
{
    public T x, y;

    public Block_Object(T a, T b)
    {
        this.x = a;
        this.y = b;        
    }


     public T Calculate_Math(T a, T b)
    {
        T c = a + b;
        return (c); 
    }
}
*/


