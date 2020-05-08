/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNClassifyPipelineImageCorrectionNeed1Request : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;

- (id)_applicableDetectorAndGetConfigurationOptions:(id*)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (id)supportedImageSizeSet;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end