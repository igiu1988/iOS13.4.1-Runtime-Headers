/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
 */

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate> {
    <DDSManagingDelegate> * _delegate;
    <DDSManagingDelegate> * _mDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _remoteServer;
    <DDSManaging> * _serverOverride;
    DDSInterface * _sharedInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <DDSManagingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DDSManagingDelegate> *mDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSXPCConnection *remoteServer;
@property (nonatomic, retain) <DDSManaging> *serverOverride;
@property (nonatomic, readonly) DDSInterface *sharedInstance;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;
+ (unsigned long long)xpcConnectionOptionsForServer;

- (void).cxx_destruct;
- (id)_assertionClientDispatchQueue;
- (void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (void)assertionIDsForClientID:(id)arg1 reply:(id /* block */)arg2;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateAssetsWithType:(id)arg1;
- (id)init;
- (id)mDelegate;
- (id)queue;
- (id)remoteServer;
- (void)removeAssertionWithID:(id)arg1;
- (id)server;
- (id)serverOverride;
- (id)serviceObjectProxy;
- (void)setDelegate:(id)arg1;
- (void)setMDelegate:(id)arg1;
- (void)setRemoteServer:(id)arg1;
- (void)setServerOverride:(id)arg1;
- (id)sharedInstance;
- (id)syncServer;
- (id)syncServiceObjectProxy;
- (void)teardownXPCConnection;

@end
