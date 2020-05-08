/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADMonocularExecutor : ADExecutor {
    ADMonocularExecutorParameters * _executorParameters;
    struct __CVBuffer { } * _itmCroppedScaledColor;
    struct __CVBuffer { } * _itmPostProcessedDepth;
    struct __CVBuffer { } * _itmPreProcessedColor;
    struct __CVBuffer { } * _itmRotatedColor;
    struct __CVBuffer { } * _itmUnprocessedDepth;
    ADMonocularPipeline * _pipeline;
}

@property (nonatomic, copy) ADMonocularExecutorParameters *executorParameters;

- (void).cxx_destruct;
- (long long)allocateIntermediateBuffers;
- (void)dealloc;
- (long long)executeWithColor:(struct __CVBuffer { }*)arg1 outDepthMap:(struct __CVBuffer {}**)arg2;
- (id)executorParameters;
- (id)getIntermediates;
- (id)initWithInputPrioritization:(long long)arg1;
- (long long)prepareForEngineType:(unsigned long long)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 exifOrientation:(unsigned int)arg3;
- (void)setExecutorParameters:(id)arg1;

@end
