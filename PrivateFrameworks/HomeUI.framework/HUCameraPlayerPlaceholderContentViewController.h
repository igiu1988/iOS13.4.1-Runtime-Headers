/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver, HFPosterFrameImageObserver> {
    bool  _cameraPlayerHasContentToShow;
    HMCameraClip * _lastRequestedClip;
    UIImageView * _placeholderImageView;
    HFCameraPlaybackEngine * _playbackEngine;
}

@property (nonatomic) bool cameraPlayerHasContentToShow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMCameraClip *lastRequestedClip;
@property (nonatomic, retain) UIImageView *placeholderImageView;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateState:(bool)arg1 placeholderImage:(id)arg2;
- (bool)_shouldHidePlaceholderContentForCurrentAccessMode;
- (void)_updatePlaceholderContentAnimated:(bool)arg1;
- (void)_updateStateAnimated:(bool)arg1 usingBlock:(id /* block */)arg2;
- (bool)cameraPlayerHasContentToShow;
- (void)hu_reloadData;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)lastRequestedClip;
- (void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4;
- (id)placeholderImageView;
- (id)playbackEngine;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)setCameraPlayerHasContentToShow:(bool)arg1;
- (void)setLastRequestedClip:(id)arg1;
- (void)setPlaceholderImageView:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)viewDidLoad;

@end
