/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicValueManager : NSObject <HFCharacteristicValueSource> {
    long long  __debug_totalNumberOfIssuedBatchReadRequests;
    NSMutableDictionary * _cachedExecutionErrorsKeyedByActionSetIdentifier;
    NSMutableDictionary * _cachedReadErrorsKeyedByCharacteristicIdentifier;
    NSMutableDictionary * _cachedWriteErrorsKeyedByCharacteristicIdentifier;
    NSMutableSet * _characteristicsWithCachedValues;
    NSMutableArray * _completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
    NAFuture * _firstReadCompleteFuture;
    NACancelationToken * _inFlightReadCancelationToken;
    NSMutableSet * _mutableAllReadCharacteristics;
    HFCharacteristicValueTransaction * _openTransaction;
    NSMutableArray * _readTransactionsToExecuteOnNextRunLoop;
    HFCharacteristicReadLogger * _readsCompleteLogger;
    NSMutableArray * _runningTransactions;
    NSRecursiveLock * _transactionLock;
    <HFCharacteristicValueReader> * _valueReader;
    <HFCharacteristicValueWriter> * _valueWriter;
}

@property (nonatomic) long long _debug_totalNumberOfIssuedBatchReadRequests;
@property (nonatomic, readonly, copy) NSSet *allReadCharacteristics;
@property (nonatomic, retain) NSMutableDictionary *cachedExecutionErrorsKeyedByActionSetIdentifier;
@property (nonatomic, retain) NSMutableDictionary *cachedReadErrorsKeyedByCharacteristicIdentifier;
@property (nonatomic, retain) NSMutableDictionary *cachedWriteErrorsKeyedByCharacteristicIdentifier;
@property (nonatomic, retain) NSMutableSet *characteristicsWithCachedValues;
@property (nonatomic, readonly, copy) NSSet *characteristicsWithPendingReads;
@property (nonatomic, readonly, copy) NSSet *characteristicsWithPendingWrites;
@property (nonatomic, retain) NSMutableArray *completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NAFuture *firstReadCompleteFuture;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NACancelationToken *inFlightReadCancelationToken;
@property (nonatomic, retain) NSMutableSet *mutableAllReadCharacteristics;
@property (nonatomic, retain) HFCharacteristicValueTransaction *openTransaction;
@property (nonatomic, retain) NSMutableArray *readTransactionsToExecuteOnNextRunLoop;
@property (nonatomic, retain) HFCharacteristicReadLogger *readsCompleteLogger;
@property (nonatomic, retain) NSMutableArray *runningTransactions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSRecursiveLock *transactionLock;
@property (nonatomic, retain) <HFCharacteristicValueReader> *valueReader;
@property (nonatomic, retain) <HFCharacteristicValueWriter> *valueWriter;

+ (bool)_shouldTrackReadsCompleteForPerformanceTesting;
+ (id)na_identity;

- (void).cxx_destruct;
- (void)_beginReadsCompleteTrackingForCharacteristics:(id)arg1 withLogger:(id)arg2;
- (long long)_debug_totalNumberOfIssuedBatchReadRequests;
- (void)_endReadsCompleteTrackingForCharacteristic:(id)arg1 withLogger:(id)arg2 didRead:(bool)arg3;
- (id)_openTransactionCompletionFuture;
- (id)_transactionLock_characteristicsWithPendingWritesInTransacton:(id)arg1 includeDirectWrites:(bool)arg2 includeActionSets:(bool)arg3 includeActions:(bool)arg4;
- (void)_transactionLock_executeActionSetTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_transactionLock_executeActionsTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_transactionLock_executeReadTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_transactionLock_executeWriteTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)allReadCharacteristics;
- (void)beginTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedErrorForExecutionOfActionSet:(id)arg1;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)cachedExecutionErrorsKeyedByActionSetIdentifier;
- (id)cachedReadErrorForCharacteristic:(id)arg1;
- (id)cachedReadErrorsKeyedByCharacteristicIdentifier;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)cachedWriteErrorsKeyedByCharacteristicIdentifier;
- (void)cancelInFlightReadRequests;
- (id)characteristicsWithCachedValues;
- (id)characteristicsWithPendingReads;
- (id)characteristicsWithPendingWrites;
- (void)commitTransactionWithReason:(id)arg1;
- (id)completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
- (id)contextProvider;
- (id)executeActionSet:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)executeActions:(id)arg1;
- (id)firstReadCompleteFuture;
- (bool)hasCachedReadErrorForAccessory:(id)arg1 passingTest:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)inFlightReadCancelationToken;
- (id)initWithValueReader:(id)arg1 valueWriter:(id)arg2;
- (void)invalidateAllCachedErrors;
- (void)invalidateCachedErrorForExecutionOfActionSet:(id)arg1;
- (void)invalidateCachedValueForCharacteristic:(id)arg1;
- (void)invalidateCachedValuesForAccessory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loadingStateForCharacteristics:(id)arg1 actionSets:(id)arg2;
- (id)mutableAllReadCharacteristics;
- (id)openTransaction;
- (id)readTransactionsToExecuteOnNextRunLoop;
- (id)readValueForCharacteristic:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)readValuesForCharacteristicsPassingTest:(id /* block */)arg1 inServices:(id)arg2;
- (id)readsCompleteLogger;
- (id)runningTransactions;
- (void)setCachedExecutionErrorsKeyedByActionSetIdentifier:(id)arg1;
- (void)setCachedReadErrorsKeyedByCharacteristicIdentifier:(id)arg1;
- (void)setCachedWriteErrorsKeyedByCharacteristicIdentifier:(id)arg1;
- (void)setCharacteristicsWithCachedValues:(id)arg1;
- (void)setCompletionHandlersForReadTransactionsToExecuteOnNextRunLoop:(id)arg1;
- (void)setInFlightReadCancelationToken:(id)arg1;
- (void)setMutableAllReadCharacteristics:(id)arg1;
- (void)setOpenTransaction:(id)arg1;
- (void)setReadTransactionsToExecuteOnNextRunLoop:(id)arg1;
- (void)setReadsCompleteLogger:(id)arg1;
- (void)setRunningTransactions:(id)arg1;
- (void)setTransactionLock:(id)arg1;
- (void)setValueReader:(id)arg1;
- (void)setValueWriter:(id)arg1;
- (void)set_debug_totalNumberOfIssuedBatchReadRequests:(long long)arg1;
- (id)transactionLock;
- (id)valueReader;
- (id)valueWriter;
- (id)writeValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)writeValuesForCharacteristics:(id)arg1;

@end
