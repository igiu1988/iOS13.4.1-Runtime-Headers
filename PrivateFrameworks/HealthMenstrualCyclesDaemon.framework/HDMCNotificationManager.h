/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

@interface HDMCNotificationManager : NSObject <HDMCAnalysisManagerObserver, HKMCSettingsManagerObserver> {
    HDMCAnalysisManager * _analysisManager;
    HKMCAnalysis * _lastAnalysis;
    bool  _observingAnalysisUpdates;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDRestorableAlarm * _scheduler;
    HKMCSettingsManager * _settingsManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDRestorableAlarm *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isAlgorithmsVersionSameOnPairedDevice;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (void)_queue_removeAllScheduledNotifications;
- (void)_queue_rescheduleNotificationsForAnalysis:(id)arg1;
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3;
- (void)invalidate;
- (id)scheduledNotificationsWithError:(id*)arg1;
- (id)scheduler;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (void)start;

@end
