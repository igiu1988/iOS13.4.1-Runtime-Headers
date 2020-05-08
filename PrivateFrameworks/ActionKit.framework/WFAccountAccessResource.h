/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFAccountAccessResource : WFAccessResource <WFAccountLoginViewControllerDelegate> {
    id /* block */  _completionHandler;
    id  _observer;
}

@property (nonatomic, readonly) Class accountClass;
@property (nonatomic, readonly, copy) NSArray *accounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ viewControllerCompletionHandler;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (void).cxx_destruct;
- (Class)accountClass;
- (id)accounts;
- (bool)canLogOut;
- (void)dealloc;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (void)logOut;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)makeAvailableAtGlobalLevelWithWebAuthenticationSession:(id /* block */)arg1;
- (id)protectedResourceDescription;
- (id)resourceName;
- (id)settingsUIDefinition;
- (id)username;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (void)loginViewController:(id)arg1 didLoginWithAccount:(id)arg2;
- (void)loginViewControllerDidCancel:(id)arg1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setViewControllerCompletionHandler:(id /* block */)arg1;
- (id /* block */)viewControllerCompletionHandler;

@end
