/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController <AKSignInViewControllerDelegate> {
    <AKAuthorizationPasswordAuthenticationDelegate> * _delegate;
    double  _keyboardHeight;
    AKModalSignInViewController * _modalSignInViewController;
    AKAuthorizationPresentationContext * _presentationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAuthorizationPasswordAuthenticationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKAuthorizationPresentationContext *presentationContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextForAuthentication;
- (id)_username;
- (void)dealloc;
- (id)delegate;
- (double)intrinsicContentHeight;
- (void)keyboardDidShow:(id)arg1;
- (id)presentationContext;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)sizeToFitPaneContentAnimated:(bool)arg1;
- (void)viewDidLoad;

@end
