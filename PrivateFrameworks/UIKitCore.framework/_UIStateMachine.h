/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStateMachine : NSObject {
    unsigned long long  _eventCount;
    unsigned long long  _state;
    NSMutableDictionary * _stateChangeObservers;
    unsigned long long  _stateCount;
    struct { unsigned long long x1; unsigned long long x2; bool x3; unsigned long long x4; id /* block */ x5; id /* block */ x6; } * _transitionTable;
}

@property (nonatomic) unsigned long long state;

+ (void)debugAttemptedInvalidStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2;
+ (void)debugStateTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_iterateTransitionTable:(id /* block */)arg1;
- (unsigned long long)_totalStateCount;
- (id)_transitionDescriptions;
- (void)dealloc;
- (void)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3;
- (void)setState:(unsigned long long)arg1;
- (void)setStateChangeObserver:(unsigned long long)arg1 observer:(id /* block */)arg2;
- (void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(id /* block */)arg3;
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(id /* block */)arg3 postTransitionHandler:(id /* block */)arg4;
- (unsigned long long)state;

@end
