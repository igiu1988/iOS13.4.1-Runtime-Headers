/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMultiStreamCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {
    bool  _RGBIRStereoFusionEnabled;
    float  _aeMaxGain;
    struct OpaqueFigCaptureISPProcessingSession { } * _bayerProcessingSession;
    unsigned int  _bravoShiftCorrectionFlags;
    float  _bravoShiftMitigationMaxZoomFactor;
    unsigned int  _bufferHeightForRaw;
    struct { 
        double centerx; 
        double centery; 
        bool lensCoefficientsValid; 
        float lensCoefficients[5]; 
        float gravityFactor; 
        float pixelsPerMicron; 
        bool isFrontCamera; 
    }  _cameraData;
    bool  _cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
    bool  _cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
    BWFigVideoCaptureDevice * _captureDevice;
    BWFigVideoCaptureStream * _captureStream;
    bool  _chromaNoiseReductionEnabled;
    int  _clientSpecifiedFormatIndex;
    unsigned int  _clientVideoFormat;
    int  _colorSpaceProperties;
    struct { 
        int width; 
        int height; 
    }  _cropAspectRatio;
    struct { 
        int width; 
        int height; 
    }  _cropDimensionsWhenFESIsEnabled;
    bool  _cropOverscanFromStillImageOutputInISP;
    int  _currentFirmwareStillImageOutputRetainedBufferCount;
    bool  _deferMetadataCreation;
    bool  _deferProcessingSessionMetadataCreation;
    BWDeferredMetadataCache * _deferredMetadataCache;
    struct { 
        int width; 
        int height; 
    }  _depthDimensions;
    NSArray * _depthEngineOutputIDs;
    NSString * _depthEnginePrimaryOutputID;
    BWNodeOutput * _depthOutput;
    bool  _depthOutputEnabled;
    struct opaqueCMFormatDescription { } * _depthOutputFormatDescription;
    int  _depthType;
    <BWDetectedFacesFilterDelegate> * _detectedFacesFilterDelegate;
    bool  _detectedFacesOnPreviewOutputEnabled;
    bool  _detectedFacesOnVideoCaptureOutputEnabled;
    NSDictionary * _detectedFacesOutputConfiguration;
    BWDetectedFacesRingBuffer * _detectedFacesRingBuffer;
    BWDetectedObjectsInfoRingBuffer * _detectedObjectsInfoRingBuffer;
    BWNodeOutput * _detectedObjectsOutput;
    bool  _detectedObjectsOutputEnabled;
    bool  _discardsDepthDataForStillImages;
    bool  _discardsUnstableSphereVideoFrames;
    NSMutableDictionary * _dutyCycleMetadataCache;
    NSSet * _enabledDetectedObjectTypes;
    bool  _faceTrackingEnabled;
    int  _fesBinningFactorHorizontal;
    struct { 
        int width; 
        int height; 
    }  _firmwareStillImageDimensionsAfterOverscanCropping;
    int  _firmwareStillImageOutputRetainedBufferCountOverride;
    int  _firmwareTimeMachineBufferCapacity;
    bool  _firmwareTimeMachineSIFREnabled;
    bool  _focusBlurMapEnabled;
    struct opaqueCMFormatDescription { } * _focusPixelDataFormatDescription;
    bool  _focusPixelDataSupported;
    bool  _geometricDistortionCorrectionEnabled;
    bool  _geometricDistortionCorrectionSupported;
    bool  _handlesHDRReferenceFrameReporting;
    bool  _highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
    bool  _highlightRecoveryEnabledWhenConfiguredAsSlave;
    int  _horizontalSensorBinningFactor;
    bool  _includeOverscanOnStillImageOutput;
    unsigned long long  _infraredProjectorUptimeInUsForHighPowerSparse;
    unsigned long long  _infraredProjectorUptimeInUsForLowPowerSparse;
    BWStats * _ioSurfaceCompressionRatioStatsForRaw;
    bool  _isInfraredSourceNode;
    bool  _ispAPSDataEnabled;
    bool  _ispIsStreaming;
    int  _ispMultiBandNoiseReductionMode;
    bool  _keepISPStreamingWhenStopping;
    bool  _keypointDetectionEnabled;
    bool  _ltmLookUpTableMetadataEnabled;
    bool  _lumaHistogramMetadataEnabled;
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
    float  _maxFrameRate;
    int  _maximumNumberOfBracketedSIFRFrames;
    float  _minFrameRate;
    int  _motionAttachmentsSource;
    BWMotionDataPreserver * _motionDataPreserver;
    struct CGSize { 
        double width; 
        double height; 
    }  _onDemandStillOverscanPercentage;
    bool  _optimizeBandwidthForPreviewOutput;
    bool  _originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled;
    bool  _originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
    bool  _originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled;
    bool  _originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
    NSDictionary * _outputBufferPools;
    struct BWStreamOutputStorage { 
        int type; 
        unsigned int flags; 
        bool ready; 
        bool enabled; 
        BWNodeOutput *nodeOutput; 
        struct opaqueCMSimpleQueue {} *simpleQueue; 
        NSObject<OS_dispatch_queue> *bufferServicingQueue; 
        int (*bufferServicingQueueCallback)(); 
        struct opaqueCMFormatDescription {} *cachedFormatDescription; 
        int frameCount; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } lastEmittedPTS; 
        int retainedBufferCount; 
        BWPixelBufferPool *internalPixelBufferPool; 
        bool bufferPoolOwnedByAnotherNode; 
        struct { 
            int width; 
            int height; 
        } outputDimensions; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } cropRect; 
        BWStats *ioSurfaceCompressionRatioStats; 
        int pixelBufferCompressionType; 
        unsigned long long totalCompressedDataSize; 
        unsigned long long totalUncompressedDataSize; 
    }  _outputsStorage;
    struct CGSize { 
        double width; 
        double height; 
    }  _overscanPercentage;
    float  _overscanPercentageForZoom;
    float  _pixelsPerMicron;
    BWNodeOutput * _pointCloudOutput;
    bool  _pointCloudOutputEnabled;
    struct opaqueCMFormatDescription { } * _pointCloudOutputFormatDescription;
    int  _preferredCompressionTypeOnPreviewOutput;
    int  _preferredCompressionTypeOnVideoCaptureOutput;
    struct { 
        int width; 
        int height; 
    }  _preferredPreviewDimensions;
    int  _preferredPreviewMaxFrameRate;
    BWNodeOutput * _previewOutput;
    bool  _previewOutputEnabled;
    float  _previewScaleFactor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previewShift;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _previewShiftLock;
    int  _previousInfraredCaptureID;
    bool  _primaryScalerDecoupled;
    NSDictionary * _qHDRSensorDefectivePixelInfo;
    struct OpaqueFigSampleBufferProcessor { } * _qrmSampleBufferProcessor;
    struct { 
        int width; 
        int height; 
    }  _quadraCropDimensions;
    bool  _quadraHighResStillImageCaptureEnabled;
    struct opaqueCMFormatDescription { } * _quadraStillOutputFormatDescription;
    struct opaqueCMSimpleQueue { } * _quadraYUVBufferQueue;
    bool  _rawCompressionEnabled;
    bool  _reflectsStillsOnStreamingOutputs;
    int  _resolvedFormatIndex;
    bool  _resolvedFormatIndexUpToDate;
    bool  _roundingOfBackEndScalersOutputHeightToMultipleOfTwoEnabled;
    bool  _roundingOfStillImageDimensionsToMultipleOfFourEnabled;
    unsigned int  _sashimiRawPixelFormat;
    bool  _secondaryScalerIsNotAvailable;
    struct { 
        int width; 
        int height; 
    }  _sensorCropDimensions;
    unsigned int  _sensorInterfaceRawPixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _sensorOverscanPercentage;
    bool  _shareStreamingBufferPools;
    struct { 
        struct { 
            float x; 
            float y; 
        } lastWideSpherePos; 
        struct { 
            float x; 
            float y; 
        } lastTeleSpherePos; 
        struct { 
            float x; 
            float y; 
        } currentTeleSpherePos; 
        struct { 
            float x; 
            float y; 
        } previousTeleSpherePos; 
        bool supportAverageSpherePositionKey; 
    }  _sphereShiftState;
    int  _stillImageColorSpaceProperties;
    bool  _stillImageKeypointDetectionEnabled;
    BWNodeOutput * _stillImageOutput;
    bool  _stillImageOutputEnabled;
    int  _stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount;
    int  _stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount;
    int  _stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount;
    bool  _stillImageOutputSushiRawAttachmentOptionEnabled;
    struct opaqueCMFormatDescription { } * _stillReflectionFormatDescription;
    struct opaqueCMFormatDescription { } * _stillReflectionSecondaryFormatDescription;
    struct OpaqueVTPixelTransferSession { } * _stillReflectionSecondaryTransferSession;
    struct OpaqueVTPixelTransferSession { } * _stillReflectionTransferSession;
    struct OpaqueFigCaptureStream { } * _stream;
    NSObject<OS_dispatch_queue> * _streamEventDispatchQueue;
    NSObject<OS_dispatch_group> * _streamEventNotificationGroup;
    int  _streamFormatIndex;
    bool  _streamingForegroundSegmentationEnabled;
    bool  _streamingRequiredWhenConfiguredAsSlave;
    NSArray * _supportedFormats;
    bool  _supportsDecouplingPrimaryScalerOnly;
    float  _telePixelsPerMicron;
    bool  _temporalNoiseReductionEnabled;
    unsigned long long  _totalCompressedDataSizeForRaw;
    unsigned long long  _totalUncompressedDataSizeForRaw;
    bool  _usesFIFOFirmwareTimeMachine;
    bool  _usesFirmwareStillImageOutput;
    bool  _usesPacked10BitFirmwareStillImageOutputPixelFormat;
    int  _verticalSensorBinningFactor;
    struct { 
        int width; 
        int height; 
    }  _videoCaptureDimensions;
    BWNodeOutput * _videoCaptureOutput;
    NSDictionary * _videoCaptureOutputColorInfoOverride;
    bool  _videoCaptureOutputEnabled;
    bool  _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
    unsigned int  _videoPixelFormat;
    bool  _videoStabilizationEnabled;
    int  _videoStabilizationMethod;
    NSDictionary * _visionDataConfiguration;
    struct opaqueCMFormatDescription { } * _visionDataFormatDescription;
}

@property (readonly) BWFigVideoCaptureDevice *captureDevice;
@property (readonly) BWFigVideoCaptureStream *captureStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BWNodeOutput *depthOutput;
@property (readonly, copy) NSString *description;
@property (readonly) BWNodeOutput *detectedObjectsOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long infraredProjectorUptimeInUsForHighPowerSparse;
@property (nonatomic, readonly) unsigned long long infraredProjectorUptimeInUsForLowPowerSparse;
@property (readonly) BWNodeOutput *pointCloudOutput;
@property (readonly) BWNodeOutput *previewOutput;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (readonly) BWNodeOutput *videoCaptureOutput;
@property (nonatomic, copy) NSDictionary *videoCaptureOutputColorInfoOverride;
@property (nonatomic) bool videoCaptureOutputPixelBufferAttachmentModificationAllowed;

+ (id)cameraSourceNodeWithCaptureDevice:(id)arg1 captureStream:(id)arg2;
+ (void)initialize;

- (bool)RGBIRStereoFusionEnabled;
- (void)_addCaptureStreamAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_applyPreviewShiftToCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)_asynchronouslyPreallocateBufferPools;
- (void)_attachCameraIntrinsicMatrixToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 scaledToVideoBuffer:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_bravoShiftMitigationCropOffset:(struct opaqueCMSampleBuffer { }*)arg1 totalZoom:(float)arg2;
- (int)_bringStreamUpToDate;
- (int)_bytesPerOutputBufferForOutputConfiguration:(id)arg1 outputID:(struct __CFString { }*)arg2;
- (struct { int x1; int x2; })_calculatePreviewDimensionsWithOverscanForZoom;
- (struct { int x1; int x2; })_calculateVideoCaptureDimensionsWithOverscan;
- (id)_colorInfoForOutputID:(id)arg1 videoOutputsColorInfo:(id)arg2;
- (void)_computeRetainedBufferCountForOutputStorage:(struct BWStreamOutputStorage { int x1; unsigned int x2; bool x3; bool x4; id x5; struct opaqueCMSimpleQueue {} *x6; id x7; int (*x8)(); struct opaqueCMFormatDescription {} *x9; int x10; struct { long long x_11_1_1; int x_11_1_2; unsigned int x_11_1_3; long long x_11_1_4; } x11; int x12; id x13; bool x14; struct { int x_15_1_1; int x_15_1_2; } x15; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_16_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_16_1_2; } x16; id x17; int x18; unsigned long long x19; unsigned long long x20; }*)arg1;
- (struct opaqueCMSampleBuffer { }*)_createDepthDataSampleBufferFromVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct opaqueCMSampleBuffer { }*)_createFocusPixelDataSampleBufferFromVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_enabledNodeOutputsDrivenByThePrimaryStreamingOutput;
- (int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)arg1;
- (void)_flushOutRemainingBuffers;
- (id)_initWithCaptureDevice:(id)arg1 captureStream:(id)arg2;
- (float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)arg1 outputIndex:(int)arg2;
- (void)_markEndOfLiveOutput;
- (id)_outputConfigurationForOutputID:(id)arg1 previewOutput:(bool)arg2;
- (unsigned int)_pixelFormatForOutputID:(id)arg1 preferredCompressionType:(int)arg2;
- (bool)_preferIntermediateTapOverSecondaryScalerForPreviewOutputBasedOnBandwidth;
- (bool)_preferPrimaryScalerOverIntermediateTapForVideoOutputBasedOnBandwidth;
- (void)_prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_primaryScalerIsAvailable;
- (void)_propagatePixelBufferAttachment:(struct __CVBuffer { }*)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 attachedMediaKey:(id)arg3 removeAttachmentKey:(struct __CFString { }*)arg4;
- (void)_propagatePixelBufferAttachmentFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachmentKey:(struct __CFString { }*)arg2 usingAttachedMediaKey:(id)arg3;
- (void)_reflectStillSampleBufferOnStreamingOutputs:(struct opaqueCMSampleBuffer { }*)arg1 captureType:(int)arg2;
- (void)_registerForStreamNotifications;
- (void)_registerStreamOutputHandlers;
- (void)_reportIOSurfaceCompressionCoreAnalyticsData:(struct BWStreamOutputStorage { int x1; unsigned int x2; bool x3; bool x4; id x5; struct opaqueCMSimpleQueue {} *x6; id x7; int (*x8)(); struct opaqueCMFormatDescription {} *x9; int x10; struct { long long x_11_1_1; int x_11_1_2; unsigned int x_11_1_3; long long x_11_1_4; } x11; int x12; id x13; bool x14; struct { int x_15_1_1; int x_15_1_2; } x15; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_16_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_16_1_2; } x16; id x17; int x18; unsigned long long x19; unsigned long long x20; }*)arg1;
- (void)_reportIOSurfaceCompressionCoreAnalyticsDataForRaw;
- (bool)_requiresOneStreamingOutputForMetadata;
- (void)_retrieveCameraCharacterizationDataForCameraIntrinsicMatrixDelivery;
- (bool)_scalerChainingEnabled;
- (bool)_secondaryScalerIsAvailable;
- (bool)_secondaryScalerSupportsVideoCaptureDimensions;
- (unsigned int)_sensorInterfaceRawPixelFormatForSensorPixelFormat:(unsigned int)arg1 compandingEnabled:(bool)arg2;
- (bool)_serviceZoomForPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)_setStreamOutputsEnabled:(bool)arg1;
- (int)_setupBayerProcessingSessionForQuadraStillImageCaptures;
- (int)_setupQRMSampleBufferProcessor;
- (bool)_shouldEnableStillImageOutput;
- (bool)_shouldEnableStreamCaptureOutput;
- (id)_streamOutputIDForCapture:(int*)arg1;
- (id)_streamOutputIDForOnDemandStills;
- (id)_streamOutputIDForPreview:(int*)arg1;
- (void)_tallyCompressedIOSurfaceStatsForRawForSBuf:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_tallyCompressedIOSurfaceStatsForSBuf:(struct opaqueCMSampleBuffer { }*)arg1 outputStorage:(struct BWStreamOutputStorage { int x1; unsigned int x2; bool x3; bool x4; id x5; struct opaqueCMSimpleQueue {} *x6; id x7; int (*x8)(); struct opaqueCMFormatDescription {} *x9; int x10; struct { long long x_11_1_1; int x_11_1_2; unsigned int x_11_1_3; long long x_11_1_4; } x11; int x12; id x13; bool x14; struct { int x_15_1_1; int x_15_1_2; } x15; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_16_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_16_1_2; } x16; id x17; int x18; unsigned long long x19; unsigned long long x20; }*)arg2;
- (void)_unregisterFromStreamNotifications;
- (void)_unregisterStreamOutputHandlers;
- (void)_updateBufferPoolSharingProperties;
- (void)_updateDepthConfiguration;
- (void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1;
- (int)_updateFormatIndex;
- (void)_updateMetadataConfigurations;
- (void)_updateObjectDetectionMetadataRegistration;
- (int)_updateOutputConfigurations;
- (int)_updateOutputIDMappingsForPreviewOutput:(id*)arg1 videoCaptureOutputID:(id*)arg2;
- (int)_updateOutputsStorage;
- (void)_updateStreamingOutputStorageForOutputID:(id)arg1 isPrimaryOutput:(bool)arg2 isVideoCaptureOutput:(bool)arg3 nodeOutput:(id)arg4;
- (void)_updateValidBufferRectForOutputIndex:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updateZoomForOutputIndex:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)_verifyColorSpaceProperties:(int)arg1 matchVideoOutputsColorInfo:(id)arg2 forOutputID:(id)arg3;
- (bool)_videoCaptureOutputRequiresScaling;
- (id)_videoFormatRequirementsForOutputID:(id)arg1 configuration:(id)arg2;
- (float)aeMaxGain;
- (int)allocateOrReuseBufferPoolsFromSourceNode:(id)arg1;
- (struct OpaqueFigCaptureISPProcessingSession { }*)bayerProcessingSession;
- (float)bravoShiftMitigationMaxZoomFactor;
- (bool)cameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
- (bool)cameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
- (id)captureDevice;
- (id)captureStream;
- (bool)chromaNoiseReductionEnabled;
- (unsigned int)clientVideoFormat;
- (struct OpaqueCMClock { }*)clock;
- (id)colorInfoForOutput:(id)arg1;
- (int)colorSpaceProperties;
- (struct { int x1; int x2; })cropAspectRatio;
- (struct { int x1; int x2; })cropDimensionsWhenFESIsEnabled;
- (bool)cropOverscanFromStillImageOutputInISP;
- (void)dealloc;
- (struct { int x1; int x2; })depthDimensions;
- (id)depthOutput;
- (bool)depthOutputEnabled;
- (int)depthType;
- (id)detectedFacesFilterDelegate;
- (bool)detectedFacesOnPreviewOutputEnabled;
- (bool)detectedFacesOnVideoCaptureOutputEnabled;
- (id)detectedFacesOutputConfiguration;
- (id)detectedObjectsOutput;
- (bool)detectedObjectsOutputEnabled;
- (bool)discardsDepthDataForStillImages;
- (bool)discardsUnstableSphereVideoFrames;
- (id)enabledDetectedObjectTypes;
- (bool)faceTrackingEnabled;
- (int)fesBinningFactorHorizontal;
- (struct { int x1; int x2; })finalPreviewOutputDimensions;
- (struct { int x1; int x2; })firmwareStillImageDimensionsAfterOverscanCropping;
- (int)firmwareStillImageOutputRetainedBufferCountOverride;
- (int)firmwareTimeMachineBufferCapacity;
- (bool)firmwareTimeMachineSIFREnabled;
- (bool)focusBlurMapEnabled;
- (int)formatIndex;
- (bool)geometricDistortionCorrectionEnabled;
- (bool)geometricDistortionCorrectionSupported;
- (bool)handlesHDRReferenceFrameReporting;
- (bool)hasNonLiveConfigurationChanges;
- (bool)highlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream;
- (bool)highlightRecoveryEnabledWhenConfiguredAsSlave;
- (int)horizontalSensorBinningFactor;
- (bool)includeOverscanOnStillImageOutput;
- (unsigned long long)infraredProjectorUptimeInUsForHighPowerSparse;
- (unsigned long long)infraredProjectorUptimeInUsForLowPowerSparse;
- (bool)ispAPSDataEnabled;
- (bool)ispIsStreaming;
- (int)ispMultiBandNoiseReductionMode;
- (bool)keepISPStreamingWhenStopping;
- (bool)keypointDetectionEnabled;
- (bool)ltmLookUpTableMetadataEnabled;
- (bool)lumaHistogramMetadataEnabled;
- (void)makeCurrentConfigurationLive;
- (void)makeOutputsLiveIfNeeded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationClientOverride;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationFrameworkOverride;
- (float)maxFrameRate;
- (int)maximumNumberOfBracketedSIFRFrames;
- (float)minFrameRate;
- (int)motionAttachmentsSource;
- (id)nodeSubType;
- (bool)optimizeBandwidthForPreviewOutput;
- (bool)originalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled;
- (bool)originalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled;
- (bool)originalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled;
- (bool)originalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled;
- (struct CGSize { double x1; double x2; })overscanPercentage;
- (float)overscanPercentageForZoom;
- (id)pointCloudOutput;
- (bool)pointCloudOutputEnabled;
- (int)preferredCompressionTypeOnPreviewOutput;
- (int)preferredCompressionTypeOnVideoCaptureOutput;
- (struct { int x1; int x2; })preferredPreviewDimensions;
- (int)preferredPreviewMaxFrameRate;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (int)prepareForStillImageCaptureWithFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(bool)arg3;
- (id)previewOutput;
- (bool)previewOutputEnabled;
- (bool)primaryScalerDecoupled;
- (id)qHDRSensorDefectivePixelInfo;
- (struct { int x1; int x2; })quadraCropDimensions;
- (bool)quadraHighResStillImageCaptureEnabled;
- (bool)reflectsStillsOnStreamingOutputs;
- (bool)roundingOfBackEndScalersOutputHeightToMultipleOfTwoEnabled;
- (bool)roundingOfStillImageDimensionsToMultipleOfFourEnabled;
- (bool)secondaryScalerIsNotAvailable;
- (struct { int x1; int x2; })sensorCropDimensions;
- (struct CGSize { double x1; double x2; })sensorOverscanPercentage;
- (void)setAeMaxGain:(float)arg1;
- (void)setBayerProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg1;
- (void)setBravoShiftMitigationMaxZoomFactor:(float)arg1;
- (void)setCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled:(bool)arg1;
- (void)setCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled:(bool)arg1;
- (void)setChromaNoiseReductionEnabled:(bool)arg1;
- (void)setClientVideoFormat:(unsigned int)arg1;
- (void)setColorSpaceProperties:(int)arg1;
- (void)setCropAspectRatio:(struct { int x1; int x2; })arg1;
- (void)setCropDimensionsWhenFESIsEnabled:(struct { int x1; int x2; })arg1;
- (void)setCropOverscanFromStillImageOutputInISP:(bool)arg1;
- (void)setDepthDimensions:(struct { int x1; int x2; })arg1;
- (void)setDepthOutputEnabled:(bool)arg1;
- (void)setDepthType:(int)arg1;
- (void)setDetectedFacesFilterDelegate:(id)arg1;
- (void)setDetectedFacesOnPreviewOutputEnabled:(bool)arg1;
- (void)setDetectedFacesOnVideoCaptureOutputEnabled:(bool)arg1;
- (void)setDetectedFacesOutputConfiguration:(id)arg1;
- (void)setDetectedObjectsOutputEnabled:(bool)arg1;
- (void)setDiscardsDepthDataForStillImages:(bool)arg1;
- (void)setDiscardsUnstableSphereVideoFrames:(bool)arg1;
- (void)setEnabledDetectedObjectTypes:(id)arg1;
- (void)setFaceTrackingEnabled:(bool)arg1;
- (void)setFesBinningFactorHorizontal:(int)arg1;
- (void)setFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1;
- (void)setFirmwareTimeMachineBufferCapacity:(int)arg1;
- (void)setFirmwareTimeMachineSIFREnabled:(bool)arg1;
- (void)setFocusBlurMapEnabled:(bool)arg1;
- (void)setFormatIndex:(int)arg1;
- (void)setGeometricDistortionCorrectionEnabled:(bool)arg1;
- (void)setGeometricDistortionCorrectionSupported:(bool)arg1;
- (void)setHandlesHDRReferenceFrameReporting:(bool)arg1;
- (void)setHighlightRecoveryEnabledWhenConfiguredAsMasterOrSingleStream:(bool)arg1;
- (void)setHighlightRecoveryEnabledWhenConfiguredAsSlave:(bool)arg1;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setIncludeOverscanOnStillImageOutput:(bool)arg1;
- (void)setIspAPSDataEnabled:(bool)arg1;
- (void)setIspIsStreaming:(bool)arg1;
- (void)setIspMultiBandNoiseReductionMode:(int)arg1;
- (void)setKeepISPStreamingWhenStopping:(bool)arg1;
- (void)setKeypointDetectionEnabled:(bool)arg1;
- (void)setLtmLookUpTableMetadataEnabled:(bool)arg1;
- (void)setLumaHistogramMetadataEnabled:(bool)arg1;
- (void)setMaxExposureDurationClientOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxExposureDurationFrameworkOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxFrameRate:(float)arg1;
- (void)setMaximumNumberOfBracketedSIFRFrames:(int)arg1;
- (void)setMinFrameRate:(float)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setOptimizeBandwidthForPreviewOutput:(bool)arg1;
- (void)setOriginalCameraIntrinsicMatrixDeliveryOnDepthOutputEnabled:(bool)arg1;
- (void)setOriginalCameraIntrinsicMatrixDeliveryOnPreviewOutputEnabled:(bool)arg1;
- (void)setOriginalCameraIntrinsicMatrixDeliveryOnStillImageOutputEnabled:(bool)arg1;
- (void)setOriginalCameraIntrinsicMatrixDeliveryOnVideoCaptureOutputEnabled:(bool)arg1;
- (void)setOverscanPercentage:(struct CGSize { double x1; double x2; })arg1;
- (void)setOverscanPercentageForZoom:(float)arg1;
- (void)setPointCloudOutputEnabled:(bool)arg1;
- (void)setPreferredCompressionTypeOnPreviewOutput:(int)arg1;
- (void)setPreferredCompressionTypeOnVideoCaptureOutput:(int)arg1;
- (void)setPreferredPreviewDimensions:(struct { int x1; int x2; })arg1;
- (void)setPreferredPreviewMaxFrameRate:(int)arg1;
- (void)setPreviewOutputEnabled:(bool)arg1;
- (void)setPreviewShift:(struct CGPoint { double x1; double x2; })arg1 previewScaleFactor:(float)arg2;
- (void)setPrimaryScalerDecoupled:(bool)arg1;
- (void)setQHDRSensorDefectivePixelInfo:(id)arg1;
- (void)setQuadraCropDimensions:(struct { int x1; int x2; })arg1;
- (void)setQuadraHighResStillImageCaptureEnabled:(bool)arg1;
- (void)setRGBIRStereoFusionEnabled:(bool)arg1;
- (void)setReflectsStillsOnStreamingOutputs:(bool)arg1;
- (void)setRoundingOfBackEndScalersOutputHeightToMultipleOfTwoEnabled:(bool)arg1;
- (void)setRoundingOfStillImageDimensionsToMultipleOfFourEnabled:(bool)arg1;
- (void)setSecondaryScalerIsNotAvailable:(bool)arg1;
- (void)setSensorCropDimensions:(struct { int x1; int x2; })arg1;
- (void)setSensorOverscanPercentage:(struct CGSize { double x1; double x2; })arg1;
- (void)setStillImageKeypointDetectionEnabled:(bool)arg1;
- (void)setStillImageOutputEnabled:(bool)arg1;
- (void)setStillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount:(int)arg1;
- (void)setStillImageOutputSashimiRawAttachmentOptionRetainedBufferCount:(int)arg1;
- (void)setStillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount:(int)arg1;
- (void)setStillImageOutputSushiRawAttachmentOptionEnabled:(bool)arg1;
- (void)setStreamingForegroundSegmentationEnabled:(bool)arg1;
- (void)setStreamingRequiredWhenConfiguredAsSlave:(bool)arg1;
- (void)setTemporalNoiseReductionEnabled:(bool)arg1;
- (void)setUsesFIFOFirmwareTimeMachine:(bool)arg1;
- (void)setUsesFirmwareStillImageOutput:(bool)arg1;
- (void)setUsesPacked10BitFirmwareStillImageOutputPixelFormat:(bool)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (void)setVideoCaptureDimensions:(struct { int x1; int x2; })arg1;
- (void)setVideoCaptureOutputColorInfoOverride:(id)arg1;
- (void)setVideoCaptureOutputEnabled:(bool)arg1;
- (void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(bool)arg1;
- (void)setVideoStabilizationEnabled:(bool)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (void)setVisionDataConfiguration:(id)arg1;
- (bool)start:(id*)arg1;
- (bool)stillImageKeypointDetectionEnabled;
- (id)stillImageOutput;
- (bool)stillImageOutputEnabled;
- (int)stillImageOutputFocusPixelDataAttachmentOptionRetainedBufferCount;
- (unsigned int)stillImageOutputPixelFormat;
- (int)stillImageOutputSashimiRawAttachmentOptionRetainedBufferCount;
- (int)stillImageOutputSensorInterfaceRawAttachmentOptionRetainedBufferCount;
- (bool)stillImageOutputSushiRawAttachmentOptionEnabled;
- (bool)stop:(id*)arg1;
- (bool)streamingForegroundSegmentationEnabled;
- (bool)streamingRequiredWhenConfiguredAsSlave;
- (bool)temporalNoiseReductionEnabled;
- (void)updateFormatRequirementsFromSourceNode:(id)arg1;
- (int)updateOutputRequirements;
- (bool)usesFIFOFirmwareTimeMachine;
- (bool)usesFirmwareStillImageOutput;
- (bool)usesPacked10BitFirmwareStillImageOutputPixelFormat;
- (int)verticalSensorBinningFactor;
- (struct { int x1; int x2; })videoCaptureDimensions;
- (id)videoCaptureOutput;
- (id)videoCaptureOutputColorInfoOverride;
- (bool)videoCaptureOutputEnabled;
- (bool)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
- (bool)videoIsFullRange;
- (bool)videoStabilizationEnabled;
- (int)videoStabilizationMethod;
- (id)visionDataConfiguration;

@end
