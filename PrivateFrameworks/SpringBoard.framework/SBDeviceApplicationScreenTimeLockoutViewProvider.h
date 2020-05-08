/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider <LOViewControllerDelegate> {
    UIViewController<LOViewController> * _lockoutViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (id)_newLockoutViewControllerWithBundleIdentifier:(id)arg1;
- (id)_realOverlayViewController;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (void)lockoutViewControllerDidFinishDismissing:(id)arg1;

@end
