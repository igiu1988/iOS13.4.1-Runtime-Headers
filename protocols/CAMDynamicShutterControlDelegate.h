/* Generated by EzioChiu.
 */

@protocol CAMDynamicShutterControlDelegate <NSObject>

@optional

- (void)dynamicShutterControlDidDismissCounter:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidPresentCounter:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidPressLockButton:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidShortPress:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidStart:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlDidStop:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlGesturesDidBegin:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlGesturesDidCancel:(CAMDynamicShutterControl *)arg1;
- (void)dynamicShutterControlGesturesDidEnd:(CAMDynamicShutterControl *)arg1;
- (bool)dynamicShutterControlShouldBeginGesture:(CAMDynamicShutterControl *)arg1;
- (void)shutterControlTouchAttemptedWhileDisabled:(CAMDynamicShutterControl *)arg1;

@end