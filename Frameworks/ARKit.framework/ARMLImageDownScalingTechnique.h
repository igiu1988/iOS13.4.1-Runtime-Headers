/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique {
    struct __CVPixelBufferPool { } * _bgraMattingPixelBufferPool;
    struct __CVPixelBufferPool { } * _bgraPixelBufferPool;
    bool  _centerCropImage;
    struct vImageCVImageFormat { } * _cvImageFormatRef;
    bool  _deterministic;
    ARMLImageDownScalingResultData * _downSamplingResultData;
    bool  _enableDoubleMLResolutionForIPad;
    bool  _generateMattingMetaData;
    ARImageCroppingTechnique * _imageCroppingTechnique;
    ARImageRotationTechnique * _imageRotationTechnique;
    ARImageScalingTechnique * _imageScalingTechnique;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    int  _lockedOrientation;
    ARMattingImageMetaData * _mattingImageData;
    ARImageScalingTechnique * _mattingImageScalingTechnique;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _resizeUltraWideImage;
    double  _resultLatency;
    id /* block */  _ultrawideRotationStrategy;
    id /* block */  _wideRotationStrategy;
}

@property (nonatomic) bool centerCropImage;
@property (nonatomic) bool generateMattingMetaData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool resizeUltraWideImage;
@property (nonatomic, copy) id /* block */ ultrawideRotationStrategy;
@property (nonatomic, copy) id /* block */ wideRotationStrategy;

- (void).cxx_destruct;
- (id)_convertImageColorSpace:(id)arg1 pPoolToUse:(struct __CVPixelBufferPool {}**)arg2;
- (id)_downscaledResultDataFromImageData:(id)arg1 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_fullDescription;
- (long long)_getDeviceOrientation;
- (id)_imageDataForNeuralNetwork:(id)arg1 scaledSize:(struct CGSize { double x1; double x2; })arg2 deviceOrientation:(long long)arg3 pRegionOfInterest:(struct CGSize { double x1; double x2; }*)arg4 pRotationOfResultTensor:(long long*)arg5;
- (bool)centerCropImage;
- (void)dealloc;
- (id /* block */)defaultRotationStrategy;
- (bool)generateMattingMetaData;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 requiredTimeInterval:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)lockOrientation:(long long)arg1;
- (id)nodeName;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (double)requiredTimeInterval;
- (bool)resizeUltraWideImage;
- (void)setCenterCropImage:(bool)arg1;
- (void)setGenerateMattingMetaData:(bool)arg1;
- (void)setResizeUltraWideImage:(bool)arg1;
- (void)setUltrawideRotationStrategy:(id /* block */)arg1;
- (void)setWideRotationStrategy:(id /* block */)arg1;
- (id /* block */)ultrawideRotationStrategy;
- (id /* block */)wideRotationStrategy;

@end
