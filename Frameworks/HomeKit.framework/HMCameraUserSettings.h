/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver> {
    HMAccessory * _accessory;
    _HMCameraUserSettings * _cameraUserSettings;
    _HMContext * _context;
    <HMCameraUserSettingsDelegate> * _delegate;
    HMFUnfairLock * _lock;
}

@property (getter=isAccessModeChangeNotificationEnabled, readonly) bool accessModeChangeNotificationEnabled;
@property (getter=isAccessModeIndicatorEnabled, readonly) bool accessModeIndicatorEnabled;
@property (nonatomic) HMAccessory *accessory;
@property (getter=isCameraManuallyDisabled, readonly) bool cameraManuallyDisabled;
@property (retain) _HMCameraUserSettings *cameraUserSettings;
@property (nonatomic, retain) _HMContext *context;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly, copy) NSString *debugDescription;
@property <HMCameraUserSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isNightVisionModeEnabled, readonly) bool nightVisionModeEnabled;
@property (getter=isRecordingAudioEnabled, readonly) bool recordingAudioEnabled;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly) unsigned long long recordingStorageDuration;
@property (readonly) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (getter=areSnapshotsAllowed, readonly) bool snapshotsAllowed;
@property (readonly) Class superclass;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSettingsDidUpdateDelegate;
- (void)_mergeNewSettings:(id)arg1 operations:(id)arg2;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeForPresenceType:(unsigned long long)arg1;
- (unsigned long long)accessModeNotAtHome;
- (id)accessory;
- (bool)areSnapshotsAllowed;
- (id)cameraUserSettings;
- (void)configureWithAccessory:(id)arg1 context:(id)arg2;
- (id)context;
- (unsigned long long)currentAccessMode;
- (id)delegate;
- (id)description;
- (id)initWithCameraUserSettings:(id)arg1;
- (bool)isAccessModeChangeNotificationEnabled;
- (bool)isAccessModeIndicatorEnabled;
- (bool)isCameraManuallyDisabled;
- (bool)isNightVisionModeEnabled;
- (bool)isRecordingAudioEnabled;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned long long)recordingEventTriggers;
- (unsigned long long)recordingStorageDuration;
- (void)setAccessory:(id)arg1;
- (void)setCameraUserSettings:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)smartNotificationBulletin;
- (unsigned long long)supportedFeatures;
- (id)uniqueIdentifier;
- (void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAccessModeChangeNotificationEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAccessModeIndicatorEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateNightVisionModeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecordingAudioEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecordingStorageDuration:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSnapshotsAllowed:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWithSettings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_indicatorColorForCurrentAccessMode;
- (id)hu_indicatorColorForLiveStreaming;

@end
