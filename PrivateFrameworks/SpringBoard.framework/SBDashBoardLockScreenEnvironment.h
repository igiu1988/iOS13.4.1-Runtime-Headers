/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDashBoardLockScreenEnvironment : NSObject <CSCoverSheetViewControllerObserver, SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate, SBButtonEventsHandler, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenEnvironment, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning> {
    SBDashBoardAnalyticsEmitter * _analyticsEmitter;
    SBDashBoardApplicationLauncher * _applicationLauncher;
    <SBBiometricUnlockBehaviorDelegate> * _biometricUnlockBehaviorDelegate;
    SBDashBoardBiometricUnlockController * _biometricUnlockController;
    CSCoverSheetViewController * _coverSheetViewController;
    SBDashBoardEmergencyDialerController * _emergencyDialerController;
    bool  _expectsFaceContact;
    SBDashBoardIdleTimerController * _idleTimerController;
    SBLockScreenActionManager * _lockScreenActionManager;
    SBDashBoardOrientationController * _orientationController;
    SBDashBoardPluginController * _pluginController;
    SBDashBoardPolicyBasedBehaviorProvider * _policyBasedBehaviorProvider;
    SBDashBoardSetupController * _setupController;
    SBDashBoardSpotlightPresenter * _spotlightPresenter;
}

@property (nonatomic, readonly) <SBApplicationHosting> *applicationHoster;
@property (nonatomic, readonly) <SBLockScreenApplicationLaunching> *applicationLauncher;
@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (nonatomic, readonly) <SBAutoUnlockRule> *autoUnlockRule;
@property (nonatomic, readonly) <SBLockScreenBacklightControlling> *backlightController;
@property (nonatomic) double backlightLevel;
@property (nonatomic, readonly) <SBLockScreenBehaviorSuppressing> *behaviorSuppressor;
@property (nonatomic, readonly) <SBBiometricUnlockBehavior> *biometricUnlockBehavior;
@property (nonatomic) <SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate;
@property (nonatomic, readonly) <SBLockScreenBlockedStateObserving> *blockedStateObserver;
@property (nonatomic, readonly) <SBButtonEventsHandler> *buttonEventsHandler;
@property (nonatomic, readonly) <SBLockScreenButtonObserving> *buttonObserver;
@property (nonatomic, readonly) <SBLockScreenCallHandling> *callController;
@property (nonatomic, readonly) <SBLockScreenContentStateProviding> *contentStateProvider;
@property (nonatomic, readonly) CSCoverSheetViewController *coverSheetViewController;
@property (nonatomic, readonly) <SBLockScreenCustomActionStoring> *customActionStore;
@property (getter=_customLockScreenActionContext, nonatomic, retain) SBFLockScreenActionContext *customLockScreenActionContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool expectsFaceContact;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SBLockScreenIdleTimerControlling> *idleTimerController;
@property (nonatomic, readonly) <SBIdleTimerProviding> *idleTimerProvider;
@property (nonatomic, readonly) <SBLockScreenLockingAndUnlocking> *lockController;
@property (nonatomic, readonly) <SBLockScreenMediaControlsPresenting> *mediaControlsPresenter;
@property (nonatomic, readonly) <SBLockScreenPasscodeViewPresenting> *passcodeViewPresenter;
@property (nonatomic, readonly) <SBLockScreenPluginPresenting> *pluginPresenter;
@property (nonatomic, readonly) <SBLockScreenProximityBehaviorProviding> *proximityBehaviorProvider;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly) <SBFScreenWakeAnimationTarget> *screenWakeAnimationTarget;
@property (nonatomic, readonly) bool shouldShowLockStatusBarTime;
@property (getter=isShowingMediaControls, nonatomic) bool showingMediaControls;
@property (nonatomic, readonly) <SBLockScreenStatusBarTransitioning> *statusBarTransitionController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customLockScreenActionContext;
- (void)_setExpectsFaceContact:(bool)arg1;
- (id)applicationHoster;
- (id)applicationLauncher;
- (id)autoUnlockRule;
- (id)backlightController;
- (double)backlightLevel;
- (id)behaviorSuppressor;
- (id)biometricUnlockBehavior;
- (bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (id)biometricUnlockBehaviorDelegate;
- (id)blockedStateObserver;
- (id)buttonEventsHandler;
- (id)buttonObserver;
- (id)callController;
- (bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (bool)canHostAnApp;
- (id)contentStateProvider;
- (id)coverSheetViewController;
- (void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2;
- (id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
- (id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1;
- (id)customActionStore;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)expectsFaceContact;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)idleTimerController;
- (id)idleTimerProvider;
- (id)init;
- (id)initWithCoverSheetViewController:(id)arg1;
- (bool)isAuthenticated;
- (bool)isHostingAnApp;
- (bool)isInScreenOffMode;
- (bool)isMainPageVisible;
- (bool)isPasscodeLockVisible;
- (bool)isShowingMediaControls;
- (bool)isUnlockDisabled;
- (void)jiggleLockIcon;
- (id)lockController;
- (id)mediaControlsPresenter;
- (void)noteDeviceBlockedStatusUpdated;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;
- (void)noteResetRestoreStateUpdated;
- (id)passcodeViewPresenter;
- (id)pluginPresenter;
- (void)prepareForUILock;
- (void)prepareForUIUnlock;
- (id)proximityBehaviorProvider;
- (id)rootViewController;
- (id)screenWakeAnimationTarget;
- (void)setAuthenticated:(bool)arg1;
- (void)setBacklightLevel:(double)arg1;
- (void)setBiometricUnlockBehaviorDelegate:(id)arg1;
- (void)setCustomLockScreenActionContext:(id)arg1;
- (void)setInScreenOffMode:(bool)arg1;
- (void)setInScreenOffMode:(bool)arg1 forAutoUnlock:(bool)arg2 fromUnlockSource:(int)arg3;
- (void)setPasscodeLockVisible:(bool)arg1 animated:(bool)arg2;
- (void)setPasscodeLockVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setShowingMediaControls:(bool)arg1;
- (bool)shouldAutoUnlockForSource:(int)arg1;
- (bool)shouldDisableALS;
- (bool)shouldShowLockStatusBarTime;
- (bool)shouldUnlockUIOnKeyDownEvent;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (id)statusBarTransitionController;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)suppressesBanners;
- (bool)suppressesControlCenter;
- (bool)suppressesScreenshots;
- (void)updateStatusBarForLockScreenComeback;
- (void)updateStatusBarForLockScreenTeardown;
- (bool)willUIUnlockFromSource:(int)arg1;

@end
