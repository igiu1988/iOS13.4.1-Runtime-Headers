/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIHeaderView : UIView <RUIHeader> {
    bool  _customIconSize;
    RUILinkLabel * _detailHeaderLabel;
    UILabel * _headerLabel;
    UIImageView * _iconView;
    int  _imageAlignment;
    bool  _isFirstSection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    UILabel * _subHeaderLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasIcon;
- (double)_headerOffsetInView:(id)arg1;
- (double)_imageTitlePaddingInView:(id)arg1;
- (double)_titleSubtitlePaddingInView:(id)arg1;
- (id)detailHeaderLabel;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)headerLabel;
- (id)iconImage;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (void)setDetailHeaderColor:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setHeaderColor:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setSubHeaderAlignment:(long long)arg1;
- (void)setSubHeaderColor:(id)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderLabel;

@end
