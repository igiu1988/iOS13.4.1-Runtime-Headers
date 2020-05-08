/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _featureBinningEnabled;
    bool  _featureOrientationAssignmentEnabled;
    float  _gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned int  _gaussianPyramidOctavesCount;
    float  _keypointDetectionThreshold;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxBurstDuration;
    float  _maxBurstFrameRate;
    float  _maxFrameRate;
    unsigned int  _maxKeypointsCount;
}

@property (nonatomic, readonly) NSDictionary *embeddedCaptureDeviceConfiguration;
@property (nonatomic) bool featureBinningEnabled;
@property (nonatomic) bool featureOrientationAssignmentEnabled;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) unsigned int gaussianPyramidOctavesCount;
@property (nonatomic) float keypointDetectionThreshold;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxBurstDuration;
@property (nonatomic) float maxBurstFrameRate;
@property (nonatomic) float maxFrameRate;
@property (nonatomic) unsigned int maxKeypointsCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)embeddedCaptureDeviceConfiguration;
- (bool)featureBinningEnabled;
- (bool)featureOrientationAssignmentEnabled;
- (float)gaussianPyramidBaseOctaveDownscalingFactor;
- (unsigned int)gaussianPyramidOctavesCount;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)keypointDetectionThreshold;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxBurstDuration;
- (float)maxBurstFrameRate;
- (float)maxFrameRate;
- (unsigned int)maxKeypointsCount;
- (void)setFeatureBinningEnabled:(bool)arg1;
- (void)setFeatureOrientationAssignmentEnabled:(bool)arg1;
- (void)setGaussianPyramidBaseOctaveDownscalingFactor:(float)arg1;
- (void)setGaussianPyramidOctavesCount:(unsigned int)arg1;
- (void)setKeypointDetectionThreshold:(float)arg1;
- (void)setMaxBurstDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxBurstFrameRate:(float)arg1;
- (void)setMaxFrameRate:(float)arg1;
- (void)setMaxKeypointsCount:(unsigned int)arg1;
- (int)sinkType;

@end
