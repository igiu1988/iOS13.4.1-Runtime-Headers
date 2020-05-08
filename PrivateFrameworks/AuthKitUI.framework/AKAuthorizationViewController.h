/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAuthorizationViewController : UIViewController <AKAuthorizationContainerViewControllerDelegate, AKAuthorizationPaneViewControllerDelegate> {
    <AKAuthorizationViewControllerDelegate> * _delegate;
    AKAuthorizationNavigationController * _navigationController;
    AKAuthorizationPresentationContext * _presentationContext;
    AKAuthorizationScopeChoices * _scopeChoices;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAuthorizationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AKAuthorizationNavigationController *navigationController;
@property (nonatomic, readonly) AKAuthorizationPresentationContext *presentationContext;
@property (nonatomic, readonly) AKAuthorizationScopeChoices *scopeChoices;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backBarButtonItem;
- (void)_backButtonSelected:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)arg1 error:(id)arg2;
- (bool)_isFirstTimeAppleIDAuthorization;
- (id)_logoBarButtonItem:(id)arg1;
- (void)_presentAuthorizationViewController;
- (void)_presentConfirmPaneViewControllerReplacing:(bool)arg1;
- (void)_presentContainerViewControllerWith:(id)arg1;
- (void)_presentFirstTimeViewController;
- (void)authorizationContainerViewControllerDidDismiss:(id)arg1;
- (void)authorizationPaneViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(id /* block */)arg3;
- (void)authorizationPaneViewController:(id)arg1 didRequestIconWithCompletion:(id /* block */)arg2;
- (void)authorizationPaneViewController:(id)arg1 dismissWithAuthorization:(id)arg2 error:(id)arg3;
- (void)authorizationPaneViewController:(id)arg1 pushEditScope:(id)arg2 presentationContext:(id)arg3 options:(id)arg4;
- (id)confirmPaneViewController;
- (id)delegate;
- (id)firstTimeViewController;
- (id)init;
- (id)initWithAuthorizationContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (id)navigationController;
- (id)passwordRequestController;
- (void)performAppleIDAuthorizationForPaneViewController:(id)arg1;
- (void)performPasswordAuthenticationForPaneViewController:(id)arg1;
- (void)presentAuthenticationChoiceUIWithCompletion:(id /* block */)arg1;
- (void)presentConfirmPaneViewController;
- (id)presentationContext;
- (id)scopeChoices;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
