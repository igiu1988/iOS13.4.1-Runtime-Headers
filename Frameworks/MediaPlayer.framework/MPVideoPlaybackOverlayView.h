/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoPlaybackOverlayView : UIView <MPAVLightweightRoutingControllerDelegate, MPDetailSliderDelegate, MPVideoOverlay, MPVolumeControllerDelegate, UIPopoverPresentationControllerDelegate> {
    MPKnockoutButton * _airplayButton;
    bool  _allowsAudioAndSubtitles;
    bool  _allowsExitFromFullscreen;
    bool  _allowsPictureInPicture;
    bool  _allowsWirelessPlayback;
    UIButton * _audioAndSubtitlesButton;
    MPAudioAndSubtitlesController * _audioAndSubtitlesController;
    bool  _automaticallyHandleTransportControls;
    _UIBackdropView * _bottomBarBackdropView;
    UIView * _bottomBarBottomLayoutGuide;
    NSLayoutConstraint * _bottomBarHeightConstraint;
    UIView * _bottomBarItemsGuide;
    UIView * _bottomBarTopLayoutGuide;
    NSArray * _bottomItems;
    NSLayoutConstraint * _bottomItemsBottomConstraint;
    NSArray * _bottomItemsConstraints;
    NSLayoutConstraint * _bottomItemsLeftConstraint;
    NSLayoutConstraint * _bottomItemsRightConstraint;
    <MPVideoOverlayDelegate> * _delegate;
    UIButton * _doneButton;
    MPKnockoutButton * _fullscreenButton;
    bool  _ignoreTouchUp;
    MPAVItem * _item;
    MPKnockoutButton * _leftButton;
    MPAVLightweightRoutingController * _lightweightRoutingController;
    UIActivityIndicatorView * _loadingIndicator;
    UILabel * _loadingLabel;
    MPMediaControls * _mediaControls;
    long long  _overrideType;
    MPKnockoutButton * _pictureInPictureButton;
    MPKnockoutButton * _playPauseButton;
    MPAVController * _player;
    double  _previousTopBarMargin;
    MPKnockoutButton * _rightButton;
    UIButton * _scaleButton;
    UILabel * _scrubInstructions1;
    UILabel * _scrubInstructions2;
    MPDetailSlider * _scrubber;
    int  _seekDirection;
    bool  _shouldResumePlayback;
    UIStatusBar * _statusBar;
    long long  _style;
    bool  _ticking;
    _UIBackdropView * _topBarBackdropView;
    NSLayoutConstraint * _topBarBottomConstraint;
    NSLayoutConstraint * _topBarHeightConstraint;
    UIView * _topBarItemsGuide;
    UIView * _topBarLayoutGuide;
    NSLayoutConstraint * _topBarLayoutGuideHeightConstraint;
    NSArray * _topBarTraitCollectionConstraints;
    NSArray * _topItems;
    NSArray * _topItemsConstraints;
    NSLayoutConstraint * _topItemsTopConstraint;
    NSLayoutConstraint * _topItemsTrailingConstraint;
    MPVideoView * _videoView;
    UIViewController * _viewControllerForModalPresentationOrientation;
    MPVolumeController * _volumeController;
    MPVolumeSlider * _volumeSlider;
    NSLayoutConstraint * _volumeSliderRightConstraint;
    NSLayoutConstraint * _volumeSliderWidthConstraint;
    unsigned long long  desiredParts;
    unsigned long long  disabledParts;
    bool  navigationBarHidden;
    <MPVideoControllerProtocol> * videoViewController;
    unsigned long long  visibleParts;
}

@property (nonatomic) bool allowsAudioAndSubtitles;
@property (nonatomic) bool allowsDetailScrubbing;
@property (nonatomic) bool allowsExitFromFullscreen;
@property (nonatomic) bool allowsPictureInPicture;
@property (nonatomic) bool allowsScrubbing;
@property (nonatomic) bool allowsWirelessPlayback;
@property (nonatomic) bool automaticallyHandleTransportControls;
@property (nonatomic, readonly) _UIBackdropView *bottomBarBackdropView;
@property (nonatomic, readonly) double bottomBarHeight;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVideoOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic, readonly, retain) UINavigationBar *navigationBar;
@property (nonatomic) bool navigationBarHidden;
@property (setter=_setOverrideType:, nonatomic) long long overrideType;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIBackdropView *topBarBackdropView;
@property (nonatomic) MPVideoView *videoView;
@property (nonatomic) <MPVideoControllerProtocol> *videoViewController;
@property (nonatomic) UIViewController *viewControllerForModalPresentationOrientation;
@property (nonatomic) unsigned long long visibleParts;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_buttonInteractionCanceled:(id)arg1;
- (void)_buttonInteractionEnded:(id)arg1;
- (void)_configureAuxiliaryButtons:(bool)arg1;
- (void)_configureTransportControls;
- (void)_doneButtonTapped:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_handleDismissAudioAndSubtitlesController;
- (void)_hideScrubInstructions;
- (id)_imageNamed:(id)arg1;
- (id)_imageNamed:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)_itemChanged:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (void)_notifyDelegateOfUserEvent:(unsigned long long)arg1;
- (void)_notifyDelegateOfUserEventBegin:(unsigned long long)arg1;
- (void)_notifyDelegateOfUserEventCancel:(unsigned long long)arg1;
- (void)_notifyDelegateOfUserEventEnd:(unsigned long long)arg1;
- (void)_observeControl:(id)arg1;
- (void)_pictureInPictureButtonTapped:(id)arg1;
- (void)_playPauseButtonTapped:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_registerForItemNotifications:(id)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(bool)arg3;
- (void)_setOverrideType:(long long)arg1;
- (void)_setScrubberDuration:(double)arg1;
- (void)_setScrubberValue:(double)arg1;
- (bool)_shouldHideStatusBar;
- (void)_showScrubInstructions;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_startSeeking;
- (void)_tick:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_updateAirplayButton;
- (void)_updateLoadingIndicator;
- (void)_updateScaleButton;
- (void)_updateTopBarBoundsBasedConstraints;
- (void)_updateVolumeImage:(float)arg1;
- (void)_updateVolumeSlider;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (bool)allowsAudioAndSubtitles;
- (bool)allowsDetailScrubbing;
- (bool)allowsExitFromFullscreen;
- (bool)allowsPictureInPicture;
- (bool)allowsScrubbing;
- (bool)allowsWirelessPlayback;
- (bool)automaticallyHandleTransportControls;
- (id)bottomBarBackdropView;
- (double)bottomBarHeight;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToWindow;
- (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)item;
- (void)layoutSubviews;
- (void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(bool)arg2;
- (void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2;
- (id)navigationBar;
- (bool)navigationBarHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)overrideType;
- (id)player;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)removeFromSuperview;
- (void)setAllowsAudioAndSubtitles:(bool)arg1;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setAllowsExitFromFullscreen:(bool)arg1;
- (void)setAllowsPictureInPicture:(bool)arg1;
- (void)setAllowsScrubbing:(bool)arg1;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAutomaticallyHandleTransportControls:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 animateAlongside:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setItem:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideoView:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setViewControllerForModalPresentationOrientation:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (long long)style;
- (id)topBarBackdropView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (bool)updateTimeBasedValues;
- (id)videoView;
- (id)videoViewController;
- (id)viewControllerForModalPresentationOrientation;
- (unsigned long long)visibleParts;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;

@end
