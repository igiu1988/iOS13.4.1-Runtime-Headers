/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSCPUMaximumUsageLimitation : RBSLimitation {
    double  _duration;
    unsigned long long  _percentage;
    unsigned char  _role;
    unsigned long long  _violationPolicy;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long percentage;
@property (nonatomic, readonly) unsigned char role;
@property (nonatomic, readonly) unsigned long long violationPolicy;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)limitationForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4;

- (id)_initWithRole:(unsigned char)arg1 percentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4;
- (double)duration;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)percentage;
- (unsigned char)role;
- (id)succinctDescriptionBuilder;
- (unsigned long long)violationPolicy;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)conflictsWithAttribute:(id)arg1;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
