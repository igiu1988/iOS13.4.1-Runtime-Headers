/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKSubcredentialInvitationCoordinator : NSObject <PKSubcredentialProvisioningControllerDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completion;
    NPKStandaloneFirstUnlockCoordinator * _firstUnlockCoordinator;
    NSObject<OS_dispatch_queue> * _internalQueue;
    PKPaymentService * _paymentService;
    PKPaymentWebService * _paymentWebService;
    PKAppletSubcredentialSharingSession * _sharingSession;
    PKSubcredentialProvisioningController * _subcredentialProvisioningController;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) PKPaymentService *paymentService;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;
@property (nonatomic, retain) PKAppletSubcredentialSharingSession *sharingSession;
@property (nonatomic, retain) PKSubcredentialProvisioningController *subcredentialProvisioningController;
@property (readonly) Class superclass;

+ (bool)_canAddSecureElementPassWithConfiguration:(id)arg1;
+ (bool)canAddSecureElementPass;

- (void).cxx_destruct;
- (bool)_deviceSupportsSubcredentialProvisioning;
- (void)_endProvisioningWithPassForInvitation:(id)arg1 error:(id)arg2;
- (void)_fetchInvitationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_invokeCompletionWithPassForInvitation:(id)arg1 error:(id)arg2;
- (void)_makeAcceptInvitationConfigurationWithSession:(id)arg1 invitationIdentifier:(id)arg2 metadata:(id)arg3 paymentWebService:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_accountAttestationAnonymizationSaltWithCompletion:(id /* block */)arg1;
- (void)_queue_canAcceptInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_queue_listSubcredentialInvitationsWithCompletion:(id /* block */)arg1;
- (void)_queue_requestSubcredentialInvitation:(id)arg1 fromIDSHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_setAccountAttestationAnonymizationSalt:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)_setUpSharingSessionWithSubcredentialProvisioningController:(id)arg1;
- (void)_setUpSubcredentialProvisioningController;
- (void)_startProvisioningForProvisioningController:(id)arg1 withConfiguration:(id)arg2;
- (void)accountAttestationAnonymizationSaltWithCompletion:(id /* block */)arg1;
- (id)callbackQueue;
- (void)canAcceptInvitation:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)completion;
- (void)deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)firstUnlockCoordinator;
- (id)initWithCallbackQueue:(id)arg1 paymentWebService:(id)arg2;
- (id)initWithPaymentWebService:(id)arg1;
- (id)internalQueue;
- (void)listSubcredentialInvitationsWithCompletion:(id /* block */)arg1;
- (id)paymentService;
- (id)paymentWebService;
- (void)requestSubcredentialInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 completion:(id /* block */)arg2;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFirstUnlockCoordinator:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setPaymentService:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (void)setSharingSession:(id)arg1;
- (void)setSubcredentialProvisioningController:(id)arg1;
- (id)sharingSession;
- (void)startProvisioningWithInvitationIdentifier:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (id)subcredentialProvisioningController;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;

@end
