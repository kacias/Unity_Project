using System;
using UnityEngine.Purchasing.Interfaces;
using UnityEngine.Purchasing.Models;

namespace UnityEngine.Purchasing
{
    /// <summary>
    /// This is C# representation of the Java Class BillingClientStateListener
    /// <a href="https://developer.android.com/reference/com/android/billingclient/api/BillingClientStateListener">See more</a>
    /// </summary>
    class BillingClientStateListener : AndroidJavaProxy, IBillingClientStateListener
    {
        const string k_AndroidBillingClientStateListenerClassName = "com.android.billingclient.api.BillingClientStateListener";

        Action m_OnConnected;
        Action m_Disconnect;

        internal BillingClientStateListener()
            : base(k_AndroidBillingClientStateListenerClassName) { }

        public void RegisterOnConnected(Action onConnected)
        {
            m_OnConnected = onConnected;
        }

        public void RegisterOnDisconnected(Action onDisconnected)
        {
            m_Disconnect = onDisconnected;
        }

        void onBillingSetupFinished(AndroidJavaObject billingResult)
        {
            GoogleBillingResult result = new GoogleBillingResult(billingResult);
            if (result.responseCode == BillingClientResponseEnum.OK())
            {
                m_OnConnected();
            }
            else
            {
                m_Disconnect();
            }
        }

        void onBillingServiceDisconnected()
        {
            m_Disconnect();
        }
    }
}
