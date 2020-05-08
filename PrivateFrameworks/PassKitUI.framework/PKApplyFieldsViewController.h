/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKApplyFieldsViewController : PKPaymentSetupFieldsViewController <PKApplyFlowControllerProtocol, PKPaymentSetupPresentationProtocol> {
    PKApplyRequiredFieldsPage * _applyPage;
    UIBarButtonItem * _cancelButton;
    PKApplyController * _controller;
    bool  _isLoading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_completeInWalletLater;
- (void)_featureApplicationUpdated;
- (void)_handleNextStep;
- (void)_handleNextViewController:(id)arg1 displayableError:(id)arg2 terminationHandler:(id /* block */)arg3;
- (void)_showSubmissionSpinner:(bool)arg1;
- (void)_terminateFlow;
- (void)_withdrawApplicationTapped;
- (id)currentPage;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 applyPage:(id)arg3;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (bool)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end