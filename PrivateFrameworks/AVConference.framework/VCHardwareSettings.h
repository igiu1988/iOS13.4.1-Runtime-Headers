/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCHardwareSettings : NSObject {
    NSMutableDictionary * _hardwareUsageModeSettings;
    int  _supportHEVC;
    bool  _supportVCPEncoder;
    bool  _supportVCPEncoderInitialized;
}

@property (nonatomic, readonly) bool supportHEVC;
@property (nonatomic, readonly) bool vcpSupportsHEVCEncoder;

+ (long long)deviceClass;

- (void)dealloc;
- (id)featureListStringForH264:(int)arg1;
- (id)featureListStringForHEVC:(int)arg1;
- (id)init;
- (bool)isHEVCDecodeSupported:(int)arg1;
- (bool)isHEVCEncodeSupported:(int)arg1;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(bool)arg1;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(bool)arg1;
- (bool)storeHardwareSettingsForAllOperatingModes;
- (bool)supportHEVC;
- (unsigned int)tilesPerVideoFrame:(int)arg1;
- (bool)vcpSupportsHEVCEncoder;

@end