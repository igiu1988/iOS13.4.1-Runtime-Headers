/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStepperHorizontalVisualElement : UIView <UIStepperVisualElement, _UICursorInteractionDelegate> {
    bool  _autorepeat;
    bool  _continuous;
    NSMutableDictionary * _dividerImages;
    bool  _enabled;
    bool  _isRtoL;
    UIViewPropertyAnimator * _leftAlphaAnimator;
    UIImageView * _leftBackground;
    UIViewPropertyAnimator * _leftFrameAnimator;
    UIImageView * _leftHighlight;
    double  _maximumValue;
    UIImageView * _middleView;
    double  _minimumValue;
    UIButton * _minusButton;
    UIButton * _plusButton;
    long long  _repeatCount;
    NSTimer * _repeatTimer;
    UIViewPropertyAnimator * _rightAlphaAnimator;
    UIImageView * _rightBackground;
    UIViewPropertyAnimator * _rightFrameAnimator;
    UIImageView * _rightHighlight;
    double  _stepValue;
    <UIStepperControl> * _stepperControl;
    double  _value;
    bool  _wraps;
}

@property (nonatomic) bool autorepeat;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic) double stepValue;
@property (nonatomic) <UIStepperControl> *stepperControl;
@property (readonly) Class superclass;
@property (nonatomic) double value;
@property (nonatomic) bool wraps;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_highlightOpacityAnimation;
+ (id)_highlightSizeAnimation;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialAlignmentRectInsets;
+ (struct CGSize { double x1; double x2; })initialIntrinsicSize;
+ (struct CGSize { double x1; double x2; })initialSize;

- (void).cxx_destruct;
- (id)_alphaAnimator:(bool)arg1;
- (void)_commonStepperInit;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftHighlightFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftHighlightInsetFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightHighlightFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightHighlightInsetFrame;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_updateBackgroundForButtonState;
- (void)_updateButton:(id)arg1 backgroundView:(id)arg2 highlightView:(id)arg3 backgroundImage:(id)arg4 highlightImage:(id)arg5 onRight:(bool)arg6;
- (void)_updateButtonEnabled;
- (void)_updateCount:(id)arg1;
- (void)_updateDividerImageForButtonState;
- (void)_updateHighlight:(id)arg1 button:(id)arg2 onRight:(bool)arg3;
- (void)_updateHighlightingAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsetsForControl:(id)arg1;
- (bool)autorepeat;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2;
- (id)decrementImageForState:(unsigned long long)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)incrementImageForState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1 forControl:(id)arg2;
- (bool)isContinuous;
- (bool)isEnabled;
- (void)layoutSubviews;
- (double)maximumValue;
- (double)minimumValue;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAutorepeat:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setContinuous:(bool)arg1;
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setEnabled:(bool)arg1;
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (void)setStepperControl:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setWraps:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forControl:(id)arg2;
- (double)stepValue;
- (id)stepperControl;
- (double)value;
- (bool)wraps;

@end
