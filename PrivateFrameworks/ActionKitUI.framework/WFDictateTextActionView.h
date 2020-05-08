/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFDictateTextActionView : WFActionCustomView <WFDictateTextActionRunningDelegate> {
    UIButton * _inputSourceButton;
    WFDictateTextActionStopButton * _stopButton;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIButton *inputSourceButton;
@property (nonatomic) WFDictateTextActionStopButton *stopButton;
@property (readonly) Class superclass;
@property (nonatomic) UITextView *textView;

+ (double)preferredHeightForAction:(id)arg1;

- (void).cxx_destruct;
- (void)action:(id)arg1 didReceiveTranscription:(id)arg2;
- (void)actionDidBeginListening:(id)arg1;
- (void)dealloc;
- (void)didEnterReusePool;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputSourceButton;
- (void)setAction:(id)arg1;
- (void)setInputSourceButton:(id)arg1;
- (void)setStopButton:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)sourceButtonTapped;
- (id)stopButton;
- (void)stopButtonTapped;
- (id)textView;
- (void)updateInputSourceButton;
- (void)willLeaveReusePool;

@end
