/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSmartSiriVolumeController : NSObject <CSAlarmMonitorDelegate, CSSmartSiriVolumeDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate> {
    <CSSmartSiriVolumeControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    CSXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSmartSiriVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSXPCClient *xpcClient;

- (void).cxx_destruct;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)_createXPCClientConnectionIfNeeded;
- (id)delegate;
- (float)getEstimatedTTSVolume;
- (id)init;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (id)xpcClient;

@end
