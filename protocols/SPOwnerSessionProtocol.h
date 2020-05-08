/* Generated by EzioChiu.
 */

@protocol SPOwnerSessionProtocol <NSObject>

@required

- (NSSet *)allBeacons;
- (void)allBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (id /* block */)beaconAddedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPBeacon *, void*, id, SEL
- (id /* block */)beaconRemovedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, SPBeacon *, void*, id, SEL
- (id /* block */)beaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (FMFuture *)executeCommand:(SPCommand *)arg1;
- (void)executeCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id /* block */)latestLocationsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (NSSet *)locationSources;
- (void)locationsForBeacons:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)removeBeacon:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPBeacon *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBeaconAddedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)setBeaconRemovedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPBeacon *, void*
- (void)setBeaconsChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setLatestLocationsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setLocationSources:(NSSet *)arg1;
- (void)startRefreshing;
- (void)startRefreshingBeacons:(NSArray *)arg1;
- (void)stopRefreshing;
- (void)unacceptedBeaconsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*

@end
