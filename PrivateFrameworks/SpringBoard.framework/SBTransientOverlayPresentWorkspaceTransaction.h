/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
    SBUIAnimationController * _animation;
    FBDisplayLayoutTransition * _layoutTransition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)_performStandardPresentationAnimated:(bool)arg1;
- (void)_willBegin;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1;

@end
