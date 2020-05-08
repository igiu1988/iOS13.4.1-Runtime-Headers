/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFinishSetupAppleIDController : NSObject <AAUISignInControllerDelegate, BFFFinishSetupFlowControlling> {
    id /* block */  _completion;
    BFFFinishSetupAppleIDController * _selfReference;
    AAUISignInController * _signInController;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)finishSetupAppleIDController;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
