using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class List_Test : MonoBehaviour
{
    // Start is called before the first frame update

    //선택한 블럭 리스트에 입력
    public List<int> player_select = new List<int>();
    private int previous_value = 0;
    private int combo_counter = 0; 

    void Start()
    {
        player_select.Add(10);
        player_select.Add(20);
        player_select.Add(20);
        player_select.Add(20);

        Debug.Log(player_select[0]);
        Debug.Log(player_select[1]);

        Debug.Log("==========================");
        foreach (int value in player_select)
        {
            Debug.Log(value);
        }
    }

    // Update is called once per frame
    void Update()
    {
        combo_counter = 0; 

        Debug.Log("==========================");
        foreach (int value in player_select)
        {
            if (previous_value == value)
            {
                combo_counter += 1; 
                //Debug.Log("chain combo!" + combo_counter);
            }
            //Debug.Log(value);
            previous_value = value; 

        }
    }
}
