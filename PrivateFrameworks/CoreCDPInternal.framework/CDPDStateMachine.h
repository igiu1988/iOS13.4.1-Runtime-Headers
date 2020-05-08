/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDStateMachine : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {
    bool  _attemptedCDPEnable;
    CDPDCircleController * _circleController;
    CDPContext * _context;
    CDPDPCSController * _pcsController;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic) bool attemptedCDPEnable;
@property (nonatomic, retain) CDPDCircleController *circleController;
@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) CDPDPCSController *pcsController;
@property (nonatomic, retain) CDPDSecureBackupController *secureBackupController;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useCachedSecret:(bool)arg3 circleJoinResult:(id)arg4 completion:(id /* block */)arg5;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useCachedSecret:(bool)arg3 circleJoinResult:(id)arg4 completion:(id /* block */)arg5;
- (void)_attemptCDPEnable:(id /* block */)arg1;
- (void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)_authenticatedShouldPerformRepairWithCompletion:(id /* block */)arg1;
- (void)_confirmCDPEligibilityWithCompletion:(id /* block */)arg1;
- (bool)_disableAsyncModeRequested;
- (void)_disableCloudDataProtectionWithCompletion:(id /* block */)arg1;
- (void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(id /* block */)arg3;
- (void)_enableSecureBackupWithCircleJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_enrollOrDisableCDPAfterEnabledStateVerified:(id /* block */)arg1;
- (void)_handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)_handleInteractiveRecoveryFlowWithCircleJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_handlePreflightError:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRecoveryResetRequestWithCompletion:(id /* block */)arg1;
- (void)_handleiCDPStatusCheckError:(id)arg1 completion:(id /* block */)arg2;
- (bool)_isICloudKeychainDisabledByManagementProfile;
- (void)_performInteractivelyAuthenticatedRepair:(id /* block */)arg1;
- (void)_performSilentlyAuthenticatedRepair:(id /* block */)arg1;
- (void)_postRecoveryEnableSecureBackupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_predicateForRecordUpgradeCheck;
- (id)_predicateForRecordUpgradeCheckIgnoringBottled;
- (void)_preflightAccountStateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_recoverSecureBackupWithCircleJoinResult:(id)arg1 completion:(id /* block */)arg2;
- (void)_refreshAndAuthenticateWithContext:(id)arg1;
- (void)_resetAccountCDPStateWithCompletion:(id /* block */)arg1;
- (bool)attemptedCDPEnable;
- (id)circleController;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(id /* block */)arg2;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (id)context;
- (id)contextForController:(id)arg1;
- (void)dealloc;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)pcsController;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)arg1;
- (void)promptForLocalSecretWithCompletion:(id /* block */)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (id)secureBackupController;
- (id)secureChannelContextForController:(id)arg1;
- (void)setAttemptedCDPEnable:(bool)arg1;
- (void)setCircleController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setPcsController:(id)arg1;
- (void)setSecureBackupController:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (bool)shouldAllowCDPEnrollment;
- (void)shouldPerformRepairWithCompletion:(id /* block */)arg1;
- (bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (id)uiProvider;

@end
