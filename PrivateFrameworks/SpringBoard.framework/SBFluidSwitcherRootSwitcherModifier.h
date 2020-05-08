/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherModifierProviding, SBFluidSwitcherScrollProviding, SBFluidSwitcherScrollProvidingDelegate> {
    <SBFluidSwitcherScrollProvidingDelegate> * _scrollDelegate;
    bool  _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBFluidSwitcherScrollProvidingDelegate> *scrollDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appExposeModifierKeyForBundleID:(id)arg1;
- (void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1;
- (id)_reduceMotionModifier;
- (void)_setup;
- (id)_swipeToKillModifierKeyForAppLayout:(id)arg1;
- (void)_updateFloorModifierWithTransitionEvent:(id)arg1;
- (void)_updateLowEndHardwareModifier;
- (void)_updateMultitaskingModifierWithEvent:(id)arg1;
- (void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)arg1;
- (id)appExposeModifierForAppExposeEvent:(id)arg1;
- (id)floorModifier;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)handleAppExposeEvent:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleInlineTransitionEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)init;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)lowEndHardwareModifier;
- (id)multitaskingModifier;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)scrollDelegate;
- (struct CGPoint { double x1; double x2; })scrollProvidingModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })scrollProvidingModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(struct CGPoint { double x1; double x2; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setScrollDelegate:(id)arg1;
- (id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1;
- (id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1;
- (id)transitionModifierForInlineTransitionEvent:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;

@end
