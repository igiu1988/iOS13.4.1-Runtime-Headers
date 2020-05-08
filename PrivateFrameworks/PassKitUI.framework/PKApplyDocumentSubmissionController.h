/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKApplyDocumentSubmissionController : PKPaymentDocumentSubmissionController {
    PKApplyController * _applyController;
    PKBusinessChatController * _businessChatController;
    PKApplyDocumentUploadPage * _documentPage;
    bool  _isCancelling;
    bool  _isLoading;
    UIViewController * _nextViewController;
}

- (void).cxx_destruct;
- (void)_cancelledConfirmed;
- (void)_featureApplicationUpdated;
- (void)contactApplePressed;
- (void)dealloc;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 documentPage:(id)arg3;
- (id)nextViewController;
- (void)removeApplicationUpdateObserver;
- (void)uploadID;
- (void)userWantsToCancel;

@end
