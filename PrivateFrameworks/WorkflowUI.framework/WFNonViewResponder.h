/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFNonViewResponder : UIResponder <WFInputViewMutable> {
    <WFNonViewResponderDelegate> * _delegate;
    UIView * _inputAccessoryView;
    UIView * _inputView;
    UIResponder * _nextResponder;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFNonViewResponderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic) UIResponder *nextResponder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (id)inputAccessoryView;
- (id)inputView;
- (id)nextResponder;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setNextResponder:(id)arg1;

@end
