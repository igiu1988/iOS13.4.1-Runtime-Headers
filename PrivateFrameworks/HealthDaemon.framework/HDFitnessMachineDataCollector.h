/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineDataCollector : NSObject <HDDataCollector, HDMetricsCollector> {
    NSMapTable * _aggregators;
    NSDate * _approximatedStartDate;
    NSMutableArray * _bufferedCharacteristics;
    NSMutableDictionary * _bufferedMetrics;
    CMFitnessMachine * _cmFitnessMachine;
    HDDataCollectorConfiguration * _configuration;
    HKDevice * _device;
    unsigned long long  _fitnessMachineType;
    NSSet * _localDevicePreferredObjectTypes;
    NSString * _machineBrand;
    NSDate * _machinePreferredUntilDate;
    HKObserverSet * _metricsCollectorObservers;
    NSMutableDictionary * _previousDatums;
    NSMutableDictionary * _previousWorkoutMetrics;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKSource * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *machinePreferredUntilDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cmFitnessMachineDataFromDatums:(id)arg1 timestamp:(id)arg2;
- (void)_deliverBufferedMetrics;
- (id)_filterForFitnessMachineSamplesWithStartDate:(id)arg1 endDate:(id)arg2;
- (double)_getDoubleFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(double)arg3;
- (long long)_getLongFromDatum:(id)arg1 unitString:(id)arg2 defaultValue:(long long)arg3;
- (id)_queue_calculateDatumForAggregatorType:(id)arg1 currentDatum:(id)arg2 previousDatum:(id)arg3;
- (void)_queue_fitnessMachineSumForType:(id)arg1 dateInterval:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_handleConfigurationChanged:(id)arg1;
- (void)_queue_handleDataCharacteristic:(id)arg1;
- (void)_queue_processBufferedCharacteristics;
- (void)_queue_processDataCharacteristic:(id)arg1;
- (void)_queue_processDatumsByMetric:(id)arg1 timestamp:(id)arg2;
- (bool)_queue_shouldApplyDatum:(id)arg1 toAggregator:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)configureCollectorsAndAggregators;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)handleDataCharacteristic:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithFitnessMachineType:(unsigned long long)arg1 profile:(id)arg2;
- (id)machinePreferredUntilDate;
- (double)preferredAggregationIntervalForAggregator:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setMachineBrand:(id)arg1;
- (void)setMachinePreferredUntilDate:(id)arg1;
- (void)setMachineStartDate:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)tearDown;
- (void)unitTest_processDatumsByMetric:(id)arg1;
- (id)workoutMetricsFromDatums:(id)arg1;

@end
