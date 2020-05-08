/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.Session : NSObject <FMClient.ClientSessionProtocol, FMClient.ServerSessionProtocol> {
    void $__lazy_storage_$_serverProxy;
    void _activeConnection;
    void authenticationProvider;
    void clientBundleId;
    void clientProcessName;
}

- (void).cxx_destruct;
- (void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)credential:(id /* block */)arg1;
- (void)credentialNotAuthorizedWithCredential:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)deviceSearch:(id)arg1 completion:(id /* block */)arg2;
- (void)discoverNearbyDevicesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateCacheWithType:(long long)arg1 completion:(id /* block */)arg2;
- (void)playSound:(id)arg1 completion:(id /* block */)arg2;
- (void)registerAuthenticationProvider:(id)arg1;
- (void)sessionInfoWithCompletion:(id /* block */)arg1;
- (void)voiceAssistantSyncWithCompletion:(id /* block */)arg1;

@end
