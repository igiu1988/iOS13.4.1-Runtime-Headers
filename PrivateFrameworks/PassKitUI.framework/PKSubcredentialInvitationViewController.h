/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSubcredentialInvitationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable> {
    NSString * _contactName;
    PKPeerPaymentContactResolver * _contactResolver;
    <PKSubcredentialInvitationFlowControllerProtocol> * _flowController;
    PKHeroCardExplainationHeaderView * _heroCardView;
    PKSubcredentialInvitationFlowControllerContext * _provisioningContext;
    <PKSubcredentialProvisioningViewModelProtocol> * _provisioningViewModel;
    <PKSubcredentialProvisioningViewModelProtocol> * _remoteProvisioningViewModel;
    PKAppletSubcredentialSharingSession * _session;
    bool  _shouldAttemptRemoteDeviceProvisioning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKSubcredentialProvisioningFlowController> *flowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, retain) PKSubcredentialInvitationFlowControllerContext *provisioningContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)advanceToNextState;
- (id)bodyTextForContext:(id)arg1;
- (void)cancelButtonPressed;
- (id)contactKeysToFetch;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (unsigned long long)operation;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)provisioningContext;
- (void)resetState;
- (void)setProvisioningContext:(id)arg1;
- (id)sharingSessionWithDelegate:(id)arg1;
- (void)showActivityIndicator:(bool)arg1;
- (void)showSuccessCheckmark:(bool)arg1;
- (void)startLocalDeviceProvisioning;
- (void)startRemoteDeviceProvisioning;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)viewDidLoad;

@end
