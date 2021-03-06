/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate> {
    id /* block */  _loginHandler;
    PocketAPI * _pocket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ loginHandler;
@property (nonatomic, retain) PocketAPI *pocket;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (bool)canLogOut;
- (unsigned long long)globalLevelStatus;
- (void)logOut;
- (id /* block */)loginHandler;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pocket;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)pocketAPILoggedIn:(id)arg1;
- (id)pocketCallbackScheme;
- (id)protectedResourceDescription;
- (id)resourceName;
- (void)setLoginHandler:(id /* block */)arg1;
- (void)setPocket:(id)arg1;
- (id)username;

@end
