/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigVideoCaptureStream : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _HDRStillCaptureReferenceFramePTS;
    long long  _activeFormatIndex;
    BWStillImageCaptureSettings * _activeResolvedStillImageCaptureSettings;
    BWStillImageCaptureStreamSettings * _activeResolvedStillImageCaptureStreamSettings;
    float  _aeMaxGain;
    bool  _aeStatisticsEnabled;
    NSString * _applicationID;
    int  _autoFocusPositionSensorMode;
    float  _baseZoomFactor;
    float  _baseZoomFactorAfterGDC;
    NSDictionary * _cachedVideoOutputConfigurations;
    NSDictionary * _cachedVideoOutputsEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cameraAccessLock;
    NSData * _cameraPoseMatrix;
    NSData * _cameraViewMatrix;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    int  _clientPID;
    bool  _clientProcessHasAccessToCamera;
    NSMutableDictionary * _currentObjectDetectionConfiguration;
    bool  _defersObjectDetectionStartup;
    <BWFigVideoCaptureStreamDelegate> * _delegate;
    NSSet * _enabledDetectedObjectTypes;
    int  _expectedImagesOrErrorsForCaptureStillImageNow;
    NSDictionary * _faceDetectionConfiguration;
    bool  _faceDetectionEnabledSeparately;
    <BWFaceDetector> * _faceDetector;
    bool  _firmwareTimeMachineEnabledWhenConfiguredAsSlave;
    float  _focalLength;
    NSData * _focalPlaneCharacterizationCoefficients;
    bool  _focusBlurMapEnabled;
    NSDictionary * _focusPositionToLensMakersPFLLinearFit;
    NSDictionary * _geometricDistortionCoefficients;
    bool  _grabNextFrame;
    float  _gravityFactor;
    bool  _handlesHDRReferenceFrameReporting;
    bool  _hasFocus;
    bool  _highlightRecoveryEnabled;
    int  _highlightRecoveryEnabledOnStream;
    bool  _highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
    bool  _highlightRecoveryEnabledWhenConfiguredAsSlave;
    bool  _highlightRecoverySuspended;
    bool  _isSlave;
    bool  _isStationary;
    bool  _isSynchronizationMaster;
    NSMutableDictionary * _keypointDetectionConfiguration;
    bool  _keypointDetectionConfigured;
    bool  _keypointDetectionEnabled;
    int  _lastStillImageCaptureType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastStillImagePTS;
    float  _lensFNumber;
    bool  _lowLightVideoEnabled;
    NSData * _lscGains;
    int  _ltmCurve;
    bool  _ltmLookUpTableMetadataEnabled;
    bool  _lumaHistogramMetadataEnabled;
    int  _masterToSlaveFrameRateRatio;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationClientOverride;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationFrameworkOverride;
    bool  _maxExposureDurationHasBeenSet;
    unsigned int  _maxObjects;
    float  _maximumFrameRate;
    float  _maximumSupportedFrameRate;
    float  _minimumFrameRate;
    float  _minimumSupportedFrameRate;
    NSDictionary * _moduleInfo;
    float  _momentCaptureVideoRecordingAEMaxGain;
    int  _motionDataDeliveryEnabled;
    bool  _motionDataInvalid;
    int  _multiBandNoiseReductionMode;
    NSString * _nonLocalizedName;
    struct OpaqueFigSimpleMutex { } * _objectDetectionConfigurationMutex;
    bool  _objectDetectionMetadataRequested;
    <BWObjectDetector> * _objectDetector;
    NSDictionary * _opticalCenterOffset;
    float  _pixelSize;
    float  _pixelsPerMicron;
    NSString * _portType;
    bool  _rawBufferCompandingEnabled;
    bool  _rawFocusScoresEnabled;
    int  _receivedImagesOrErrorsForCaptureStillImageNow;
    struct { 
        int width; 
        int height; 
    }  _sensorDimensions;
    NSDictionary * _sensorIDDictionary;
    int  _sensorToOutputFrameRateRatioWhenConfiguredAsSlave;
    int  _skippedFramesCountForAF;
    bool  _sphereEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sphereLock;
    BWSphereModeSelector * _sphereModeSelector;
    NSMutableArray * _stillFusionBracketFramesMetadata;
    id /* block */  _stillImageBufferTimeMachineHandler;
    <BWFigVideoCaptureStreamStillImageCaptureDelegate> * _stillImageCaptureDelegate;
    NSObject<OS_dispatch_group> * _stillImageCaptureDelegateDispatchGroup;
    bool  _stillImageCaptureEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stillImageCaptureStateLock;
    bool  _stillImageKeypointDetectionEnabled;
    NSDictionary * _stillImageNoiseReductionAndSharpeningConfiguration;
    struct OpaqueFigCaptureStream { } * _stream;
    bool  _streamHasBeenSuspended;
    NSObject<OS_dispatch_queue> * _streamNotificationDispatchQueue;
    bool  _streaming;
    bool  _streamingRequiredWhenConfiguredAsSlave;
    NSArray * _supportedFormats;
    NSDictionary * _supportedProperties;
    bool  _suspended;
    bool  _synchronizedStreamsEnabled;
    BWStillImageTimeMachine * _timeMachine;
    int  _timeMachineCapacity;
    bool  _timeMachineEnabled;
    bool  _unifiedBracketingEnabled;
    bool  _usesStillFusionReferenceFramePTSForDidCaptureCallback;
    bool  _variableFrameRateVideoEnabled;
    bool  _zeroShutterLagEnabled;
}

@property (nonatomic, readonly) int activeStillImageCaptureType;
@property (nonatomic) float aeMaxGain;
@property (nonatomic) bool aeStatisticsEnabled;
@property (nonatomic, readonly) int autoFocusPositionSensorMode;
@property (nonatomic) bool avoidsSphereRecentering;
@property float baseZoomFactor;
@property float baseZoomFactorAfterGDC;
@property (nonatomic, readonly) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (readonly) NSData *cameraPoseMatrix;
@property (readonly) NSData *cameraViewMatrix;
@property (nonatomic, readonly) struct __CFString { }*currentSphereMode;
@property (nonatomic) bool defersObjectDetectionStartup;
@property (nonatomic) <BWFigVideoCaptureStreamDelegate> *delegate;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool enablesSphereWhenAvailable;
@property (nonatomic, retain) <BWFaceDetector> *faceDetector;
@property (nonatomic) bool firmwareTimeMachineEnabledWhenConfiguredAsSlave;
@property (readonly) float focalLength;
@property (readonly) NSData *focalPlaneCharacterizationCoefficients;
@property (nonatomic) bool focusBlurMapEnabled;
@property (readonly) NSDictionary *focusPositionToLensMakersPFLLinearFit;
@property (readonly) NSDictionary *geometricDistortionCoefficients;
@property (readonly) float gravityFactor;
@property (nonatomic) bool handlesHDRReferenceFrameReporting;
@property (readonly) bool hasFocus;
@property (readonly) bool hasSphere;
@property (nonatomic, readonly) bool highlightRecoveryEnabled;
@property (nonatomic) bool highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
@property (nonatomic) bool highlightRecoveryEnabledWhenConfiguredAsSlave;
@property (nonatomic) bool highlightRecoverySuspended;
@property (nonatomic) bool isStationary;
@property (nonatomic) bool keypointDetectionEnabled;
@property (nonatomic, readonly) int lastStillImageCaptureType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } lastStillImagePTS;
@property (readonly) float lensFNumber;
@property (nonatomic) bool lowLightVideoEnabled;
@property (readonly) NSData *lscGains;
@property (nonatomic) int ltmCurve;
@property (nonatomic) bool ltmLookUpTableMetadataEnabled;
@property (nonatomic) bool lumaHistogramMetadataEnabled;
@property (nonatomic) int masterToSlaveFrameRateRatio;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDurationClientOverride;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDurationFrameworkOverride;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) float maximumSupportedFrameRate;
@property (nonatomic) float minimumFrameRate;
@property (nonatomic) float minimumSupportedFrameRate;
@property (readonly) NSDictionary *moduleInfo;
@property (nonatomic) float momentCaptureVideoRecordingAEMaxGain;
@property (nonatomic) bool motionDataDeliveryEnabled;
@property (readonly) bool motionDataInvalid;
@property (nonatomic) int multiBandNoiseReductionMode;
@property (readonly) NSString *nonLocalizedName;
@property (nonatomic, retain) <BWObjectDetector> *objectDetector;
@property (readonly) NSDictionary *opticalCenterOffset;
@property (nonatomic) bool overCaptureEnabled;
@property (readonly) float pixelSize;
@property (readonly) float pixelsPerMicron;
@property (readonly) NSString *portType;
@property (nonatomic, readonly) bool providesPreBracketedEV0;
@property (nonatomic, readonly) bool rawBufferCompandingEnabled;
@property (nonatomic) bool rawFocusScoresEnabled;
@property (readonly) NSDictionary *sensorIDDictionary;
@property (readonly) NSString *sensorIDString;
@property (nonatomic) int sensorToOutputFrameRateRatioWhenConfiguredAsSlave;
@property (readonly) bool sphereEnabled;
@property (nonatomic) int sphereThermalLevel;
@property (nonatomic) bool sphereVideoEnabled;
@property (readonly) bool sphereVideoSupported;
@property (nonatomic, copy) id /* block */ stillImageBufferTimeMachineHandler;
@property (nonatomic) <BWFigVideoCaptureStreamStillImageCaptureDelegate> *stillImageCaptureDelegate;
@property (nonatomic) bool stillImageCaptureEnabled;
@property (nonatomic) bool stillImageKeypointDetectionEnabled;
@property (readonly) NSDictionary *stillImageNoiseReductionAndSharpeningConfiguration;
@property (readonly) struct OpaqueFigCaptureStream { }*stream;
@property (nonatomic, readonly) bool streaming;
@property (nonatomic) bool streamingRequiredWhenConfiguredAsSlave;
@property (readonly) NSArray *supportedFormats;
@property (nonatomic, readonly) bool suspended;
@property (nonatomic, readonly) bool suspendingSupported;
@property (getter=isSynchronizationMaster, nonatomic, readonly) bool synchronizationMaster;
@property (readonly) bool synchronizedStreamsEnabled;
@property (readonly) int timeMachineCapacity;
@property (nonatomic) bool timeMachineEnabled;
@property (nonatomic) bool unifiedBracketingEnabled;
@property (nonatomic) bool usesStillFusionReferenceFramePTSForDidCaptureCallback;
@property (nonatomic) bool variableFrameRateVideoEnabled;
@property (nonatomic) bool zeroShutterLagEnabled;

+ (void)initialize;

- (void)_addStillImageBracketFrameMetadataToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_aeTables;
- (void)_configureKeypointDetection;
- (void)_handleStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withError:(int)arg2 fromTimeMachine:(bool)arg3;
- (void)_prepareForStillImageCaptureWithStillImageSettings:(id)arg1 fromCMTimeMachine:(bool)arg2;
- (void)_resetStillImageCaptureState;
- (void)_serviceTimeMachineWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_setHighlightRecoveryEnabled:(bool)arg1;
- (int)_setHighlightRecoveryEnabled:(bool)arg1 highlightRecoverySuspended:(bool)arg2;
- (void)_setLowPowerSphereModeEnabled:(bool)arg1;
- (void)_setMaxExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setRequestedDetectedObjectTypes:(id)arg1;
- (void)_updateAETables;
- (void)_updateAutoFocusPositionSensorModeForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_updateCaptureStateWithStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 orError:(int)arg2;
- (int)_updateFaceDetectionConfigurationOnStream:(id)arg1;
- (void)_updateMasterSlavePropertiesOnStream;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_updateMaxExposureDuration;
- (void)_updateMotionDataStatus:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateObjectDetectionEnabledOnStream;
- (void)_updateSphereMode;
- (void)_updateSuspendStateForInfraredDepthStream;
- (long long)activeFormatIndex;
- (int)activeStillImageCaptureType;
- (float)aeMaxGain;
- (bool)aeStatisticsEnabled;
- (int)autoFocusPositionSensorMode;
- (bool)avoidsSphereRecentering;
- (float)baseZoomFactor;
- (float)baseZoomFactorAfterGDC;
- (int)bracketedCaptureSequenceNumberForOISLongExposure;
- (id)cameraPoseMatrix;
- (id)cameraViewMatrix;
- (void)captureStillImageFromTimeMachineWithStillImageSettings:(id)arg1;
- (struct __CFString { }*)currentSphereMode;
- (void)dealloc;
- (bool)defersObjectDetectionStartup;
- (id)delegate;
- (bool)depthDataDeliveryEnabled;
- (id)description;
- (void)didBecomeMasterStream;
- (void)didBecomeSlaveStream;
- (void)enableFaceDetection;
- (bool)enablesSphereWhenAvailable;
- (id)faceDetector;
- (void)failedToCaptureStillImageFromFirmwareWithError:(int)arg1;
- (bool)firmwareTimeMachineEnabledWhenConfiguredAsSlave;
- (float)focalLength;
- (id)focalPlaneCharacterizationCoefficients;
- (bool)focusBlurMapEnabled;
- (id)focusPositionToLensMakersPFLLinearFit;
- (id)geometricDistortionCoefficients;
- (float)gravityFactor;
- (bool)handlesHDRReferenceFrameReporting;
- (bool)hasFocus;
- (bool)hasSphere;
- (bool)highlightRecoveryEnabled;
- (bool)highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
- (bool)highlightRecoveryEnabledWhenConfiguredAsSlave;
- (bool)highlightRecoverySuspended;
- (id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream { }*)arg1 attributes:(id)arg2 sensorIDDictionary:(id)arg3 isSynchronizationMaster:(bool)arg4 synchronizedStreamsEnabled:(bool)arg5 cameraViewMatrix:(id)arg6 cameraPoseMatrix:(id)arg7 applicationID:(id)arg8 clientAuditToken:(struct { unsigned int x1[8]; })arg9 baseZoomFactor:(float)arg10 error:(int*)arg11;
- (bool)isStationary;
- (bool)isSynchronizationMaster;
- (bool)keypointDetectionEnabled;
- (int)lastStillImageCaptureType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastStillImagePTS;
- (float)lensFNumber;
- (bool)lowLightVideoEnabled;
- (id)lscGains;
- (int)ltmCurve;
- (bool)ltmLookUpTableMetadataEnabled;
- (bool)lumaHistogramMetadataEnabled;
- (int)masterToSlaveFrameRateRatio;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationClientOverride;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationFrameworkOverride;
- (float)maximumFrameRate;
- (float)maximumSupportedFrameRate;
- (float)minimumFrameRate;
- (float)minimumSupportedFrameRate;
- (id)moduleInfo;
- (float)momentCaptureVideoRecordingAEMaxGain;
- (bool)motionDataDeliveryEnabled;
- (bool)motionDataInvalid;
- (int)multiBandNoiseReductionEnabled;
- (int)multiBandNoiseReductionMode;
- (id)nonLocalizedName;
- (id)objectDetector;
- (id)opticalCenterOffset;
- (bool)overCaptureEnabled;
- (float)pixelSize;
- (float)pixelsPerMicron;
- (id)portType;
- (void)prepareForStillImageCaptureFromFirmwareWithStillImageSettings:(id)arg1;
- (bool)providesPreBracketedEV0;
- (bool)rawBufferCompandingEnabled;
- (bool)rawFocusScoresEnabled;
- (void)registerForObjectDetectionMetadata:(id)arg1;
- (id)sensorIDDictionary;
- (id)sensorIDString;
- (int)sensorToOutputFrameRateRatioWhenConfiguredAsSlave;
- (int)setActiveFormatIndex:(long long)arg1;
- (void)setAeMaxGain:(float)arg1;
- (void)setAeStatisticsEnabled:(bool)arg1;
- (void)setAvoidsSphereRecentering:(bool)arg1;
- (void)setBaseZoomFactor:(float)arg1;
- (void)setBaseZoomFactorAfterGDC:(float)arg1;
- (void)setDefersObjectDetectionStartup:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setEnablesSphereWhenAvailable:(bool)arg1;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (void)setFaceDetector:(id)arg1;
- (void)setFirmwareTimeMachineEnabledWhenConfiguredAsSlave:(bool)arg1;
- (void)setFocusBlurMapEnabled:(bool)arg1;
- (void)setHandlesHDRReferenceFrameReporting:(bool)arg1;
- (void)setHighlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream:(bool)arg1;
- (void)setHighlightRecoveryEnabledWhenConfiguredAsSlave:(bool)arg1;
- (void)setHighlightRecoverySuspended:(bool)arg1;
- (void)setIsStationary:(bool)arg1;
- (void)setKeypointDetectionEnabled:(bool)arg1;
- (void)setLowLightVideoEnabled:(bool)arg1;
- (void)setLtmCurve:(int)arg1;
- (void)setLtmLookUpTableMetadataEnabled:(bool)arg1;
- (void)setLumaHistogramMetadataEnabled:(bool)arg1;
- (void)setMasterToSlaveFrameRateRatio:(int)arg1;
- (void)setMaxExposureDurationClientOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxExposureDurationFrameworkOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMaximumSupportedFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (void)setMinimumSupportedFrameRate:(float)arg1;
- (void)setMomentCaptureVideoRecordingAEMaxGain:(float)arg1;
- (void)setMotionDataDeliveryEnabled:(bool)arg1;
- (void)setMotionDataInvalid:(bool)arg1;
- (void)setMultiBandNoiseReductionMode:(int)arg1;
- (void)setObjectDetector:(id)arg1;
- (void)setOverCaptureEnabled:(bool)arg1;
- (void)setRawFocusScoresEnabled:(bool)arg1;
- (void)setSensorToOutputFrameRateRatioWhenConfiguredAsSlave:(int)arg1;
- (void)setSphereThermalLevel:(int)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setStillImageBufferTimeMachineHandler:(id /* block */)arg1;
- (void)setStillImageCaptureDelegate:(id)arg1;
- (void)setStillImageCaptureEnabled:(bool)arg1;
- (void)setStillImageKeypointDetectionEnabled:(bool)arg1;
- (void)setStreamingRequiredWhenConfiguredAsSlave:(bool)arg1;
- (int)setSuspended:(bool)arg1;
- (void)setTimeMachineEnabled:(bool)arg1;
- (void)setUnifiedBracketingEnabled:(bool)arg1;
- (void)setUsesStillFusionReferenceFramePTSForDidCaptureCallback:(bool)arg1;
- (void)setVariableFrameRateVideoEnabled:(bool)arg1;
- (void)setVisionDataKeypointDetectionThreshold:(float)arg1;
- (void)setVisionDataSuspended:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (void)sourceNodeDidStartStreaming;
- (void)sourceNodeDidStopStreaming;
- (void)sourceNodeFailedToStartStreaming;
- (void)sourceNodeWillDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitDepthSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitDetectedFacesSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitPointCloudSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitStillImageQuadraBufferProcessingError:(int)arg1;
- (void)sourceNodeWillEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)sourceNodeWillStartStreaming;
- (void)sourceNodeWillStopStreaming;
- (bool)sphereEnabled;
- (int)sphereThermalLevel;
- (bool)sphereVideoEnabled;
- (bool)sphereVideoSupported;
- (int)start;
- (void)startupObjectDetectionIfNeeded;
- (id /* block */)stillImageBufferTimeMachineHandler;
- (id)stillImageCaptureDelegate;
- (bool)stillImageCaptureEnabled;
- (bool)stillImageKeypointDetectionEnabled;
- (id)stillImageNoiseReductionAndSharpeningConfiguration;
- (int)stop;
- (struct OpaqueFigCaptureStream { }*)stream;
- (bool)streaming;
- (bool)streamingRequiredWhenConfiguredAsSlave;
- (id)supportedFormats;
- (bool)supportsProperty:(struct __CFString { }*)arg1;
- (bool)suspended;
- (bool)suspendingSupported;
- (bool)synchronizedStreamsEnabled;
- (int)timeMachineCapacity;
- (bool)timeMachineEnabled;
- (void)triggerVisionDataBurst;
- (bool)unifiedBracketingEnabled;
- (void)unregisterForObjectDetectionMetadata;
- (void)updateAETables;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })updateMaxExposureDurationClientOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)usesStillFusionReferenceFramePTSForDidCaptureCallback;
- (bool)variableFrameRateVideoEnabled;
- (void)willBecomeMasterStream;
- (void)willBecomeSlaveStream;
- (void)willCaptureStillImageFromFirmware;
- (bool)zeroShutterLagEnabled;

@end
