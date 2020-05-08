/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCoreMotionDataCollector : NSObject <HDDataCollector> {
    <HDCoreMotionDataSource> * _dataSource;
    long long  _errorCount;
    NSMutableDictionary * _lastCMDatumByType;
    HDDataCollectorMultiplexer * _multiplexer;
    HDProfile * _profile;
    NSSet * _quantityTypes;
    NSObject<OS_dispatch_queue> * _queue;
    HDDataCollectorState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessToFitnessDataDidChange:(id)arg1;
- (id)_migrateDataCollectionContextForType:(id)arg1 error:(id*)arg2;
- (void)_queue_beginUpdatesWithTargetCollectionType:(unsigned long long)arg1;
- (id)_queue_diagnosticDescription;
- (void)_queue_forwardCoreMotionData:(id)arg1;
- (void)_queue_forwardCoreMotionData:(id)arg1 forType:(id)arg2;
- (id)_queue_lastPersistedSensorDatumForType:(id)arg1;
- (void)_queue_populateLastDatumDictionary;
- (void)_queue_updateCollectionType:(unsigned long long)arg1;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (id)coreMotionDatumFromSensorDatum:(id)arg1;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)dealloc;
- (void)didReceiveCoreMotionData:(id)arg1 startingDatum:(id)arg2 error:(id)arg3;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)persistentIdentifier;
- (id)profile;
- (id)queue;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (void)queue_recomputeCurrentState;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1;
- (void)registerWithAggregators;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;

@end
