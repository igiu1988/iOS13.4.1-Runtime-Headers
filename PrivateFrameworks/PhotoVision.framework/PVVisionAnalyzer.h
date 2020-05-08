/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVVisionAnalyzer : NSObject {
    PVContext * _context;
    NSDictionary * _detailsExtractionOptions;
    NSDictionary * _detectionOptions;
    <PVVisionIntegrating> * _visionIntegration;
}

- (void).cxx_destruct;
- (long long)_expressionTypeFromExpressionString:(id)arg1;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1;
- (struct CGPoint { double x1; double x2; })centroidForLandmarkRegion:(id)arg1;
- (void)configureRequest:(id)arg1;
- (id)initWithContext:(id)arg1 visionIntegration:(id)arg2;

@end
