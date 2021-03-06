/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraUserSettings : NSObject <HMFLogging, NSSecureCoding> {
    unsigned long long  _accessModeAtHome;
    bool  _accessModeChangeNotificationEnabled;
    bool  _accessModeIndicatorEnabled;
    unsigned long long  _accessModeNotAtHome;
    bool  _cameraManuallyDisabled;
    unsigned long long  _currentAccessMode;
    bool  _nightVisionModeEnabled;
    bool  _recordingAudioEnabled;
    unsigned long long  _recordingEventTriggers;
    HMCameraBulletinBoardSmartNotification * _smartNotificationBulletin;
    bool  _snapshotsAllowed;
    unsigned long long  _supportedFeatures;
    NSUUID * _uniqueIdentifier;
}

@property (readonly) unsigned long long accessModeAtHome;
@property (getter=isAccessModeChangeNotificationEnabled, readonly) bool accessModeChangeNotificationEnabled;
@property (getter=isAccessModeIndicatorEnabled, readonly) bool accessModeIndicatorEnabled;
@property (readonly) unsigned long long accessModeNotAtHome;
@property (getter=isCameraManuallyDisabled, readonly) bool cameraManuallyDisabled;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNightVisionModeEnabled, readonly) bool nightVisionModeEnabled;
@property (getter=isRecordingAudioEnabled, readonly) bool recordingAudioEnabled;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (getter=areSnapshotsAllowed, readonly) bool snapshotsAllowed;
@property (readonly) Class superclass;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeNotAtHome;
- (bool)areSnapshotsAllowed;
- (unsigned long long)currentAccessMode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 supportedFeatures:(unsigned long long)arg2 accessModeAtHome:(unsigned long long)arg3 accessModeNotAtHome:(unsigned long long)arg4 currentAccessMode:(unsigned long long)arg5 recordingEventTriggers:(unsigned long long)arg6 snapshotsAllowed:(bool)arg7 accessModeIndicatorEnabled:(bool)arg8 nightVisionModeEnabled:(bool)arg9 recordingAudioEnabled:(bool)arg10 accessModeChangeNotificationEnabled:(bool)arg11 cameraManuallyDisabled:(bool)arg12 smartNotification:(id)arg13;
- (bool)isAccessModeChangeNotificationEnabled;
- (bool)isAccessModeIndicatorEnabled;
- (bool)isCameraManuallyDisabled;
- (bool)isNightVisionModeEnabled;
- (bool)isRecordingAudioEnabled;
- (id)logIdentifier;
- (unsigned long long)recordingEventTriggers;
- (id)smartNotificationBulletin;
- (unsigned long long)supportedFeatures;
- (id)uniqueIdentifier;

@end
