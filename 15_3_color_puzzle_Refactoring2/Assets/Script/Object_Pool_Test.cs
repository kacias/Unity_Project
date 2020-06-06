using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Object_Pool_Test : MonoBehaviour
{
   //총알 프리팹
    public GameObject prefab_bullet;
 
    //총알 Pool
    private List<GameObject> bulletPool = new List<GameObject>();
 
    //내가 생성할 총알 갯수
    private readonly int bulletMaxCount = 100;
 
    //현재 장전된 총알의 인덱스
    private int curBulletIndex = 0;
 
    void Start()
    {
        //총알 10개 미리 생성
        for(int i = 0; i < bulletMaxCount; ++i)
        {
            GameObject b = Instantiate<GameObject>(prefab_bullet);
            
            //총알 발사하기 전까지는 비활성화 해준다.
            b.gameObject.SetActive(false);
 
            bulletPool.Add(b);
        }
    }
 
    void Update()
    {
        FireBulet();
    }
 
    //총알 발사
    void FireBulet()
    {
        Debug.Log("fire fire");
        //마우스 좌클릭 할 때마다 총알 발사
        if (Input.GetMouseButtonDown(0))
        {
            //발사되어야할 순번의 총알이 이전에 발사한 후로 아직 떨어지고 있는 중이라면, 발사를 못하게 한다.
            if(bulletPool[curBulletIndex].gameObject.activeSelf)
            {
                return;
            }
 
            //총알 초기 위치는 매니저와 같게
            bulletPool[curBulletIndex].transform.position = this.transform.position;
 
            //총알 활성화 해주기
            bulletPool[curBulletIndex].gameObject.SetActive(true);
 
            //방금 9번째 총알을 발사했다면 다시 0번째 총알을 발사할 준비를 한다.
            if (curBulletIndex >= bulletMaxCount - 1)
            {
                curBulletIndex = 0;
            }
            else
            {
                curBulletIndex++;
            }
        }
        // 마우스 우클릭 때도 불성화 
        else if (Input.GetMouseButtonDown(1))
        {
            bulletPool[curBulletIndex].gameObject.SetActive(false);
        }
    }
}
