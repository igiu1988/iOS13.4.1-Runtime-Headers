/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBUIAnimationController : SBTransaction <SBSceneHandleObserver, SBUIAnimationControllerCoordinating, SBUIAnimationStepping, SBViewControllerTransitionContextDelegate, UIViewControllerInteractiveTransitioning> {
    int  _animationState;
    BSBlockTransaction * _animationTransaction;
    id /* block */  _animationTransactionCompletion;
    BSBlockTransaction * _cleanupTransaction;
    NSMutableArray * _coordinatingChildRelationships;
    bool  _didNotifyObserversOfCompletion;
    bool  _didPostBeginAnimationNotification;
    NSSet * _entitiesToObserve;
    bool  _needsCATransactionActivate;
    BSBlockTransaction * _notifyObserversTransaction;
    NSSet * _sceneHandlesBeingObserved;
    NSSet * _startTransactionDependencies;
    NSMutableArray * _steppedCoordinatingChildAnimations;
    SBAnimationStepper * _stepper;
    SBViewControllerTransitionContext * _transition;
    UIView * _transitionContainer;
    <SBUIAnimationControllerTransitionContextProvider> * _transitionContextProvider;
    UIWindow * _transitionWindow;
}

@property (nonatomic, readonly) BSAnimationSettings *animationSettings;
@property (nonatomic, readonly) BSTransaction *animationTransaction;
@property (nonatomic, copy) id /* block */ animationTransactionCompletion;
@property (nonatomic, readonly) BSTransaction *cleanupTransaction;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic) bool needsCATransactionActivate;
@property (nonatomic, readonly) BSTransaction *notifyObserversTransaction;
@property (nonatomic) double stepPercentage;
@property (getter=isStepped, nonatomic, readonly) bool stepped;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *toApplicationSceneEntity;
@property (nonatomic, retain) SBViewControllerTransitionContext *transition;
@property (nonatomic, retain) <SBUIAnimationControllerTransitionContextProvider> *transitionContextProvider;
@property (nonatomic, readonly) <SBViewControllerTransitionCoordinator> *transitionCoordinator;
@property (nonatomic, readonly) bool transitionSupportsCancelling;
@property (nonatomic, readonly) bool transitionSupportsRestarting;
@property (nonatomic, readonly) bool transitionWasCancelled;
@property (nonatomic, readonly) bool transitionWasRestarted;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)__abortAnimation;
- (id)__alertItemsController;
- (bool)__animationShouldStart;
- (void)__cleanupAnimation;
- (void)__noteAnimationDidTerminate;
- (void)__reportAnimationCompletion;
- (void)__startAnimation;
- (id)__startTransactionDependencyForEntity:(id)arg1;
- (bool)__wantsInitialProgressStateChange;
- (void)_abortAnimation;
- (void)_addDebugLogCategory:(id)arg1;
- (id)_animationIdentifier;
- (int)_animationState;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_cleanupAnimation;
- (void)_cleanupEntityObservers;
- (void)_didInterruptWithReason:(id)arg1;
- (id)_displayIdentity;
- (void)_entityObserverProgressDidChange:(id /* block */)arg1 waitForSceneContentAvailableTransactionBlock:(id /* block */)arg2;
- (void)_enumerateCoordinatingAnimationsWithBlock:(id /* block */)arg1;
- (void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)_enumerateCoordinatingChildRelationshipsWithBlock:(id /* block */)arg1;
- (id)_getTransitionWindow;
- (bool)_isNullAnimation;
- (void)_noteAnimationDidFail;
- (void)_noteAnimationDidFinish;
- (void)_noteAnimationDidRevealApplication;
- (void)_notifyObserversOfAnimationCompletion;
- (void)_prepareAnimation;
- (void)_processStateDidChange:(id)arg1;
- (id)_progressDependencies;
- (void)_registerEntityObserversIfNecessary;
- (void)_sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)_setAnimationState:(int)arg1;
- (void)_setHidden:(bool)arg1;
- (bool)_shouldDismissBanner;
- (void)_startAnimation;
- (id)_transitionAnimator;
- (id)_viewsForAnimationStepping;
- (bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (bool)_willAnimate;
- (void)_willBeginWaitingForStartDependencies;
- (void)_willComplete;
- (void)_willSetupStartDependencies;
- (void)addCoordinatingChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (void)addSteppedCoordinatingChildAnimation:(id)arg1;
- (bool)animating;
- (id)animationSettings;
- (id)animationTransaction;
- (id /* block */)animationTransactionCompletion;
- (void)cancelTransition;
- (id)cleanupTransaction;
- (id)containerView;
- (id)coordinatingAnimationControllers;
- (void)dealloc;
- (void)delayAnimationUntilTransactionFinishes:(id)arg1;
- (void)delayCleanupUntilTransactionFinishes:(id)arg1;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (id)fromApplicationSceneEntities;
- (id)fromApplicationSceneEntity;
- (id)init;
- (id)initWithTransitionContextProvider:(id)arg1;
- (bool)isFinishedAnimating;
- (bool)isFluidSwitcherAnimationController;
- (bool)isInteractive;
- (bool)isReasonableMomentToInterrupt;
- (bool)isStepped;
- (bool)needsCATransactionActivate;
- (id)notifyObserversTransaction;
- (void)removeObserver:(id)arg1;
- (void)restartTransition;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)setAnimationTransactionCompletion:(id /* block */)arg1;
- (void)setNeedsCATransactionActivate:(bool)arg1;
- (void)setStepPercentage:(double)arg1;
- (void)setTransition:(id)arg1;
- (void)setTransitionContextProvider:(id)arg1;
- (bool)shouldResignActiveForAnimation;
- (void)startInteractiveTransition:(id)arg1;
- (double)stepPercentage;
- (void)stopDelayingAnimationForTransaction:(id)arg1;
- (void)stopDelayingCleanupForTransaction:(id)arg1;
- (id)toApplicationSceneEntities;
- (id)toApplicationSceneEntity;
- (id)transition;
- (id)transitionContextProvider;
- (id)transitionCoordinator;
- (void)transitionDidFinish:(id)arg1;
- (bool)transitionSupportsCancelling;
- (bool)transitionSupportsRestarting;
- (bool)transitionWasCancelled;
- (bool)transitionWasRestarted;
- (bool)waitingToStart;

@end
