/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraProfileSettingsModel : HMBModel {
    bool  _cameraManuallyDisabled;
    unsigned long long  _currentAccessMode;
}

@property unsigned long long accessModeAtHome;
@property (copy) NSNumber *accessModeAtHomeField;
@property bool accessModeChangeNotificationEnabled;
@property (copy) NSNumber *accessModeChangeNotificationEnabledField;
@property bool accessModeIndicatorEnabled;
@property (copy) NSNumber *accessModeIndicatorEnabledField;
@property unsigned long long accessModeNotAtHome;
@property (copy) NSNumber *accessModeNotAtHomeField;
@property bool cameraManuallyDisabled;
@property unsigned long long currentAccessMode;
@property bool nightVisionModeEnabled;
@property (copy) NSNumber *nightVisionModeEnabledField;
@property bool periodicSnapshotsAllowed;
@property (copy) NSNumber *periodicSnapshotsAllowedField;
@property bool recordingAudioEnabled;
@property (copy) NSNumber *recordingAudioEnabledField;
@property unsigned long long recordingEventTriggers;
@property (copy) NSNumber *recordingEventTriggersField;
@property (retain) HMDBulletinBoardNotification *smartBulletinBoardNotification;
@property (copy) NSData *smartBulletinBoardNotificationDataField;
@property bool snapshotsAllowed;
@property (copy) NSNumber *snapshotsAllowedField;

+ (id)hmbProperties;

- (unsigned long long)accessModeAtHome;
- (bool)accessModeChangeNotificationEnabled;
- (bool)accessModeIndicatorEnabled;
- (unsigned long long)accessModeNotAtHome;
- (bool)cameraManuallyDisabled;
- (unsigned long long)currentAccessMode;
- (bool)nightVisionModeEnabled;
- (bool)periodicSnapshotsAllowed;
- (bool)recordingAudioEnabled;
- (unsigned long long)recordingEventTriggers;
- (void)setAccessModeAtHome:(unsigned long long)arg1;
- (void)setAccessModeChangeNotificationEnabled:(bool)arg1;
- (void)setAccessModeIndicatorEnabled:(bool)arg1;
- (void)setAccessModeNotAtHome:(unsigned long long)arg1;
- (void)setCameraManuallyDisabled:(bool)arg1;
- (void)setCurrentAccessMode:(unsigned long long)arg1;
- (void)setNightVisionModeEnabled:(bool)arg1;
- (void)setPeriodicSnapshotsAllowed:(bool)arg1;
- (void)setRecordingAudioEnabled:(bool)arg1;
- (void)setRecordingEventTriggers:(unsigned long long)arg1;
- (void)setSmartBulletinBoardNotification:(id)arg1;
- (void)setSnapshotsAllowed:(bool)arg1;
- (id)smartBulletinBoardNotification;
- (bool)snapshotsAllowed;

@end
