/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraClipPlayer : NSObject <HFCameraClipPlaying, HFCameraClipQueueing> {
    HMCameraProfile * _cameraProfile;
    NSArray * _clips;
    <HFCameraClipPlayerDelegate> * _delegate;
    NSError * _error;
    HFCameraClipPlayerItem * _lastPlayerItem;
    bool  _mutatingQueue;
    HFCameraClipQueuePlayer * _queuePlayer;
    <HFCameraClipScrubbing> * _scrubber;
    bool  _scrubbing;
}

@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic, retain) NSArray *clips;
@property (nonatomic, copy) HFCameraClipPosition *currentPosition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFCameraClipPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) bool hasFatalError;
@property (readonly) unsigned long long hash;
@property (nonatomic) HFCameraClipPlayerItem *lastPlayerItem;
@property (getter=isMutatingQueue, nonatomic) bool mutatingQueue;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) NSArray *queuableItems;
@property (nonatomic, readonly) HFCameraClipQueuePlayer *queuePlayer;
@property (nonatomic) <HFCameraClipScrubbing> *scrubber;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long timeControlStatus;

- (void).cxx_destruct;
- (void)_rebuildPlayerQueueForPosition:(id)arg1;
- (void)_setupObservationForLastPlayerItem:(id)arg1;
- (void)_setupPlayerObservation;
- (void)_updateErrorState;
- (void)_updatePlayerActionAtItemEnd;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(id /* block */)arg2;
- (id)cameraProfile;
- (id)clips;
- (id)createQueueableItemForClipManager:(id)arg1 clip:(id)arg2;
- (id)currentPosition;
- (void)dealloc;
- (id)delegate;
- (void)endScrubbingWithOffset:(double)arg1;
- (id)error;
- (bool)hasFatalError;
- (id)init;
- (id)initWithCameraProfile:(id)arg1 clips:(id)arg2;
- (id)initWithCameraProfile:(id)arg1 clips:(id)arg2 queuePlayer:(id)arg3;
- (void)insertQueueableItem:(id)arg1 afterItem:(id)arg2;
- (bool)isMutatingQueue;
- (bool)isScrubbing;
- (id)lastPlayerItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)player;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (id)queuableItems;
- (id)queuePlayer;
- (void)removeQueueableItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (id)scrubber;
- (void)seekToOffset:(double)arg1 inItem:(id)arg2;
- (void)setClips:(id)arg1;
- (void)setCurrentPosition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLastPlayerItem:(id)arg1;
- (void)setMutatingQueue:(bool)arg1;
- (void)setScrubber:(id)arg1;
- (void)setScrubbing:(bool)arg1;
- (long long)timeControlStatus;

@end
