using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using GoogleMobileAds.Api;


public class GoogleAdMobController2 : MonoBehaviour
{
    private BannerView bannerView;
    
    public void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });

        //googld admob 앱단위 ID 
        //Google admob --> 앱 --> 앱설정에 있는 숫자 
        //Unity --> asset --> google mobile ad --> setup 에것과 동일  
        string appId = "ca-app-pub-6890068925200989~3445459528";



        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(appId);

        this.RequestBanner();
    }

    public void RequestBanner()
    {

        //google admob 광고 단위 ID 
        //Google admob 홈페이지에 있는 테스트 배너 링크 (개인걸로 대체) 
        /*    
        https://developers.google.com/admob/unity/test-ads?hl=ko
        */

        string adUnitId = "ca-app-pub-3940256099942544/6300978111";        


        // Create a 320x50 banner at the top of the screen.
        //this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Top);
        this.bannerView = new BannerView(adUnitId, AdSize.Banner, 0, 50);

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();

        // Load the banner with the request.
        this.bannerView.LoadAd(request);

    }



}
