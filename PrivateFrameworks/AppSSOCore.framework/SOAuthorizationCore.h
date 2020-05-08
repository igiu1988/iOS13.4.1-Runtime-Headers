/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

@interface SOAuthorizationCore : NSObject {
    NSDictionary * _authorizationOptions;
    SOClient * _client;
    <SOAuthorizationCoreDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateDispatchQueue;
    SOAuthorizationRequestParametersCore * _requestParametersCore;
}

@property (nonatomic, retain) NSDictionary *authorizationOptions;
@property <SOAuthorizationCoreDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (retain) SOAuthorizationRequestParametersCore *requestParametersCore;

+ (bool)_canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 useInternalExtensions:(bool)arg4;
+ (bool)_doAKshouldProcessURL:(id)arg1;
+ (bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2;
+ (bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(bool)arg3;
+ (void)isExtensionProcessWithAuditToken:(struct { unsigned int x1[8]; })arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_cancelAuthorization;
- (void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2;
- (id)authorizationOptions;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (void)beginAuthorizationWithParameters:(id)arg1;
- (void)beginAuthorizationWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3;
- (void)cancelAuthorization;
- (id)debugDescription;
- (void)debugHintsWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)delegateDispatchQueue;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)performBlockOnDelegateQueue:(id /* block */)arg1;
- (id)realms;
- (id)requestParametersCore;
- (void)setAuthorizationOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateDispatchQueue:(id)arg1;
- (void)setRequestParametersCore:(id)arg1;

@end
