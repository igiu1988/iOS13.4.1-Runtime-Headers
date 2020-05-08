/* Generated by EzioChiu.
 */

@protocol MNRouteRefreshPolicyRules <NSObject>

@required

- (bool)canMakeNetworkRequestsForDestination:(MNPlannedDestination *)arg1 atDate:(NSDate *)arg2;
- (bool)canWakeClientForUpdates;
- (bool)canWakeDeviceForUpdates;
- (double)maxTimeIntervalFromNowForDestinationRefresh:(MNPlannedDestination *)arg1 fromDate:(NSDate *)arg2;
- (unsigned long long)policy;
- (double)timeIntervalForDestinationRefresh:(MNPlannedDestination *)arg1 lastUpdate:(MNRouteUpdate *)arg2;

@end
