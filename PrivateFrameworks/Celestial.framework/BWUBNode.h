/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWUBNode : BWNode <BWAdaptiveBracketingController, BWDeepFusionProcessorControllerDelegate, BWDeferredProcessorControllerDelegate, BWUBInferenceControllerDelegate, BWUBProcessorControllerDelegate> {
    NSString * _currentCaptureRequestIdentifier;
    long long  _currentSettingsID;
    struct opaqueCMSampleBuffer { } * _deepFusionErrorRecoveryFrame;
    BWDeepFusionProcessorControllerConfiguration * _deepFusionProcessorControllerConfiguration;
    NSObject<OS_dispatch_queue> * _deepFusionProcessorControllerQueue;
    NSMutableDictionary * _deepFusionProcessorInputByPortType;
    struct opaqueCMSampleBuffer { } * _deepFusionProxySbuf;
    int  _deferredCompressionProfile;
    bool  _deferredPhotoProcessorEnabled;
    bool  _deferredProcessingSupportEnabled;
    NSMutableDictionary * _deferredProcessorInputByPortType;
    BWFigVideoCaptureDevice * _device;
    NSObject<OS_dispatch_queue> * _emitQueue;
    NSMutableDictionary * _emittedReferenceFrameIDForUBProcessorInputByPortType;
    BWUBInferenceControllerConfiguration * _inferenceControllerConfiguration;
    NSObject<OS_dispatch_group> * _inferenceControllerGroup;
    NSObject<OS_dispatch_queue> * _inferenceControllerQueue;
    struct opaqueCMFormatDescription { } * _inferenceInputFormatDescription;
    struct OpaqueVTPixelTransferSession { } * _inferenceInputPixelTransferSession;
    NSDictionary * _inferenceOutputPoolsByAttachedMediaKey;
    BWPixelBufferPool * _intermediateInferenceInputPool;
    int  _maxDeepFusionOutputCount;
    BWStillImageNodeConfiguration * _nodeConfiguration;
    struct { 
        int width; 
        int height; 
    }  _overCaptureImageDimensions;
    BWStillImageOverCaptureProcessorControllerConfiguration * _overCaptureProcessorControllerConfiguration;
    NSObject<OS_dispatch_queue> * _overCaptureProcessorControllerQueue;
    BWStillImageOverCaptureProcessorInput * _overCaptureProcessorInput;
    unsigned int  _priority;
    BWStillImageProcessorCoordinator * _processorCoordinator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processorCoordinatorLock;
    NSObject<OS_dispatch_queue> * _processorCoordinatorWorkerQueue;
    BWStillImageProcessorConfiguration * _redEyeReductionConfiguration;
    NSMutableDictionary * _redEyeReductionInputByPortType;
    <BWStillImageProcessingStatusDelegate> * _referenceFrameSelectionDelegate;
    NSMutableDictionary * _remainingUBProcessorInputsByPortType;
    BWUBSemanticRenderingInput * _semanticRenderingInput;
    NSSet * _supportedPortTypes;
    BWPixelBufferPool * _syntheticFusionMapPool;
    BWPixelBufferPool * _syntheticIntermediatesPool;
    BWPixelBufferPool * _ubOutputDeferredPool;
    BWUBProcessorControllerConfiguration * _ubProcessorControllerConfiguration;
    NSMutableDictionary * _ubProcessorInputByPortType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_commitDeferredBuffer:(struct __CVBuffer { }*)arg1 bufferType:(unsigned long long)arg2 metadata:(id)arg3 processorInput:(id)arg4;
- (bool)_emitReferenceFrameForProcessorInput:(id)arg1;
- (void)_emitReferenceFrameIfNeededForProcessorInput:(id)arg1;
- (void)_handleDeepFusionError:(int)arg1 processorInput:(id)arg2;
- (int)_handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_inferenceProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 settings:(id)arg2 captureSettings:(id)arg3 portType:(id)arg4;
- (void)_infoForCaptureType:(int)arg1 isSupportedCaptureTypeOut:(bool*)arg2 isFusionCaptureTypeOut:(bool*)arg3;
- (void)_processorControllerDidFinishProcessingInputForPortType:(id)arg1 processorType:(unsigned long long)arg2;
- (void)_resetProcessingState;
- (void)_resetProcessingStateIfDone;
- (int)_scaleInferenceInputForRedEyeReductionFromPixelBuffer:(struct __CVBuffer { }*)arg1 outputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)_setupDeferredProcessingWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3;
- (int)_setupProcessingStateWithSettings:(id)arg1 captureSettings:(id)arg2;
- (void)_setupProcessorCoordinator;
- (int)_singleImageProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 settings:(id)arg2 captureSettings:(id)arg3 portType:(id)arg4;
- (void)_waitForInferenceIfNeededForProcessorInput:(id)arg1;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 wait:(bool)arg2;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(bool)arg3;
- (bool)alwaysAllowModifyingInputBuffers;
- (void)commitDeferredSkinMask:(struct __CVBuffer { }*)arg1 personMask:(struct __CVBuffer { }*)arg2 faceObservations:(id)arg3 processorInput:(id)arg4;
- (void)dealloc;
- (bool)deepFusionPreprocessingSupportEnabled;
- (bool)deepFusionSupportEnabled;
- (bool)depthDataDeliveryEnabled;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (bool)digitalFlashSupportEnabled;
- (bool)fusionSupportEnabled;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4;
- (id)hdrReferenceFrameSelectionDelegate;
- (id)initWithNodeConfiguration:(id)arg1 captureDevice:(id)arg2 sensorConfigurations:(id)arg3 inputPixelFormat:(unsigned int)arg4 retainedBufferCount:(int)arg5 outputBufferCount:(int)arg6 deferredProcessingSupportEnabled:(bool)arg7 deferredPhotoProcessorEnabled:(bool)arg8 figThreadPriority:(unsigned int)arg9;
- (id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (int)maxDeepFusionOutputCount;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (void)processorController:(id)arg1 didDetermineReferenceFrame:(struct opaqueCMSampleBuffer { }*)arg2 processorInput:(id)arg3 err:(int)arg4;
- (void)processorController:(id)arg1 didFinishProcessingBuffer:(struct __CVBuffer { }*)arg2 metadata:(id)arg3 type:(unsigned long long)arg4 processorInput:(id)arg5 err:(int)arg6;
- (void)processorController:(id)arg1 didFinishProcessingInput:(id)arg2 err:(int)arg3;
- (void)processorController:(id)arg1 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 type:(unsigned long long)arg3 processorInput:(id)arg4 err:(int)arg5;
- (void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 personMask:(const void*)arg3 faceObservations:(id)arg4 processorInput:(id)arg5 err:(int)arg6;
- (void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3;
- (void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transform:(id)arg3 processorInput:(id)arg4;
- (struct __CVBuffer { }*)processorController:(id)arg1 newOutputPixelBufferForProcessorInput:(id)arg2 type:(unsigned long long)arg3;
- (id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2;
- (id)processorCoordinator;
- (bool)redEyeReductionEnabled;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (bool)semanticRenderingEnabled;
- (void)setAlwaysAllowModifyingInputBuffers:(bool)arg1;
- (void)setDeepFusionPreprocessingSupportEnabled:(bool)arg1;
- (void)setDeepFusionSupportEnabled:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDigitalFlashSupportEnabled:(bool)arg1;
- (void)setFusionSupportEnabled:(bool)arg1;
- (void)setMaxDeepFusionOutputCount:(int)arg1;
- (void)setRedEyeReductionEnabled:(bool)arg1 inferenceScheduler:(id)arg2;
- (void)setReferenceFrameSelectionDelegate:(id)arg1;
- (void)setSemanticRenderingEnabled:(bool)arg1 inferenceScheduler:(id)arg2;
- (void)setSharedResources:(id)arg1;
- (void)setSpatialOverCaptureSupportEnabled:(bool)arg1 overCaptureImageDimensions:(struct { int x1; int x2; })arg2 overCapturePercentage:(float)arg3;
- (id)sharedResources;
- (void)stopAdaptiveBracketingForSettings:(id)arg1 withGroup:(int)arg2;

@end
