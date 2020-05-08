/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountFlowController : NSObject <PKAccountProvisioningControllerDelegate, PKFeatureDisplayableErrorProvider, PKSetupFlowControllerProtocol> {
    PKAccount * _account;
    PKAccountCredential * _accountCredential;
    PKAccountProvisioningController * _accountProvisioningController;
    PKAccountService * _accountService;
    long long  _context;
    <PKAccountFlowControllerDelegate> * _delegate;
    bool  _endedProvisioningFlow;
    bool  _isMerchantApp;
    unsigned long long  _madeDefault;
    PKAssertion * _notificationSupressionAssertion;
    unsigned long long  _operations;
    <PKSetupFlowControllerProtocol> * _parentFlowController;
    unsigned long long  _postProvisoningContentIndex;
    PKPaymentProvisioningController * _provisioningController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _shownMoreInfoItems;
}

@property (nonatomic, readonly) PKAccountCredential *accountCredential;
@property (nonatomic, readonly) PKAccountProvisioningController *accountProvisioningController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAccountFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operations;
@property (nonatomic, retain) <PKSetupFlowControllerProtocol> *parentFlowController;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (readonly) Class superclass;

+ (id)displayableErrorForError:(id)arg1 featureIdentifier:(unsigned long long)arg2 genericErrorTitle:(id)arg3 genericErrorMessage:(id)arg4;

- (void).cxx_destruct;
- (void)_accountProvisoningControllerRequiresNextViewController:(id)arg1;
- (void)_acquireAssertion;
- (void)_checkAccountProvisioningControllerState:(id)arg1;
- (unsigned long long)_fitleredOperations:(unsigned long long)arg1 account:(id)arg2 context:(long long)arg3;
- (void)_invalidateAssertion;
- (void)_nextPostProvisioningViewControllerWithCompletion:(id /* block */)arg1;
- (void)_requestPresentationOfActiviationViewControllerShowingMadeDefault:(bool)arg1;
- (void)_resetPostProvisioningContent;
- (id)accountCredential;
- (id)accountProvisioningController;
- (void)accountProvisioningController:(id)arg1 displayableError:(id)arg2;
- (void)accountProvisioningControllerUpdatedState:(id)arg1;
- (void)authAndDecryptWithVirtualCard:(id)arg1 authenticationReason:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endProvisioningFlow;
- (id)firstAccountViewController;
- (id)init;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 operations:(unsigned long long)arg5;
- (void)makeAccountPassDefault:(bool)arg1;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (unsigned long long)operations;
- (id)parentFlowController;
- (void)performInitalOperations;
- (id)provisioningController;
- (void)setDelegate:(id)arg1;
- (void)setParentFlowController:(id)arg1;

@end
