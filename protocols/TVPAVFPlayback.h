/* Generated by EzioChiu.
 */

@protocol TVPAVFPlayback <TVPPlayback>

@required

- (void)addWeakReferenceToVideoView:(TVPVideoView *)arg1;
- (AVPlayer *)avPlayer;
- (void)removeWeakReferenceToVideoView:(TVPVideoView *)arg1;

@optional

- (void)setElapsedTime:(void *)arg1 orPlaybackDate:(void *)arg2 withAVKitCompletion:(void *)arg3; // needs 3 arg types, found 10: double, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSNumber *, NSDate *, void*

@end
