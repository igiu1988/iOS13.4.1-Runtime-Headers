/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFinishSetupPaymentController : NSObject <BFFFinishSetupFlowControlling, PKPaymentSetupViewControllerDelegate> {
    id /* block */  _completion;
    NSObject<BFFFinishSetupFlowHosting> * _host;
    PKPaymentSetupAssistantRegistrationViewController * _registrationController;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)finishSetupPaymentControllerWithHost:(id)arg1;
+ (bool)hasPrimaryiCloudAccount;
+ (unsigned long long)registrationViewControllerOutstandingRequirements;

- (void).cxx_destruct;
- (void)_completeWithResult:(unsigned long long)arg1;
- (void)_userDidTapCancelButton:(id)arg1;
- (bool)canCompleteExtendedInitializationQuickly;
- (id /* block */)completion;
- (bool)controllerNeedsToRun;
- (id)initWithHost:(id)arg1;
- (void)performExtendedInitializationWithCompletion:(id /* block */)arg1;
- (id)prerequisiteFlowIdentifier;
- (void)setCompletion:(id /* block */)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
