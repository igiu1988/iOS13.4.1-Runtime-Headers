/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {
    CNFutureCompletionBlocks * _completionBlocks;
    CNFutureResult * _futureResult;
    NSConditionLock * _stateLock;
    CNTask * _task;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_flushCompletionBlocks;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (bool)cancel;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (id)futureResult;
- (id)init;
- (id)initWithTask:(id)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)nts_isFinished;
- (id)recover:(id /* block */)arg1;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (bool)run;

@end
