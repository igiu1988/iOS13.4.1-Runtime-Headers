/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)cellStartsX;
+ (const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)cellStartsY;
+ (bool)hasObjectnessOutputs;
+ (const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; }*)importantClasses;
+ (struct CGSize { double x1; double x2; })inputImageSize;
+ (id)modelName;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (unsigned long long)mumberPosClasses;
+ (unsigned long long)numberMaxoutLayers;
+ (const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)objectnessFilterThresholds;
+ (bool)poseSquare;
+ (const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)ratios;

- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;

@end
