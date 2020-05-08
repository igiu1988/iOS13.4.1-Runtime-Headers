/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    unsigned long long  _direction;
    long long  _floatingConfiguration;
    SBAppLayout * _fromAppLayout;
    bool  _hasReshuffledZOrder;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 direction:(unsigned long long)arg5 needsOvershoot:(bool)arg6;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (long long)keyboardSuppressionMode;
- (id)layoutSettings;
- (long long)liveContentRasterizationStyle;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (bool)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1;
- (id)topMostAppLayouts;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (bool)wantsResignActiveAssertion;

@end
