/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginController : NSObject <NMROriginCommandHandler, NMROriginObserver, NMROriginObserverDelegate> {
    <NMROriginObserverDelegate> * _delegate;
    bool  _hasPendingElapsedTimeChange;
    bool  _hasPendingNowPlayingApplicationBundleIdentifierChange;
    bool  _hasPendingNowPlayingInfoChange;
    bool  _hasPendingPlaybackQueueChange;
    bool  _hasPendingPlaybackStateChange;
    bool  _hasPendingSupportedCommandsChange;
    bool  _hasPendingTimestampChange;
    bool  _isObserving;
    NMROrigin * _origin;
    <NMROriginCommandHandler> * _originCommandHandler;
    <NMROriginObserver> * _originObserver;
    bool  _shouldObserveArtwork;
    bool  _shouldObserveLibraryAddStatus;
    bool  _shouldObservePlaybackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NMROriginObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NMRNowPlayingState *nowPlayingState;
@property (nonatomic, readonly) NMROrigin *origin;
@property (nonatomic, retain) <NMROriginCommandHandler> *originCommandHandler;
@property (nonatomic, retain) <NMROriginObserver> *originObserver;
@property (nonatomic, readonly) NMRPlaybackQueue *playbackQueue;
@property (nonatomic) bool shouldObserveArtwork;
@property (nonatomic) bool shouldObserveLibraryAddStatus;
@property (nonatomic) bool shouldObservePlaybackQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)_notifyObserverOfUpdatedNowPlayingApplicationBundleIdentifier;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedPlaybackQueue;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_notifyObserverOfUpdatedTimestamp;
- (void)beginObserving;
- (id)delegate;
- (void)endObserving;
- (id)initWithOrigin:(id)arg1 options:(unsigned long long)arg2;
- (id)nowPlayingState;
- (id)origin;
- (id)originCommandHandler;
- (id)originObserver;
- (void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2;
- (id)playbackQueue;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 launchApp:(bool)arg3 completion:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setOriginCommandHandler:(id)arg1;
- (void)setOriginObserver:(id)arg1;
- (void)setShouldObserveArtwork:(bool)arg1;
- (void)setShouldObserveLibraryAddStatus:(bool)arg1;
- (void)setShouldObservePlaybackQueue:(bool)arg1;
- (bool)shouldObserveArtwork;
- (bool)shouldObserveLibraryAddStatus;
- (bool)shouldObservePlaybackQueue;
- (void)updateNowPlayingStateWithCompletion:(id /* block */)arg1;

@end
