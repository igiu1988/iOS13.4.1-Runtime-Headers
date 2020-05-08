/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBReduceMotionForcePressGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout * _selectedAppLayout;
    long long  _startingEnvironmentMode;
    SBForcePressGestureStateTrackingSwitcherModifier * _stateTrackingModifier;
}

- (void).cxx_destruct;
- (double)_effectivePanProgress;
- (unsigned long long)_indexOfSelectedAppLayout;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3;
- (double)initialPanThreshold;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (long long)keyboardSuppressionMode;
- (id)layoutSettings;
- (long long)liveContentRasterizationStyle;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)sceneDeactivationReason;
- (long long)wallpaperStyle;
- (bool)wantsMinificationFilter;
- (bool)wantsResignActiveAssertion;

@end