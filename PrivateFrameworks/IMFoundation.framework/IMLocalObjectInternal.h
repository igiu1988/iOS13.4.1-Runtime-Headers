/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLocalObjectInternal : NSObject {
    bool  _busyForwarding;
    NSMutableArray * _componentQueue;
    NSLock * _componentQueueLock;
    NSRecursiveLock * _componentQueueProcessingLock;
    NSObject<OS_xpc_object> * _connection;
    IMMessageContext * _currentMessageContext;
    NSObject<OS_dispatch_semaphore> * _deathLock;
    NSRecursiveLock * _lock;
    bool  _offMainThread;
    bool  _pendingComponentQueueProcessing;
    NSString * _portName;
    NSString * _processName;
    NSProtocolChecker * _protocolChecker;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoopSource { } * _runloopSource;
    id  _target;
    bool  _wasInterrupted;
    NSArray * _whitelistedClasses;
}

- (void)dealloc;

@end
