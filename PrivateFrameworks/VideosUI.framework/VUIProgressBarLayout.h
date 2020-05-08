/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIProgressBarLayout : NSObject {
    double  _cornerRadius;
    UIColor * _fillColor;
    UIColor * _gradientEndColor;
    UIColor * _gradientStartColor;
    double  _height;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    UIVisualEffectView * _materialView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    bool  _shouldProgressBarUseRoundCorner;
    UIColor * _tintColor;
    bool  _useMaterial;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) UIColor *gradientEndColor;
@property (nonatomic, retain) UIColor *gradientStartColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic, retain) UIVisualEffectView *materialView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) bool shouldProgressBarUseRoundCorner;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) bool useMaterial;

+ (id)defaultProgressBarLayout;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)fillColor;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (double)height;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (id)materialView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setCornerRadius:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setGradientEndColor:(id)arg1;
- (void)setGradientStartColor:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaterialView:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldProgressBarUseRoundCorner:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseMaterial:(bool)arg1;
- (bool)shouldProgressBarUseRoundCorner;
- (id)tintColor;
- (bool)useMaterial;

@end
