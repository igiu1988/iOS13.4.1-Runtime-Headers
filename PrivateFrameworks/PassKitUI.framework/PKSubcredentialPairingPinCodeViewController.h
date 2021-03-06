/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSubcredentialPairingPinCodeViewController : UIViewController <PKExplanationViewDelegate, PKPinCodeFieldDelegate, PKSubcredentialPairingFlowControllerOperation> {
    PKExplanationView * _explainationView;
    <PKSubcredentialPairingFlowControllerProtocol> * _flowController;
    bool  _isAdvancing;
    UIBarButtonItem * _nextButton;
    PKPinCodeField * _pinCodeView;
    PKSubcredentialPairingFlowControllerContext * _provisioningContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKSubcredentialProvisioningFlowController> *flowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, retain) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressFieldDetect;

- (void).cxx_destruct;
- (void)cancelButtonPressed;
- (void)explanationViewDidUpdateLayout:(id)arg1;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (void)nextButtonPressed;
- (unsigned long long)operation;
- (void)pinCodeTextFieldWasUpdated:(id)arg1 isComplete:(bool)arg2;
- (id)provisioningContext;
- (void)resetPinCode;
- (void)setProvisioningContext:(id)arg1;
- (bool)suppressFieldDetect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
