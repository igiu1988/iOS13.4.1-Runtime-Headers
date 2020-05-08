/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegateAccountStoreServiceListener : NSObject <ICDelegateAccountStoreService, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _connections;
    bool  _ignoresEntitlements;
    NSXPCListener * _listener;
    ICUserIdentityStore * _testingIdentityStore;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *XPCEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)machServiceListener;
+ (id)testingListenerWithIdentityStore:(id)arg1;

- (void).cxx_destruct;
- (id)XPCEndpoint;
- (id)_identityStore;
- (id)_initWithXPCListener:(id)arg1 testingIdentityStore:(id)arg2;
- (void)_userIdentityStoreDelegateAccountStoreDidChangeNotification:(id)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)recreateWithCompletionHandler:(id /* block */)arg1;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resume;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)suspend;

@end
