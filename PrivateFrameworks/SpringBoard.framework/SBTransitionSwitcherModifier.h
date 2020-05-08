/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {
    NSUUID * _transitionID;
    unsigned long long  _transitionPhase;
    bool  _wantsResignActiveAndAsyncRenderingAssertions;
}

@property (nonatomic, readonly) NSUUID *transitionID;
@property (nonatomic, readonly) unsigned long long transitionPhase;

- (void).cxx_destruct;
- (id)_handleTransitionEvent:(id)arg1;
- (void)_setTransitionPhase:(unsigned long long)arg1;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1;
- (bool)isPreparingLayout;
- (bool)isUpdatingLayout;
- (long long)keyboardSuppressionMode;
- (long long)layoutUpdateMode;
- (long long)liveContentRasterizationStyle;
- (long long)sceneDeactivationReason;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (bool)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1;
- (id)transitionDidEnd;
- (id)transitionID;
- (long long)transitionLiveContentRasterizationStyle;
- (unsigned long long)transitionPhase;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;
- (bool)wantsResignActiveAssertion;

@end