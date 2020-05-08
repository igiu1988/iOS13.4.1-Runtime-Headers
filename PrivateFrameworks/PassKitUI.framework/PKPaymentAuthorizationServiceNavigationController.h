/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {
    PKPaymentAuthorizationServiceViewController * _authorizationViewController;
    PKPaymentAuthorizationLayout * _layout;
    <UIViewControllerTransitioningDelegate> * _paymentTransitioningDelegate;
}

@property (nonatomic, readonly) PKPaymentAuthorizationServiceViewController *authorizationViewController;
@property (nonatomic, retain) <UIViewControllerTransitioningDelegate> *paymentTransitioningDelegate;

- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (bool)_canShowWhileLocked;
- (id)authorizationViewController;
- (id)init;
- (id)initWithLayoutStyle:(long long)arg1 paymentRequest:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)paymentTransitioningDelegate;
- (void)setPaymentTransitioningDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end