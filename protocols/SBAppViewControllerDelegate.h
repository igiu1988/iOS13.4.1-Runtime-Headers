/* Generated by EzioChiu.
 */

@protocol SBAppViewControllerDelegate <NSObject>

@optional

- (void)appViewController:(SBAppViewController *)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
- (bool)appViewController:(SBAppViewController *)arg1 shouldTransitionToMode:(long long)arg2;
- (void)appViewControllerDidBecomeReady:(SBAppViewController *)arg1;
- (void)appViewControllerDidDeactivateApplication:(SBAppViewController *)arg1;
- (bool)appViewControllerShouldBackgroundApplicationOnDeactivate:(SBAppViewController *)arg1;
- (void)appViewControllerWillActivateApplication:(SBAppViewController *)arg1;

@end