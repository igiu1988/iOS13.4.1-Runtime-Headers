/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFRunShortcutsAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (id)associatedAppIdentifier;
- (id)attemptRecoveryFromGlobalLevelErrorMessage;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)protectedResourceDescription;
- (id)workflowLevelDeniedStatusMessage;
- (id)workflowLevelMessageTemplate;
- (id)workflowLevelNotDeterminedStatusMessage;
- (id)workflowLevelPromptTemplate;

@end
