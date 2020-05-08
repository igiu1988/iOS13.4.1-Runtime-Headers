/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {
    bool  _active;
    int  _authorizationStatus;
    CLLocation * _currentLocation;
    <RCLocationsOfInterestDelegate> * _delegate;
    bool  _isFetchingPlacesOfInterest;
    CLLocationManager * _locationManager;
    NSArray * _locationsOfInterest;
    unsigned long long  _placeInferencePolicy;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) bool authorized;
@property (readonly) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCLocationsOfInterestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *locationsOfInterest;
@property (readonly) Class superclass;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_didFetchPlaceInferences:(id)arg1 location:(id)arg2 error:(id)arg3;
- (void)_requestPlaceInferences;
- (void)_startMonitoringLocation;
- (bool)active;
- (bool)authorized;
- (id)currentLocation;
- (id)delegate;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationsOfInterest;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
