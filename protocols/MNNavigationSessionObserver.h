/* Generated by EzioChiu.
 */

@protocol MNNavigationSessionObserver <NSObject>

@optional

- (void)navigationSession:(MNNavigationSession *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 didActivateAudioSession:(bool)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didAnnounce:(NSString *)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didAnnounceArrival:(NSString *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didChangeGuidanceState:(GEONavigationGuidanceState *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didFailRerouteWithError:(NSError *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSession:(void *)arg1 didReceiveTrafficIncidentAlert:(void *)arg2 responseCallback:(void *)arg3; // needs 3 arg types, found 8: MNNavigationSession *, MNTrafficIncidentAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)navigationSession:(MNNavigationSession *)arg1 didReroute:(MNActiveRouteInfo *)arg2 withLocation:(MNLocation *)arg3 withAlternateRoutes:(NSArray *)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didSuppressReroute:(NSError *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateDestination:(GEOComposedWaypoint *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(MNActiveRouteInfo *)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateETAResponseForRoute:(MNActiveRouteInfo *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateStepNameInfo:(GEONameInfo *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSession:(MNNavigationSession *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(MNNavigationSession *)arg1 hideJunctionViewForId:(NSUUID *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSession:(MNNavigationSession *)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 proceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSession:(MNNavigationSession *)arg1 showJunctionView:(MNGuidanceJunctionViewInfo *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 usePersistentDisplay:(bool)arg2;
- (void)navigationSession:(MNNavigationSession *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionBeginGuidanceUpdate:(MNNavigationSession *)arg1;
- (void)navigationSessionDidArrive:(MNNavigationSession *)arg1;
- (void)navigationSessionDidCancelReroute:(MNNavigationSession *)arg1;
- (void)navigationSessionDidEnterPreArrivalState:(MNNavigationSession *)arg1;
- (void)navigationSessionDidStart:(MNNavigationSession *)arg1;
- (void)navigationSessionDidStop:(MNNavigationSession *)arg1;
- (void)navigationSessionDidTimeoutInArrivalRegion:(MNNavigationSession *)arg1;
- (void)navigationSessionEndGuidanceUpdate:(MNNavigationSession *)arg1;
- (void)navigationSessionHideSecondaryStep:(MNNavigationSession *)arg1;
- (void)navigationSessionWillPause:(MNNavigationSession *)arg1;
- (void)navigationSessionWillReroute:(MNNavigationSession *)arg1;
- (void)navigationSessionWillResumeFromPause:(MNNavigationSession *)arg1;

@end
