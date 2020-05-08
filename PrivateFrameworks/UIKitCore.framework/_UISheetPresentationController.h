/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISheetPresentationController : UIPresentationController <UIDragInteractionDelegate, _UISheetInteractionDelegate, _UISheetLayoutInfoDelegate> {
    bool  __allowsTearOff;
    _UISheetAnimationController * __animationController;
    UIDimmingView * __confinedDimmingView;
    _UIRemoteViewController * __connectedRemoteViewController;
    bool  __didAttemptToStartDismiss;
    bool  __didTearOff;
    bool  __dimmingViewTapDismissing;
    struct CGPoint { 
        double x; 
        double y; 
    }  __initialTearOffPoint;
    UIPercentDrivenInteractiveTransition * __interactionController;
    bool  __isRemote;
    bool  __keyboardShown;
    _UISheetLayoutInfo * __layoutInfo;
    bool  __presentsAtStandardHalfHeight;
    UIViewPropertyAnimator * __remoteDismissalPropertyAnimator;
    bool  __remoteDismissing;
    _UISheetInteraction * __sheetInteraction;
    bool  __shouldPresentedViewControllerControlStatusBarAppearance;
    NSUserActivity * __tearOffActivity;
    UIDragInteraction * __tearOffInteraction;
    UIDimmingView * _dimmingView;
    UIDropShadowView * _dropShadowView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameOfPresentedViewInContainerView;
}

@property (setter=_setAllowsTearOff:, nonatomic) bool _allowsTearOff;
@property (setter=_setAnimatedTransition:, nonatomic, retain) _UISheetAnimationController *_animationController;
@property (nonatomic, readonly) _UISheetPresentationController *_childSheetPresentationController;
@property (setter=_setConfiguration:, nonatomic, retain) _UISheetPresentationControllerConfiguration *_configuration;
@property (nonatomic, readonly) UIDimmingView *_confinedDimmingView;
@property (nonatomic, readonly) _UIRemoteViewController *_connectedRemoteViewController;
@property (nonatomic) double _cornerRadiusForPresentationAndDismissal;
@property (setter=_setDetents:, nonatomic, copy) NSArray *_detents;
@property (setter=_setDidAttemptToStartDismiss:, nonatomic) bool _didAttemptToStartDismiss;
@property (setter=_setDidTearOff:, nonatomic) bool _didTearOff;
@property (getter=_isDimmingViewTapDismissing, setter=_setDimmingViewTapDismissing:, nonatomic) bool _dimmingViewTapDismissing;
@property (nonatomic, readonly) _UIRemoteViewController *_expectedRemoteViewController;
@property (getter=_isHosting, nonatomic, readonly) bool _hosting;
@property (setter=_setIndexOfCurrentDetent:, nonatomic) long long _indexOfCurrentDetent;
@property (setter=_setIndexOfLastUndimmedDetent:, nonatomic) long long _indexOfLastUndimmedDetent;
@property (setter=_setInitialTearOffPoint:, nonatomic) struct CGPoint { double x1; double x2; } _initialTearOffPoint;
@property (setter=_setInteractiveTransition:, nonatomic, retain) UIPercentDrivenInteractiveTransition *_interactionController;
@property (setter=_setIsRemote:, nonatomic) bool _isRemote;
@property (nonatomic, readonly) bool _isRootPresentation;
@property (getter=_isKeyboardShown, setter=_setKeyboardShown:, nonatomic) bool _keyboardShown;
@property (nonatomic, readonly) _UISheetLayoutInfo *_layoutInfo;
@property (setter=_setMode:, nonatomic) long long _mode;
@property (nonatomic, readonly) _UISheetPresentationController *_parentSheetPresentationController;
@property (setter=_setPassthroughViews:, nonatomic, copy) NSArray *_passthroughViews;
@property (setter=_setPresentsAtStandardHalfHeight:, nonatomic) bool _presentsAtStandardHalfHeight;
@property (nonatomic, retain) UIViewPropertyAnimator *_remoteDismissalPropertyAnimator;
@property (getter=_isRemoteDismissing, setter=_setRemoteDismissing:, nonatomic) bool _remoteDismissing;
@property (nonatomic, readonly) _UISheetInteraction *_sheetInteraction;
@property (setter=_setShouldPresentedViewControllerControlStatusBarAppearance:, nonatomic) bool _shouldPresentedViewControllerControlStatusBarAppearance;
@property (setter=_setShouldScaleDownBehindDescendantSheets:, nonatomic) bool _shouldScaleDownBehindDescendantSheets;
@property (setter=_setSourceView:, nonatomic, retain) UIView *_sourceView;
@property (setter=_setTearOffActivity:, nonatomic, retain) NSUserActivity *_tearOffActivity;
@property (nonatomic, readonly) UIDragInteraction *_tearOffInteraction;
@property (setter=_setWantsBottomAttached:, nonatomic) bool _wantsBottomAttached;
@property (setter=_setWantsBottomAttachedInCompactHeight:, nonatomic) bool _wantsBottomAttachedInCompactHeight;
@property (setter=_setWantsFullScreen:, nonatomic) bool _wantsFullScreen;
@property (setter=_setWantsGrabber:, nonatomic) bool _wantsGrabber;
@property (setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:, nonatomic) bool _widthFollowsPreferredContentSizeWhenBottomAttached;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UISheetPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIDimmingView *dimmingView;
@property (nonatomic, readonly) UIDropShadowView *dropShadowView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOfPresentedViewInContainerView;
@property (readonly) unsigned long long hash;
@property (getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:, nonatomic) bool shouldDismissWhenTappedOutside;
@property (readonly) Class superclass;

+ (long long)_initialMode;

- (void).cxx_destruct;
- (void)_accessibilityReduceMotionStatusDidChange;
- (bool)_allowsTearOff;
- (id)_animationController;
- (id)_childSheetPresentationController;
- (void)_completeInteractiveTransition:(bool)arg1 duration:(double)arg2 timingCurve:(id)arg3;
- (void)_completeInteractiveTransitionFromRemote:(bool)arg1 offset:(double)arg2 duration:(double)arg3 timingCurve:(id)arg4;
- (id)_configuration;
- (id)_confinedDimmingView;
- (id)_connectedRemoteViewController;
- (void)_containerViewBoundsDidChange;
- (void)_containerViewLayoutSubviews;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewTraitCollectionDidChange;
- (double)_cornerRadiusForPresentationAndDismissal;
- (id)_detents;
- (bool)_didAttemptToStartDismiss;
- (bool)_didTearOff;
- (id)_expectedRemoteViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_handleKeyboardNotification:(id)arg1 aboutToHide:(bool)arg2;
- (long long)_indexOfCurrentDetent;
- (long long)_indexOfLastUndimmedDetent;
- (bool)_inheritsPresentingViewControllerThemeLevel;
- (struct CGPoint { double x1; double x2; })_initialTearOffPoint;
- (id)_interactionController;
- (bool)_isDimmingViewTapDismissing;
- (bool)_isHosting;
- (bool)_isKeyboardShown;
- (bool)_isRemote;
- (bool)_isRemoteDismissing;
- (bool)_isRootPresentation;
- (void)_keyboardAboutToChangeFrame:(id)arg1;
- (void)_keyboardAboutToHide:(id)arg1;
- (void)_keyboardAboutToShow:(id)arg1;
- (id)_layoutInfo;
- (long long)_mode;
- (id)_parentSheetPresentationController;
- (id)_passthroughViews;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredInteractionControllerForDismissal:(id)arg1;
- (bool)_presentsAtStandardHalfHeight;
- (void)_realSourceViewGeometryDidChange;
- (id)_remoteDismissalPropertyAnimator;
- (void)_resetRemoteDismissing;
- (void)_setAllowsTearOff:(bool)arg1;
- (void)_setAnimatedTransition:(id)arg1;
- (void)_setConfiguration:(id)arg1;
- (void)_setDetents:(id)arg1;
- (void)_setDidAttemptToStartDismiss:(bool)arg1;
- (void)_setDidTearOff:(bool)arg1;
- (void)_setDimmingViewTapDismissing:(bool)arg1;
- (void)_setIndexOfCurrentDetent:(long long)arg1;
- (void)_setIndexOfLastUndimmedDetent:(long long)arg1;
- (void)_setInitialTearOffPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setInteractiveTransition:(id)arg1;
- (void)_setIsRemote:(bool)arg1;
- (void)_setKeyboardShown:(bool)arg1;
- (void)_setMode:(long long)arg1;
- (void)_setPassthroughViews:(id)arg1;
- (void)_setPresentsAtStandardHalfHeight:(bool)arg1;
- (void)_setRemoteDismissing:(bool)arg1;
- (void)_setShouldDismissWhenTappedOutside:(bool)arg1;
- (void)_setShouldPresentedViewControllerControlStatusBarAppearance:(bool)arg1;
- (void)_setShouldScaleDownBehindDescendantSheets:(bool)arg1;
- (void)_setSourceView:(id)arg1;
- (void)_setTearOffActivity:(id)arg1;
- (void)_setWantsBottomAttached:(bool)arg1;
- (void)_setWantsBottomAttachedInCompactHeight:(bool)arg1;
- (void)_setWantsFullScreen:(bool)arg1;
- (void)_setWantsGrabber:(bool)arg1;
- (void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(bool)arg1;
- (id)_sheetInteraction;
- (void)_sheetLayoutInfoDidInvalidateOutput:(id)arg1;
- (void)_sheetLayoutInfoLayout:(id)arg1;
- (void)_sheetLayoutInfoPrelayout:(id)arg1;
- (bool)_shouldDismissWhenTappedOutside;
- (bool)_shouldOccludeDuringPresentation;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (bool)_shouldPreserveFirstResponder;
- (bool)_shouldScaleDownBehindDescendantSheets;
- (id)_sourceView;
- (void)_startInteractiveTransitionFromRemoteWithProgress:(double)arg1 offset:(double)arg2;
- (void)_startInteractiveTransitionWithProgress:(double)arg1;
- (id)_tearOffActivity;
- (id)_tearOffInteraction;
- (void)_tryToConnectToRemoteViewController:(id)arg1;
- (void)_updateAnimationController;
- (void)_updateInteractiveTransitionFromRemoteWithProgress:(double)arg1 offset:(double)arg2;
- (void)_updateInteractiveTransitionWithProgress:(double)arg1;
- (void)_updateLayoutInfoContainerSafeAreaInsets;
- (void)_updateLayoutInfoContainerTraitCollection;
- (void)_updatePresentedViewFrame;
- (void)_updateShouldPresentedViewControllerControlStatusBarAppearance;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (bool)_wantsBottomAttached;
- (bool)_wantsBottomAttachedInCompactHeight;
- (bool)_wantsFullScreen;
- (bool)_wantsGrabber;
- (bool)_widthFollowsPreferredContentSizeWhenBottomAttached;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dropShadowView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (struct CGPoint { double x1; double x2; })offsetForInterruptedAnimationInSheetInteraction:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)setFrameOfPresentedViewInContainerView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_cornerRadiusForPresentationAndDismissal:(double)arg1;
- (void)set_remoteDismissalPropertyAnimator:(id)arg1;
- (void)sheetInteraction:(id)arg1 didChangeOffset:(struct CGPoint { double x1; double x2; })arg2;
- (bool)sheetInteraction:(id)arg1 shouldAllowVerticalRubberBandingWithEvent:(id)arg2;
- (bool)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(id)arg2;
- (void)transitionWillBegin:(bool)arg1;

@end
