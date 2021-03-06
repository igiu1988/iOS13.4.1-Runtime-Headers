/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISportsOverlayLayout : TVViewLayout {
    TVImageLayout * _appImageLayout;
    TVImageLayout * _logoImageLayout;
    VUIScoreboardLayout * _scoreboardLayout;
    VUITextBadgeLayout * _textBadgeLayout;
}

@property (nonatomic, retain) TVImageLayout *appImageLayout;
@property (nonatomic, retain) TVImageLayout *logoImageLayout;
@property (nonatomic, retain) VUIScoreboardLayout *scoreboardLayout;
@property (nonatomic, retain) VUITextBadgeLayout *textBadgeLayout;

+ (long long)_scoreboardTypeForElement:(id)arg1;
+ (id)_sportsOverlayALayoutWithElement:(id)arg1;
+ (id)_sportsOverlayBLayoutWithElement:(id)arg1;
+ (id)_sportsOverlayCLayoutWithElement:(id)arg1;
+ (id)overlayLayoutForElement:(id)arg1 cardLayoutType:(long long)arg2;

- (void).cxx_destruct;
- (id)appImageLayout;
- (id)logoImageLayout;
- (id)scoreboardLayout;
- (void)setAppImageLayout:(id)arg1;
- (void)setLogoImageLayout:(id)arg1;
- (void)setScoreboardLayout:(id)arg1;
- (void)setTextBadgeLayout:(id)arg1;
- (id)textBadgeLayout;

@end
