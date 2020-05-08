/* Generated by EzioChiu.
 */

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional

- (void)playerViewController:(AVPlayerViewController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)playerViewController:(void *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: AVPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)playerViewController:(AVPlayerViewController *)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewController:(AVPlayerViewController *)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(AVPlayerViewController *)arg1;
- (bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(AVPlayerViewController *)arg1;

@end
