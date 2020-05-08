/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupHeroViewController : PKExplanationViewController <PKExplanationViewDelegate> {
    ACAccountStore * _accountStore;
    bool  _allowsManualEntry;
    UIViewController * _deferredNextViewController;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    NSArray * _featuredImages;
    bool  _hasFelicaSecureElement;
    PKPaymentHeroImageController * _heroImageController;
    bool  _hideSetupLater;
    bool  _nextButtonPushed;
    long long  _paymentSetupMode;
    bool  _preflightComplete;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentSetupHeroView * _splashView;
}

@property (nonatomic) bool allowsManualEntry;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIViewController *deferredNextViewController;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentHeroImageController *heroImageController;
@property (nonatomic) long long paymentSetupMode;
@property (nonatomic, readonly) PKPaymentProvisioningController *provisioningController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentWebService *webService;

- (void).cxx_destruct;
- (id)_bodyText;
- (void)_next:(id)arg1;
- (void)_preflightWithCompletion:(id /* block */)arg1;
- (void)_terminateSetupFlow;
- (bool)allowsManualEntry;
- (id)deferredNextViewController;
- (id)delegate;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)heroImageController;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)loadView;
- (long long)paymentSetupMode;
- (id)provisioningController;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setDeferredNextViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeaturedHeroImages:(id)arg1;
- (void)setPaymentSetupMode:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)webService;

@end
