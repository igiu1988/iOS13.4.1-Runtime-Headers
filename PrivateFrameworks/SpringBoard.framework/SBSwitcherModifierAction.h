/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSwitcherModifierAction : NSObject <BSDescriptionProviding> {
    bool  _consumed;
    double  _delay;
    id /* block */  _validator;
}

@property (getter=isConsumed, nonatomic) bool consumed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, copy) id /* block */ validator;

+ (id)actionByAppendingAction:(id)arg1 toAction:(id)arg2;

- (void).cxx_destruct;
- (id)appendAction:(id)arg1;
- (void)consumeWithReason:(id)arg1;
- (double)delay;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateActionsUsingBlock:(id /* block */)arg1;
- (void)enumerateLeafActionsUsingBlock:(id /* block */)arg1;
- (id)init;
- (bool)isConsumed;
- (bool)isValid;
- (unsigned long long)leafCount;
- (void)setConsumed:(bool)arg1;
- (void)setDelay:(double)arg1 withValidator:(id /* block */)arg2;
- (void)setValidator:(id /* block */)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (id /* block */)validator;

@end
