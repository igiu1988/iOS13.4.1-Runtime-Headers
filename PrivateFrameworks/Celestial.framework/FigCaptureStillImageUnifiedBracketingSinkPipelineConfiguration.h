/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration {
    bool  _adjustablePortraitLightingEffectStrengthSupported;
    NSDictionary * _baseZoomFactorsByPortType;
    NSDictionary * _cameraInfoByPortType;
    bool  _captureTimePhotosCurationSupported;
    bool  _deepFusionSupported;
    bool  _deferredPhotoProcessorEnabled;
    bool  _deferredProcessingSupported;
    int  _depthDataType;
    int  _deviceType;
    unsigned int  _inferencePriority;
    struct { 
        int width; 
        int height; 
    }  _overCaptureImageDimensions;
    float  _overCapturePercentage;
    unsigned int  _pipelineStagePriority;
    int  _redEyeReductionVersion;
    NSDictionary * _sensorIDStringsByPortType;
    bool  _sifrStillImageCaptureEnabledIfAvailable;
    bool  _supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
}

@property (nonatomic) bool adjustablePortraitLightingEffectStrengthSupported;
@property (nonatomic, retain) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic, retain) NSDictionary *cameraInfoByPortType;
@property (nonatomic) bool captureTimePhotosCurationSupported;
@property (nonatomic) bool deepFusionSupported;
@property (nonatomic) bool deferredPhotoProcessorEnabled;
@property (nonatomic) bool deferredProcessingSupported;
@property (nonatomic) int depthDataType;
@property (nonatomic) int deviceType;
@property (nonatomic) unsigned int inferencePriority;
@property (nonatomic) struct { int x1; int x2; } overCaptureImageDimensions;
@property (nonatomic) float overCapturePercentage;
@property (nonatomic) unsigned int pipelineStagePriority;
@property (nonatomic) int redEyeReductionVersion;
@property (nonatomic, retain) NSDictionary *sensorIDStringsByPortType;
@property (nonatomic) bool sifrStillImageCaptureEnabledIfAvailable;
@property (nonatomic) bool supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;

- (bool)adjustablePortraitLightingEffectStrengthSupported;
- (id)baseZoomFactorsByPortType;
- (id)cameraInfoByPortType;
- (bool)captureTimePhotosCurationSupported;
- (void)dealloc;
- (bool)deepFusionSupported;
- (bool)deferredPhotoProcessorEnabled;
- (bool)deferredProcessingSupported;
- (int)depthDataType;
- (int)deviceType;
- (unsigned int)inferencePriority;
- (struct { int x1; int x2; })overCaptureImageDimensions;
- (float)overCapturePercentage;
- (unsigned int)pipelineStagePriority;
- (int)redEyeReductionVersion;
- (id)sensorIDStringsByPortType;
- (void)setAdjustablePortraitLightingEffectStrengthSupported:(bool)arg1;
- (void)setBaseZoomFactorsByPortType:(id)arg1;
- (void)setCameraInfoByPortType:(id)arg1;
- (void)setCaptureTimePhotosCurationSupported:(bool)arg1;
- (void)setDeepFusionSupported:(bool)arg1;
- (void)setDeferredPhotoProcessorEnabled:(bool)arg1;
- (void)setDeferredProcessingSupported:(bool)arg1;
- (void)setDepthDataType:(int)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setInferencePriority:(unsigned int)arg1;
- (void)setOverCaptureImageDimensions:(struct { int x1; int x2; })arg1;
- (void)setOverCapturePercentage:(float)arg1;
- (void)setPipelineStagePriority:(unsigned int)arg1;
- (void)setRedEyeReductionVersion:(int)arg1;
- (void)setSensorIDStringsByPortType:(id)arg1;
- (void)setSifrStillImageCaptureEnabledIfAvailable:(bool)arg1;
- (void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(bool)arg1;
- (bool)sifrStillImageCaptureEnabledIfAvailable;
- (bool)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;

@end
