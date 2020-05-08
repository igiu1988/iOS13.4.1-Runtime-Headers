/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentAccountResolutionController : NSObject <MFMailComposeViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentActionViewControllerDelegate> {
    PKPeerPaymentAccount * _account;
    long long  _context;
    <PKPeerPaymentAccountResolutionControllerDelegate> * _delegate;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    PKPeerPaymentActionViewController * _peerPaymentActionViewController;
    <PKPaymentSetupDelegate> * _setupDelegate;
    PKPeerPaymentWebService * _webService;
}

@property (nonatomic, retain) PKPeerPaymentAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentAccountResolutionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaymentSetupDelegate> *setupDelegate;
@property (readonly) Class superclass;

+ (bool)_canShowContactSupportForPass:(id)arg1;
+ (bool)_hasPeerPaymentPassProvisionedForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;
+ (id)_peerPaymentPassForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;
+ (bool)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1;
+ (bool)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_callSupportWithPhoneNumber:(id)arg1;
- (id)_contactAppleSupportAlertControllerForPass:(id)arg1;
- (void)_dismissViewController;
- (void)_emailSupportWithEmailAddress:(id)arg1;
- (bool)_hasPeerPaymentPassProvisioned;
- (void)_openSupportWebsiteWithWebsiteURL:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)_paymentWebService;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (id)_peerPaymentPass;
- (void)_presentActivationFlowWithCompletion:(id /* block */)arg1;
- (void)_presentActivationFlowWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentContactAppleSupportAlertWithCompletion:(id /* block */)arg1;
- (void)_presentFlowForAccountResolution:(unsigned long long)arg1 manuallyTriggered:(bool)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)_presentIdentityVerificationWithManualTrigger:(bool)arg1 completion:(id /* block */)arg2;
- (void)_presentPeerPaymentAction:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)_presentReOpenFlowWithCompletion:(id /* block */)arg1;
- (void)_presentViewController:(id)arg1;
- (id)account;
- (unsigned long long)currentPeerPaymentAccountResolution;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 delegate:(id)arg4 passLibraryDataProvider:(id)arg5;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)peerPaymentActionViewControllerDidCancel:(id)arg1;
- (void)peerPaymentActionViewControllerDidPerformAction:(id)arg1;
- (bool)peerPaymentPassIsProvisionedOnDevice;
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 manuallyTriggered:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 manuallyTriggered:(bool)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)presentResolutionForCurrentAccountStateWithCompletion:(id /* block */)arg1;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;

@end
