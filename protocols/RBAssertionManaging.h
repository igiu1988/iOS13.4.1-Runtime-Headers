/* Generated by EzioChiu.
 */

@protocol RBAssertionManaging <NSObject, RBDomainAttributeManaging>

@required

- (void)acquireAssertionWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RBAssertionAcquisitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSSet *)assertionDescriptorsWithFlattenedAttributes:(bool)arg1;
- (NSSet *)assertionsForOriginator:(RBSProcessIdentifier *)arg1;
- (bool)hasAssertionWithIdentifier:(RBSAssertionIdentifier *)arg1;
- (bool)invalidateAssertion:(RBAssertion *)arg1;
- (bool)invalidateAssertionFromOriginator:(RBSProcessIdentifier *)arg1 withIdentifier:(RBSAssertionIdentifier *)arg2;
- (bool)invalidateAssertionWithIdentifier:(RBSAssertionIdentifier *)arg1;
- (bool)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(RBSProcessIdentifier *)arg1;
- (RBSProcessLimitations *)limitationsForInstance:(RBSProcessInstance *)arg1;
- (void)processDidLaunch:(RBProcess *)arg1;
- (void)processDidTerminate:(RBProcess *)arg1;
- (RBProcess *)processForIdentity:(RBSProcessIdentity *)arg1;
- (void)revalidateAssertionsForProcessIdentities:(NSSet *)arg1;
- (RBProcessState *)stateForIdentity:(RBSProcessIdentity *)arg1;

@end
