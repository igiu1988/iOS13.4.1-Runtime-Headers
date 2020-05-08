/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowBackgroundGPUComputeSetting;
    bool  _allowLowPrecisionAccumulationOnGPU;
    long long  _computeUnits;
    bool  _enableTestVectorMode;
    NSDictionary * _parameters;
    <MTLDevice> * _preferredMetalDevice;
    NSURL * _rootModelURL;
    bool  _useWatchSPIForScribble;
}

@property (nonatomic) bool allowBackgroundGPUCompute;
@property bool allowBackgroundGPUComputeSetting;
@property (nonatomic) bool allowFloat16AccumulationOnGPU;
@property bool allowLowPrecisionAccumulationOnGPU;
@property long long computeUnits;
@property (nonatomic) bool enableTestVectorMode;
@property (retain) NSDictionary *parameters;
@property (nonatomic, retain) <MTLDevice> *preferredMTLDevice;
@property (nonatomic, retain) <MTLDevice> *preferredMetalDevice;
@property (retain) NSURL *rootModelURL;
@property (nonatomic) bool useWatchSPIForScribble;

+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowBackgroundGPUCompute;
- (bool)allowBackgroundGPUComputeSetting;
- (bool)allowFloat16AccumulationOnGPU;
- (bool)allowLowPrecisionAccumulationOnGPU;
- (long long)computeUnits;
- (id)computeUnitsToString:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enableTestVectorMode;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComputeUnits:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelConfiguration:(id)arg1;
- (id)parameters;
- (id)preferredMTLDevice;
- (id)preferredMetalDevice;
- (id)rootModelURL;
- (void)setAllowBackgroundGPUCompute:(bool)arg1;
- (void)setAllowBackgroundGPUComputeSetting:(bool)arg1;
- (void)setAllowFloat16AccumulationOnGPU:(bool)arg1;
- (void)setAllowLowPrecisionAccumulationOnGPU:(bool)arg1;
- (void)setComputeUnits:(long long)arg1;
- (void)setEnableTestVectorMode:(bool)arg1;
- (void)setParameters:(id)arg1;
- (void)setPreferredMTLDevice:(id)arg1;
- (void)setPreferredMetalDevice:(id)arg1;
- (void)setRootModelURL:(id)arg1;
- (void)setUseWatchSPIForScribble:(bool)arg1;
- (bool)useWatchSPIForScribble;

@end
