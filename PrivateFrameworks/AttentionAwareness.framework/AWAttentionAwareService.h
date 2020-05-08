/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWAttentionAwareService : NSObject <AWAttentionAwareService, AWSchedulerObserver, NSXPCListenerDelegate> {
    unsigned long long  _clientCount;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _schedulers;
    unsigned long long  _supportedEvents;
    int  _supportedEventsNotify;
    AWScheduler * _unitTestScheduler;
}

@property unsigned long long clientCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAttentionService;

- (void).cxx_destruct;
- (void)_createUnitTestScheduler;
- (void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(bool)arg4 reply:(id /* block */)arg5;
- (unsigned long long)clientCount;
- (void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(id)arg3;
- (void)crashWithReply:(id /* block */)arg1;
- (void)dealloc;
- (void)getDebugPreferences:(id /* block */)arg1;
- (void)getSupportedEventsWithReply:(id /* block */)arg1;
- (void)getUnitTestSamplerWithReply:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)outputPowerLogWithReply:(id /* block */)arg1;
- (void)processHIDEvent:(struct __IOHIDEvent { }*)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (void)setClientCount:(unsigned long long)arg1;
- (void)setDebugPreference:(id)arg1 reply:(id /* block */)arg2;
- (void)setSmartCoverClosed:(bool)arg1;

@end
