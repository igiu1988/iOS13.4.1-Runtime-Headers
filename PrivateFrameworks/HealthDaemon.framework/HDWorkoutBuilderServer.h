/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutBuilderServer : HDStandardTaskServer <HDTaskServerObserver, HDWorkoutDataAccumulator, HDWorkoutDataDestination, HKDataFlowLinkProcessor, HKStateMachineDelegate, HKWorkoutBuilderServerInterface> {
    HKWorkoutBuilderConfiguration * _configuration;
    HKObserverSet * _dataAccumulatorObservers;
    NSDateInterval * _dataInterval;
    NSError * _error;
    NSSet * _expectedDataSourceUUIDs;
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _metadata;
    HDWorkoutBuilderEntity * _persistentEntity;
    NSSet * _quantityTypesIncludedWhilePaused;
    NSMutableSet * _quantityTypesRequiringCalculatorInvalidation;
    HKObserverSet * _sampleObservers;
    NSMutableDictionary * _sourceOrderProvidersByType;
    HKStateMachine * _stateMachine;
    NSMutableDictionary * _statisticsCalculatorsByType;
    NSMutableDictionary * _statisticsDataSourcesByType;
    long long  _targetConstructionState;
    NSObject<OS_dispatch_queue> * _upstreamQueue;
    HKDataFlowLink * _workoutDataFlowLink;
    NSDate * _workoutEndDate;
    NSArray * _workoutEvents;
    NSDate * _workoutStartDate;
}

@property (nonatomic, retain) HKWorkoutBuilderConfiguration *configuration;
@property (nonatomic, copy) NSDateInterval *dataInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool invalidated;
@property (nonatomic, retain) NSMutableDictionary *metadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (nonatomic, copy) NSDate *workoutEndDate;
@property (nonatomic, retain) NSArray *workoutEvents;
@property (nonatomic, copy) NSDate *workoutStartDate;

+ (Class)configurationClass;
+ (id)dataDestinationStateMachineForTaskUUID:(id)arg1 configuration:(id)arg2;
+ (bool)finishAllDetachedWorkoutBuildersExcludingSessions:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)finishAllWorkoutBuildersForClient:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (void)finishDetachedBuilderForEntity:(id)arg1 sessionEndDate:(id)arg2 profile:(id)arg3;
+ (id)recoveredWorkoutBuilderConfigurationForClient:(id)arg1 sessionIdentifier:(id)arg2 builderIdentifierOut:(id*)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)_addMetadata:(id)arg1 error:(id*)arg2;
- (void)_attemptRequeryForInvalidatedStatisticsCalculators;
- (bool)_canAddDataWithError:(id*)arg1;
- (void)_didChangeElapsedTimeBasis;
- (void)_didFinishRecovery;
- (void)_didUpdateEvents:(id)arg1;
- (void)_didUpdateMetadata:(id)arg1;
- (void)_didUpdateStatistics:(id)arg1;
- (bool)_discardWorkoutWithError:(id*)arg1;
- (id)_finishWorkoutWithError:(id*)arg1;
- (bool)_insertWorkoutEvents:(id)arg1 error:(id*)arg2;
- (void)_loadOrCreatePersistentEntity;
- (void)_lock_addQuantityTypesIncludedWhilePausedFromSource:(id)arg1 transaction:(id)arg2;
- (id)_lock_associateSamples:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)_lock_configurationForPersistenceWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)_lock_createPersistentEntityForConfiguration:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (void)_lock_didUpdateStartDate;
- (void)_lock_failWithError:(id)arg1;
- (bool)_lock_loadOrCreatePersistentEntityInTransaction:(id)arg1 error:(id*)arg2;
- (id)_lock_maskedIntervalsForStatisticsOfType:(id)arg1;
- (bool)_lock_persistDataSourceRecoveryDataInTransaction:(id)arg1 error:(id*)arg2;
- (void)_lock_pushCurrentConstructionState;
- (bool)_lock_recoverPersistedDataWithTransaction:(id)arg1 error:(id*)arg2;
- (id)_lock_sourceOrderProviderForQuantityType:(id)arg1;
- (id)_lock_statisticsCalculatorForQuantityType:(id)arg1;
- (id)_lock_statisticsCalculatorForQuantityType:(id)arg1 mergeStrategy:(unsigned long long)arg2 computationMethod:(long long)arg3;
- (id)_lock_statisticsDataSourceForQuantityType:(id)arg1;
- (id)_lock_updateStatisticsWithSamples:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (void)_notifySourcesOfTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_persistRecoveryData;
- (void)_recoverAssociatedSeriesBuilders;
- (long long)_recoveredStateForStartDate:(id)arg1 endDate:(id)arg2;
- (void)_saveSamples:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setupDataSource:(id)arg1 identifier:(id)arg2;
- (void)_updateCachedStateForAddedWorkoutEvents:(id)arg1;
- (void)_updateStatisticsPauseResumeMask;
- (bool)_validateAuthorizationToSaveWorkoutWithError:(id*)arg1;
- (void)addDataAccumulationObserver:(id)arg1;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addSampleObserver:(id)arg1;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (id)configuration;
- (void)connectionConfigured;
- (void)connectionInvalidated;
- (id)currentEvents;
- (id)currentMetadata;
- (id)currentStatisticsByQuantityType;
- (id)dataInterval;
- (id)description;
- (void)didCreateTaskServer:(id)arg1;
- (void)didInvalidateTaskServer:(id)arg1;
- (bool)enumerateSamplesOfType:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (bool)invalidated;
- (id)metadata;
- (id)remoteInterface;
- (void)remote_addDataSourcesWithIdentifiers:(id)arg1;
- (void)remote_addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addSamples:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addWorkoutEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_recoverWithCompletion:(id /* block */)arg1;
- (void)remote_removeDataSourcesWithIdentifiers:(id)arg1;
- (void)remote_setShouldCollectEvents:(bool)arg1;
- (void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (void)remote_setTargetConstructionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_updateDevice:(id)arg1;
- (void)removeDataAccumulationObserver:(id)arg1;
- (void)removeSampleObserver:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDataInterval:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setWorkoutEndDate:(id)arg1;
- (void)setWorkoutEvents:(id)arg1;
- (void)setWorkoutStartDate:(id)arg1;
- (id)startDate;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (id)workoutDataAccumulator;
- (unsigned long long)workoutDataDestinationState;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;
- (id)workoutEndDate;
- (id)workoutEvents;
- (id)workoutStartDate;

@end
