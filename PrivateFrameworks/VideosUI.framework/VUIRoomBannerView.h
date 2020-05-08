/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIRoomBannerView : UIView {
    _TVImageView * _backgroundImage;
    VUIFocusableTextView * _descriptionLabel;
    VUIRoomBannerLayout * _layout;
    VUISeparatorView * _separatorView;
    VUILabel * _titleLabel;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) _TVImageView *backgroundImage;
@property (nonatomic, retain) VUIFocusableTextView *descriptionLabel;
@property (nonatomic, retain) VUIRoomBannerLayout *layout;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutSubviewsWithSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (id)backgroundImage;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setBackgroundImage:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)viewElement;

@end
