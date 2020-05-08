/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable> {
    UIImageView * _imageView;
    UILabel * _label;
    NUTextAndGlyph * _textAndGlyph;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (readonly) Class superclass;
@property (nonatomic, retain) NUTextAndGlyph *textAndGlyph;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)arg1;
- (void)setTextAndGlyph:(id)arg1;
- (id)textAndGlyph;

@end
