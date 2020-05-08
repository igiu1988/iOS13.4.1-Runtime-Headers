/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSemanticSegmentationTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    bool  _isLegacyModel;
    double  _lastResultPushTimestamp;
    struct __CVPixelBufferPool { } * _normalsPixelBufferPool;
    struct __CVPixelBufferPool { } * _outputConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } * _outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledConfidencePixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledNormalsPixelBufferPool;
    struct __CVPixelBufferPool { } * _scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique * _segmentationRotationTechnique;
    bool  _shouldUseSynchronizedUltraWide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (nonatomic) bool shouldUseSynchronizedUltraWide;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (int)bindInputBuffer:(unsigned long long)arg1 withImage:(id)arg2 andOriginalImageData:(id)arg3 rotationOfResultTensor:(long long)arg4;
- (void)changeEspressoConfig:(id)arg1;
- (id)createResultDataFromTensors:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize { double x1; double x2; })arg6;
- (void)createSegmentationConfidenceBuffer:(struct __CVBuffer { }*)arg1 fromLogitsTensor:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg2 normalizerTensor:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize { double x1; double x2; })arg6 segmentationBuffer:(struct __CVBuffer { }*)arg7;
- (void)createSegmentationConfidenceBuffer:(struct __CVBuffer { }*)arg1 fromTensor:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg2 inputImageData:(id)arg3 rotationNeeded:(long long)arg4 regionOfInterest:(struct CGSize { double x1; double x2; })arg5 segmentationBuffer:(struct __CVBuffer { }*)arg6;
- (void)createSegmentationNormalsBuffer:(struct __CVBuffer { }*)arg1 fromTensor:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg2 inputImageData:(id)arg3 rotationNeeded:(long long)arg4 regionOfInterest:(struct CGSize { double x1; double x2; })arg5;
- (id)createSegmentationResultDataFromTensors:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 inputImageData:(id)arg2 rotationNeeded:(long long)arg3 regionOfInterest:(struct CGSize { double x1; double x2; })arg4;
- (void)dealloc;
- (id)init;
- (id)initLegacy;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setShouldUseSynchronizedUltraWide:(bool)arg1;
- (bool)shouldUseSynchronizedUltraWide;
- (bool)supportsNormals;

@end