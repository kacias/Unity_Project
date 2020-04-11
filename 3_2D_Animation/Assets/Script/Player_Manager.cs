using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Manager : MonoBehaviour
{
    protected Animator animator;
    private int a; 

    // Start is called before the first frame update
    void Start()
    {
        a = 0; 
        animator = GetComponent<Animator>();

    }

    // Update is called once per frame
    void Update()
    {
        a = a + 1;

        if (a > 300 && a < 600)
        {
            animator.SetBool("bJump", true);



        }else if (a > 600)
        {

            animator.SetBool("bJump", false);


        }

    }
}
