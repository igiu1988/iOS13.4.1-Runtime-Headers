/* Generated by EzioChiu.
 */

@protocol NCAudioPlayerControllerDelegate <NSObject>

@optional

- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToCurrentTime:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToDuration:(double)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToPlaybackState:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToRate:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didChangeToStatus:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 didSeekToTime:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToDuration:(double)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToPlaybackState:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToRate:(float)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willChangeToStatus:(long long)arg2;
- (void)playerController:(NCAudioPlayerController *)arg1 willSeekToTime:(float)arg2;

@end
