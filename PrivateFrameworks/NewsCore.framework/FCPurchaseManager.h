/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPurchaseManager : NSObject <FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType> {
    <FCBundleSubscriptionManagerType> * _bundleSubscriptionManager;
    <FCCoreConfigurationManager> * _configurationManager;
    <FCPurchaseManagerDelegate> * _delegate;
    NSString * _lastSignedInItunesAccountDSID;
    FCKeyValueStore * _localStore;
    NSMutableDictionary * _ongoingPurchaseEntriesByProductID;
    <FCPaymentTransactionManager> * _paymentTransactionManager;
    FCPurchaseController * _purchaseController;
    <FCPurchaseIntegrityChecker> * _purchaseIntegrityChecker;
    <FCPurchaseReceiptProvider> * _purchaseReceiptProvider;
    <FCPurchaseFlowOverrideProviderType> * purchaseFlowOverrideProvider;
}

@property (nonatomic, readonly) <FCBundleSubscriptionManagerType> *bundleSubscriptionManager;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCPurchaseManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastSignedInItunesAccountDSID;
@property (nonatomic, retain) FCKeyValueStore *localStore;
@property (nonatomic, retain) NSMutableDictionary *ongoingPurchaseEntriesByProductID;
@property (nonatomic, readonly) <FCPaymentTransactionManager> *paymentTransactionManager;
@property (nonatomic, readonly) FCPurchaseController *purchaseController;
@property (nonatomic, retain) <FCPurchaseFlowOverrideProviderType> *purchaseFlowOverrideProvider;
@property (nonatomic, readonly) <FCPurchaseIntegrityChecker> *purchaseIntegrityChecker;
@property (nonatomic, readonly) <FCPurchaseReceiptProvider> *purchaseReceiptProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_ongoingPurchaseEntryIDForProductID:(id)arg1;
- (void)_purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;
- (void)activityObservingApplicationDidEnterBackground;
- (bool)anyOngoingPurchases;
- (void)authenticateAppleIDWithCompletion:(id /* block */)arg1;
- (id)bundleSubscriptionManager;
- (void)cleanupStaleOngoingPurchaseEntries;
- (void)clearAllOngoingPurchaseEntries;
- (id)configurationManager;
- (id)delegate;
- (id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurcase:(bool)arg2;
- (void)finishPurchaseTransactionWithProductID:(id)arg1;
- (id)init;
- (id)initWithCloudContext:(id)arg1 purchaseIntegrityChecker:(id)arg2 purchaseReceiptProvider:(id)arg3 paymentTransactionManager:(id)arg4 bundleSubscriptionManager:(id)arg5 keyValueStoreOption:(unsigned long long)arg6;
- (bool)isPurchaseOngoingForTagID:(id)arg1;
- (bool)isPurchaseTimeElapsedWithEntry:(id)arg1;
- (id)lastSignedInItunesAccountDSID;
- (void)loadLocalCachesFromStore;
- (id)localStore;
- (id)ongoingPurchaseEntriesByProductID;
- (id)ongoingPurchaseEntryForProductID:(id)arg1;
- (id)paymentTransactionManager;
- (void)performEntitlementWithTagID:(id)arg1 completion:(id /* block */)arg2;
- (id)purchaseController;
- (id)purchaseFlowOverrideProvider;
- (id)purchaseIntegrityChecker;
- (id)purchaseReceiptProvider;
- (void)removeOngoingPurchaseEntryForProductID:(id)arg1;
- (void)saveToDisk;
- (void)setConfigurationManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastSignedInItunesAccountDSID:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)setOngoingPurchaseEntriesByProductID:(id)arg1;
- (void)setPurchaseFlowOverrideProvider:(id)arg1;
- (bool)signInDetected;
- (void)simulateFailurePurchaseWithProductID:(id)arg1 transactionState:(long long)arg2 error:(id)arg3;
- (void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2;
- (void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3;
- (void)startBundlePurchaseWithPurchase:(id)arg1 error:(id*)arg2;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(bool)arg7 payment:(id)arg8 error:(id*)arg9;
- (void)startPurchaseWithTagID:(id)arg1 purchase:(id)arg2 webAccessOptIn:(bool)arg3 error:(id*)arg4;
- (void)transactionFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3;
- (void)transactionPurchasedWithProductID:(id)arg1;

@end
