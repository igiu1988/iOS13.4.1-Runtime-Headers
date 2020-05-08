/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBReversibleLayerPropertyAnimator : NSObject <BSInvalidatable, CAAnimationDelegate> {
    id /* block */  _completion;
    BSAnimationSettings * _currentAnimationSettings;
    NSString * _forwardAnimationKey;
    NSString * _forwardOffsetAnimationKey;
    double  _initialValue;
    bool  _invalidated;
    NSString * _keyPath;
    CALayer * _layer;
    unsigned long long  _outstandingCAAnimationCompletionCount;
    NSMutableArray * _reversalAnimationKeys;
    unsigned long long  _reversalCount;
    bool  _reversedWithNewSettings;
    bool  _started;
    double  _targetValue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) BSAnimationSettings *currentAnimationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *forwardAnimationKey;
@property (nonatomic, copy) NSString *forwardOffsetAnimationKey;
@property (getter=isGoingForward, nonatomic, readonly) bool goingForward;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double initialValue;
@property (nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) unsigned long long outstandingCAAnimationCompletionCount;
@property (nonatomic, retain) NSMutableArray *reversalAnimationKeys;
@property (nonatomic) unsigned long long reversalCount;
@property (getter=hasReversed, nonatomic, readonly) bool reversed;
@property (getter=hasReversedWithNewSettings, nonatomic) bool reversedWithNewSettings;
@property (getter=hasStarted, nonatomic) bool started;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double targetValue;

- (void).cxx_destruct;
- (id)_additiveAnimationForKeyPath:(id)arg1 withSettings:(id)arg2 beginTime:(id)arg3 fromRelativeValue:(double)arg4 toRelativeValue:(double)arg5;
- (void)_animateFromRelativeValue:(double)arg1 toRelativeValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4;
- (void)_animateFromValue:(double)arg1 toValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4;
- (id)_animationWithSettings:(id)arg1;
- (void)_fireCompletionIfNecessary;
- (double)_inputPercentCompleteForAnimation:(id)arg1 outputPercentComplete:(double)arg2 precision:(double)arg3;
- (double)_outputPercentCompleteForAnimation:(id)arg1 inputPercentComplete:(double)arg2;
- (double)_percentCompleteForAnimation:(id)arg1 time:(double)arg2;
- (void)_reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3;
- (void)animateWithSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id /* block */)completion;
- (id)currentAnimationSettings;
- (id)forwardAnimationKey;
- (id)forwardOffsetAnimationKey;
- (bool)hasReversed;
- (bool)hasReversedWithNewSettings;
- (bool)hasStarted;
- (id)initWithLayer:(id)arg1 keyPath:(id)arg2 initialValue:(double)arg3 targetValue:(double)arg4;
- (double)initialValue;
- (void)invalidate;
- (bool)invalidated;
- (bool)isGoingForward;
- (id)keyPath;
- (id)layer;
- (unsigned long long)outstandingCAAnimationCompletionCount;
- (id)reversalAnimationKeys;
- (unsigned long long)reversalCount;
- (void)reverse;
- (void)reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCurrentAnimationSettings:(id)arg1;
- (void)setForwardAnimationKey:(id)arg1;
- (void)setForwardOffsetAnimationKey:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setOutstandingCAAnimationCompletionCount:(unsigned long long)arg1;
- (void)setReversalAnimationKeys:(id)arg1;
- (void)setReversalCount:(unsigned long long)arg1;
- (void)setReversedWithNewSettings:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (double)targetValue;

@end
