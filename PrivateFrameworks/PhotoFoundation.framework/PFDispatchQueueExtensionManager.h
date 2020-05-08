/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueExtensionManager : NSObject <PFDispatchQueueExtending> {
    _Atomic unsigned long long  _enabledExtensionCount;
    _Atomic bool  _extensionEnabled;
    PFDispatchQueueExtension * _extensions;
    unsigned long long  _suspendCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addExtensions:(id)arg1 queue:(id)arg2;
- (id)announce:(id /* block */)arg1;
- (void)disableExtension:(id)arg1;
- (void)enableExtension:(id)arg1;
- (id)extensionMatching:(id /* block */)arg1;
- (id)extensions;
- (id)init;
- (void)installOnQueue:(id)arg1;
- (void)messageExtensions:(id)arg1 messageBlock:(id /* block */)arg2;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(id /* block */)arg3;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (id)queue:(id)arg1 receivedDispatchAfter:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(id /* block */)arg3;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(id /* block */)arg3;
- (id)queue:(id)arg1 receivedDispatchSync:(id /* block */)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(id /* block */)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (id)queue:(id)arg1 willTargetQueue:(id)arg2;
- (void)queueDidSuspend:(id)arg1;
- (void)queueWillResume:(id)arg1;

@end
