/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSXPCConnection : NSObject <NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    bool  _forSyncMessaging;
    id /* block */  _invalidationHandler;
    NSMutableDictionary * _pendingTransactions;
    NSObject<OS_dispatch_queue> * _queue;
    <NSXPCProxyCreating> * _remoteObject;
    IDSXPCConnection * _rootConnection;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forSyncMessaging;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSMutableDictionary *pendingTransactions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <NSXPCProxyCreating> *remoteObject;
@property (nonatomic, retain) IDSXPCConnection *rootConnection;
@property (readonly) Class superclass;

+ (id)errorForMissingEntitlement:(id)arg1;

- (void).cxx_destruct;
- (void)_cleanupAllPendingTransactions;
- (id)_initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 forSyncMessaging:(bool)arg3;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)dealloc;
- (bool)forSyncMessaging;
- (bool)hasEntitlement:(id)arg1;
- (id)initForSyncMessagingWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2;
- (id)initWithQueue:(id)arg1 remoteObject:(id)arg2;
- (id)initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2;
- (id)initWithRemoteObject:(id)arg1 rootConnection:(id)arg2;
- (id /* block */)invalidationHandler;
- (id)pendingTransactions;
- (id)queue;
- (id)remoteObject;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithTimeoutInSeconds:(double)arg1 errorHandler:(id /* block */)arg2;
- (id)rootConnection;
- (void)setConnection:(id)arg1;
- (void)setForSyncMessaging:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPendingTransactions:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setRootConnection:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
