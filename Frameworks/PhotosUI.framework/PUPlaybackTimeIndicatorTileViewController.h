/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPlaybackTimeIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver, PUBrowsingVideoPlayerTimeObserver, PUBrowsingViewModelChangeObserver> {
    NSDate * __forcedIndicatorVisibilityEndDate;
    long long  __indicatorFormat;
    bool  __isIndicatorVisible;
    PUPlaybackTimeLabel * __label;
    <PUPlaybackTimeIndicatorTileViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToCanFlashIndicator; 
    }  _delegateFlags;
    PUBrowsingVideoPlayer * _videoPlayer;
    PUBrowsingViewModel * _viewModel;
}

@property (setter=_setForcedIndicatorVisibilityEndDate:, nonatomic, retain) NSDate *_forcedIndicatorVisibilityEndDate;
@property (setter=_setIndicatorFormat:, nonatomic) long long _indicatorFormat;
@property (setter=_setIndicatorVisible:, nonatomic) bool _isIndicatorVisible;
@property (nonatomic, readonly) PUPlaybackTimeLabel *_label;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPlaybackTimeIndicatorTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingVideoPlayer *videoPlayer;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

+ (struct CGSize { double x1; double x2; })playbackTimeIndicatorTileSize;

- (void).cxx_destruct;
- (id)_forcedIndicatorVisibilityEndDate;
- (void)_handleVideoPlayer:(id)arg1 change:(id)arg2;
- (void)_handleViewModel:(id)arg1 change:(id)arg2;
- (long long)_indicatorFormat;
- (bool)_isIndicatorVisible;
- (id)_label;
- (void)_setForcedIndicatorVisibilityEndDate:(id)arg1;
- (void)_setIndicatorFormat:(long long)arg1;
- (void)_setIndicatorFormat:(long long)arg1 animated:(bool)arg2;
- (void)_setIndicatorVisible:(bool)arg1;
- (void)_setIndicatorVisible:(bool)arg1 animated:(bool)arg2;
- (void)_updateIndicatorDisplayStyle;
- (void)_updateIndicatorValueWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)becomeReusable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)videoPlayer;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
