using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;



public class Lobby : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

        
    }

    public void start_game()
    {

        //SceneManager.LoadScene("puzzle");
        SceneManager.LoadScene("puzzle_upgrade");

    }
}
    