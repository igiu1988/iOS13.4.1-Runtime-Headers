/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBarSwipeAffordanceView : UIView <SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, UIGestureRecognizerDelegate> {
    bool  _active;
    double  _additionalEdgeSpacing;
    <SBBarSwipeAffordanceDelegate> * _delegate;
    UINotificationFeedbackGenerator * _dismissalFeedbackGenerator;
    long long  _feedbackType;
    SBHomeGrabberView * _grabberView;
    SBHomeGestureInteraction * _homeGestureInteraction;
    NSHashTable * _observers;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) long long colorBias;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBBarSwipeAffordanceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long feedbackType;
@property (nonatomic, readonly) SBHomeGrabberView *grabberView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_deactivate;
- (long long)_effectiveOrientationAccountingForTransforms;
- (void)_fireAction;
- (id)_hideHomeAffordanceAnimationSettings;
- (void)_offsetGrabberForProgress:(double)arg1;
- (double)_progressWithTranslation:(struct CGPoint { double x1; double x2; })arg1 liftoffVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)_runBlockOnObservers:(id /* block */)arg1;
- (void)_setGrabberAdditionalEdgeSpacing:(double)arg1;
- (id)_settleAffordanceAnimationBehaviorDescription;
- (void)_settleGrabber;
- (id)_unhideHomeAffordanceAnimationSettings;
- (void)addObserver:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (long long)colorBias;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (long long)feedbackType;
- (id)grabberView;
- (unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)homeGestureInteractionBegan:(id)arg1;
- (void)homeGestureInteractionCancelled:(id)arg1;
- (void)homeGestureInteractionChanged:(id)arg1;
- (void)homeGestureInteractionEnded:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (void)layoutSubviews;
- (void)removeObserver:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setColorBias:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackType:(long long)arg1;
- (bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
