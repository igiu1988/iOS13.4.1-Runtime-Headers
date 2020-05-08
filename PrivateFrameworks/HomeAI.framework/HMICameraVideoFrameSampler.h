/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMICameraVideoFrameSampler : HMFObject <HMFLogging> {
    HMICameraVideoResourceAttributes * _attributes;
    <HMICameraVideoFrameSamplerDelegate> * _delegate;
    HMICameraVideoFrame * _frame;
    bool  _markedAsFinished;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sampleInterval;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetInterval;
    NSMutableArray * _unmatchedSampleFrames;
}

@property (readonly) HMICameraVideoResourceAttributes *attributes;
@property (readonly, copy) NSString *debugDescription;
@property <HMICameraVideoFrameSamplerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) HMICameraVideoFrame *frame;
@property (readonly) unsigned long long hash;
@property (getter=isMarkedAsFinished) bool markedAsFinished;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } sampleInterval;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } targetInterval;
@property (readonly) NSMutableArray *unmatchedSampleFrames;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_appendFrame:(id)arg1 error:(id*)arg2;
- (bool)appendFrame:(id)arg1 error:(id*)arg2;
- (id)attributes;
- (id)delegate;
- (void)finish;
- (id)frame;
- (id)initWithResourceAttributes:(id)arg1 sampleRate:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 targetInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)isFinishedEarly;
- (bool)isMarkedAsFinished;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sampleInterval;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(id)arg1;
- (void)setMarkedAsFinished:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetInterval;
- (id)unmatchedSampleFrames;

@end
