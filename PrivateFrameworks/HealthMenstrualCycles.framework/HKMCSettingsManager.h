/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCSettingsManager : NSObject {
    NSArray * _allSettingsToObserve;
    int  _analysisSettingsNotifyToken;
    int  _hiddenDisplayTypesNotifyToken;
    NSUserDefaults * _menstrualCyclesDefaults;
    int  _notificationSettingsNotifyToken;
    HKObserverSet * _observers;
}

@property (nonatomic, retain) NSDateComponents *fertileWindowNotificationTimeOfDay;
@property (nonatomic) bool fertileWindowNotificationsEnabled;
@property (nonatomic) bool fertileWindowProjectionsEnabled;
@property (nonatomic, retain) NSDateComponents *menstruationNotificationTimeOfDay;
@property (nonatomic) bool menstruationNotificationsEnabled;
@property (nonatomic) bool menstruationProjectionsEnabled;
@property (nonatomic) long long minimumAnalysisStartDayIndex;
@property (nonatomic, readonly) bool notificationsEnabled;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (void).cxx_destruct;
- (void)_analysisSettingsDidUpdate;
- (void)_hiddenDisplayTypesDidUpdate;
- (void)_notificationSettingsDidUpdate;
- (void)_setTestDefaults:(id)arg1;
- (void)_startObservingDefaults;
- (void)_startObservingNPSNotifications;
- (void)_stopObservingAllDefaults;
- (void)_stopObservingNPSNotifications;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)fertileWindowNotificationTimeOfDay;
- (bool)fertileWindowNotificationsEnabled;
- (bool)fertileWindowProjectionsEnabled;
- (bool)hiddenForDisplayTypeIdentifier:(id)arg1;
- (id)init;
- (id)menstruationNotificationTimeOfDay;
- (bool)menstruationNotificationsEnabled;
- (bool)menstruationProjectionsEnabled;
- (long long)minimumAnalysisStartDayIndex;
- (bool)notificationsEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (void)resetAllSettings;
- (void)setFertileWindowNotificationTimeOfDay:(id)arg1;
- (void)setFertileWindowNotificationsEnabled:(bool)arg1;
- (void)setFertileWindowProjectionsEnabled:(bool)arg1;
- (void)setFertilityTrackingDisplayTypesHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 forDisplayTypeIdentifier:(id)arg2;
- (void)setHidden:(bool)arg1 forDisplayTypeIdentifiers:(id)arg2;
- (void)setMenstruationNotificationTimeOfDay:(id)arg1;
- (void)setMenstruationNotificationsEnabled:(bool)arg1;
- (void)setMenstruationProjectionsEnabled:(bool)arg1;
- (void)setMenstruationTrackingDisplayTypesHidden:(bool)arg1;
- (void)setMinimumAnalysisStartDayIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

- (id)_hdmc_dateComponentsForNotificationOnDayIndex:(long long)arg1 timeOfDay:(id)arg2;
- (id)hdmc_dateComponentsForFertileWindowNotificationOnDayIndex:(long long)arg1;
- (id)hdmc_dateComponentsForMenstruationNotificationOnDayIndex:(long long)arg1;

@end
