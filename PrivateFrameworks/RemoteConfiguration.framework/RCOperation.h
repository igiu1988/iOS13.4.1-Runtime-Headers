/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCOperation : NSOperation <RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing> {
    NSMutableArray * _childOperations;
    bool  _childOperationsCancelled;
    RCMutexLock * _childOperationsLock;
    bool  _executing;
    bool  _finished;
    NSObject<OS_dispatch_group> * _finishedGroup;
    double  _operationEndTime;
    NSString * _operationID;
    double  _operationStartTime;
    long long  _relativePriority;
    unsigned long long  _retryCount;
    RCOnce * _startOnce;
    id /* block */  _timedOutTest;
    double  _timeoutDuration;
}

@property (nonatomic, retain) NSMutableArray *childOperations;
@property (nonatomic) bool childOperationsCancelled;
@property (nonatomic, retain) RCMutexLock *childOperationsLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *finishedGroup;
@property (nonatomic, readonly) bool hasOperationStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic) double operationEndTime;
@property (nonatomic, readonly, copy) NSString *operationID;
@property (nonatomic) double operationStartTime;
@property (nonatomic) long long relativePriority;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, retain) RCOnce *startOnce;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ timedOutTest;
@property (nonatomic) double timeoutDuration;

- (void).cxx_destruct;
- (void)_associateChildOperation:(id)arg1;
- (id)_errorUserInfo;
- (void)_finishOperationWithError:(id)arg1;
- (void)_finishedPerformingOperationWithError:(id)arg1;
- (void)_handleRetryFromError:(id)arg1 signal:(id)arg2;
- (void)_handleThrottlingFromError:(id)arg1 delay:(double)arg2;
- (bool)_shouldThrottleOperationWithRetryAfter:(double*)arg1;
- (bool)_startIfNeeded;
- (id)_userDefaultsKeyForThrottleEndDate;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)associateChildOperation:(id)arg1;
- (void)associateChildOperations:(id)arg1;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (void)cancel;
- (void)cancelChildOperations;
- (id)childOperations;
- (bool)childOperationsCancelled;
- (id)childOperationsLock;
- (void)dealloc;
- (void)finishFromEarlyCancellation;
- (id)finishedGroup;
- (void)finishedPerformingOperationWithError:(id)arg1;
- (bool)hasOperationStarted;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)longOperationDescription;
- (unsigned long long)maxRetries;
- (void)operationDidFinishWithError:(id)arg1;
- (double)operationEndTime;
- (id)operationID;
- (double)operationStartTime;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (long long)relativePriority;
- (void)resetForRetry;
- (unsigned long long)retryCount;
- (void)setChildOperations:(id)arg1;
- (void)setChildOperationsCancelled:(bool)arg1;
- (void)setChildOperationsLock:(id)arg1;
- (void)setFinishedGroup:(id)arg1;
- (void)setOperationEndTime:(double)arg1;
- (void)setOperationStartTime:(double)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setStartOnce:(id)arg1;
- (void)setTimedOutTest:(id /* block */)arg1;
- (void)setTimeoutDuration:(double)arg1;
- (id)shortOperationDescription;
- (bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double*)arg2;
- (void)start;
- (void)startIfNeeded;
- (id)startOnce;
- (id)throttleGroup;
- (id /* block */)timedOutTest;
- (double)timeoutDuration;
- (bool)validateOperation;
- (bool)waitUntilFinishedWithTimeout:(double)arg1;

@end
