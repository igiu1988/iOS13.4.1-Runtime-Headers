/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMISignificantActivityDetector : HMFObject <HMFLogging> {
    struct CGSize { 
        double width; 
        double height; 
    }  _anchorSizes;
    double  _confidenceThresholds;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputDimensions;
    NSString * _inputFeatureValueName;
    MLModel * _mlModel;
    double  _nmsThreshold;
    unsigned long long  _numberOfAnchors;
    NSArray * _offsetsFeatureValueNames;
    MLPredictionOptions * _predictionOptions;
    NSArray * _scoresFeatureValueNames;
    bool  _useSoftmax;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGSize { double x1; double x2; } inputDimensions;
@property (readonly) NSString *inputFeatureValueName;
@property (readonly) MLModel *mlModel;
@property (readonly) double nmsThreshold;
@property (readonly) NSArray *offsetsFeatureValueNames;
@property (readonly) MLPredictionOptions *predictionOptions;
@property (readonly) NSArray *scoresFeatureValueNames;
@property (readonly) Class superclass;
@property (readonly) bool useSoftmax;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_postProcessOffsets:(id)arg1 scores:(id)arg2 outputPredictions:(id)arg3;
- (bool)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer { }*)arg1 offsets:(id)arg2 scores:(id)arg3 error:(id*)arg4;
- (id)initWithConfidenceThresholds:(id)arg1 nmsThreshold:(double)arg2 error:(id*)arg3;
- (struct CGSize { double x1; double x2; })inputDimensions;
- (id)inputFeatureValueName;
- (id)mlModel;
- (double)nmsThreshold;
- (id)offsetsFeatureValueNames;
- (bool)predict:(struct __CVBuffer { }*)arg1 detectedObjects:(id)arg2 error:(id*)arg3;
- (id)predictionOptions;
- (id)scoresFeatureValueNames;
- (bool)useSoftmax;

@end
