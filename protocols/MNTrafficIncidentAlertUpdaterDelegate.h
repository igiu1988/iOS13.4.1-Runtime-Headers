/* Generated by EzioChiu.
 */

@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>

@required

- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 didDismissAlert:(MNTrafficIncidentAlert *)arg2 withReroute:(bool)arg3;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 didSwitchToNewRoute:(GEOComposedRoute *)arg2 traffic:(GEOComposedRouteTraffic *)arg3 forAlert:(MNTrafficIncidentAlert *)arg4;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 invalidatedAlert:(MNTrafficIncidentAlert *)arg2;
- (void)trafficIncidentAlertUpdater:(void *)arg1 receivedAlert:(void *)arg2 responseCallback:(void *)arg3; // needs 3 arg types, found 8: MNTrafficIncidentAlertUpdater *, MNTrafficIncidentAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 updatedAlert:(MNTrafficIncidentAlert *)arg2;
- (bool)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;

@end
