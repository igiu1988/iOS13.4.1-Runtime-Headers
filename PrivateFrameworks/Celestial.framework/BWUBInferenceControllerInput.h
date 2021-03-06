/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWUBInferenceControllerInput : BWStillImageProcessorInput {
    bool  _generateFaceObservations;
    bool  _generateLowResPersonSegmentationMask;
    bool  _generateSemanticSkinMatte;
    struct opaqueCMSampleBuffer { } * _inferenceImage;
    struct opaqueCMSampleBuffer { } * _propagationImage;
}

@property (nonatomic) bool generateFaceObservations;
@property (nonatomic) bool generateLowResPersonSegmentationMask;
@property (nonatomic) bool generateSemanticSkinMatte;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*inferenceImage;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*propagationImage;

- (void)addInferenceImage:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)addPropagationImage:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (bool)generateFaceObservations;
- (bool)generateLowResPersonSegmentationMask;
- (bool)generateSemanticSkinMatte;
- (struct opaqueCMSampleBuffer { }*)inferenceImage;
- (struct opaqueCMSampleBuffer { }*)propagationImage;
- (void)setGenerateFaceObservations:(bool)arg1;
- (void)setGenerateLowResPersonSegmentationMask:(bool)arg1;
- (void)setGenerateSemanticSkinMatte:(bool)arg1;

@end
