/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView {
    NSString * _headerTitle;
    VUISeparatorView * _separatorView;
    VUILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUILabel *titleLabel;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (id)headerTitle;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setHeaderTitle:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
