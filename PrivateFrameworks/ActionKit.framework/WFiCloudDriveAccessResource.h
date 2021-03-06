/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFiCloudDriveAccessResource : WFAccessResource

+ (bool)isSystemResource;
+ (bool)mustBeAvailableForDisplay;

- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)protectedResourceDescription;

@end
