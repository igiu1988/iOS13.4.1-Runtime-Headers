/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView <BSInvalidatable> {
    long long  _buttonOrientation;
    UIApplicationSceneClientSettingsDiffInspector * _clientSettingsInspector;
    <SBDeviceApplicationSceneClassicAccessoryViewDelegate> * _delegate;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    SBSceneHandleBlockObserver * _sceneHandleObserver;
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsInspector;
    SBOrientationTransformWrapperView * _transformWrapperView;
    UIButton * _zoomButton;
    NSLayoutConstraint * _zoomButtonHeightConstraint;
    NSLayoutConstraint * _zoomButtonHorizontalConstraint;
    NSLayoutConstraint * _zoomButtonVerticalConstraint;
    NSLayoutConstraint * _zoomButtonWidthConstraint;
    UIView * _zoomButtonWrapperView;
}

@property (nonatomic) long long buttonOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBDeviceApplicationSceneClassicAccessoryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeZoom:(id)arg1;
- (bool)_isZoomed;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(bool)arg2;
- (void)_updateOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 animationSettings:(id)arg3;
- (void)_updateZoomButton;
- (void)_updateZoomButtonVisibilityAnimated:(bool)arg1;
- (bool)_zoomButtonShouldBeVisible;
- (long long)buttonOrientation;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sceneHandle:(id)arg2;
- (void)invalidate;
- (void)layoutSubviews;
- (id)sceneHandle;
- (void)setButtonOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
