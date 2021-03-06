/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoExportRequest : NUExportRequest {
    double  _bitRateMultiplicationFactor;
    bool  _bypassOutputSettingsIfNoComposition;
    NUColorSpace * _cachedColorSpace;
    NSArray * _metadata;
    NSDictionary * _outputSettings;
    NSProgress * _progress;
    bool  _requiresVideoComposition;
}

@property (nonatomic) double bitRateMultiplicationFactor;
@property (nonatomic) bool bypassOutputSettingsIfNoComposition;
@property (retain) NUColorSpace *cachedColorSpace;
@property (readonly) NUColorSpace *colorSpace;
@property (copy) NSArray *metadata;
@property (copy) NSDictionary *outputSettings;
@property (retain) NSProgress *progress;
@property (nonatomic) bool requiresVideoComposition;

- (void).cxx_destruct;
- (double)bitRateMultiplicationFactor;
- (bool)bypassOutputSettingsIfNoComposition;
- (id)cachedColorSpace;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)metadata;
- (id)newRenderJob;
- (id)outputSettings;
- (id)progress;
- (bool)requiresVideoComposition;
- (void)setBitRateMultiplicationFactor:(double)arg1;
- (void)setBypassOutputSettingsIfNoComposition:(bool)arg1;
- (void)setCachedColorSpace:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRequiresVideoComposition:(bool)arg1;
- (void)submit:(id /* block */)arg1;
- (void)submitWithProgress:(id)arg1 completion:(id /* block */)arg2;

@end
