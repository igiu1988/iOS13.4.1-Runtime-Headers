/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBAssertionIntransientState : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _definesRelativeStartTime;
    NSString * _domainAttributes;
    unsigned long long  _endPolicy;
    bool  _hasDomainAttribute;
    bool  _hasHereditaryGrant;
    bool  _invalidatesSynchronously;
    double  _invalidationDuration;
    bool  _isPersistent;
    unsigned long long  _legacyReason;
    unsigned long long  _runningReason;
    NSMutableSet * _sourceEnvironments;
    unsigned long long  _startPolicy;
    bool  _suspendsOnOriginatorSuspension;
    bool  _terminateTargetOnOriginatorExit;
    double  _warningDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool definesRelativeStartTime;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domainAttributes;
@property (nonatomic) unsigned long long endPolicy;
@property (nonatomic) bool hasDomainAttribute;
@property (nonatomic) bool hasHereditaryGrant;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidatesSynchronously;
@property (nonatomic) double invalidationDuration;
@property (nonatomic) bool isPersistent;
@property (nonatomic) unsigned long long legacyReason;
@property (nonatomic) unsigned long long runningReason;
@property (nonatomic, readonly) NSMutableSet *sourceEnvironments;
@property (nonatomic) unsigned long long startPolicy;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendsOnOriginatorSuspension;
@property (nonatomic) bool terminateTargetOnOriginatorExit;
@property (nonatomic) double warningDuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)definesRelativeStartTime;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)domainAttributes;
- (unsigned long long)endPolicy;
- (bool)hasDomainAttribute;
- (bool)hasHereditaryGrant;
- (bool)invalidatesSynchronously;
- (double)invalidationDuration;
- (bool)isEqual:(id)arg1;
- (bool)isPersistent;
- (unsigned long long)legacyReason;
- (unsigned long long)runningReason;
- (void)setDefinesRelativeStartTime:(bool)arg1;
- (void)setDomainAttributes:(id)arg1;
- (void)setEndPolicy:(unsigned long long)arg1;
- (void)setHasDomainAttribute:(bool)arg1;
- (void)setHasHereditaryGrant:(bool)arg1;
- (void)setInvalidatesSynchronously:(bool)arg1;
- (void)setInvalidationDuration:(double)arg1;
- (void)setIsPersistent:(bool)arg1;
- (void)setLegacyReason:(unsigned long long)arg1;
- (void)setRunningReason:(unsigned long long)arg1;
- (void)setStartPolicy:(unsigned long long)arg1;
- (void)setSuspendsOnOriginatorSuspension:(bool)arg1;
- (void)setTerminateTargetOnOriginatorExit:(bool)arg1;
- (void)setWarningDuration:(double)arg1;
- (id)sourceEnvironments;
- (unsigned long long)startPolicy;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suspendsOnOriginatorSuspension;
- (bool)terminateTargetOnOriginatorExit;
- (double)warningDuration;

@end
