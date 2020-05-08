/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDynamicProvisioningPageViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKViewControllerPreflightable> {
    id /* block */  _bodyButtonAction;
    id /* block */  _cancelButtonAction;
    id /* block */  _doneButtonAction;
    UIImage * _heroImage;
    PKDynamicProvisioningPageContent * _page;
    id /* block */  _primaryButtonAction;
    id /* block */  _secondaryButtonAction;
}

@property (nonatomic, copy) id /* block */ bodyButtonAction;
@property (nonatomic, copy) id /* block */ cancelButtonAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ doneButtonAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKDynamicProvisioningPageContent *page;
@property (nonatomic, copy) id /* block */ primaryButtonAction;
@property (nonatomic, copy) id /* block */ secondaryButtonAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)bodyButtonAction;
- (id /* block */)cancelButtonAction;
- (id /* block */)doneButtonAction;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewControllerDidSelectDone:(id)arg1;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithPage:(id)arg1 context:(long long)arg2;
- (id)page;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id /* block */)primaryButtonAction;
- (id /* block */)secondaryButtonAction;
- (void)setBodyButtonAction:(id /* block */)arg1;
- (void)setCancelButtonAction:(id /* block */)arg1;
- (void)setDoneButtonAction:(id /* block */)arg1;
- (void)setPrimaryButtonAction:(id /* block */)arg1;
- (void)setSecondaryButtonAction:(id /* block */)arg1;
- (void)viewDidLoad;

@end
