using System;
using System.Collections.Generic;

namespace UnityEngine.Purchasing
{
    /// <summary>
    /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
    ///
    /// Access GooglePlay store specific functionality.
    /// </summary>
    public class FakeGooglePlayStoreExtensions: IGooglePlayStoreExtensions
    {
        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Upgrade or downgrade subscriptions, with proration mode `IMMEDIATE_WITHOUT_PRORATION` by default
        /// <a href="https://developer.android.com/reference/com/android/billingclient/api/BillingFlowParams.ProrationMode">See more</a>
        /// </summary>
        /// <param name="oldSku">current subscription</param>
        /// <param name="newSku">new subscription to subscribe</param>
        public void UpgradeDowngradeSubscription(string oldSku, string newSku) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Upgrade or downgrade subscriptions
        /// </summary>
        /// <param name="oldSku">current subscription</param>
        /// <param name="newSku">new subscription to subscribe</param>
        /// <param name="desiredProrationMode">Specifies the mode of proration.
        /// <a href="https://developer.android.com/reference/com/android/billingclient/api/BillingFlowParams.ProrationMode">See more</a>
        /// </param>
        public void UpgradeDowngradeSubscription(string oldSku, string newSku, int desiredProrationMode) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Async call to the google store to <a href="https://developer.android.com/reference/com/android/billingclient/api/BillingClient#querypurchases">`queryPurchases`</a>
        /// using all the different support sku types.
        /// </summary>
        /// <param name="callback">Will be called as often as many purchases the queryPurchases finds. (the IStoreCallback will be called as well)</param>
        public void RestoreTransactions(Action<bool> callback) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Executes the same code as `GooglePlayStore.FinishTransaction`.
        /// </summary>
        /// <param name="productId">Products id / sku</param>
        /// <param name="transactionId">Products transaction id</param>
        public void FinishAdditionalTransaction(string productId, string transactionId) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Initiate a flow to confirm the change of price for an item subscribed by the user.
        /// </summary>
        /// <param name="productId">Product id</param>
        /// <param name="callback">Price changed event finished successfully</param>
        public void ConfirmSubscriptionPriceChange(string productId, Action<bool> callback) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Set listener for deferred purchasing events.
        /// Deferred purchasing is enabled by default and cannot be changed.
        /// </summary>
        /// <param name="action">Deferred purchasing successful events. Do not grant the item here. Instead, record the purchase and remind the user to complete the transaction in the Play Store. </param>
        public void SetDeferredPurchaseListener(Action<Product> action) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Optional obfuscation string to detect irregular activities when making a purchase.
        /// For more information please visit <a href="https://developer.android.com/google/play/billing/security">https://developer.android.com/google/play/billing/security</a>
        /// </summary>
        /// <param name="accountId">The obfuscated account id</param>
        public void SetObfuscatedAccountId(string accountId) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Optional obfuscation string to detect irregular activities when making a purchase
        /// For more information please visit <a href="https://developer.android.com/google/play/billing/security">https://developer.android.com/google/play/billing/security</a>
        /// </summary>
        /// <param name="profileId">The obfuscated profile id</param>
        public void SetObfuscatedProfileId(string profileId) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// Disconnects the implementation from the underlying Google Play Billing Library. Use for diagnostic or resource allocation purposes.
        /// </summary>
        public void EndConnection() { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// GetProductJSONDictionary is deprecated, nothing will be returns and no code will be executed. Will be removed soon. Use the `GoogleProductMetadata` of `product.metadata.GetGoogleProductMetadata()` from `IStoreController.products`
        /// </summary>
        /// <returns>null</returns>
        public Dictionary<string, string> GetProductJSONDictionary()
        {
            return null;
        }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// SetLogLevel is deprecated, no code will be executed. Will be removed soon.
        /// </summary>
        /// <param name="level">deprecated</param>
        public void SetLogLevel(int level) { }

        /// <summary>
        /// THIS IS A FAKE, NO CODE WILL BE EXECUTED!
        ///
        /// IsOwned is deprecated, false will be returned by default and no code will be executed. Will be removed soon.
        /// </summary>
        /// <param name="p">deprecated</param>
        /// <returns>false</returns>
        public bool IsOwned(Product p)
        {
            return false;
        }
    }
}
