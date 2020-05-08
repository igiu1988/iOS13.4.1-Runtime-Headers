/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUpsellOfferView : UIView {
    VUILabel * _descriptionLabel;
    IKImageElement * _imageElement;
    _TVImageView * _imageView;
    VUIUpsellOfferViewLayout * _layout;
    VUILabel * _titleLabel;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) VUILabel *descriptionLabel;
@property (nonatomic, retain) IKImageElement *imageElement;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) VUIUpsellOfferViewLayout *layout;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) IKViewElement *viewElement;

+ (id)upsellViewFromElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_iOS_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (id)descriptionLabel;
- (id)imageElement;
- (id)imageView;
- (id)layout;
- (void)layoutSubviews;
- (void)setDescriptionLabel:(id)arg1;
- (void)setImageElement:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)viewElement;

@end
