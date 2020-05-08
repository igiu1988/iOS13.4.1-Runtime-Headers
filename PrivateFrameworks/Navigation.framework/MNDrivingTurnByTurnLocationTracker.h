/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate> {
    MNAlternateRoutesUpdater * _alternateRoutesUpdater;
    double  _consecutiveValidCourseCount;
    int  _detectedTransportType;
    bool  _exitedVehicle;
    double  _lastKnownCourse;
    MNTrafficIncidentAlertUpdater * _trafficIncidentAlertUpdater;
    MNTunnelLocationProjector * _tunnelLocationProjector;
    unsigned long long  _vehicleExitConfidence;
    struct { 
        double latitude; 
        double longitude; 
    }  _vehicleExitCoordinate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (id)_alternateRouteForOffRouteLocation:(id)arg1;
- (id)_contingencyRouteForLocation:(id)arg1;
- (int)_detectedMotionForLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_updateForArrival;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)didUpdateAlternateRoutes:(id)arg1 traffic:(id)arg2;
- (id)initWithNavigationSession:(id)arg1;
- (bool)shouldProjectAlongRoute;
- (void)startTracking;
- (void)stopTracking;
- (void)tracePaused;
- (void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(bool)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 traffic:(id)arg3 forAlert:(id)arg4;
- (void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
- (bool)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;
- (int)transportType;
- (void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
- (id)userLocationForUpdateManager:(id)arg1;
- (bool)wantsETAUpdates;

@end