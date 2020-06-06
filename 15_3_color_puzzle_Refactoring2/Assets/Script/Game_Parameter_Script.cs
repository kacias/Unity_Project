using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game_Parameter_Script : MonoBehaviour
{
            
    //테스트용 배열 
    public static int[,] array = new int[3, 3];

    
    //선택한 블럭 리스트에 입력
    public static List<int> player_select = new List<int>();

    
    //카메라 
    public static bool CameraShaking_On = false;

    
    //점수
    public static int score = 0;

    //시간
    public static int time = 500;
 
    //콤보 카운터 
    public static int combo_counter = 0;         


    //파라미터 로드 함수 
    public void Load_Parameter(int a)
    {
        time = a;
    }

    //테스트 
    public void Test()
    {
        Debug.Log("Loaded Time is " + time);

    }
       
}
