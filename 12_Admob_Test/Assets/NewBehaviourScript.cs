using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Monetization;

public class NewBehaviourScript : MonoBehaviour
{

    string gameId = "4129939";
    public string placementId = "video";
    bool testMode = true; 


    // Start is called before the first frame update
    void Start()
    {
        Monetization.Initialize(gameId, testMode); 

    }

    public void ShowAd()
    {

        StartCoroutine(ShowAdWhenRead());

    }


    private IEnumerator ShowAdWhenRead()
    {

        while (!Monetization.IsReady(placementId))
        {
            yield return new WaitForSeconds(0.25f);
        }
        ShowAdPlacementContent ad = null;
        ad = Monetization.GetPlacementContent(placementId) as ShowAdPlacementContent; 

        if(ad != null)
        {
            ad.Show(); 
        }
 
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
