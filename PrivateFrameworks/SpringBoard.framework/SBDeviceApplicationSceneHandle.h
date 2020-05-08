/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceApplicationSceneHandle : SBApplicationSceneHandle <FBApplicationProcessObserver, SBIdleTimerProviding> {
    NSDictionary * _alertSuppressionContextsBySectionIdentifier;
    SBDeviceApplicationSceneStatusBarBreadcrumbProvider * _breadcrumbProvider;
    bool  _hasMainSceneBeenForegroundAtLeastOnce;
    <SBIdleTimerCoordinating> * _idleTimerCoordinator;
    bool  _isEffectivelyForeground;
    unsigned long long  _keyboardLayerMaskStyle;
    long long  _lastActivationSource;
    SBModalAlertPresenter * _modalAlertPresenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _statusBarAvoidanceFrame;
    NSMutableSet * _statusBarForcedHiddenReasons;
    long long  _statusBarParts;
    SBDeviceApplicationSceneStatusBarStateProvider * _statusBarStateProvider;
    int  _statusBarStyleOverridesToSuppress;
    long long  _whitePointAdaptivityStyle;
}

@property (nonatomic, readonly) long long activationBias;
@property (nonatomic, readonly, copy) NSData *activationConditionsData;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEffectivelyForeground, nonatomic, readonly) bool effectivelyForeground;
@property (nonatomic) bool hasMainSceneBeenForegroundAtLeastOnce;
@property (readonly) unsigned long long hash;
@property (getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:, nonatomic) <SBIdleTimerCoordinating> *idleTimerCoordinator;
@property (nonatomic) long long lastActivationSource;
@property (nonatomic, readonly, copy) _UIStatusBarData *overlayStatusBarData;
@property (getter=isReachabilitySupported, nonatomic, readonly) bool reachabilitySupported;
@property (nonatomic, readonly, copy) NSString *sceneTitle;
@property (nonatomic, readonly) unsigned long long screenEdgesDeferringSystemGestures;
@property (getter=isShowingModalAlert, nonatomic, readonly) bool showingModalAlert;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarAvoidanceFrame;
@property (nonatomic) long long statusBarParts;
@property (nonatomic, readonly) SBDeviceApplicationSceneStatusBarStateProvider *statusBarStateProvider;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (getter=isTranslucent, nonatomic, readonly) bool translucent;
@property (nonatomic, readonly) long long wallpaperStyle;
@property (nonatomic) long long whitePointAdaptivityStyle;

- (void).cxx_destruct;
- (void)_commonInit;
- (bool)_currentClassicModeAllowsLaunchingToAnySupportedOrientation;
- (id)_defaultStatusBarHeights;
- (void)_didCreateScene:(id)arg1;
- (void)_didDestroyScene:(id)arg1;
- (void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (id)_generateIdleTimerBehavior;
- (id)_idleTimerCoordinator;
- (long long)_initialMainSceneCompabilityMode:(id)arg1;
- (long long)_launchingInterfaceOrientationForOrientation:(long long)arg1;
- (unsigned long long)_mainSceneSupportedInterfaceOrientations;
- (bool)_mainSceneSupportsInterfaceOrientation:(long long)arg1;
- (void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4;
- (void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifySafeAreaInsetsOnApplicationSceneSettings:(id)arg1 isInsetForHomeAffordance:(bool)arg2 isFloating:(bool)arg3;
- (void)_noteActivationConditionsChanged;
- (void)_noteMainSceneBackgroundStyleChanged;
- (void)_noteSceneTitleChanged;
- (bool)_overriddenStatusBarStyleForApp:(id)arg1 style:(out long long*)arg2;
- (void)_populateSettingsWithDefaultStatusBarHeight:(id)arg1;
- (id)_potentiallyJailedDisplayConfiguration;
- (long long)_resumingInterfaceOrientationForOrientation:(long long)arg1;
- (id)_sceneCornerRadiusConfigurationFromRequestContext:(id)arg1 forEntity:(id)arg2;
- (id)_sceneDataStoreCreatingIfNecessary:(bool)arg1;
- (void)_setIdleTimerCoordinator:(id)arg1;
- (long long)_statusBarStyleWithActivationSettings:(id)arg1;
- (void)_updateIdleTimerForReason:(id)arg1;
- (void)_updateSceneHostingInfoForSnapshottingWithView:(id)arg1;
- (long long)activationBias;
- (id)activationConditionsData;
- (long long)activationInterfaceOrientationForCurrentOrientation;
- (long long)activationInterfaceOrientationForOrientation:(long long)arg1;
- (void)addObserver:(id)arg1;
- (id)additionalActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (long long)backgroundStyle;
- (id)breadcrumbProvider;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)currentEffectiveStatusBarStyleRequest;
- (long long)currentInterfaceOrientation;
- (long long)currentStatusBarStyle;
- (void)dealloc;
- (long long)defaultInterfaceOrientation;
- (double)defaultStatusBarAlpha;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
- (bool)defaultStatusBarHiddenForOrientation:(long long)arg1;
- (long long)defaultStatusBarStyle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)displayEdgeInfoForForLayoutEnvironment:(long long)arg1 classicMode:(long long)arg2 isInsetForHomeAffordance:(bool)arg3;
- (int)effectiveStatusBarStyleOverrides;
- (id)effectiveStatusBarStyleRequestForActivation:(id)arg1;
- (bool)hasMainSceneBeenForegroundAtLeastOnce;
- (bool)isAutoHideEnabledForHomeAffordance;
- (bool)isCurrentStatusBarHiddenForOrientation:(long long)arg1;
- (bool)isDeviceApplicationSceneHandle;
- (bool)isEdgeProtectEnabledForHomeGesture;
- (bool)isEffectivelyForeground;
- (bool)isReachabilitySupported;
- (bool)isShowingModalAlert;
- (bool)isStatusBarForceHidden;
- (bool)isStatusBarForcedHiddenForOrientation:(long long)arg1;
- (bool)isStatusBarHiddenForActivation:(id)arg1 forOrientation:(long long)arg2;
- (bool)isTranslucent;
- (long long)lastActivationSource;
- (id)mostRecentSceneSnapshotsForScale:(double)arg1 launchingOrientation:(long long)arg2;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewController;
- (id)newSceneViewWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 hostRequester:(id)arg3;
- (id)overlayStatusBarData;
- (void)removeObserver:(id)arg1;
- (void)saveSuspendSnapshot:(id)arg1;
- (id)sceneTitle;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (void)setAlertSuppressionContextsBySectionIdentifier:(id)arg1;
- (void)setHasMainSceneBeenForegroundAtLeastOnce:(bool)arg1;
- (void)setKeyboardContextMaskStyle:(unsigned long long)arg1;
- (void)setLastActivationSource:(long long)arg1;
- (void)setStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStatusBarForceHidden:(bool)arg1 forReason:(id)arg2 animationSettings:(id)arg3;
- (void)setStatusBarParts:(long long)arg1;
- (void)setStatusBarStyleOverridesToSuppress:(int)arg1;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;
- (bool)shouldSuppressAlertForSuppressionContexts:(id)arg1 sectionIdentifier:(id)arg2;
- (double)statusBarAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (id)statusBarEffectiveStyleRequestWithStyle:(long long)arg1;
- (double)statusBarHeightForOrientation:(long long)arg1;
- (long long)statusBarOrientation;
- (long long)statusBarParts;
- (id)statusBarStateProvider;
- (int)statusBarStyleOverridesToSuppress;
- (long long)wallpaperStyle;
- (bool)wantsDeviceOrientationEventsEnabled;
- (long long)whitePointAdaptivityStyle;

@end
