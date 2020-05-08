/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceProviderStorage : NSObject <BWInferenceStorage> {
    NSDictionary * _inferenceResults;
    NSMutableDictionary * _pixelBufferByRequirement;
    NSMutableDictionary * _pixelBufferPoolByRequirement;
    NSArray * _requirementsNeedingPixelBufferPools;
    NSArray * _requirementsNeedingPixelBuffers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *inferenceResults;
@property (nonatomic, readonly) BWInferenceProviderStorage *inferenceStorage;
@property (nonatomic, readonly, copy) NSArray *requirementsNeedingPixelBufferPools;
@property (nonatomic, readonly, copy) NSArray *requirementsNeedingPixelBuffers;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)clear;
- (void)dealloc;
- (id)inferenceResults;
- (id)inferenceStorage;
- (id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2;
- (id)newMetadataDictionarySatisfyingRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)newSampleBufferSatisfyingCloneRequirement:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (struct __CVBuffer { }*)pixelBufferForRequirement:(id)arg1;
- (id)pixelBufferPoolForRequirement:(id)arg1;
- (id)requirementsNeedingPixelBufferPools;
- (id)requirementsNeedingPixelBuffers;
- (void)setInferenceResults:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1 forRequirement:(id)arg2;
- (void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;

@end
