/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIProductSectionView : UIView {
    UIView * _defaultFocusView;
    UIView * _footerView;
    VUILabel * _headerView;
    NSArray * _infoViews;
    VUIProductMetadataLayout * _layout;
    VUILabel * _prototypeInfoHeaderLabel;
}

@property (nonatomic, retain) UIView *defaultFocusView;
@property (nonatomic, retain) UIView *footerView;
@property (nonatomic, retain) VUILabel *headerView;
@property (nonatomic, retain) NSArray *infoViews;
@property (nonatomic, retain) VUIProductMetadataLayout *layout;
@property (nonatomic, retain) VUILabel *prototypeInfoHeaderLabel;

+ (id)footerDescriptionWithString:(id)arg1 layout:(id)arg2 maxLine:(unsigned long long)arg3 existingView:(id)arg4;
+ (id)footerLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)defaultFocusView;
- (id)footerView;
- (id)headerView;
- (id)infoViews;
- (id)layout;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (id)prototypeInfoHeaderLabel;
- (void)setDefaultFocusView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInfoViews:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setPrototypeInfoHeaderLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
