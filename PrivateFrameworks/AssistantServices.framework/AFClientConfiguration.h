/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding> {
    AFAccessibilityState * _accessibilityState;
    long long  _deviceRingerSwitchState;
    bool  _isDeviceInCarDNDMode;
    bool  _isDeviceInSetupFlow;
    bool  _isDeviceInStarkMode;
    float  _outputVolume;
    AFAudioPlaybackRequest * _tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest * _twoShotAudioPlaybackRequest;
}

@property (nonatomic, readonly, copy) AFAccessibilityState *accessibilityState;
@property (nonatomic, readonly) long long deviceRingerSwitchState;
@property (nonatomic, readonly) bool isDeviceInCarDNDMode;
@property (nonatomic, readonly) bool isDeviceInSetupFlow;
@property (nonatomic, readonly) bool isDeviceInStarkMode;
@property (nonatomic, readonly) float outputVolume;
@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)accessibilityState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceRingerSwitchState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessibilityState:(id)arg1 deviceRingerSwitchState:(long long)arg2 isDeviceInSetupFlow:(bool)arg3 isDeviceInCarDNDMode:(bool)arg4 isDeviceInStarkMode:(bool)arg5 outputVolume:(float)arg6 tapToSiriAudioPlaybackRequest:(id)arg7 twoShotAudioPlaybackRequest:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (bool)isDeviceInCarDNDMode;
- (bool)isDeviceInSetupFlow;
- (bool)isDeviceInStarkMode;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (float)outputVolume;
- (id)tapToSiriAudioPlaybackRequest;
- (id)twoShotAudioPlaybackRequest;

@end
