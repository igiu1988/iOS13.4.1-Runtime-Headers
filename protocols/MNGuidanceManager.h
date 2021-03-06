/* Generated by EzioChiu.
 */

@protocol MNGuidanceManager <NSObject>

@required

- (void)addInjectedEvent:(NSDictionary *)arg1;
- (bool)repeatLastGuidanceAnnouncement:(MNLocation *)arg1;
- (void)stop;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)updateForReroute:(GEOComposedRoute *)arg1;
- (void)updateForReturnToRoute;
- (void)updateGuidanceForLocation:(MNLocation *)arg1 navigatorState:(int)arg2;

@end
