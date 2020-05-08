/* Generated by EzioChiu.
 */

@protocol PXTrimToolPlayerWrapper <NSObject>

@required

- (void)applyTrimTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)invalidateComposition;
- (bool)isPlaying;
- (bool)isReadyToPlay;
- (UIView *)loupePlayerView;
- (void)pause;
- (void)play;
- (<PXTrimToolPlayerObserver> *)playerObserver;
- (void)requestPlayerItemWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVPlayerItem *, void*
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 untrimmed:(bool)arg2 exact:(bool)arg3;
- (void)setPlayerObserver:(id <PXTrimToolPlayerObserver>)arg1;
- (void)startPeriodicTimeObserver;
- (void)stopPeriodicTimeObserver;

@end
