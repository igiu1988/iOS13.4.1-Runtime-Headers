/* Generated by EzioChiu.
 */

@protocol AEPolicyActivation <AEPolicyAction>

@required

- (void)activateWithInvalidationHandler:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, <AEPolicyDeactivation> *, NSError *, void*
- (void)activateWithInvalidationHandler:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, <AEPolicyDeactivation> *, NSError *, void*
- (<AEPolicyDeactivation> *)deactivationForScratchpad:(id <AEPolicyReadOnlyScratchpad>)arg1;
- (<AEPolicyDeactivation> *)deactivationForScratchpad:(id <AEPolicyReadOnlyScratchpad>)arg1;
- (void)prepareForActivationWithScratchpad:(id <AEPolicyWriteOnlyScratchpad>)arg1;
- (void)prepareForActivationWithScratchpad:(id <AEPolicyWriteOnlyScratchpad>)arg1;

@end