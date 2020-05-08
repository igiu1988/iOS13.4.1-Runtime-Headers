/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDiscoveryArticleAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _completed;
    UIView * _containerView;
    double  _duration;
    PKDiscoveryArticleViewController * _presentedVC;
    UIView * _presentedView;
    bool  _presenting;
    PKPassGroupsViewController * _presentingVC;
    UIView * _presentingView;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_moveCardView:(id)arg1 toView:(id)arg2 belowView:(id)arg3;
- (void)_updateWithTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)duration;
- (bool)isPresenting;
- (void)setDuration:(double)arg1;
- (void)setPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end