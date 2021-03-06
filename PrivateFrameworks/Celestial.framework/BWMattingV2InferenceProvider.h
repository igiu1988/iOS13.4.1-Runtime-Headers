/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMattingV2InferenceProvider : NSObject <BWInferenceExecutable, BWInferenceProvider> {
    BWInferenceVideoRequirement * _depthInputVideoRequirement;
    BWInferenceVideoRequirement * _disparityInputVideoRequirement;
    BWInferenceMetadataRequirement * _faceSegmentsWithLandmarksMetadataRequirement;
    NSMutableArray * _inputMetadataRequirements;
    NSMutableArray * _inputVideoRequirements;
    FigMatting * _mattingProcessor;
    int  _mattingProcessorVersion;
    int  _mattingTuningConfiguration;
    <MTLCommandQueue> * _metalCommandQueue;
    NSMutableArray * _outputVideoRequirements;
    BWInferenceVideoRequirement * _personSemanticsHairInputVideoRequirement;
    BWInferenceVideoRequirement * _personSemanticsHairOutputVideoRequirement;
    BWInferenceVideoRequirement * _personSemanticsSkinInputVideoRequirement;
    BWInferenceVideoRequirement * _personSemanticsSkinOutputVideoRequirement;
    BWInferenceVideoRequirement * _personSemanticsTeethInputVideoRequirement;
    BWInferenceVideoRequirement * _personSemanticsTeethOutputVideoRequirement;
    BWInferenceVideoRequirement * _primaryFormatInputVideoRequirement;
    BWInferenceVideoRequirement * _refinedDepthOutputVideoRequirement;
    BWInferenceVideoRequirement * _segmentationInputVideoRequirement;
    BWInferenceVideoRequirement * _segmentationOutputVideoRequirement;
    NSDictionary * _sensorConfigurationsByPortType;
    bool  _submitWithoutSynchronization;
}

@property (nonatomic, readonly) NSArray *cloneVideoRequirements;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BWInferenceExecutable> *executable;
@property (nonatomic, readonly) int executionTarget;
@property (nonatomic, readonly) <BWInferenceExtractable> *extractable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputMetadataRequirements;
@property (nonatomic, readonly) NSArray *inputVideoRequirements;
@property (nonatomic, readonly) NSArray *outputMetadataRequirements;
@property (nonatomic, readonly) NSArray *outputVideoRequirements;
@property (nonatomic, readonly, copy) NSSet *preventionReasons;
@property (nonatomic, readonly) <BWInferencePropagatable> *propagatable;
@property (nonatomic, readonly) <BWInferenceSubmittable> *submittable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int type;

+ (void)initialize;

- (int)_configureMattingProcessor;
- (int)_loadMattingProcessor;
- (struct __CVBuffer { }*)_outputPixelBufferForOutputVideoRequirement:(id)arg1 storage:(id)arg2 isMatte:(bool)arg3;
- (id)_processorOptions;
- (id)cloneVideoRequirements;
- (void)dealloc;
- (id)executable;
- (int)executeOnSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withExecutionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id /* block */)arg4;
- (int)executionTarget;
- (id)extractable;
- (id)initWithConfiguration:(id)arg1;
- (id)inputMetadataRequirements;
- (id)inputVideoRequirements;
- (id)mutableInputVideoRequirements;
- (id)mutableOutputVideoRequirements;
- (id)newStorage;
- (id)outputMetadataRequirements;
- (id)outputVideoRequirements;
- (int)prepareForExecution;
- (id)preventionReasons;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (id)propagatable;
- (void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (void)propagateMattingOutputToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 storage:(id)arg2;
- (int)setInputsAndOutputsOnMattingProcessor:(id)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 storage:(id)arg3;
- (id)submittable;
- (int)type;

@end
