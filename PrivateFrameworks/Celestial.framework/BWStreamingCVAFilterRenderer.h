/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStreamingCVAFilterRenderer : NSObject <BWFilterRenderer> {
    BWStreamingCVAFilterRendererAnimator * _animator;
    BWFigVideoCaptureDevice * _captureDevice;
    int  _depthDataSource;
    NSMutableDictionary * _faceVisibilityByFaceID;
    struct __CVBuffer { } * _mattingBuffer;
    <CVAPortraitVideoPipeline> * _portraitVideoPipeline;
    BWPixelBufferPool * _postprocessedDisparityBufferPool;
    NSMutableArray * _postprocessedFaces;
    struct { 
        bool depthFilterEnabled; 
        struct __CVBuffer {} *mostRecentPostprocessedDisparityBuffer; 
        float mostRecentFocusDisparity; 
        float mostRecentDeltaDisparity; 
        float mostRecentPortraitStability; 
        int numberOfFramesSinceLastStableFocus; 
        float clientSuppliedSimulatedAperture; 
        float clientSuppliedPortraitLightingEffectStrength; 
        bool mostRecentStructuredLightOcclusion; 
        NSArray *mostRecentDetectedFaces; 
        NSArray *mostRecentFilteredFaces; 
        <CVAPortraitGenericRequest> *previousPortraitRequest; 
        int previousStagePreviewStatus; 
    }  _sharedContext;
    NSObject<OS_dispatch_queue> * _sharedContextQueue;
    BWSpringSimulation * _stageProxyLiveRenderingSpringSimulation;
    bool  _stageRenderingEnabled;
    bool  _studioAndContourRenderingEnabled;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property float portraitLightingEffectStrength;
@property float simulatedAperture;
@property (nonatomic, readonly) bool stageRenderingEnabled;
@property (nonatomic, readonly) bool studioAndContourRenderingEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

+ (void)initialize;

- (void)_removeFaceVisibilityForFacesMissingFromDetectedFaces:(id)arg1;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (void)dealloc;
- (void)disparityPostprocessingRequest:(id)arg1 didCompleteDisparityPostprocessingWithResult:(id)arg2;
- (id)displayName;
- (id)initWithCaptureDevice:(id)arg1 studioAndContourRenderingEnabled:(bool)arg2 stageRenderingEnabled:(bool)arg3 depthDataSource:(int)arg4;
- (void)mattingRequest:(id)arg1 didCompleteMattingWithResult:(id)arg2;
- (float)portraitLightingEffectStrength;
- (void)portraitRequest:(id)arg1 didCompletePortraitWithResult:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)setSimulatedAperture:(float)arg1;
- (float)simulatedAperture;
- (bool)stageRenderingEnabled;
- (bool)studioAndContourRenderingEnabled;
- (bool)supportsAnimation;
- (short)type;

@end
