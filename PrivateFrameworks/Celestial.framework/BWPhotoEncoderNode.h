/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPhotoEncoderNode : BWNode <BWInferenceFormatProvider> {
    bool  _allowHEIFPrewarming;
    bool  _alwaysAwaitInference;
    bool  _cameraSupportsFlash;
    FigCapturePixelConverter * _clientThumbnailPixelConverter;
    struct FigPhotoCompressionSession { } * _compressionSession;
    bool  _croppingEnabled;
    bool  _heifEmbedThumb;
    bool  _heifForceCABAC;
    bool  _heifForceHEVC;
    float  _heifQualityOverride;
    unsigned long long  _heifThumbnailMaxPixelSize;
    int  _heifTileHeight;
    int  _heifTileWidth;
    bool  _heifUseTiling;
    BWInferenceEngine * _inferenceEngine;
    NSDictionary * _inputColorInfo;
    FigCapturePixelConverter * _jpegPixelConverter;
    _Atomic bool  _opportunisticInferenceCompleted;
    bool  _preparedInferenceEngine;
    NSObject<OS_dispatch_group> * _previewGenerationGroup;
    NSObject<OS_dispatch_queue> * _previewGenerationQueue;
    FigCapturePixelConverter * _previewPixelConverter;
    NSObject<OS_dispatch_queue> * _prewarmQueue;
    void * _prewarmQueueID;
    long long  _prewarmedSettingsID;
    bool  _prewarmingOngoing;
    float  _segmentationDownscalingFactor;
    FigCapturePixelConverter * _thumbnailPixelConverter;
    bool  _usesHighEncodingPriority;
    bool  _zeroShutterLagEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRectForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 requestedStillImageCaptureSettings:(id)arg2 whenEnabled:(bool)arg3;
+ (bool)_croppingRequiredForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageSettings:(id)arg2 whenEnabled:(bool)arg3;
+ (void)_updateMetadataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageSettings:(id)arg2 whenCroppingEnabled:(bool)arg3;
+ (void)initialize;

- (void)_addDepthFromSampleBufferIfAvailable:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_addMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3;
- (int)_addPortraitEffectsMatteFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addQualityOptionsToDictionary:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 imageDimensions:(struct { int x1; int x2; })arg3 metadata:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 forMainImage:(bool)arg7;
- (int)_addSemanticMatteSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withCustomURN:(id)arg2;
- (int)_addSemanticMattesFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_addThumbnailFromBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 codecType:(unsigned int)arg6 maxPixelSize:(unsigned long long)arg7;
- (int)_addValue:(id)arg1 toAuxiliaryImageProperties:(struct CGImageMetadata { }*)arg2 namespace:(struct __CFString { }*)arg3 prefix:(struct __CFString { }*)arg4 key:(struct __CFString { }*)arg5;
- (id)_arrayInColumnMajorOrderFrom3x3MatrixData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (id)_arrayInColumnMajorOrderFrom3x4MatrixData:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct __IOSurface { }*)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long*)arg1;
- (int)_defaultJPEGIndexedQTableForPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int*)arg4 isHighGainImageOut:(bool*)arg5;
- (id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned int)arg2;
- (int)_encodePhotoForPixelBuffer:(struct __CVBuffer { }*)arg1 imageDimensions:(struct { int x1; int x2; })arg2 metadata:(id)arg3 thumbnailOptions:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 usePixelsOutsideCrop:(bool)arg8 outputSurfaceImageSize:(struct CGSize { double x1; double x2; }*)arg9;
- (id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3;
- (int)_generatePreviewForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 previewPixelBuffer:(struct __CVBuffer {}**)arg4;
- (int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned int)arg1 sourceWidth:(int)arg2 sourceHeight:(int)arg3 destinationPixelFormat:(unsigned int)arg4;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1;
- (struct CGImageMetadata { }*)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_performInferenceWithBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_scaleInputPixelBuffer:(struct __CVBuffer { }*)arg1 toDimensions:(struct { int x1; int x2; })arg2 colorSpaceProperties:(int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(struct __CVBuffer {}**)arg7;
- (id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 codecType:(unsigned int)arg5 maxPixelSize:(unsigned long long)arg6;
- (id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1;
- (bool)cameraSupportsFlash;
- (bool)croppingEnabled;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4;
- (id)initWithPersonSegmentationEnabled:(bool)arg1 inferenceScheduler:(id)arg2;
- (id)inputColorInfo;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (float)segmentationDownscalingFactor;
- (void)setCameraSupportsFlash:(bool)arg1;
- (void)setCroppingEnabled:(bool)arg1;
- (void)setInputColorInfo:(id)arg1;
- (void)setSegmentationDownscalingFactor:(float)arg1;
- (void)setUsesHighEncodingPriority:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (bool)usesHighEncodingPriority;
- (bool)zeroShutterLagEnabled;

@end
