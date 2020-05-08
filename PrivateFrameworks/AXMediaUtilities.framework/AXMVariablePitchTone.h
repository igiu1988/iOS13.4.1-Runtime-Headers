/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVariablePitchTone : AXMTone {
    NSArray * _keyPitches;
}

- (void).cxx_destruct;
- (unsigned long long)_bufferFrameForKeyPitch:(id)arg1;
- (id)initWithKeyPitches:(id)arg1 sampleRate:(double)arg2 envelope:(id)arg3;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (void)renderInBuffer:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; }*)arg1 atFrame:(unsigned long long)arg2;

@end
