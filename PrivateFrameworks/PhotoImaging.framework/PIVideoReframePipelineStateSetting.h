/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIVideoReframePipelineStateSetting : NSObject {
    long long  _sampleMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic) long long sampleMode;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;
- (long long)sampleMode;
- (void)setSampleMode:(long long)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end