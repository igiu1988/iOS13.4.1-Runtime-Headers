/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSMousePointerDevicePreferences : NSObject <BSProtobufSerializable, NSSecureCoding> {
    long long  _buttonConfigurationForHardwareButtonMice;
    long long  _buttonConfigurationForVirtualButtonMice;
    bool  _enableNaturalScrolling;
    bool  _enableTapToClick;
    bool  _enableTwoFingerSecondaryClick;
    float  _pointerAccelerationFactor;
    float  _scrollAccelerationFactor;
}

@property (nonatomic) long long buttonConfigurationForHardwareButtonMice;
@property (nonatomic) long long buttonConfigurationForVirtualButtonMice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableNaturalScrolling;
@property (nonatomic) bool enableTapToClick;
@property (nonatomic) bool enableTwoFingerSecondaryClick;
@property (readonly) unsigned long long hash;
@property (nonatomic) float pointerAccelerationFactor;
@property (nonatomic) float scrollAccelerationFactor;
@property (readonly) Class superclass;

+ (id)defaultPreferencesForHardwareType:(long long)arg1;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (void)_fixMissingButtonConfigurations;
- (long long)buttonConfigurationForHardwareButtonMice;
- (long long)buttonConfigurationForVirtualButtonMice;
- (id)description;
- (id)didFinishProtobufDecodingWithError:(out id*)arg1;
- (bool)enableNaturalScrolling;
- (bool)enableTapToClick;
- (bool)enableTwoFingerSecondaryClick;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)pointerAccelerationFactor;
- (float)scrollAccelerationFactor;
- (void)setButtonConfigurationForHardwareButtonMice:(long long)arg1;
- (void)setButtonConfigurationForVirtualButtonMice:(long long)arg1;
- (void)setEnableNaturalScrolling:(bool)arg1;
- (void)setEnableTapToClick:(bool)arg1;
- (void)setEnableTwoFingerSecondaryClick:(bool)arg1;
- (void)setPointerAccelerationFactor:(float)arg1;
- (void)setScrollAccelerationFactor:(float)arg1;

@end
