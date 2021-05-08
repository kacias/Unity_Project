using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{

    protected Animator animator;
    int a = 0; 

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        animator.SetBool("bJump", false);


    }

    // Update is called once per frame
    void Update()
    {
        a += 1;
        Debug.Log(a); 

        if (a > 500)
        {
            animator.SetBool("bJump", true);
        }
        


    }
}
