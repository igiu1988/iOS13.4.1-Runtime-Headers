/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLiveWorkoutDataSource : HDStandardTaskServer <HDWorkoutDataDestination, HDWorkoutDataSource, HKDataFlowLinkProcessor, HKLiveWorkoutDataSourceServerInterface> {
    HDWorkoutBasicDataSource * _basicDataSource;
    HKWorkoutDataSourceConfiguration * _dataSourceConfiguration;
    NSLock * _lock;
    HDProfile * _profile;
    HKDataFlowLink * _workoutDataFlowLink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)_lock_shouldAddSample:(id)arg1;
- (void)_setDataSourceConfiguration:(id)arg1;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_setDataSourceConfiguration:(id)arg1;
- (void)remote_startTaskServerIfNeeded;
- (id)workoutDataAccumulator;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)workoutDataDestinationState;
- (id)workoutDataFlowLink;
- (id)workoutDataProcessorUUID;

@end
