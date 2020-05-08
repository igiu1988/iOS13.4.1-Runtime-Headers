/* Generated by EzioChiu.
 */

@protocol SBTransientOverlayPresentationManagerDelegate <NSObject>

@required

- (SBPresentationObservationToken *)bannerLongLookPresentationObservationTokenForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (SBPresentationObservationToken *)controlCenterPresentationObservationTokenForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (SBAppStatusBarSettings *)currentStatusBarSettingsForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (bool)defaultShouldAutorotateForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (bool)isKeyboardVisibleForSpringBoardForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (SBPresentationObservationToken *)siriPresentationObservationTokenForTransientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireBannerLongLookWindowLevelAssertionWithReason:(NSString *)arg2 windowLevel:(double)arg3;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireControlCenterWindowLevelAssertionWithReason:(NSString *)arg2 windowLevel:(double)arg3;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireDeviceOrientationUpdateDeferralAssertionWithReason:(NSString *)arg2;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireDisableAutoUnlockAssertionWithReason:(NSString *)arg2;
- (SBInAppStatusBarHiddenAssertion *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireHideAppStatusBarAssertionWithReason:(NSString *)arg2 animated:(bool)arg3;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireInteractiveScreenshotGestureDisabledAssertionWithReason:(NSString *)arg2;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireProximitySensorEnabledAssertionWithReason:(NSString *)arg2;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireSiriWindowLevelAssertionWithReason:(NSString *)arg2 windowLevel:(double)arg3;
- (<BSInvalidatable> *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 acquireWallpaperAnimationSuspensionAssertionWithReason:(NSString *)arg2;
- (void)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 didDismissViewController:(SBTransientOverlayViewController *)arg2 wasTopmostPresentation:(bool)arg3;
- (UIApplicationSceneDeactivationAssertion *)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 newSceneDeactivationAssertionWithReason:(long long)arg2;
- (void)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 preferredWhitePointAdaptivityStyleDidChangeWithAnimationSettings:(BSAnimationSettings *)arg2;
- (void)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 registerCoverSheetExternalBehaviorProvider:(id <CSExternalBehaviorProviding>)arg2;
- (bool)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 shouldResignFirstResponderForKeyWindow:(UIWindow *)arg2;
- (bool)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 shouldRestoreFirstResponderForKeyWindow:(UIWindow *)arg2;
- (void)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 unregisterCoverSheetExternalBehaviorProvider:(id <CSExternalBehaviorProviding>)arg2;
- (void)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 willChangeTopmostViewControllerInterfaceOrientationToOrientation:(long long)arg2;
- (void)transientOverlayPresentationManager:(SBTransientOverlayPresentationManager *)arg1 willPresentViewController:(SBTransientOverlayViewController *)arg2;
- (void)transientOverlayPresentationManagerRequestsAppIconForceTouchDismissal:(SBTransientOverlayPresentationManager *)arg1 animated:(bool)arg2;
- (void)transientOverlayPresentationManagerRequestsBannerLongLookDismissal:(SBTransientOverlayPresentationManager *)arg1 animated:(bool)arg2;
- (void)transientOverlayPresentationManagerRequestsControlCenterDismissal:(SBTransientOverlayPresentationManager *)arg1 animated:(bool)arg2;
- (void)transientOverlayPresentationManagerRequestsSiriDismissal:(SBTransientOverlayPresentationManager *)arg1 animated:(bool)arg2;

@end
