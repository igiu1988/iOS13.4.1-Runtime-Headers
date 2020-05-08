/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
 */

@interface PRItemLocalizer : NSObject <PRDevicePoseProviderDelegate, PRGenericRangingSessionDelegate> {
    NSOperationQueue * _activityQueue;
    PRFindMyCoreAnalytics * _analytics;
    int  _clientState;
    NSDictionary * _configurationParameters;
    <PRItemLocalizerDataRecorder> * _dataRecorder;
    <PRItemLocalizerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    CMMotionActivityManager * _deviceActivityManager;
    bool  _deviceIsMoving;
    NSObject<OS_dispatch_queue> * _estimatorQueue;
    struct unique_ptr<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter, std::__1::default_delete<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter> > { 
        struct __compressed_pair<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter *, std::__1::default_delete<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter> > { 
            struct PRRoseSyntheticApertureBatchFilter {} *__value_; 
        } __ptr_; 
    }  _itemLocationFilter;
    PRRoseSolution * _latestProximity;
    NSObject<OS_os_log> * _logger;
    NSTimer * _movementTimer;
    PRDevicePoseProvider * _poseProvider;
    NSObject<OS_dispatch_queue> * _proximityQueue;
    struct unique_ptr<RoseSyntheticApertureFiltering::PRRoseRangeFilter, std::__1::default_delete<RoseSyntheticApertureFiltering::PRRoseRangeFilter> > { 
        struct __compressed_pair<RoseSyntheticApertureFiltering::PRRoseRangeFilter *, std::__1::default_delete<RoseSyntheticApertureFiltering::PRRoseRangeFilter> > { 
            struct PRRoseRangeFilter {} *__value_; 
        } __ptr_; 
    }  _rangeFilter;
    int  _rangingState;
    PRRemoteDevice * _remoteDevice;
    PRCompanionRangingSession * _session;
    bool  _targetIsMoving;
    NSMutableArray * _trajectory;
}

@property (nonatomic, retain) NSOperationQueue *activityQueue;
@property (nonatomic, retain) PRFindMyCoreAnalytics *analytics;
@property (nonatomic, retain) NSDictionary *configurationParameters;
@property (nonatomic, retain) <PRItemLocalizerDataRecorder> *dataRecorder;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRItemLocalizerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CMMotionActivityManager *deviceActivityManager;
@property bool deviceIsMoving;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *estimatorQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PRRoseSolution *latestProximity;
@property (nonatomic, retain) NSTimer *movementTimer;
@property (nonatomic, retain) PRDevicePoseProvider *poseProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *proximityQueue;
@property (nonatomic, retain) PRRemoteDevice *remoteDevice;
@property (nonatomic, retain) PRCompanionRangingSession *session;
@property (readonly) Class superclass;
@property bool targetIsMoving;
@property (nonatomic, retain) NSMutableArray *trajectory;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activityQueue;
- (id)analytics;
- (bool)commonConfigure:(id)arg1;
- (id)configurationParameters;
- (bool)configureForDeviceWithId:(id)arg1;
- (id)dataRecorder;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)deleteTrajectoryWaypointsBeforeTime:(double)arg1;
- (id)deviceActivityManager;
- (bool)deviceIsMoving;
- (void)devicePoseUpdated:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveNewSolutions:(id)arg1;
- (void)discardData;
- (id)estimatorInputForProximity:(id)arg1;
- (id)estimatorQueue;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidPoseDetected;
- (id)latestProximity;
- (void)logAndPresentSolution:(struct BatchSolution { int x1; bool x2; int x3; bool x4; struct vector<RoseSyntheticApertureFiltering::BatchSolutionParticle, std::__1::allocator<RoseSyntheticApertureFiltering::BatchSolutionParticle> > { struct BatchSolutionParticle {} *x_5_1_1; struct BatchSolutionParticle {} *x_5_1_2; struct __compressed_pair<RoseSyntheticApertureFiltering::BatchSolutionParticle *, std::__1::allocator<RoseSyntheticApertureFiltering::BatchSolutionParticle> > { struct BatchSolutionParticle {} *x_3_2_1; } x_5_1_3; } x5; double x6; })arg1 withTimeStamp:(double)arg2;
- (void)logEstimatorInput:(id)arg1;
- (void)logRangeEstimate:(id)arg1;
- (void)logTargetEstimates:(id)arg1;
- (void)logTargetIsMovingChange:(bool)arg1;
- (id)movementTimer;
- (void)performFilteringWithEstimatorInput:(id)arg1 targetMoving:(bool)arg2 deviceMoving:(bool)arg3;
- (struct BatchSolution { int x1; bool x2; int x3; bool x4; struct vector<RoseSyntheticApertureFiltering::BatchSolutionParticle, std::__1::allocator<RoseSyntheticApertureFiltering::BatchSolutionParticle> > { struct BatchSolutionParticle {} *x_5_1_1; struct BatchSolutionParticle {} *x_5_1_2; struct __compressed_pair<RoseSyntheticApertureFiltering::BatchSolutionParticle *, std::__1::allocator<RoseSyntheticApertureFiltering::BatchSolutionParticle> > { struct BatchSolutionParticle {} *x_3_2_1; } x_5_1_3; } x5; double x6; })performLocationFiltering:(id)arg1;
- (id)performRangeFilteringWithVIO:(id)arg1;
- (id)performRangeFilteringWithoutVIO:(id)arg1 targetMoving:(bool)arg2 deviceMoving:(bool)arg3;
- (id)poseProvider;
- (void)presentRangeEstimate:(id)arg1;
- (void)presentTargetEstimate:(id)arg1;
- (id)produceBlendedRangeEstimateForPose:(id)arg1;
- (id)proximityQueue;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;
- (id)remoteDevice;
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
- (void)remoteDeviceDidMove;
- (void)reset;
- (void)revokeTargetEstimate;
- (id)saveData;
- (void)sendItemLocalizerChangedActivity:(unsigned long long)arg1;
- (void)sendItemLocalizerChangedState:(unsigned long long)arg1;
- (void)sendPRItemState:(unsigned long long)arg1;
- (id)session;
- (void)setActivityQueue:(id)arg1;
- (void)setAnalytics:(id)arg1;
- (void)setConfigurationParameters:(id)arg1;
- (void)setDataRecorder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDeviceActivityManager:(id)arg1;
- (void)setDeviceIsMoving:(bool)arg1;
- (void)setEstimatorQueue:(id)arg1;
- (void)setLatestProximity:(id)arg1;
- (void)setMovementTimer:(id)arg1;
- (void)setPoseProvider:(id)arg1;
- (void)setProximityQueue:(id)arg1;
- (void)setRemoteDevice:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTargetIsMoving:(bool)arg1;
- (void)setTrajectory:(id)arg1;
- (bool)startWithDevicePoseProvider:(id)arg1 error:(id*)arg2;
- (bool)stop:(id*)arg1;
- (bool)targetIsMoving;
- (id)trajectory;
- (unsigned long long)trajectoryIndexForTime:(double)arg1;
- (void)updateDelegateWithSelector:(SEL)arg1 object:(id)arg2;

@end
