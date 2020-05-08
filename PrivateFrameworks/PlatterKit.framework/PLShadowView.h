/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLShadowView : UIImageView {
    double  _maskCornerRadius;
    struct { 
        float opacity; 
        struct CGSize { 
            double width; 
            double height; 
        } offset; 
        double radius; 
    }  _shadowAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _shadowOutsets;
}

@property (nonatomic, readonly) double maskCornerRadius;
@property (nonatomic, readonly) struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; } shadowAttributes;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_loadImageIfNecessary;
- (void)_updateShadowOutsetsIfNecessary;
- (void)_updateShadowVisualStyling;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithShadowAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 maskCornerRadius:(double)arg2;
- (void)layoutSubviews;
- (double)maskCornerRadius;
- (struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })shadowAttributes;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
