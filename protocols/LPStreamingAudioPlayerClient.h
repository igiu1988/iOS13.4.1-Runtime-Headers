/* Generated by EzioChiu.
 */

@protocol LPStreamingAudioPlayerClient

@required

- (void)streamingAudioPlayer:(LPStreamingAudioPlayer *)arg1 didChangeProgress:(float)arg2;
- (void)streamingAudioPlayer:(LPStreamingAudioPlayer *)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)streamingAudioPlayerDidFailToPlay:(LPStreamingAudioPlayer *)arg1;

@end
