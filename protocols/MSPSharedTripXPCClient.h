/* Generated by EzioChiu.
 */

@protocol MSPSharedTripXPCClient <NSObject>

@required

- (void)accountAvailabilityDidChange:(bool)arg1;
- (void)destinationDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)destinationReachedDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)etaDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)invalidateActiveHandles;
- (void)routeDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)sendMessage:(NSString *)arg1 toGroup:(NSString *)arg2;
- (void)sendMessage:(NSString *)arg1 toParticipant:(NSString *)arg2;
- (void)sharedTripDidBecomeAvailable:(GEOSharedNavState *)arg1;
- (void)sharedTripDidBecomeUnavailable:(GEOSharedNavState *)arg1;
- (void)sharedTripDidClose:(GEOSharedNavState *)arg1;
- (void)sharedTripInvalidatedWithError:(NSError *)arg1;

@end
