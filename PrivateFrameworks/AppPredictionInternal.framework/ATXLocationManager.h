/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXLocationOfInterestManagerProtocol, ATXPredictedLocationsManagerProtocol> {
    <ATXLocationManagerGPS> * _gps;
    _PASLock * _lock;
    NSDate * _now;
    double  _predictedExitDateTimeout;
    double  _predictedNextLOITimeout;
    <ATXLocationManagerRoutine> * _routine;
    <ATXLocationManagerStateStore> * _stateStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *now;
@property (nonatomic) double predictedExitDateTimeout;
@property (nonatomic) double predictedNextLOITimeout;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)stringForLOIType:(long long)arg1;

- (void).cxx_destruct;
- (double)_distanceOfCurrentLocationFrom:(id)arg1;
- (void)_fetchLocationOfInterest:(long long)arg1 inGroup:(id)arg2;
- (void)_handleRoutineError:(id)arg1 forThing:(id)arg2;
- (void)_updateLocationOfInterestIfTimeElapsed;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (void)clearLocationOfInterest;
- (void)didChangeLocationEnabled:(bool)arg1;
- (void)didGetLocationUpdate:(id)arg1;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)fetchAllLocationsOfInterest:(id /* block */)arg1;
- (void)fetchLOILocationOfType:(long long)arg1 reply:(id /* block */)arg2;
- (id)getCurrentLocation;
- (unsigned long long)getCurrentRoutineMode;
- (id)getPredictedExitTimesFromLOIName:(id)arg1 startDate:(id)arg2;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)arg1 startDate:(id)arg2;
- (void)gotLocation:(id)arg1 forLocationOfInterest:(long long)arg2;
- (void)gotState:(id)arg1;
- (id)init;
- (id)initWithGPS:(id)arg1 routine:(id)arg2 stateStore:(id)arg3 now:(id)arg4;
- (bool)isAvailableLocationOfInterestType:(long long)arg1;
- (bool)isNearKnownTypeLocationOfInterest;
- (bool)isTourist;
- (bool)locationEnabled;
- (id)locationOfInterestAtCurrentLocation;
- (id)now;
- (double)predictedExitDateTimeout;
- (id)predictedExitTimes;
- (id)predictedLocationsOfInterest;
- (double)predictedNextLOITimeout;
- (id)previousLOIAndCurrentLOI;
- (void)setNow:(id)arg1;
- (void)setPredictedExitDateTimeout:(double)arg1;
- (void)setPredictedNextLOITimeout:(double)arg1;
- (void)updateCurrentLocationOfInterest;
- (void)updatePredictedExitTimes;
- (void)updatePredictedLocationsOfInterest;

@end