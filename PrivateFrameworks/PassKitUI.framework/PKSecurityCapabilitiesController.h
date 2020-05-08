/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSecurityCapabilitiesController : NSObject <CDPUIDeviceToDeviceEncryptionHelperDelegate> {
    AKAppleIDAuthenticationContext * _authContext;
    PKCloudStoreService * _cloudService;
    long long  _context;
    unsigned long long  _feature;
    unsigned long long  _securityRequirements;
}

@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long feature;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long securityRequirements;
@property (readonly) Class superclass;

+ (id)displayableErrorForErrorCode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_authenticationReason;
- (id)_createAuthContext;
- (id)_genericDisplayableError;
- (void)_isEnabledForSecuirtyRequirements:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)_isManateeCapableWithCompletion:(id /* block */)arg1;
- (void)_isMissingTLKsWithCompletion:(id /* block */)arg1;
- (id)_missingTLKsAlertController;
- (void)_presentDeviceToDeviceEncryptionRepairFlow:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentManateeSecurityFlowWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentMissingTLKsAlertWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPasswordPromptWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_resetApplyPayManateeViewWithCompletion:(id /* block */)arg1;
- (long long)context;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (unsigned long long)feature;
- (id)initWithRequirements:(unsigned long long)arg1 context:(long long)arg2;
- (id)initWithRequirements:(unsigned long long)arg1 feature:(unsigned long long)arg2 context:(long long)arg3;
- (void)isEnabledForSecuirtyRequirementsWithCompletion:(id /* block */)arg1;
- (bool)isHSA2Enabled;
- (void)presentSecurityRepairFlowWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)securityRequirements;

@end