/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface, PKXPCServiceDelegate> {
    NSObject<OS_dispatch_queue> * _asynchronousImageQueue;
    <PKPassLibraryDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSHashTable * _delegates;
    unsigned long long  _interfaceType;
    PKPassLibrary * _remoteLibrary;
    <NSObject> * _remoteLibraryObserver;
    PKXPCService * _remoteService;
    bool  _secureElementPassActivationAvailable;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *remoteSecureElementPasses;
@property (getter=isSecureElementPassActivationAvailable, nonatomic, readonly) bool secureElementPassActivationAvailable;
@property (readonly) Class superclass;

+ (bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1;
+ (bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1 deviceUILocked:(bool)arg2;
+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1;
+ (bool)isPassLibraryAvailable;
+ (bool)isPaymentPassActivationAvailable;
+ (bool)isSecureElementPassActivationAvailable;
+ (bool)isSuppressingAutomaticPassPresentation;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(id /* block */)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceWithRemoteLibrary;

- (void).cxx_destruct;
- (void)_activateSecureElementPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(id /* block */)arg4;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (long long)_currentNotificationCountForIdentifier:(id)arg1;
- (id)_defaultPaymentPassForPaymentRequest:(id)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_fetchContentForUniqueID:(id)arg1 usingSynchronousProxy:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_fetchImageSetContainerForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(bool)arg5 withCompletion:(id /* block */)arg6;
- (void)_fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(bool)arg5 withCompletion:(id /* block */)arg6;
- (id)_filterPeerPaymentPass:(id)arg1 request:(id)arg2;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(bool)arg2 limitResults:(bool)arg3 withRetries:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (bool)_hasRemoteLibrary;
- (id)_inAppRemoteObjectProxy;
- (id)_inAppRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_inAppRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_initWithRemote:(id)arg1;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (id)_remoteLibrary;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (bool)_setSetting:(unsigned long long)arg1 enabled:(bool)arg2 forPass:(id)arg3;
- (id)_sortedPaymentPassesForPaymentRequest:(id)arg1;
- (id)_synchronousExtendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousInAppRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(id /* block */)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(id /* block */)arg3;
- (void)activateSecureElementPass:(id)arg1 withActivationData:(id)arg2 completion:(id /* block */)arg3;
- (void)addDelegate:(id)arg1;
- (void)addPasses:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addPassesWithData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (id)backupMetadata;
- (bool)canAddFelicaPass;
- (bool)canAddPassOfType:(unsigned long long)arg1;
- (bool)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (bool)canAddSecureElementPassWithConfiguration:(id)arg1;
- (bool)canAddSecureElementPassWithPrimaryAccountIdentifier:(id)arg1;
- (void)canPresentPaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)canProvisionAccessPassWithConfiguration:(id)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (void)checkForTransitNotification;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (bool)containsPass:(id)arg1;
- (id)contentForUniqueID:(id)arg1;
- (unsigned long long)countOfPasses;
- (unsigned long long)countPassesOfType:(unsigned long long)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3;
- (id)dataForBundleResources:(id)arg1 objectUniqueIdentifier:(id)arg2;
- (void)dealloc;
- (id)defaultPaymentPassesWithRemotePasses:(bool)arg1;
- (id)delegate;
- (id)delegates;
- (id)diffForPassUpdateUserNotificationWithIdentifier:(id)arg1;
- (void)enabledValueAddedServicePassesWithCompletion:(id /* block */)arg1;
- (unsigned long long)estimatedTimeToResetApplePay;
- (id)expressFelicaTransitPasses;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchCurrentRelevantPassInfo:(id /* block */)arg1;
- (void)fetchHasCandidatePasses:(id /* block */)arg1;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)forceImmediateRevocationCheck;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getMetadataForFieldWithProperties:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalog:(bool)arg1 synchronously:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)getPassesAndCatalog:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(bool)arg2 withHandler:(id /* block */)arg3;
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(id /* block */)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(id /* block */)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 withHandler:(id /* block */)arg4;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(id /* block */)arg3;
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(id /* block */)arg3;
- (bool)hasPassesOfType:(unsigned long long)arg1;
- (bool)hasPassesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webDomain:(id)arg3;
- (id)imageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4;
- (id)inAppPaymentPassesForPaymentRequest:(id)arg1;
- (id)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2;
- (id)inAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 interfaceType:(unsigned long long)arg3;
- (void)introduceDatabaseIntegrityProblem;
- (bool)isPassbookVisible;
- (bool)isPaymentPassActivationAvailable;
- (bool)isRemovingPassesOfType:(unsigned long long)arg1;
- (bool)isSecureElementPassActivationAvailable;
- (void)issueWalletUserNotificationWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 customActionRoute:(id)arg4;
- (void)logDelayExitReasons;
- (bool)migrateData;
- (void)noteAccountChanged;
- (void)noteAccountDeleted;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)notifyPassUsedWithIdentifier:(id)arg1 fromSource:(long long)arg2;
- (void)nukeDatabaseAndExit;
- (void)openDigitalIssuanceSetupForIdentifier:(id)arg1;
- (void)openPaymentSetup;
- (void)openPaymentSetupForMerchantIdentifier:(id)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)passAdded:(id)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (id)passWithDPANIdentifier:(id)arg1;
- (id)passWithFPANIdentifier:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (id)passesOfType:(unsigned long long)arg1;
- (id)passesPendingActivation;
- (void)paymentPassWithAssociatedAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)paymentPassesWithLocallyStoredValue;
- (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)peerPaymentPassUniqueID;
- (void)pendingUserNotificationsWithCompletion:(id /* block */)arg1;
- (void)postUpgradedPassNotificationForMarket:(id)arg1 passUniqueID:(id)arg2;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(id /* block */)arg3;
- (void)presentPaymentPass:(id)arg1;
- (void)presentPaymentSetupRequest:(id)arg1 orientation:(id)arg2 completion:(id /* block */)arg3;
- (void)presentSecureElementPass:(id)arg1;
- (void)presentSubcredentialProvisioningInterfaceForEndpoint:(id)arg1 withConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (void)presentWalletWithRelevantPassUniqueID:(id)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (id)remotePaymentPasses;
- (id)remoteSecureElementPasses;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)removeAllScheduledActivities;
- (void)removeDelegate:(id)arg1;
- (void)removePass:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;
- (void)removePasses:(id)arg1;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2 completion:(id /* block */)arg3;
- (void)removePassesWithUniqueIDs:(id)arg1 diagnosticReason:(id)arg2;
- (bool)replacePassWithPass:(id)arg1;
- (void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(id /* block */)arg6;
- (void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(id)arg1;
- (bool)resetApplePayWithDiagnosticReason:(id)arg1;
- (bool)resetSettingsForPass:(id)arg1;
- (void)sendUserEditedCatalog:(id)arg1;
- (bool)setAutomaticPresentationEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setAutomaticUpdatesEnabled:(bool)arg1 forPass:(id)arg2;
- (void)setBackupMetadata:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setNotificationServiceUpdatesEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setShowInLockScreenEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setSuppressNotificationsEnabled:(bool)arg1 forPass:(id)arg2;
- (bool)setSuppressPromotionsEnabled:(bool)arg1 forPass:(id)arg2;
- (void)shuffleGroups:(int)arg1;
- (void)signData:(id)arg1 withSecureElementPass:(id)arg2 completion:(id /* block */)arg3;
- (void)sortedTransitPassesForAppletDataFormat:(id)arg1 completion:(id /* block */)arg2;
- (void)spotlightDeleteIndexEntriesForAllPassesWithCompletion:(id /* block */)arg1;
- (void)spotlightReindexAllPassesWithCompletion:(id /* block */)arg1;
- (void)spotlightReindexPassesWithUniqueIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)supportedTransitPartnersForDigitalIssuance:(id /* block */)arg1;
- (bool)supportsDisbursements;
- (void)transitMessageDidDisplay:(id)arg1;
- (void)transitMessageForRouteInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;

@end
