/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraPlaybackEngine : NSObject <HFCameraClipPlayerDelegate, HFCameraLiveStreamControllerDelegate, HMCameraClipManagerObserver> {
    HMCameraProfile * _cameraProfile;
    HMCameraClipManager * _clipManager;
    <HFCameraClipPlaying> * _clipPlayer;
    id /* block */  _clipPlayerBuilder;
    NSObject<OS_dispatch_queue> * _clipQueue;
    <HFCameraClipScrubbing> * _clipScrubber;
    unsigned long long  _engineMode;
    HMHome * _home;
    long long  _lastPlayerTimeControlStatus;
    NSDate * _lastRequestedClipPlaybackDate;
    HMCameraSource * _liveCameraSource;
    <HFCameraLiveStreamControlling> * _liveStreamController;
    bool  _microphoneEnabled;
    NADelegateDispatcher * _observerDispatcher;
    NSMapTable * _observerStates;
    bool  _pictureInPictureModeActive;
    unsigned long long  _playbackContentType;
    NSError * _playbackError;
    bool  _prefersAudioEnabled;
    bool  _scrubbing;
    unsigned long long  _scrubbingInProgressCount;
    bool  _shouldBypassVideoFetchRequest;
    bool  _streamAudioEnabled;
    float  _streamAudioVolume;
    unsigned long long  _timeControlStatus;
    unsigned long long  _timelineState;
    bool  _userScrubbing;
    bool  _wantsToPlay;
}

@property (nonatomic, retain) HMCameraProfile *cameraProfile;
@property (nonatomic, retain) HMCameraClipManager *clipManager;
@property (nonatomic, readonly) <HFCameraClipPlaying> *clipPlayer;
@property (nonatomic, readonly, copy) id /* block */ clipPlayerBuilder;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clipQueue;
@property (nonatomic, readonly) <HFCameraClipScrubbing> *clipScrubber;
@property (nonatomic, readonly) HMCameraClip *currentClip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long engineMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) long long lastPlayerTimeControlStatus;
@property (nonatomic, copy) NSDate *lastRequestedClipPlaybackDate;
@property (nonatomic, retain) HMCameraSource *liveCameraSource;
@property (nonatomic, readonly) <HFCameraLiveStreamControlling> *liveStreamController;
@property (getter=isMicrophoneEnabled, nonatomic) bool microphoneEnabled;
@property (nonatomic, readonly) NADelegateDispatcher *observerDispatcher;
@property (nonatomic, readonly) NSMapTable *observerStates;
@property (nonatomic, readonly, copy) NSArray *observers;
@property (getter=isPictureInPictureModeActive, nonatomic) bool pictureInPictureModeActive;
@property (nonatomic) unsigned long long playbackContentType;
@property (nonatomic, retain) NSError *playbackError;
@property (nonatomic, retain) HFCameraPlaybackPosition *playbackPosition;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic) bool prefersAudioEnabled;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (nonatomic) unsigned long long scrubbingInProgressCount;
@property (nonatomic) bool shouldBypassVideoFetchRequest;
@property (getter=isStreamAudioEnabled, nonatomic) bool streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timeControlStatus;
@property (nonatomic) unsigned long long timelineState;
@property (getter=isUserScrubbing, nonatomic) bool userScrubbing;
@property (nonatomic) bool wantsToPlay;

- (void).cxx_destruct;
- (id)_derivedPlaybackError;
- (unsigned long long)_derivedTimeControlStatus;
- (void)_setMicrophoneEnabled:(bool)arg1 notifyObservers:(bool)arg2;
- (void)_setPlayerVolume:(float)arg1 notifyObservers:(bool)arg2;
- (void)_setStreamAudioEnabled:(bool)arg1 notifyObservers:(bool)arg2;
- (void)_setupClipPlayerWithClipManager:(id)arg1;
- (void)_setupLiveStreamController:(id)arg1;
- (void)_setupTimeObservationForObserver:(id)arg1;
- (void)_updatePlaybackStateNotifyingObservers:(bool)arg1;
- (void)_updatePlaybackStateNotifyingObservers:(bool)arg1 rebuildClipPlayerIfNeeded:(bool)arg2;
- (void)_updateStateForRequestedPlaybackPosition:(id)arg1 notifyObservers:(bool)arg2;
- (void)addObserver:(id)arg1 withOptions:(id)arg2;
- (void)beginScrubbing;
- (id)cameraProfile;
- (id)clipManager;
- (void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2;
- (void)clipManager:(id)arg1 didUpdateClips:(id)arg2;
- (id)clipPlayer;
- (void)clipPlayer:(id)arg1 didUpdateError:(id)arg2 isFatal:(bool)arg3;
- (void)clipPlayer:(id)arg1 didUpdateMuted:(bool)arg2;
- (void)clipPlayer:(id)arg1 didUpdateTimeControlStatus:(long long)arg2;
- (id /* block */)clipPlayerBuilder;
- (void)clipPlayerDidPlayToEndTime:(id)arg1;
- (id)clipQueue;
- (id)clipScrubber;
- (id)currentClip;
- (void)dealloc;
- (void)endScrubbing;
- (unsigned long long)engineMode;
- (id)home;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isLiveStreaming;
- (bool)isMicrophoneEnabled;
- (bool)isPictureInPictureModeActive;
- (bool)isScrubbing;
- (bool)isStreamAudioEnabled;
- (bool)isUserScrubbing;
- (long long)lastPlayerTimeControlStatus;
- (id)lastRequestedClipPlaybackDate;
- (id)liveCameraSource;
- (id)liveStreamController;
- (void)modifyPlaybackFromSender:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)observerDispatcher;
- (id)observerStates;
- (id)observers;
- (void)pause;
- (void)play;
- (unsigned long long)playbackContentType;
- (id)playbackError;
- (id)playbackPosition;
- (id)player;
- (bool)prefersAudioEnabled;
- (void)removeObserver:(id)arg1;
- (unsigned long long)scrubbingInProgressCount;
- (void)setCameraProfile:(id)arg1;
- (void)setClipManager:(id)arg1;
- (void)setClipQueue:(id)arg1;
- (void)setEngineMode:(unsigned long long)arg1;
- (void)setHome:(id)arg1;
- (void)setLastPlayerTimeControlStatus:(long long)arg1;
- (void)setLastRequestedClipPlaybackDate:(id)arg1;
- (void)setLiveCameraSource:(id)arg1;
- (void)setMicrophoneEnabled:(bool)arg1;
- (void)setPictureInPictureModeActive:(bool)arg1;
- (void)setPlaybackContentType:(unsigned long long)arg1;
- (void)setPlaybackError:(id)arg1;
- (void)setPlaybackPosition:(id)arg1;
- (void)setPrefersAudioEnabled:(bool)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setScrubbingInProgressCount:(unsigned long long)arg1;
- (void)setShouldBypassVideoFetchRequest:(bool)arg1;
- (void)setStreamAudioEnabled:(bool)arg1;
- (void)setStreamAudioVolume:(float)arg1;
- (void)setTimeControlStatus:(unsigned long long)arg1;
- (void)setTimelineState:(unsigned long long)arg1;
- (void)setUserScrubbing:(bool)arg1;
- (void)setWantsToPlay:(bool)arg1;
- (bool)shouldBypassVideoFetchRequest;
- (float)streamAudioVolume;
- (void)streamControllerStateDidUpdate:(id)arg1;
- (unsigned long long)timeControlStatus;
- (unsigned long long)timelineState;
- (void)updateLiveStreamForCameraProfile:(id)arg1;
- (void)updatePlaybackPositionToDate:(id)arg1 usingClip:(id)arg2;
- (bool)wantsToPlay;

@end
