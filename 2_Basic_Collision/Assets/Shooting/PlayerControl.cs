using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour
    {

    protected Animator animator ;
    private int a = 0; 
    private int b = 0;  
    private int status = 0; 
    
    void Start () {
        animator = GetComponent < Animator > ();
    }
    void Update () {
        if (status == 0)
        {
            a = a + 1; 
            if (a > 300)
            {
                animator.SetFloat( "Time_Foward" , a );
                animator.SetFloat( "Time_Left" , 0 );
                a = 0; 
                status = 1; 
            }
        }else if (status == 1)
        {

            b = b + 1; 
            if (b > 300)
            {
                animator.SetFloat( "Time_Left" , b );
                animator.SetFloat( "Time_Foward" , 0 );
                b = 0; 
                status = 0; 
            }
        }
        if ( animator )
        {
            if (status == 0)
            {
                Debug.Log("animator foward running" + a); 
            }else if (status == 1)
            {
                Debug.Log("animator left running" + b); 
            }


        }




        

    }
    
    /* 
    protected Animator animator ;
    private float directionX = 0 ;
    private float directionY = 0 ;
    private bool walking = false ;
    void Start () {
    animator = GetComponent < Animator > ();
    }
    void Update () {
    if ( animator )
    {
        float h = Input . GetAxisRaw ( "Horizontal" );
        float v = Input . GetAxisRaw ( "Vertical" );
        walking = true ;
        if ( h > 0 ) {
            directionX = 1 ;
            directionY = 0 ;
        } else if ( h < 0 ) {
            directionX = - 1 ;
            directionY = 0 ;
        } else if ( v > 0 ) {
            directionX = 0 ;
            directionY = 1 ;
        } else if ( v < 0 ) {
            directionX = 0 ;
            directionY = - 1 ;
        } else {
            walking = false ;
        }

    if ( walking ) {
        transform . Translate ( new Vector3 ( directionX , directionY , 0 ) * Time . deltaTime * 0.5f );
        }
        animator . SetFloat ( "DirectionX" , directionX );
        animator . SetFloat ( "DirectionY" , directionY );
        animator . SetBool ( "Walking" , walking );
        }
    }
    */



}
