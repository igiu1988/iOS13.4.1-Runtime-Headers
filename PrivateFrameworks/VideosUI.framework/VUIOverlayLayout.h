/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOverlayLayout : TVViewLayout {
    TVImageLayout * _badgeLayout;
    bool  _isDarkTheme;
    long long  _overlayType;
    VUIProgressBarLayout * _progressBarLayout;
    VUITextBadgeLayout * _textBadgeLayout;
    VUITextLayout * _titleLayout;
}

@property (nonatomic, retain) TVImageLayout *badgeLayout;
@property (nonatomic) long long overlayType;
@property (nonatomic, retain) VUIProgressBarLayout *progressBarLayout;
@property (nonatomic, retain) VUITextBadgeLayout *textBadgeLayout;
@property (nonatomic, retain) VUITextLayout *titleLayout;

+ (id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 element:(id)arg3;
+ (id)layoutWithLayout:(id)arg1 overlayType:(long long)arg2 mediaItem:(id)arg3;

- (void).cxx_destruct;
- (id)_editorialTitleLayout;
- (id)_navBrickTitleLayout;
- (id)_ribbonTitleLayout;
- (id)_spotlightTitleLayout;
- (void)_updateLayoutWithElement:(id)arg1 andType:(long long)arg2;
- (void)_updateLayoutWithMediaItem:(id)arg1 type:(long long)arg2;
- (id)badgeLayout;
- (long long)overlayType;
- (id)progressBarLayout;
- (void)setBadgeLayout:(id)arg1;
- (void)setOverlayType:(long long)arg1;
- (void)setProgressBarLayout:(id)arg1;
- (void)setTextBadgeLayout:(id)arg1;
- (void)setTitleLayout:(id)arg1;
- (id)textBadgeLayout;
- (id)titleLayout;

@end
