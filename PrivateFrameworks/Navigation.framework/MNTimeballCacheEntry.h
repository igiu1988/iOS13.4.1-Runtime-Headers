/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTimeballCacheEntry : NSObject <MNJSONOutput> {
    MNPlannedDestination * _destination;
    NSDate * _lastUpdate;
    NSDate * _nextUpdate;
    MNRouteUpdate * _routeUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MNPlannedDestination *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastUpdate;
@property (nonatomic, retain) NSDate *nextUpdate;
@property (nonatomic, retain) MNRouteUpdate *routeUpdate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)destination;
- (id)jsonDictionary;
- (id)lastUpdate;
- (id)nextUpdate;
- (id)routeUpdate;
- (void)setDestination:(id)arg1;
- (void)setLastUpdate:(id)arg1;
- (void)setNextUpdate:(id)arg1;
- (void)setRouteUpdate:(id)arg1;

@end
