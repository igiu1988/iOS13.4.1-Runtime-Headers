/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBAssertionDescriptorValidatorContext : NSObject <NSCopying> {
    RBAssertionAcquisitionContext * _acquisitionContext;
    RBAssertionDescriptorValidator * _assertionDescriptionValidator;
    RBSAssertionDescriptor * _assertionDescriptor;
    <RBBundlePropertiesManaging> * _bundlePropertiesManager;
    <RBDomainAttributeManaging> * _domainAttributeManager;
    <RBEntitlementManaging> * _entitlementManager;
    unsigned long long  _ignoreEntitlementViolationsCount;
    unsigned long long  _ignoreTargetPropertyViolationsCount;
    <RBEntitlementPossessing> * _originatorEntitlements;
    RBProcess * _originatorProcess;
    RBProcessState * _originatorState;
    RBConcreteTarget * _target;
    RBSProcessIdentifier * _targetIdentifier;
    RBSProcessIdentity * _targetIdentity;
    bool  _targetIsSystem;
    RBProcess * _targetProcess;
    <RBBundleProperties> * _targetProperties;
    RBProcessState * _targetState;
}

@property (nonatomic, retain) RBAssertionAcquisitionContext *acquisitionContext;
@property (nonatomic, retain) RBAssertionDescriptorValidator *assertionDescriptionValidator;
@property (nonatomic, retain) RBSAssertionDescriptor *assertionDescriptor;
@property (nonatomic, retain) <RBBundlePropertiesManaging> *bundlePropertiesManager;
@property (nonatomic, retain) <RBDomainAttributeManaging> *domainAttributeManager;
@property (nonatomic, retain) <RBEntitlementManaging> *entitlementManager;
@property (nonatomic, readonly) bool ignoreEntitlementViolations;
@property (nonatomic, readonly) bool ignoreTargetPropertyViolations;
@property (nonatomic, readonly) <RBEntitlementPossessing> *originatorEntitlements;
@property (nonatomic, readonly) RBSProcessIdentity *originatorIdentity;
@property (nonatomic, retain) RBProcess *originatorProcess;
@property (nonatomic, retain) RBProcessState *originatorState;
@property (nonatomic, retain) RBConcreteTarget *target;
@property (nonatomic, retain) RBSProcessIdentifier *targetIdentifier;
@property (nonatomic, retain) RBSProcessIdentity *targetIdentity;
@property (nonatomic, readonly) bool targetIsSystem;
@property (nonatomic, retain) RBProcess *targetProcess;
@property (nonatomic, readonly) <RBBundleProperties> *targetProperties;
@property (nonatomic, retain) RBProcessState *targetState;

+ (id)context;

- (void).cxx_destruct;
- (id)acquisitionContext;
- (id)assertionDescriptionValidator;
- (id)assertionDescriptor;
- (id)bundlePropertiesManager;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainAttributeManager;
- (id)entitlementManager;
- (bool)ignoreEntitlementViolations;
- (bool)ignoreTargetPropertyViolations;
- (id)originatorEntitlements;
- (id)originatorIdentity;
- (id)originatorProcess;
- (id)originatorState;
- (void)popIgnoreEntitlementViolations;
- (void)popIgnoreTargetPropertyViolations;
- (void)pushIgnoreEntitlementViolations;
- (void)pushIgnoreTargetPropertyViolations;
- (void)setAcquisitionContext:(id)arg1;
- (void)setAssertionDescriptionValidator:(id)arg1;
- (void)setAssertionDescriptor:(id)arg1;
- (void)setBundlePropertiesManager:(id)arg1;
- (void)setDomainAttributeManager:(id)arg1;
- (void)setEntitlementManager:(id)arg1;
- (void)setOriginatorProcess:(id)arg1;
- (void)setOriginatorState:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setTargetIdentity:(id)arg1;
- (void)setTargetProcess:(id)arg1;
- (void)setTargetState:(id)arg1;
- (id)target;
- (id)targetIdentifier;
- (id)targetIdentity;
- (bool)targetIsSystem;
- (id)targetProcess;
- (id)targetProperties;
- (id)targetState;

@end
