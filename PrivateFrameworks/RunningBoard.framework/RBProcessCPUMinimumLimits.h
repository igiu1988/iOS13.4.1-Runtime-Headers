/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBProcessCPUMinimumLimits : NSObject <BSDescriptionProviding> {
    unsigned long long  _duration;
    unsigned long long  _percentage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long percentage;
@property (readonly) Class superclass;

- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)duration;
- (unsigned long long)hash;
- (id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)percentage;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unionLimit:(id)arg1;

@end
