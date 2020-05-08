/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSiteIconView : UIView {
    UIView * _backgroundView;
    WebBookmark * _bookmark;
    _SFHairlineBorderView * _borderView;
    UIImageView * _imageView;
    UIImage * _leadingImage;
    bool  _modernImageIsTransparent;
    UILabel * _monogramLabel;
    UIColor * _preferredBackgroundColor;
    UIImageView * _shadowView;
    bool  _shouldShowDropShadow;
    bool  _shouldUseModernStyling;
    long long  _state;
    id  _touchIconRequestToken;
    <_SFSiteIconViewUpdateObserver> * _updateObserver;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *leadingImage;
@property (nonatomic) bool shouldShowDropShadow;
@property (nonatomic) bool shouldUseModernStyling;
@property (nonatomic) <_SFSiteIconViewUpdateObserver> *updateObserver;

- (void).cxx_destruct;
- (void)_cancelTouchIconRequest;
- (void)_displayDefaultFolderIcon;
- (id)_effectiveBackgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageFrame;
- (long long)_inferredIconSize;
- (double)_monogramFontSize;
- (void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setImage:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2;
- (void)_setSiteIcon:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setState:(long long)arg1;
- (id)_tintedFolderImage;
- (void)_updateMonogramLabelSizeAndFont;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)arg1;
- (id)bookmark;
- (void)dealloc;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leadingImage;
- (void)setBookmark:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setShouldShowDropShadow:(bool)arg1;
- (void)setShouldUseModernStyling:(bool)arg1;
- (void)setUpdateObserver:(id)arg1;
- (bool)shouldShowDropShadow;
- (bool)shouldUseModernStyling;
- (void)updateBookmarkData;
- (id)updateObserver;

@end
