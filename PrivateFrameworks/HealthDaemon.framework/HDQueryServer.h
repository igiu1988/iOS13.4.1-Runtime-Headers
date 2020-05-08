/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryServer : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDTaskServer, HKQueryServerInterface> {
    HDDaemonTransaction * _activationTransaction;
    NSDictionary * _baseDataEntityEncodingOptions;
    HDHealthStoreClient * _client;
    HDQueryServerClientState * _clientState;
    double  _collectionInterval;
    HKQueryServerConfiguration * _configuration;
    HDDataCollectionAssertion * _dataCollectionAssertion;
    long long  _dataCount;
    NSArray * _dataObservationAssertions;
    <HDQueryServerDelegate> * _delegate;
    _HKFilter * _filter;
    bool  _isCollectingData;
    HKObjectType * _objectType;
    bool  _observingData;
    HDProfile * _profile;
    id /* block */  _queryDidFinishHandler;
    NSObject<OS_dispatch_queue> * _queryQueue;
    _Atomic int  _queryState;
    NSUUID * _queryUUID;
    _Atomic bool  _shouldFinish;
    _Atomic bool  _shouldPause;
    bool  _shouldTakeObservationAssertions;
    HDDatabaseTransactionContextStatistics * _transactionStatistics;
    NSObject<OS_dispatch_queue> * _unitTestQueryQueue;
    id /* block */  _unitTest_queryServerSetShouldPauseHandler;
    id /* block */  _unitTest_queryServerWillChangeStateHandler;
}

@property (nonatomic, readonly) double activationTime;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (readonly) bool clientHasActiveWorkout;
@property (nonatomic, readonly) <HKQueryClientInterface><NSXPCProxyCreating> *clientProxy;
@property (nonatomic, copy) HDQueryServerClientState *clientState;
@property (nonatomic) double collectionInterval;
@property (nonatomic, readonly, copy) HKQueryServerConfiguration *configuration;
@property (nonatomic) long long dataCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDQueryServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKObjectType *objectType;
@property (nonatomic, readonly, copy) NSSet *objectTypes;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queryQueue;
@property (readonly) long long queryState;
@property (nonatomic, readonly, copy) NSUUID *queryUUID;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_queryServerSetShouldPauseHandler;
@property (nonatomic, copy) id /* block */ unitTest_queryServerWillChangeStateHandler;

+ (id)builtInQueryServerClasses;
+ (Class)configurationClass;
+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_predicateString;
- (id)_queryStateString;
- (void)_queue_activateServerWithClientState:(id)arg1 error:(id)arg2;
- (void)_queue_beginObservingDataTypes;
- (void)_queue_closeActivationTransactionIfNecessary;
- (id)_queue_collectionObserverState;
- (void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2;
- (void)_queue_didDeactivate;
- (void)_queue_endObservingDataTypes;
- (void)_queue_logQueryWithDuration:(double)arg1 statistics:(id)arg2;
- (double)_queue_logThresholdHardwareFactor;
- (void)_queue_notifyIfQueryingForHealthRecords;
- (double)_queue_queryLogThreshold;
- (id)_queue_sampleTypesForObservation;
- (void)_queue_setQueryState:(long long)arg1;
- (void)_queue_setSampleTypeObservationAssertions:(id)arg1;
- (void)_queue_start;
- (void)_queue_startDataCollection;
- (void)_queue_startDataCollectionIfNecessary;
- (void)_queue_startQueryIfNecessary;
- (void)_queue_stop;
- (void)_queue_stopDataCollection;
- (void)_queue_transitionToFinished;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToRunning;
- (void)_queue_transitionToSuspendedState:(long long)arg1;
- (void)_queue_updateSampleTypeObservationAssertions;
- (id)_sampleTypeToObserveForUpdates;
- (void)_scheduleStartQuery;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveAllSampleTypes;
- (bool)_shouldObserveDatabaseProtectedDataAvailability;
- (bool)_shouldObserveOnPause;
- (bool)_shouldRegisterAsProtectedDataObserver;
- (bool)_shouldStopProcessingQuery;
- (bool)_shouldSuspendQuery;
- (void)activateServerWithClientState:(id)arg1 error:(id)arg2;
- (double)activationTime;
- (id)client;
- (bool)clientHasActiveWorkout;
- (id)clientProxy;
- (id)clientState;
- (void)clientStateDidChange:(id)arg1;
- (void)clientStateWillChange:(id)arg1;
- (double)collectionInterval;
- (id)configuration;
- (void)connectionInvalidated;
- (id)createDatabaseTransactionContext;
- (long long)dataCount;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)deactivateServerWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)filter;
- (id)filteredSamplesForClientWithSamples:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (bool)isQueryingForHealthRecordsTypes;
- (id)newDataEntityEnumerator;
- (id)objectType;
- (id)objectTypes;
- (void)onQueue:(id /* block */)arg1;
- (bool)prepareToActivateServerWithError:(id*)arg1;
- (id)profile;
- (id)quantityType;
- (id)queryQueue;
- (long long)queryState;
- (id)queryUUID;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2;
- (id)remoteInterface;
- (void)remote_deactivateServer;
- (void)remote_startQueryWithCompletion:(id /* block */)arg1;
- (id /* block */)sampleAuthorizationFilter;
- (id)sampleType;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (id)sanitizedSampleForQueryClient:(id)arg1;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(id /* block */)arg1;
- (void)schedulePause;
- (void)setClientState:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setDataCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueryDidFinishHandler:(id /* block */)arg1;
- (void)setShouldPause:(bool)arg1;
- (void)setUnitTest_queryServerSetShouldPauseHandler:(id /* block */)arg1;
- (void)setUnitTest_queryServerWillChangeStateHandler:(id /* block */)arg1;
- (id)taskUUID;
- (id /* block */)unitTest_queryServerSetShouldPauseHandler;
- (id /* block */)unitTest_queryServerWillChangeStateHandler;
- (bool)validateConfiguration:(id*)arg1;

@end
