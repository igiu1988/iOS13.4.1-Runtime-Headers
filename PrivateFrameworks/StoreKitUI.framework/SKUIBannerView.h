/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBannerView : UIView {
    UILabel * _artistNameLabel;
    UIView * _bottomBorderView;
    SKUIClientContext * _clientContext;
    UIButton * _closeButton;
    UIImageView * _iconImageView;
    SSLookupItemOffer * _itemOffer;
    UIButton * _itemOfferButton;
    SKUIItemState * _itemState;
    UILabel * _itemStateLabel;
    NSMutableArray * _screenshotImageViews;
    UIView * _separatorView;
    UILabel * _titleLabel;
    float  _userRating;
    UIImageView * _userRatingStarImageView;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UIControl *closeButton;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) SSLookupItemOffer *itemOffer;
@property (nonatomic, readonly) UIControl *itemOfferButton;
@property (nonatomic, retain) SKUIItemState *itemState;
@property (nonatomic, copy) NSArray *screenshotImages;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;

- (void).cxx_destruct;
- (id)_newDefaultLabel;
- (void)_reloadItemState;
- (id)artistName;
- (id)clientContext;
- (id)closeButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemOffer;
- (id)itemOfferButton;
- (id)itemState;
- (void)layoutSubviews;
- (id)screenshotImages;
- (void)setArtistName:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setScreenshotImages:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (float)userRating;

@end
