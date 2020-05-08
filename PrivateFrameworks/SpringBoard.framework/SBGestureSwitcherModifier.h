/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBGestureSwitcherModifier : SBSwitcherModifier {
    NSUUID * _gestureID;
    unsigned long long  _gesturePhase;
    SBGestureSwitcherModifierEvent * _lastGestureEvent;
}

@property (nonatomic, readonly) unsigned long long gesturePhase;

- (void).cxx_destruct;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)gesturePhase;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;
- (bool)isPreparingLayout;
- (bool)isUpdatingLayout;
- (long long)layoutUpdateMode;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;

@end
