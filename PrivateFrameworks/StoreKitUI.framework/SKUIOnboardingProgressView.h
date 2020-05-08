/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingProgressView : UIView {
    SKUIShapeView * _borderView;
    UIImageView * _imageView;
    double  _progress;
    SKUIShapeView * _progressView;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredImageSize;
@property (nonatomic) double progress;
@property (nonatomic, copy) NSString *title;

+ (struct CGSize { double x1; double x2; })preferredImageSizeForViewSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)_borderColor;
- (id)fillColor;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })preferredImageSize;
- (double)progress;
- (void)setFillColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)title;

@end
