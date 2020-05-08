/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
 */

@interface PIGroup : NSObject {
    id /* block */  _availableBlock;
    long long  _concurrencyLimit;
    long long  _executingConcurrency;
    NSMutableArray * _executingOperations;
    PIStatisticsElapsedTime * _executionTime;
    NSString * _identifier;
    NSMutableArray * _operations;
    NSMapTable * _operationsByIdentifier;
    NSMapTable * _operationsByKey;
    NSMutableDictionary * _operationsByPriority;
    NSObject<OS_dispatch_group> * _operationsGroup;
    PIPipeline * _pipeline;
    unsigned long long  _priority;
    bool  _removeOnCompletion;
    bool  _suspended;
    double  _timestampStart;
}

@property (copy) id /* block */ availableBlock;
@property long long concurrencyLimit;
@property (readonly) long long executingConcurrency;
@property (readonly, copy) NSArray *executingOperations;
@property (readonly) unsigned long long executingOperationsCount;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) bool isExecuting;
@property (readonly, copy) NSArray *operations;
@property (readonly) unsigned long long operationsCount;
@property (nonatomic) PIPipeline *pipeline;
@property unsigned long long priority;
@property bool removeOnCompletion;
@property (getter=isSuspended) bool suspended;

+ (id)group;
+ (id)groupWithConcurrencyLimit:(long long)arg1 priority:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_operation:(id)arg1 didChangePriority:(long long)arg2;
- (void)_rebuildOperationsByPriority;
- (void)_removeOperation:(id)arg1;
- (void)_updateConcurrencyLimit;
- (void)addOperation:(id)arg1;
- (id)addOperationWithExecutionBlock:(id /* block */)arg1;
- (void)addOperations:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinishedBlock:(id /* block */)arg2;
- (id /* block */)availableBlock;
- (void)cancelAllOperations:(id /* block */)arg1;
- (void)cancelAllOperationsAndSuspendGroupUntilFinished:(id /* block */)arg1;
- (long long)concurrencyLimit;
- (void)dealloc;
- (id)description;
- (long long)executingConcurrency;
- (id)executingOperations;
- (unsigned long long)executingOperationsCount;
- (double)executionTime;
- (id)identifier;
- (id)init;
- (bool)isExecuting;
- (bool)isSuspended;
- (id)operationWithIdentifier:(id)arg1;
- (id)operations;
- (unsigned long long)operationsCount;
- (id)operationsWithKey:(id)arg1;
- (id)operationsWithPriority:(long long)arg1;
- (id)pipeline;
- (unsigned long long)priority;
- (bool)removeOnCompletion;
- (void)setAvailableBlock:(id /* block */)arg1;
- (void)setConcurrencyLimit:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPipeline:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRemoveOnCompletion:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)updateOperationsWithBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)waitUntilFinished:(bool)arg1;
- (void)waitUntilFinishedUsingBlock:(id /* block */)arg1;
- (double)wallTime;

@end
