/* Generated by EzioChiu.
 */

@protocol MNTimeballServiceProxyInterface <NSObject>

@required

- (<MNTimeballServiceProxyDelegate> *)delegate;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(NSArray *)arg2 freshness:(MNRouteUpdateFreshness *)arg3 handlerID:(NSUUID *)arg4;
- (void)setDelegate:(id <MNTimeballServiceProxyDelegate>)arg1;
- (void)subscribeToAllDestinations;
- (void)subscribeToDestination:(MNPlannedDestination *)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
- (void)unsubscribeFromAllDestinations;
- (void)unsubscribeFromDestination:(MNPlannedDestination *)arg1;

@end
