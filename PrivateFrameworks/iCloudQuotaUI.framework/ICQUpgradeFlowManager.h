/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeFlowManager : NSObject <ICQPageDelegate, ICQServerHookDelegate, RemoteUIControllerDelegate, UINavigationControllerDelegate> {
    NSDictionary * _bindings;
    ICQUpgradeOfferViewController * _busyOfferViewController;
    bool  _completedFamilySetup;
    <ICQUpgradeFlowManagerDelegate> * _delegate;
    id /* block */  _didComplete;
    bool  _didCompleteICQAction;
    bool  _didReceiveiTunesCode;
    ICQUpgradeFlowOptions * _flowOptions;
    UINavigationController * _hostingNavigationController;
    ICQOffer * _offer;
    AAUIRemoteUIController * _remoteUIController;
    int  _renewCredentialsCount;
    AAUIServerUIHookHandler * _serverHookHandler;
    bool  _shouldNavigationControllerBeDismissed;
    ICQAlertController * _upgradeAlertController;
}

@property (nonatomic, retain) NSDictionary *bindings;
@property (nonatomic) bool completedFamilySetup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUpgradeFlowManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) ICQUpgradeFlowOptions *flowOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *hostingNavigationController;
@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic, retain) AAUIRemoteUIController *remoteUIController;
@property (nonatomic) bool shouldNavigationControllerBeDismissed;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQAlertController *upgradeAlertController;

+ (void)needsToRunWithCompletion:(id /* block */)arg1;
+ (bool)shouldShowForOffer:(id)arg1;
+ (bool)shouldSubclassShowForOffer:(id)arg1;
+ (Class)subclassForOfferType:(long long)arg1;

- (void).cxx_destruct;
- (id)_ICQNavigationControllerWithRootViewController:(id)arg1;
- (void)_addAlertActionForAlertSpec:(id)arg1 buttonIndex:(long long)arg2;
- (void)_cancelFlow;
- (void)_clearBusyOfferViewController;
- (void)_configurePresentingViewController:(id)arg1;
- (void)_initiateFamilySetupFlow;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_performPageButtonActionWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPageWithSpecification:(id)arg1;
- (void)_presentUpgradeComplete;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;
- (void)_sendDelegateDidPresentViewController:(id)arg1;
- (void)_setBusyOfferViewController:(id)arg1;
- (bool)_shouldPresentRemoteFlow;
- (void)_simulateDoneButton;
- (void)_tappedAlertLink:(id)arg1;
- (id)_whitelistedInProcessClients;
- (void)beginFlowWithPresentingViewController:(id)arg1;
- (id)bindings;
- (bool)completedFamilySetup;
- (id)delegate;
- (void)dismissUpgradeFlowWithSuccess:(bool)arg1;
- (id)flowOptions;
- (id)hostingNavigationController;
- (id)init;
- (id)initBaseclassWithOffer:(id)arg1;
- (id)initSubclassWithOffer:(id)arg1;
- (id)initWithOffer:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (bool)needsNetwork;
- (id)offer;
- (void)presentFlowHostedInNavigationController:(id)arg1;
- (id)remoteUIController;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (void)setBindings:(id)arg1;
- (void)setCompletedFamilySetup:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlowOptions:(id)arg1;
- (void)setHostingNavigationController:(id)arg1;
- (void)setRemoteUIController:(id)arg1;
- (void)setShouldNavigationControllerBeDismissed:(bool)arg1;
- (void)setUpgradeAlertController:(id)arg1;
- (bool)shouldNavigationControllerBeDismissed;
- (void)showNetworkFailurePage;
- (void)showUpgradeFailurePage;
- (id)upgradeAlertController;

@end
