/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteRefreshPolicyScheduler : NSObject <MNTimeballInternalProvider> {
    NSMutableDictionary * _auditTokenByDestination;
    MNTimeballCache * _cache;
    NSObject<OS_dispatch_source> * _deferTimer;
    NSDate * _deferredRefreshDate;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    MNTimeballLocationManager * _locationManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    MNObserverHashTable * _observers;
    NSMutableDictionary * _optionsByDestination;
    id /* block */  _refreshCompletion;
    NSMutableDictionary * _refreshPolicyByDestination;
    MNTimeballRoutingProvider * _routingProvider;
    <MNRouteRefreshPolicySchedulerTimedActivity> * _timedActivity;
    double  _tolerance;
    MNXPCTransactionCounter * _transactionCounter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ refreshCompletion;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MNRouteRefreshPolicySchedulerTimedActivity> *timedActivity;
@property (nonatomic) double tolerance;

- (void).cxx_destruct;
- (void)_deferRefreshForScheduledDestinationsAfter:(id)arg1;
- (void)_enterActiveWorkload;
- (void)_handleCompletionOfRefresh;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2;
- (void)_handleRefreshingCacheEntries:(id)arg1 atDate:(id)arg2 userLocation:(id)arg3;
- (void)_handleSchedulingThisDestinationAndRefreshAllDestinations:(id)arg1 nextRefreshDate:(id)arg2;
- (void)_handleSchedulingUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;
- (void)_leaveActiveWorkload;
- (id)_newActivityFromRefreshPolicyRules:(id)arg1;
- (void)_performDeferredRefresh;
- (void)_refreshAllDestinationsAtDate:(id)arg1;
- (id)_refreshPolicyForDestination:(id)arg1;
- (void)_scheduleNextRefreshDateForDestination:(id)arg1 routeUpdate:(id)arg2 fromDate:(id)arg3 completion:(id /* block */)arg4;
- (double)_timeIntervalForRefreshOfDestination:(id)arg1 routeUpdate:(id)arg2 atDate:(id)arg3;
- (void)_updateNextRefreshDate:(id)arg1 destination:(id)arg2 completion:(id /* block */)arg3;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRoutingProvider:(id)arg1 cache:(id)arg2 locationManager:(id)arg3;
- (id /* block */)refreshCompletion;
- (void)refreshScheduledDestinations;
- (void)removeObserver:(id)arg1;
- (void)scheduleUpdatesForDestination:(id)arg1 options:(long long)arg2 policy:(unsigned long long)arg3 auditToken:(id)arg4;
- (void)setRefreshCompletion:(id /* block */)arg1;
- (void)setTimedActivity:(id)arg1;
- (void)setTolerance:(double)arg1;
- (id)timedActivity;
- (double)tolerance;
- (void)unscheduleUpdateForDestination:(id)arg1;

@end