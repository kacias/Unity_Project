using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Txt_Load : MonoBehaviour
{
    public World_Data a;
    public Game_Parameter_Script Ingame_Para; 

    private string allText;
    List<string> parameter_load = new List<string>();  

    // Start is called before the first frame update
    void Start()
    {

        //  1) Resource.Load 사용 시 경로명에 주의할 것, Asset/Resources 는 적지 않음. 확장도 적지 않음
        TextAsset mytxtData=(TextAsset)Resources.Load("NewFile");
        string txt=mytxtData.text;
        Debug.Log (txt[7]);


        //  2) Streamer 사용시 전체 경로 
        System.IO.StreamReader MyReader = new System.IO.StreamReader("/Users/sjk/Documents/Unity/Unity_Project/15_3_color_puzzle_Refactoring2/Assets/Resources/NewFile.txt");
        while((allText = MyReader.ReadLine()) != null)
        {
            parameter_load.Add(allText); 
            Debug.Log (allText);
        }
        MyReader.Close();

        //Debug.Log (parameter_load);
        Ingame_Para.Load_Parameter(  int.Parse(parameter_load[0])  );     
    }

    // Update is called once per frame
    void Update()
    {
        //a.Write();
        Ingame_Para.Test();           

    }
         
}

