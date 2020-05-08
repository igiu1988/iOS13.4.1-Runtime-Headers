/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIBackgroundMediaController : UIViewController {
    TVImageProxy * _alphaImageProxy;
    _TVImageView * _alphaProxyImageView;
    bool  _automaticPlaybackStart;
    bool  _automaticPlaybackStop;
    AVPlayerViewController * _avPlayerViewController;
    bool  _clearPreviousImageBeforeLoading;
    TVImageProxy * _currentImageProxy;
    unsigned long long  _deactivationReasons;
    bool  _didWeCreatePlayer;
    bool  _foreground;
    double  _imageAnimationDuration;
    unsigned long long  _imageAnimationOptions;
    double  _imageTransitionInterval;
    VUIMediaInfo * _mediaInfo;
    bool  _mutePlaybackInBackground;
    NSString * _name;
    bool  _observingPictureInPictureActive;
    NSTimer * _pauseStateTimeoutTimer;
    TVImageProxy * _pendingImageProxy;
    TVPPlaylist * _pendingPlaylist;
    UIViewController * _playbackContainerController;
    bool  _playbackEnabled;
    NSDate * _playbackLoadingStartDate;
    NSTimer * _playbackLoadingTimer;
    TVPPlayer * _player;
    bool  _playerReadyToBePlayed;
    bool  _popWhenPlayerStops;
    _TVImageView * _proxyImageView;
    bool  _shouldAnimateOverlayView;
    bool  _shouldPlayAfterAppBecomesActive;
    bool  _showsVideoControls;
    unsigned long long  _state;
    TVPStateMachine * _stateMachine;
    bool  _stopPlayerWhenViewDisappears;
    bool  _stopWhenAnotherMediaControllerStarts;
    NSString * _titleForLogging;
    unsigned long long  _vpafPlaybackStartReason;
    unsigned long long  _vpafPlaybackStopReason;
}

@property (nonatomic, retain) TVImageProxy *alphaImageProxy;
@property (nonatomic, retain) _TVImageView *alphaProxyImageView;
@property (getter=isAutomaticPlaybackStart, nonatomic) bool automaticPlaybackStart;
@property (getter=isAutomaticPlaybackStop, nonatomic) bool automaticPlaybackStop;
@property (nonatomic, retain) AVPlayerViewController *avPlayerViewController;
@property (getter=isBackgrounded, nonatomic, readonly) bool backgrounded;
@property (nonatomic) bool clearPreviousImageBeforeLoading;
@property (nonatomic, retain) TVImageProxy *currentImageProxy;
@property (nonatomic) unsigned long long deactivationReasons;
@property (nonatomic) bool didWeCreatePlayer;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic) double imageAnimationDuration;
@property (nonatomic) unsigned long long imageAnimationOptions;
@property (nonatomic) double imageTransitionInterval;
@property (nonatomic, copy) VUIMediaInfo *mediaInfo;
@property (nonatomic) bool mutePlaybackInBackground;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) bool observingPictureInPictureActive;
@property (nonatomic) NSTimer *pauseStateTimeoutTimer;
@property (nonatomic, retain) TVImageProxy *pendingImageProxy;
@property (nonatomic, retain) TVPPlaylist *pendingPlaylist;
@property (nonatomic, retain) UIViewController *playbackContainerController;
@property (getter=isPlaybackEnabled, nonatomic) bool playbackEnabled;
@property (nonatomic, retain) NSDate *playbackLoadingStartDate;
@property (nonatomic) NSTimer *playbackLoadingTimer;
@property (nonatomic, retain) TVPPlayer *player;
@property (getter=isPlayerReadyToBePlayed, nonatomic) bool playerReadyToBePlayed;
@property (nonatomic) bool popWhenPlayerStops;
@property (nonatomic, retain) _TVImageView *proxyImageView;
@property (nonatomic) bool shouldAnimateOverlayView;
@property (nonatomic) bool shouldPlayAfterAppBecomesActive;
@property (nonatomic) bool showsVideoControls;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (getter=shouldStopPlayerWhenViewDisappears, nonatomic) bool stopPlayerWhenViewDisappears;
@property (getter=shouldStopWhenAnotherMediaControllerStarts, nonatomic) bool stopWhenAnotherMediaControllerStarts;
@property (nonatomic, copy) NSString *titleForLogging;
@property (nonatomic) unsigned long long vpafPlaybackStartReason;
@property (nonatomic) unsigned long long vpafPlaybackStopReason;

- (void).cxx_destruct;
- (void)_addAlphaProxyImageViewIfNeeded;
- (void)_addContentViewIfNeeded;
- (void)_addOverlayViewAnimatedIfNeeded:(bool)arg1 dismissAfter:(double)arg2;
- (void)_addPlaybackViewControllerForPlayback;
- (void)_addProxyImageView;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (bool)_canPause;
- (void)_cleanUpEverything;
- (void)_cleanUpEverythingPlaybackRelated;
- (void)_delayLoadImage:(id)arg1;
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;
- (void)_handleApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (void)_mediaControllerStartedPlayback:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_registerForApplicationStateNotifications;
- (void)_registerPlayerNotifications;
- (void)_registerStateMachineHandlers;
- (void)_removeOverlayView:(id)arg1 animated:(bool)arg2;
- (void)_removePlaybackViewController;
- (void)_removeProxyImageView;
- (void)_setAlphaImageProxy:(id)arg1;
- (void)_setImageProxies:(id)arg1;
- (void)_setPlaylist:(id)arg1;
- (bool)_shouldPausePlaybackDueToDeactivationReasons;
- (void)_stateDidChangeFromState:(id)arg1 toState:(id)arg2 onEvent:(id)arg3 context:(id)arg4 userInfo:(id)arg5;
- (void)_swapActiveMedia:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_unregisterPlayerNotifications;
- (void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg1;
- (void)_updateMediaInfo;
- (void)_updatePlayerMuteStateForBackgroundPlaybackWithReason:(id)arg1;
- (id)alphaImageProxy;
- (id)alphaProxyImageView;
- (id)avPlayerViewController;
- (bool)clearPreviousImageBeforeLoading;
- (id)currentImageProxy;
- (unsigned long long)deactivationReasons;
- (void)dealloc;
- (bool)didWeCreatePlayer;
- (double)imageAnimationDuration;
- (unsigned long long)imageAnimationOptions;
- (double)imageTransitionInterval;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAutomaticPlaybackStart;
- (bool)isAutomaticPlaybackStop;
- (bool)isBackgrounded;
- (bool)isForeground;
- (bool)isPlaybackEnabled;
- (bool)isPlayerReadyToBePlayed;
- (id)mediaInfo;
- (bool)mutePlaybackInBackground;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)observingPictureInPictureActive;
- (void)pause;
- (id)pauseStateTimeoutTimer;
- (id)pendingImageProxy;
- (id)pendingPlaylist;
- (void)play;
- (id)playbackContainerController;
- (id)playbackLoadingStartDate;
- (id)playbackLoadingTimer;
- (id)player;
- (bool)popWhenPlayerStops;
- (id)proxyImageView;
- (void)setAlphaImageProxy:(id)arg1;
- (void)setAlphaProxyImageView:(id)arg1;
- (void)setAutomaticPlaybackStart:(bool)arg1;
- (void)setAutomaticPlaybackStop:(bool)arg1;
- (void)setAvPlayerViewController:(id)arg1;
- (void)setClearPreviousImageBeforeLoading:(bool)arg1;
- (void)setCurrentImageProxy:(id)arg1;
- (void)setDeactivationReasons:(unsigned long long)arg1;
- (void)setDidWeCreatePlayer:(bool)arg1;
- (void)setForeground:(bool)arg1;
- (void)setImageAnimationDuration:(double)arg1;
- (void)setImageAnimationOptions:(unsigned long long)arg1;
- (void)setImageTransitionInterval:(double)arg1;
- (void)setMediaInfo:(id)arg1;
- (void)setMutePlaybackInBackground:(bool)arg1;
- (void)setObservingPictureInPictureActive:(bool)arg1;
- (void)setPauseStateTimeoutTimer:(id)arg1;
- (void)setPendingImageProxy:(id)arg1;
- (void)setPendingPlaylist:(id)arg1;
- (void)setPlaybackContainerController:(id)arg1;
- (void)setPlaybackEnabled:(bool)arg1;
- (void)setPlaybackLoadingStartDate:(id)arg1;
- (void)setPlaybackLoadingTimer:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerReadyToBePlayed:(bool)arg1;
- (void)setPopWhenPlayerStops:(bool)arg1;
- (void)setProxyImageView:(id)arg1;
- (void)setShouldAnimateOverlayView:(bool)arg1;
- (void)setShouldPlayAfterAppBecomesActive:(bool)arg1;
- (void)setShowsVideoControls:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setStopPlayerWhenViewDisappears:(bool)arg1;
- (void)setStopWhenAnotherMediaControllerStarts:(bool)arg1;
- (void)setTitleForLogging:(id)arg1;
- (void)setVpafPlaybackStartReason:(unsigned long long)arg1;
- (void)setVpafPlaybackStopReason:(unsigned long long)arg1;
- (bool)shouldAnimateOverlayView;
- (bool)shouldPlayAfterAppBecomesActive;
- (bool)shouldStopPlayerWhenViewDisappears;
- (bool)shouldStopWhenAnotherMediaControllerStarts;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showAlphaImage:(bool)arg1 animated:(bool)arg2;
- (bool)showsVideoControls;
- (unsigned long long)state;
- (id)stateMachine;
- (void)stop;
- (id)titleForLogging;
- (void)transitionToForeground:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (unsigned long long)vpafPlaybackStartReason;
- (unsigned long long)vpafPlaybackStopReason;

@end
