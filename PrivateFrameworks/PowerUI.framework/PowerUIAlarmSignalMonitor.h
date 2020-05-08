/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIAlarmSignalMonitor : NSObject <PowerUISignalMonitor> {
    MTAlarmManager * _alarmManager;
    <PowerUISignalMonitorDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
}

@property (retain) MTAlarmManager *alarmManager;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <PowerUISignalMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)monitorWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)alarmManager;
- (id)bedtimeEndAtDate:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)log;
- (id)nextAlarm;
- (id)requiredFullChargeDate;
- (void)setAlarmManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (unsigned long long)signalID;
- (id)sleepAlarm;
- (void)sourceInformationChangedNotification:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
