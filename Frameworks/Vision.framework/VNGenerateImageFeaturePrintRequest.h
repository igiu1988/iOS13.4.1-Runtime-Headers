/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGenerateImageFeaturePrintRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;

- (id)_applicableDetectorAndOptions:(id*)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)description;
- (unsigned long long)imageCropAndScaleOption;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (id /* block */)resultsSortingComparator;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
