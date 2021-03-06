/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBAssertionTransientState : NSObject <BSDescriptionProviding, NSCopying> {
    NSMutableDictionary * _cpuUsageViolationPoliciesByRole;
    NSMutableSet * _tags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tags;

- (void).cxx_destruct;
- (void)addTag:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1;
- (void)setMaxCPUUsageViolationPolicy:(unsigned long long)arg1 forRole:(unsigned char)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)tags;
- (void)unionState:(id)arg1;

@end
