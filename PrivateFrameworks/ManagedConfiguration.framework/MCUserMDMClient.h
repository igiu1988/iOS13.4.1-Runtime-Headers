/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserMDMClient : NSObject {
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionSyncQueue;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_destroyXPCConnectionAndInvalidate:(bool)arg1;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)dealloc;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)processUserRequest:(id)arg1 encodeResponse:(bool)arg2 completion:(id /* block */)arg3;
- (id)pushToken;
- (void)scheduleTokenUpdate;
- (void)setXpcConnection:(id)arg1;
- (void)simulatePush;
- (bool)supportsPerUserMDM;
- (id)xpcConnection;
- (id)xpcConnectionSyncQueue;

@end
