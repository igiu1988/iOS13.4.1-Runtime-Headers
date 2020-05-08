/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

@interface ACCiAP2ShimServer : NSObject {
    NSMutableDictionary * _accessoryViaConnectionIDList;
    NSMutableDictionary * _accessoryViaKeyUIDList;
    NSLock * _clientLock;
    NSMutableDictionary * _clients;
    NSMutableDictionary * _delegateList;
    int  _iap2AvailableNotifyToken;
    NSObject<OS_dispatch_queue> * _iap2dhighPriorityRootQueue;
    NSObject<OS_dispatch_queue> * _internalListenerQueue;
    bool  _isShuttingDown;
    NSObject<OS_dispatch_queue> * _listQueue;
    NSObject<OS_xpc_object> * _listener;
    struct __serverFlags { 
        unsigned int deathBecomesUs : 1; 
        unsigned int serverExiting : 1; 
        unsigned int reserved : 30; 
    }  _serverFlags;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryViaConnectionIDList;
@property (nonatomic, retain) NSMutableDictionary *accessoryViaKeyUIDList;
@property (readonly) NSLock *clientLock;
@property (readonly) NSMutableDictionary *clients;
@property (nonatomic, retain) NSMutableDictionary *delegateList;
@property (readonly) int iap2AvailableNotifyToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *iap2dhighPriorityRootQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalListenerQueue;
@property (nonatomic, readonly) bool isShuttingDown;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *listQueue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *listener;
@property (readonly) struct __serverFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 30; } serverFlags;

+ (void)postNSDistributeNotificationType:(id)arg1 notifyDict:(id)arg2;
+ (void)postNotifydNotificationType:(id)arg1;
+ (void)postiAP2AppNotificationType:(id)arg1 notifyDict:(id)arg2;
+ (void)postiAP2NotificationType:(id)arg1 notifyDict:(id)arg2;
+ (void)resetServerState;
+ (id)sharedInstance;
+ (id)stringForClientID:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_addAccessory:(id)arg1;
- (void)_addDelegate:(id)arg1;
- (void)_attachAccessory:(id)arg1;
- (void)_detachAccessory:(id)arg1;
- (id)_findAccessoryForAccessoryUID:(id)arg1 andKeyTag:(id)arg2;
- (id)_findAccessoryForConnectionID:(unsigned int)arg1;
- (id)_findAccessoryForConnectionID:(unsigned int)arg1 andKeyTag:(id)arg2;
- (void)_iterateAccessories:(id /* block */)arg1;
- (void)_iterateDelegates:(id /* block */)arg1;
- (void)_pollForDeathAfterPromptCompletes;
- (void)_removeAccessory:(id)arg1;
- (void)_removeDelegate:(id)arg1;
- (void)_resetServerState;
- (void)_startServer;
- (void)_stopServer;
- (void)_takeClientAssertionsForAccessoryConnection;
- (void)_takeClientAssertionsForAccessoryDisconnection;
- (id)accessoryViaConnectionIDList;
- (id)accessoryViaKeyUIDList;
- (void)addAccessory:(id)arg1;
- (unsigned int)addClientWithCapabilities:(unsigned int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 currentClientID:(unsigned int)arg3 xpcConnection:(id)arg4 eaProtocols:(id)arg5 notifyOfAlreadyConnectedAccessories:(bool)arg6 andBundleId:(id)arg7;
- (void)addDelegate:(id)arg1;
- (id)clientLock;
- (id)clients;
- (void)dealloc;
- (id)delegateList;
- (id)findAccessoryForAccessoryUID:(id)arg1 andKeyTag:(id)arg2;
- (id)findAccessoryForConnectionID:(unsigned int)arg1;
- (id)findAccessoryForConnectionID:(unsigned int)arg1 andKeyTag:(id)arg2;
- (id)findClientWithID:(unsigned int)arg1;
- (id)findClientWithXPCConnection:(id)arg1;
- (unsigned int)generateClientID;
- (int)iap2AvailableNotifyToken;
- (id)iap2dhighPriorityRootQueue;
- (id)init;
- (id)internalListenerQueue;
- (bool)isShuttingDown;
- (void)iterateAccessoriesAsync:(id /* block */)arg1;
- (void)iterateAccessoriesSync:(id /* block */)arg1;
- (void)iterateDelegatesAsync:(id /* block */)arg1;
- (void)iterateDelegatesSync:(id /* block */)arg1;
- (id)listQueue;
- (id)listener;
- (void)notifyEAClient:(id)arg1 ofAccessoryEvent:(const char *)arg2 accessory:(id)arg3;
- (void)notifyEAClientsOfAccessoryConnection:(id)arg1;
- (void)notifyEAClientsOfAccessoryDisconnection:(id)arg1;
- (void)notifyEAClientsOfAccessoryEvent:(const char *)arg1 accessory:(id)arg2;
- (void)notifyEAClientsOfAccessoryReconnection:(id)arg1;
- (void)processDetachXPCConnection:(id)arg1;
- (bool)processXPCMessage:(id)arg1 connection:(id)arg2;
- (void)removeAccessory:(id)arg1;
- (void)removeAllClients;
- (void)removeClientForXPCConnection:(id)arg1;
- (void)removeClientWithID:(unsigned int)arg1;
- (void)removeDelegate:(id)arg1;
- (struct __serverFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 30; })serverFlags;
- (void)setAccessoryViaConnectionIDList:(id)arg1;
- (void)setAccessoryViaKeyUIDList:(id)arg1;
- (void)setDelegateList:(id)arg1;
- (void)startServer;
- (void)stopServer;

@end
