/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {
    double  _cornerRadius;
    bool  _customFillColor;
    bool  _customStrokeColor;
    CAShapeLayer * _lighteningOutline;
    double  _outlineAlpha;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIBezierPath *customPath;
@property (nonatomic) double outlineAlpha;

+ (id)_fillColor:(bool)arg1;
+ (id)_strokeColor:(bool)arg1;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_fillColor:(bool)arg1;
- (double)_pathInset;
- (id)_shapeLayer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_strokeColor:(bool)arg1;
- (void)_updateLightingOutlinePath;
- (void)_updatePath;
- (double)cornerRadius;
- (id)customPath;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2;
- (double)lineWidth;
- (double)outlineAlpha;
- (void)setActive:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setFillColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setLineWidth:(double)arg1 updatePath:(bool)arg2;
- (void)setOutlineAlpha:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
