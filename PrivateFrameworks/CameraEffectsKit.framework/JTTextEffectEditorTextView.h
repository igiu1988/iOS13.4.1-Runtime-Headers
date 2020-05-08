/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTTextEffectEditorTextView : UITextView {
    bool  _prefersMovingBeforeScalingWhenAvoidingKeyboardUI;
}

@property (nonatomic) bool prefersMovingBeforeScalingWhenAvoidingKeyboardUI;

- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)prefersMovingBeforeScalingWhenAvoidingKeyboardUI;
- (void)setPrefersMovingBeforeScalingWhenAvoidingKeyboardUI:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textEditingFrame;
- (void)unmarkText;

@end
