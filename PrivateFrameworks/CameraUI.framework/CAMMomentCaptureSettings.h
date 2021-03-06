/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMomentCaptureSettings : NSObject {
    bool  _autoOriginalPhotoDeliveryEnabled;
    bool  _autoSpatialOverCaptureEnabled;
    long long  _flashMode;
    long long  _hdrMode;
    long long  _lowLightMode;
    NSString * _persistenceUUID;
    long long  _photoQualityPrioritization;
    bool  _shouldDisableCameraSwitchingDuringVideoRecording;
    unsigned long long  _userInitiationTime;
}

@property (nonatomic, readonly) bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, readonly) bool autoSpatialOverCaptureEnabled;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly) long long lowLightMode;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) long long photoQualityPrioritization;
@property (nonatomic, readonly) bool shouldDisableCameraSwitchingDuringVideoRecording;
@property (nonatomic, readonly) unsigned long long userInitiationTime;

- (void).cxx_destruct;
- (bool)autoOriginalPhotoDeliveryEnabled;
- (bool)autoSpatialOverCaptureEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)flashMode;
- (long long)hdrMode;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (long long)lowLightMode;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)persistenceUUID;
- (long long)photoQualityPrioritization;
- (bool)shouldDisableCameraSwitchingDuringVideoRecording;
- (unsigned long long)userInitiationTime;

@end
