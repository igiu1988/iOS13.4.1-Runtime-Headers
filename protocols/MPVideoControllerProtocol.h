/* Generated by EzioChiu.
 */

@protocol MPVideoControllerProtocol <MPControllerProtocol>

@required

- (bool)TVOutEnabled;
- (bool)allowsDetailScrubbing;
- (bool)allowsWirelessPlayback;
- (bool)alwaysAllowHidingControlsOverlay;
- (long long)artworkImageStyle;
- (bool)attemptAutoPlayWhenControlsHidden;
- (bool)autoPlayWhenLikelyToKeepUp;
- (UIView *)backgroundView;
- (UIColor *)backstopColor;
- (bool)canAnimateControlsOverlay;
- (bool)canChangeScaleMode;
- (bool)canHideOverlay:(bool)arg1;
- (bool)canShowControlsOverlay;
- (bool)controlsOverlayVisible;
- (unsigned long long)desiredParts;
- (bool)disableAutoRotation;
- (bool)disableControlsAutohide;
- (unsigned long long)disabledParts;
- (bool)displayPlaybackErrorAlerts;
- (void)displayVideoView;
- (void)exitFullscreen;
- (_UIHostedWindow *)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (bool)inlinePlaybackUsesTVOut;
- (bool)isFullscreen;
- (long long)itemTypeOverride;
- (UIImage *)posterImage;
- (void)prepareToDisplayVideo;
- (long long)scaleMode;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(bool)arg1;
- (void)setArtworkImageStyle:(long long)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(bool)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
- (void)setBackstopColor:(UIColor *)arg1;
- (void)setCanAnimateControlsOverlay:(bool)arg1;
- (void)setCanShowControlsOverlay:(bool)arg1;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(bool)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisableAutoRotation:(bool)arg1;
- (void)setDisableControlsAutohide:(bool)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDisplayPlaybackErrorAlerts:(bool)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setInlinePlaybackUsesTVOut:(bool)arg1;
- (void)setItemTypeOverride:(long long)arg1;
- (void)setOwnsStatusBar:(bool)arg1;
- (void)setPosterImage:(UIImage *)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleModeOverride:(long long)arg1 animated:(bool)arg2;
- (void)setTVOutEnabled:(bool)arg1;
- (void)setUseHostedWindowWhenFullscreen:(bool)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (UIView<MPVideoOverlay> *)videoOverlayView;
- (MPVideoView *)videoView;
- (bool)viewControllerWillRequestExit;
- (unsigned long long)visibleParts;

@end
