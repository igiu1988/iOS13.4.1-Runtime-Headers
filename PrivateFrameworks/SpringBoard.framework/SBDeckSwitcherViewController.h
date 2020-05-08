/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate> {
    SBSwitcherAppSuggestionViewController * _appSuggestionController;
}

@property (nonatomic, retain) SBSwitcherAppSuggestionViewController *appSuggestionController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(id /* block */)arg2;
- (id)appSuggestionController;
- (id)bestAppSuggestion;
- (id)handleGestureDidBegin:(id)arg1;
- (id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)performTransitionWithContext:(id)arg1 animated:(bool)arg2 alongsideAnimationHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setAppSuggestionController:(id)arg1;
- (void)setBestAppSuggestion:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
- (void)viewWillLayoutSubviews;

@end
