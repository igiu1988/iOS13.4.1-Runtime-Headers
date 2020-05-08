/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoLoadingCoordinator : NSObject <NUAsyncContentViewControllerLoader, NUVideoPlayerEventTracker> {
    id /* block */  _completionBlock;
    bool  _loadStarted;
    <SVVideoPlaybackController> * _playbackController;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=hasLoadStarted, nonatomic) bool loadStarted;
@property (nonatomic, readonly) <SVVideoPlaybackController> *playbackController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeAndClearCompletionBlockWithError:(id)arg1;
- (id /* block */)completionBlock;
- (bool)hasLoadStarted;
- (id)initWithPlaybackController:(id)arg1;
- (id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (id)playbackController;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setLoadStarted:(bool)arg1;

@end
