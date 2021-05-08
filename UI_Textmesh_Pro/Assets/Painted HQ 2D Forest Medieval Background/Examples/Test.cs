using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI; 

public class Test : MonoBehaviour
{

    private GameObject target;
    public Text ScoreText; 


    public string _exp;
    void Start()
    {
        List<Dictionary<string, object>> data = CSVReader.Read("testuser");

        for (var i = 0; i < data.Count; i++)
        {

                Debug.Log("index " + (i).ToString() + " : " + data[i]["id"] + " " + data[i]["name"] + " " + data[i]["default_damage"]);

        }

        _exp = data[1]["name"].ToString();
        Debug.Log(_exp);
        //Debug.Log(data);
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            ScoreText.text = _exp;

        }

    }

}
