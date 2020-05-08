/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController <PKPaymentSetupViewControllerDelegate> {
    <PKPaymentSetupViewControllerDelegate> * _externalDelegate;
    bool  _isPreflighting;
    NSMutableArray * _preflightCompletionHandlers;
    unsigned long long  _preflightResult;
    UIButton * _skipButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *requiredPaymentSetupFileURLs;
@property (readonly) Class superclass;

+ (bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
+ (id)defaultWebServiceForContext:(long long)arg1;
+ (bool)setupAssistantNeedsToRun;
+ (bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;

- (void).cxx_destruct;
- (void)_setExternalDelegate:(id)arg1;
- (void)bridgeSetupAssistantDidFailToChangePasscode;
- (void)bridgeSetupAssistantDidFinishPasscodeChange;
- (id)delegate;
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)requiredPaymentSetupFileURLs;
- (void)setDelegate:(id)arg1;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(bool)arg3 error:(id)arg4;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(bool)arg2 error:(id)arg3;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(id /* block */)arg3;
- (void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(id /* block */)arg2;
- (void)viewControllerDidFailToChangePasscodeComplex:(id)arg1;
- (void)viewControllerDidFinishChangingPasscodeComplex:(id)arg1;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
