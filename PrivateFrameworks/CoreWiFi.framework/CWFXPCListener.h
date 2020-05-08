/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFXPCListener : NSObject <CWFXPCConnectionDelegate, NSXPCListenerDelegate> {
    NSXPCListener * _XPCListener;
    long long  _XPCServiceType;
    <CWFXPCListenerDelegate> * _delegate;
    NSMutableArray * _mutableXPCConnections;
    NSObject<OS_dispatch_queue> * _mutexQueue;
}

@property (nonatomic, readonly) long long XPCServiceType;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <CWFXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2;
- (long long)XPCServiceType;
- (id)__adoptionWhitelist;
- (bool)__allowXPCConnection:(id)arg1 serviceType:(long long)arg2;
- (bool)__isProcessWhitelistedForAdoption:(id)arg1 XPCServiceType:(long long)arg2;
- (id)delegate;
- (id)init;
- (id)initWithXPCServiceType:(long long)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)registeredActivities;
- (id)registeredEventIDs;
- (void)resume;
- (void)sendXPCEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)suspend;

@end
