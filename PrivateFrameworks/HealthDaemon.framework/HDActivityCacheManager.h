/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityCacheManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    NSSet * _allQuantityTypes;
    bool  _cacheIndicesAreSet;
    HKQuantityType * _calorieGoalType;
    NSTimeZone * _currentTimeZone;
    HDActivityCacheDataSource * _dataSource;
    NSDate * _dateOverride;
    HKQuantityType * _exerciseGoalType;
    bool  _existingActivityCachesAreSet;
    HKActivityCache * _existingTodayActivityCache;
    HKActivityCache * _existingYesterdayActivityCache;
    NSMutableDictionary * _goalsByIndex;
    bool  _hasSubscribedToSignificantTimeChangeNotifications;
    CMPedometerData * _lastPedometerData;
    HDSourceEntity * _localDeviceSourceEntity;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    CMPedometer * _pedometer;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    int  _rebuildCacheNotificationToken;
    _HKDelayedOperation * _rebuildCachesOperation;
    HKQuantityType * _standGoalType;
    NSTimeZone * _timeZoneOverride;
    long long  _todayActivityCacheIndex;
    NSDateInterval * _todayDateInterval;
    HKHeartRateSummary * _todayHeartRateSummary;
    long long  _tomorrowActivityCacheIndex;
    _HKDelayedOperation * _updateCachesOperation;
    long long  _wheelchairUse;
    long long  _yesterdayActivityCacheIndex;
    NSDateInterval * _yesterdayDateInterval;
    HKHeartRateSummary * _yesterdayHeartRateSummary;
}

@property (readonly) NSCalendar *calendar;
@property (nonatomic, readonly) HKActivityCache *currentActivityCache;
@property (nonatomic, retain) NSDate *dateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimeZone *timeZoneOverride;
@property (nonatomic, readonly) HKActivityCache *yesterdayActivityCache;

- (void).cxx_destruct;
- (void)_calculateCacheIndicesWithTodayIndex:(long long*)arg1 yesterdayIndex:(long long*)arg2 tomorrowIndex:(long long*)arg3 todayStart:(id)arg4 yesterdayStart:(id)arg5 tomorrowStart:(id)arg6 calendar:(id)arg7;
- (void)_didReceiveSignificantTimeChangeNotification;
- (id)_mostRecentSampleWithType:(id)arg1 beforeDate:(id)arg2 error:(id*)arg3;
- (void)_queue_alertObservers:(id)arg1 heartRateSummaryChanged:(id)arg2;
- (void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1;
- (void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1;
- (bool)_queue_allGoalsLoaded;
- (bool)_queue_calorieGoalSet;
- (id)_queue_currentDate;
- (id)_queue_currentTimeZone;
- (void)_queue_deleteActivityCaches:(id)arg1;
- (bool)_queue_exerciseGoalSet;
- (id)_queue_gregorianCalendar;
- (void)_queue_primeCacheIndices;
- (void)_queue_primeDailyGoalWithType:(id)arg1;
- (void)_queue_primeDailyGoals;
- (void)_queue_primeDataSource;
- (void)_queue_primeExistingActivityCaches;
- (void)_queue_primeLocalSource;
- (bool)_queue_readyToPrimeDataSource;
- (bool)_queue_readyToSaveCaches;
- (void)_queue_rebuildActivityCaches;
- (void)_queue_rebuildCachesIfNeededForTimeChange;
- (void)_queue_registerForSignificantTimeChangeNotification;
- (void)_queue_resetCacheIndices;
- (void)_queue_resetDailyGoalWithType:(id)arg1;
- (void)_queue_resetDataSource;
- (void)_queue_resetEverything;
- (void)_queue_resetExistingActivityCaches;
- (id)_queue_saveCacheWithDateInterval:(id)arg1 calorieGoal:(id)arg2 exerciseGoal:(id)arg3 standGoal:(id)arg4 cacheIndex:(long long)arg5 previousCache:(id)arg6 statisticsBuilder:(id)arg7 wheelchairUse:(long long)arg8 generateStats:(bool)arg9;
- (void)_queue_saveCaches;
- (bool)_queue_saveTodayCache;
- (bool)_queue_saveYesterdayCache;
- (bool)_queue_standGoalSet;
- (void)_queue_streamSamplesAdded;
- (void)_queue_updateCaches;
- (bool)_queue_updateDailyGoalsWithSamples:(id)arg1;
- (void)_queue_updateDateIntervalsWithExistingActivityCaches;
- (bool)_queue_updateGoalWithSample:(id)arg1;
- (void)_queue_updateHeartRateSummaries;
- (void)_userCharacteristicsDidChangeNotification:(id)arg1;
- (void)accessStatisticsBuilderWithCacheIndex:(long long)arg1 handler:(id /* block */)arg2;
- (void)addActivityCacheObserver:(id)arg1;
- (id)calendar;
- (id)currentActivityCache;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)dateOverride;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)removeActivityCacheObserver:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)setDateOverride:(id)arg1;
- (void)setTimeZoneOverride:(id)arg1;
- (id)timeZoneOverride;
- (id)yesterdayActivityCache;

@end