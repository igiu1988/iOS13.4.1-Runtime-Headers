/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (nonatomic, readonly) long long datePickerMode;
@property (nonatomic, readonly) NSString *defaultAnswer;
@property (nonatomic, readonly) bool immediatelyActivateWatchDictation;
@property (nonatomic, readonly) NSString *inputType;
@property (nonatomic) UITextField *numberTextField;
@property (nonatomic, readonly) NSString *promptText;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (long long)datePickerMode;
- (id)defaultAnswer;
- (void)finishRunningWithDate:(id)arg1;
- (void)finishRunningWithResultText:(id)arg1;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)immediatelyActivateWatchDictation;
- (id)inputType;
- (id)outputContentClasses;
- (id)promptText;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (void)negateText;
- (id)numberTextField;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
- (void)setNumberTextField:(id)arg1;

@end
