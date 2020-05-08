/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKVideoPlayerView : UIView {
    AVAsset * _asset;
    NSURL * _assetURL;
    <CLKVideoPlayerViewDelegate> * _delegate;
    long long  _gravityResize;
    unsigned int  _isExpectingPreroll;
    AVPlayerItem * _observedItem;
    UIView * _pausedView;
    bool  _pausedViewEnabled;
    id  _periodicTimeObserver;
    unsigned int  _playRequested;
    AVQueuePlayer * _player;
    AVPlayerItem * _playerItem;
    _CLKPlayerView * _playerView;
    bool  _playing;
    unsigned int  _prerollRequested;
    AVPlayerItem * _queuedItem;
    NSValue * _seekRequested;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekWithTolerance;
    unsigned long long  _servicingRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _willBeginPlayingTime;
}

@property (nonatomic) <CLKVideoPlayerViewDelegate> *delegate;
@property (nonatomic) long long gravityResize;
@property (nonatomic) bool pausedViewEnabled;
@property (nonatomic, readonly) AVQueuePlayer *player;
@property (nonatomic, readonly) bool playing;

+ (void)_prewarm;

- (void).cxx_destruct;
- (id)_createPlayerItemForVideoURL:(id)arg1;
- (void)_handleDidPlayToEndTime:(id)arg1;
- (void)_hidePausedView;
- (void)_observePlayerItem:(id)arg1;
- (void)_pause;
- (void)_performNextRequest;
- (void)_periodicTimeObserverChanged:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_play;
- (void)_preroll;
- (bool)_readyToPerformRequest;
- (void)_seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_showPausedView;
- (void)_stopObservingPlayerItem;
- (void)dealloc;
- (id)delegate;
- (void)expectPreroll;
- (long long)gravityResize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlaybackReady;
- (void)layoutSubviews;
- (void)loadVideo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (bool)pausedViewEnabled;
- (void)play;
- (id)player;
- (bool)playing;
- (void)prepareNextQueuedVideo;
- (void)preroll;
- (void)queueVideo:(id)arg1;
- (void)resetRequestState;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 tolerance:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setGravityResize:(long long)arg1;
- (void)setPausedViewEnabled:(bool)arg1;

@end
