/* Generated by EzioChiu
   Image: /Library/MobileSubstrate/DynamicLibraries/Relocate.dylib
 */

@interface RLCLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    <CLLocationManagerDelegate> * _delegate;
    id  _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CLLocationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (id)manager;
- (void)setDelegate:(id)arg1;
- (void)setManager:(id)arg1;

@end