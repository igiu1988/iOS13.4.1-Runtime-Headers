/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPhysicalCardArtworkView : UIView {
    UIImage * _artworkImage;
    UIImageView * _artworkImageView;
    UILabel * _nameLabel;
    NSString * _nameOnCard;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, copy) NSString *nameOnCard;

- (void).cxx_destruct;
- (id)artworkImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nameOnCard;
- (void)setArtworkImage:(id)arg1;
- (void)setNameOnCard:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
