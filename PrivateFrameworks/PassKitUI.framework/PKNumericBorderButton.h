/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNumericBorderButton : UIButton {
    UIView * _bottomBorder;
    UIColor * _highlightedBackgroundColor;
    UIView * _leadingBorder;
    UIColor * _normalBackgroundColor;
    UIView * _topBorder;
    UIView * _trailingBorder;
}

@property (nonatomic, copy) UIColor *highlightedBackgroundColor;
@property (nonatomic, copy) UIColor *normalBackgroundColor;

- (void).cxx_destruct;
- (id)highlightedBackgroundColor;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)normalBackgroundColor;
- (void)pk_applyAppearance:(id)arg1;
- (void)setBorder:(unsigned long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setNormalBackgroundColor:(id)arg1;

@end
