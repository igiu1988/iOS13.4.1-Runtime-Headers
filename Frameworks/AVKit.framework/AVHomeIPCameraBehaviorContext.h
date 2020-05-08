/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVHomeIPCameraBehaviorContext : NSObject <AVBehaviorContext, AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, AVScrubbing> {
    AVHomeIPCameraBehavior * _behavior;
    bool  _livePreviewActive;
    struct CGSize { 
        double width; 
        double height; 
    }  _livePreviewAspectRatio;
    UIView * _livePreviewContainerView;
    AVHomeIPCameraPlayerController * _livePreviewPlayerController;
    bool  _microphoneEnabled;
    AVObservationController * _observationController;
    bool  _playbackControlsIncludeDisplayModeControls;
    bool  _playbackControlsIncludeTransportControls;
    bool  _playbackControlsIncludeVolumeControls;
    bool  _playbackControlsShowsLoadingIndicator;
    AVPlayerController * _playerControllerToRestore;
    AVPlayerViewController * _playerViewController;
    AVZoomingBehavior * _zoomingBehavior;
    bool  _zoomingEnabled;
}

@property (nonatomic) AVHomeIPCameraBehavior *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLivePreviewActive, nonatomic) bool livePreviewActive;
@property (nonatomic) struct CGSize { double x1; double x2; } livePreviewAspectRatio;
@property (nonatomic, readonly) UIView *livePreviewContainerView;
@property (nonatomic) AVHomeIPCameraPlayerController *livePreviewPlayerController;
@property (getter=isMicrophoneEnabled, nonatomic) bool microphoneEnabled;
@property (nonatomic, retain) AVObservationController *observationController;
@property (nonatomic) bool playbackControlsIncludeDisplayModeControls;
@property (nonatomic) bool playbackControlsIncludeTransportControls;
@property (nonatomic) bool playbackControlsIncludeVolumeControls;
@property (nonatomic) bool playbackControlsShowsLoadingIndicator;
@property (nonatomic, retain) AVPlayerController *playerControllerToRestore;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVZoomingBehavior *zoomingBehavior;
@property (getter=isZoomingEnabled, nonatomic) bool zoomingEnabled;

- (void).cxx_destruct;
- (void)_updatePlaybackControlsControllerAndZoomingBehavior;
- (void)beginScrubbing;
- (id)behavior;
- (void)dealloc;
- (void)didAddBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (void)didStopPictureInPicture;
- (void)endScrubbing;
- (id)initWithAVKitOwner:(id)arg1;
- (bool)isLivePreviewActive;
- (bool)isMicrophoneEnabled;
- (bool)isZoomingEnabled;
- (struct CGSize { double x1; double x2; })livePreviewAspectRatio;
- (id)livePreviewContainerView;
- (id)livePreviewPlayerController;
- (id)observationController;
- (bool)playbackControlsIncludeDisplayModeControls;
- (bool)playbackControlsIncludeTransportControls;
- (bool)playbackControlsIncludeVolumeControls;
- (bool)playbackControlsShowsLoadingIndicator;
- (id)playerControllerToRestore;
- (id)playerViewController;
- (void)scrubToTime:(double)arg1 resolution:(double)arg2;
- (void)setBackgroundColor:(id)arg1 forContainerOfControlItem:(id)arg2;
- (void)setBehavior:(id)arg1;
- (void)setLivePreviewActive:(bool)arg1;
- (void)setLivePreviewAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLivePreviewPlayerController:(id)arg1;
- (void)setMicrophoneEnabled:(bool)arg1;
- (void)setObservationController:(id)arg1;
- (void)setPlaybackControlsIncludeDisplayModeControls:(bool)arg1;
- (void)setPlaybackControlsIncludeTransportControls:(bool)arg1;
- (void)setPlaybackControlsIncludeVolumeControls:(bool)arg1;
- (void)setPlaybackControlsShowsLoadingIndicator:(bool)arg1;
- (void)setPlayerControllerToRestore:(id)arg1;
- (void)setZoomingBehavior:(id)arg1;
- (void)setZoomingEnabled:(bool)arg1;
- (void)viewDidLoad;
- (void)willAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)willStartPictureInPictureWithViewController:(id)arg1;
- (id)zoomingBehavior;

@end
