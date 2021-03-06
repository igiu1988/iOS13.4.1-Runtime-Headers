/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBFluidSwitcherAnimationSettings * _animationSettings;
    SBSwitcherModifier * _multitaskingModifier;
    SBAppLayout * _selectedAppLayout;
}

@property (nonatomic, retain) SBFluidSwitcherAnimationSettings *animationSettings;
@property (nonatomic, retain) SBSwitcherModifier *multitaskingModifier;
@property (nonatomic, retain) SBAppLayout *selectedAppLayout;

- (void).cxx_destruct;
- (id)animationSettings;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (id)layoutSettings;
- (long long)liveContentRasterizationStyle;
- (id)multitaskingModifier;
- (id)selectedAppLayout;
- (void)setAnimationSettings:(id)arg1;
- (void)setMultitaskingModifier:(id)arg1;
- (void)setSelectedAppLayout:(id)arg1;
- (id)transitionWillBegin;
- (bool)wantsMinificationFilter;

@end
