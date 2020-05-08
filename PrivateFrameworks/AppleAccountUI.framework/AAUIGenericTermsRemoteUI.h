/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIGenericTermsRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    <AAUIGenericTermsRemoteUIDelegate> * _delegate;
    UINavigationController * _genericTermsUIViewController;
    bool  _isModal;
    bool  _isPreferringPassword;
    RUILoader * _loader;
    NSMutableArray * _objectModels;
    UIViewController * _originatingViewController;
    UINavigationController * _parentNavController;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIGenericTermsRemoteUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(bool)arg2 completion:(id /* block */)arg3;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cleanUpAndDismissWithSuccess:(bool)arg1 agreeURL:(id)arg2;
- (void)_cleanupRUILoader;
- (void)_displayConnectionErrorAndDismiss;
- (bool)_isUnauthorizedError:(id)arg1;
- (void)_loadRequestPreferringPassword:(bool)arg1;
- (void)_popObjectModelAnimated:(bool)arg1;
- (id)account;
- (id)accountStore;
- (id)delegate;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)presentFromViewController:(id)arg1 modal:(bool)arg2;
- (id)sessionConfigurationForLoader:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)viewControllerForAlertPresentation;

@end
