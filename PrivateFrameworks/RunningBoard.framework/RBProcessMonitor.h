/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing> {
    NSMutableSet * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    RBProcessIndex * _processIndex;
    RBProcessMap * _publishedState;
    NSObject<OS_dispatch_queue> * _queue;
    <RBStateCaptureManaging> * _stateCaptureManager;
    RBProcessMap * _stateMap;
    NSCountedSet * _suppressedIdentities;
    RBProcessMap * _suppressedState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *monitorSerializationQueue;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

+ (id)_clientStateForServerState:(id)arg1 process:(id)arg2;

- (void).cxx_destruct;
- (void)_queue_publishState:(id)arg1 forIdentity:(id)arg2;
- (void)_queue_suppressUpdatesForIdentity:(id)arg1;
- (void)_queue_unsuppressUpdatesForIdentity:(id)arg1;
- (void)_queue_updateServerState:(id)arg1 forProcess:(id)arg2 force:(bool)arg3;
- (void)addObserver:(id)arg1;
- (id)captureState;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didAddProcess:(id)arg1 withState:(id)arg2;
- (void)didRemoveProcess:(id)arg1 withState:(id)arg2;
- (void)didUpdateProcessStates:(id)arg1;
- (id)initWithStateCaptureManager:(id)arg1;
- (id)monitorSerializationQueue;
- (void)removeObserver:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (id)stateCaptureTitle;
- (id)statesMatchingConfiguration:(id)arg1;
- (id)statesMatchingPredicate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)suppressUpdatesForIdentity:(id)arg1;
- (void)trackStateForProcessIdentity:(id)arg1;
- (void)unsuppressUpdatesForIdentity:(id)arg1;

@end
