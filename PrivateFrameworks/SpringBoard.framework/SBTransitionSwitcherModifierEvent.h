/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTransitionSwitcherModifierEvent : SBSwitcherModifierEvent {
    bool  _animated;
    SBAppLayout * _fromAppLayout;
    long long  _fromEnvironmentMode;
    long long  _fromInterfaceOrientation;
    unsigned long long  _phase;
    SBAppLayout * _toAppLayout;
    long long  _toEnvironmentMode;
    long long  _toInterfaceOrientation;
    NSUUID * _transitionID;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, retain) SBAppLayout *fromAppLayout;
@property (nonatomic) long long fromEnvironmentMode;
@property (nonatomic) long long fromInterfaceOrientation;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, retain) SBAppLayout *toAppLayout;
@property (nonatomic) long long toEnvironmentMode;
@property (nonatomic) long long toInterfaceOrientation;
@property (nonatomic, readonly) NSUUID *transitionID;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)fromAppLayout;
- (long long)fromEnvironmentMode;
- (long long)fromInterfaceOrientation;
- (id)initWithTransitionID:(id)arg1 phase:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)isAnimated;
- (bool)isTransitionEvent;
- (unsigned long long)phase;
- (void)setFromAppLayout:(id)arg1;
- (void)setFromEnvironmentMode:(long long)arg1;
- (void)setFromInterfaceOrientation:(long long)arg1;
- (void)setToAppLayout:(id)arg1;
- (void)setToEnvironmentMode:(long long)arg1;
- (void)setToInterfaceOrientation:(long long)arg1;
- (id)toAppLayout;
- (long long)toEnvironmentMode;
- (long long)toInterfaceOrientation;
- (id)transitionID;
- (long long)type;

@end