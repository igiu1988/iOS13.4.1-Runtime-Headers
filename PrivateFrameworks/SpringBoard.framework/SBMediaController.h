/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMediaController : NSObject <FBSDisplayObserving, MPAVRoutingControllerDelegate, SBAVSystemControllerCacheObserver> {
    struct IONotificationPort { } * _arubaDisplayPortNotificationPort;
    NSNumber * _audioCategoryMusicVolume;
    SBAVSystemControllerCache * _avCache;
    bool  _debounceVolumeRepeat;
    SBDirectToAirPlayController * _directToAirPlayController;
    NSDate * _lastActivityDate;
    int  _lastMediaRemoteAppActivityStatus;
    bool  _lastNowPlayingAppIsPlaying;
    SBApplication * _lastNowPlayingApplication;
    int  _manualVolumeChangeCount;
    NSDictionary * _nowPlayingInfo;
    int  _nowPlayingProcessPID;
    int  _numberOfVolumeDecreasesSinceDownButtonDown;
    float  _pendingVolumeChange;
    MPAVRoutingController * _routingController;
    bool  _screenSharingSetsStatusBarOverride;
    NSTimer * _screenSharingStatusBarOverrideTimer;
    SBSStatusBarStyleOverridesAssertion * _screenSharingStatusBarStyleOverrideAssertion;
    bool  _screenSharingViaAVSystemController;
    bool  _screenSharingViaDisplayMonitor;
    bool  _suppressHUD;
    NSTimer * _videoOutStatusBarOverrideTimer;
    SBSStatusBarStyleOverridesAssertion * _videoOutStatusBarStyleOverrideAssertion;
    NSTimer * _volumeCommitTimer;
    SBVolumeControl * _volumeControl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastActivityDate;
@property (nonatomic, readonly) SBApplication *nowPlayingApplication;
@property (nonatomic) int nowPlayingProcessPID;
@property (readonly) Class superclass;
@property bool suppressHUD;

+ (bool)applicationCanBeConsideredNowPlaying:(id)arg1;
+ (void)sendResetPlaybackTimeoutCommand;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationActivityStatusDidChange:(id)arg1;
- (void)_authenticationStateChanged:(id)arg1;
- (void)_clearScreenSharingStatusBarStyleOverride;
- (void)_clearVideoOutStatusBarStyleOverride;
- (bool)_displayMonitorHasAConnectedExternalIdentity;
- (void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1;
- (void)_notifyThatScreenSharingChanged;
- (void)_nowPlayingAppDidExit:(id)arg1;
- (id)_nowPlayingInfo;
- (void)_registerForNotifications;
- (bool)_sendMediaCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_setNowPlayingApplication:(id)arg1;
- (void)_startVideoOutStatusBarStyleOverride;
- (void)_unregisterForNotifications;
- (void)_updateAVRoutes;
- (void)_updateDisplayMonitorState;
- (void)_updateLastRecentActivityDate;
- (void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg1;
- (bool)addTrackToWishListForEventSource:(long long)arg1;
- (bool)banTrackForEventSource:(long long)arg1;
- (bool)beginSeek:(int)arg1 eventSource:(long long)arg2;
- (void)cache:(id)arg1 didUpdateAirplayDisplayActive:(bool)arg2;
- (void)cacheDidRebuildAfterServerDeath:(id)arg1;
- (void)cancelVolumeEvent;
- (bool)changeTrack:(int)arg1 eventSource:(long long)arg2;
- (void)dealloc;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (bool)endSeek:(int)arg1 eventSource:(long long)arg2;
- (bool)handsetRouteIsSelected;
- (bool)hasTrack;
- (id)init;
- (bool)isApplicationActivityActive;
- (bool)isFirstTrack;
- (bool)isLastTrack;
- (bool)isPaused;
- (bool)isPlaying;
- (bool)isScreenSharing;
- (id)lastActivityDate;
- (bool)likeTrackForEventSource:(long long)arg1;
- (id)nameOfPickedRoute;
- (id)nowPlayingApplication;
- (int)nowPlayingProcessPID;
- (bool)pauseForEventSource:(long long)arg1;
- (bool)playForEventSource:(long long)arg1;
- (bool)routeOtherThanHandsetIsAvailable;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setNowPlayingProcessPID:(int)arg1;
- (bool)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2;
- (void)setSuppressHUD:(bool)arg1;
- (bool)stopForEventSource:(long long)arg1;
- (bool)suppressHUD;
- (bool)togglePlayPauseForEventSource:(long long)arg1;
- (bool)toggleRepeatForEventSource:(long long)arg1;
- (bool)toggleShuffleForEventSource:(long long)arg1;
- (void)updateScreenSharingStatusBarStyleOverride;
- (bool)volumeControlIsAvailable;
- (bool)wirelessDisplayRouteIsPicked;

@end
