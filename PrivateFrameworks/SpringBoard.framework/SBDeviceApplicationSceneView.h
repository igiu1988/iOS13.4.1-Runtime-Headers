/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceApplicationSceneView : SBApplicationSceneView <SBAppSwitcherPageContentView, SBDeviceApplicationSceneClassicAccessoryViewDelegate> {
    bool  _active;
    UIView * _appOverlayView;
    SBDeviceApplicationSceneClassicAccessoryView * _classicAccessoryView;
    UIView * _classicPositioningView;
    UIView * _classicWrapperView;
    UIApplicationSceneClientSettingsDiffInspector * _clientSettingsInspector;
    bool  _counterRotationViewTransformUpdatesPaused;
    SBHomeGrabberRotationView * _grabberRotationView;
    SBFHomeGrabberSettings * _grabberSettings;
    _UIDirectionalRotationView * _hostCounterRotationView;
    long long  _lastStableOverlayOrientation;
    SBSceneHandleBlockObserver * _sceneHandleObserver;
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsInspector;
    double  _statusBarAlpha;
    SBApplicationSceneViewStatusBarDescriptor * _statusBarDescriptor;
    <UISceneLayerTarget> * _statusBarLayerTarget;
    bool  _visible;
    UIView<UIScenePresentation> * _wrappedHostView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIView *appOverlayView;
@property (nonatomic, retain) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (nonatomic, readonly) bool contentRequiresGroupOpacity;
@property (nonatomic) double cornerRadius;
@property (nonatomic) bool counterRotationViewTransformUpdatesPaused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forcesStatusBarHidden;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHomeGrabberView *homeGrabberView;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) double statusBarAlpha;
@property (nonatomic, retain) SBApplicationSceneViewStatusBarDescriptor *statusBarDescriptor;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_configureSceneLiveHostView:(id)arg1;
- (void)_configureSceneSnapshotContext:(id)arg1;
- (void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg1;
- (void)_createHostCounterRotationViewIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveSceneBounds;
- (void)_invalidateSceneLiveHostView:(id)arg1;
- (void)_layoutLiveHostView:(id)arg1;
- (void)_maybeStartTrackingRotationForOverlay;
- (void)_refresh;
- (bool)_representsTranslucentContent;
- (bool)_sceneDrivesOwnRotation;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_tearDownHostCounterRotationViewIfNecessary;
- (id)_transitionViewForHostView;
- (void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
- (void)_updateReferenceSize:(struct CGSize { double x1; double x2; })arg1 andOrientation:(long long)arg2;
- (void)_updateStatusBarVisibilityForHostView;
- (long long)_wallpaperStyle;
- (id)appOverlayView;
- (void)applicationSceneCompatibilityModeAnimatingChangeTo:(long long)arg1;
- (bool)contentRequiresGroupOpacity;
- (double)cornerRadius;
- (bool)counterRotationViewTransformUpdatesPaused;
- (void)createClassicAccesoryViewIfNecessary;
- (void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceApplicationSceneView;
- (bool)forcesStatusBarHidden;
- (id)homeGrabberView;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2 orientation:(long long)arg3 hostRequester:(id)arg4;
- (void)invalidate;
- (bool)isActive;
- (bool)isVisible;
- (void)layoutSubviews;
- (void)setActive:(bool)arg1;
- (void)setAppOverlayView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCounterRotationViewTransformUpdatesPaused:(bool)arg1;
- (void)setForcesStatusBarHidden:(bool)arg1;
- (void)setStatusBarAlpha:(double)arg1;
- (void)setStatusBarDescriptor:(id)arg1;
- (void)setVisible:(bool)arg1;
- (double)statusBarAlpha;
- (id)statusBarDescriptor;
- (void)tearDownHomeGrabberView;
- (void)teardownClassicAccesoryViewIfNecessary;

@end
