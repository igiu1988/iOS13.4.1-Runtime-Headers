/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBStatusBarTapManager : NSObject {
    NSMutableDictionary * _statusBarOverridesToRecentSceneResetTimers;
    NSMutableDictionary * _statusBarOverridesToRecentScenes;
}

- (void).cxx_destruct;
- (void)_addRecentlyTappedApplicationDestinations:(id)arg1 forStyleOverrides:(int)arg2;
- (id)_allApplicationDestinationsForApplications:(id)arg1;
- (id)_appDestinationForNextSceneToVisitForApps:(id)arg1 styleOverrides:(int)arg2;
- (id)_foregroundApplicationDestinationsForApplications:(id)arg1;
- (id)_handlerForStyleOverrides:(int)arg1;
- (id)_handlerForStyleOverrides:(int)arg1 orOutApplications:(id*)arg2;
- (bool)_isUILocked;
- (bool)_performAfterAttemptingUnlockForAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)_recentlyTappedApplicationDestinationsForStyleOverrides:(int)arg1;
- (void)_resetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1;
- (void)_scheduleResetRecentlyTappedSceneIdentifiersForStyleOverrides:(int)arg1;
- (id)_workspace;
- (bool)canHandleTapForStatusBarStyleOverrides:(int)arg1;
- (bool)handleTapForStyleOverrides:(int)arg1;

@end
