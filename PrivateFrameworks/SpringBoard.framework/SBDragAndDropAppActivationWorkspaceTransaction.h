/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDragAndDropAppActivationWorkspaceTransaction : SBMainWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionObserver, SBWorkspaceApplicationSceneTransitionContextDelegate, UIDragInteractionDelegate_Private, UIDropInteractionDelegate> {
    SBAppPlatterDragPreview * _activePlatterPreview;
    <SBAppPlatterDragSourceViewProviding> * _activeSourceViewProvider;
    long long  _animatingPlatterPreview;
    bool  _beganTrackingDropSession;
    unsigned long long  _blurState;
    long long  _blurringElementViewControllers;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSizeForFloatingApplication;
    UIView * _contentDragPreview;
    long long  _currentDropAction;
    SBMainDisplayLayoutState * _currentDropActionProposedLayoutState;
    SBMainDisplayLayoutState * _currentLayoutState;
    SBToAppsWorkspaceTransaction * _currentWorkspaceTransaction;
    <BSInvalidatable> * _deferOrientationUpdatesForDragAndDropAssertion;
    <SBDragAndDropAppActivationWorkspaceTransactionDelegate> * _delegate;
    CADisplayLink * _displayLinkForWindowDrag;
    SBFluidSwitcherGesture * _dragAndDropGesture;
    bool  _dragExitedDropZone;
    SBDeviceApplicationSceneHandle * _draggingApplicationSceneHandle;
    bool  _dropAnimationCompleted;
    SBApplicationDropSession * _dropSession;
    SBMainWorkspaceTransitionRequest * _dropTransitionRequest;
    SBMainDisplayLayoutState * _finalLayoutState;
    SBFluidSwitcherViewController * _floatingSwitcherContentController;
    NSUUID * _gestureID;
    SBMainDisplayLayoutState * _initialLayoutState;
    SBLayoutElement * _layoutElementForWindowDrag;
    bool  _layoutStateTransitionCompleted;
    SBFluidSwitcherViewController * _mainSwitcherContentController;
    SBMedusaSettings * _medusaSettings;
    unsigned long long  _numberOfAttemptsRequestingVisibleItems;
    NSMutableSet * _pendingSceneUpdatesTransactions;
    bool  _performedDrop;
    UIViewFloatAnimatableProperty * _resizeAnimatableProperty;
    long long  _resizingElementViewControllers;
    SBMainDisplaySceneLayoutViewController * _sceneLayoutViewController;
    SBApplicationSceneUpdateTransaction * _sceneUpdateTransactionForWindowDrag;
    unsigned long long  _sessionState;
    NSMutableDictionary * _statusBarAssertions;
    SBTouchHistory * _touchHistory;
    bool  _windowDragEnteredPlatterZone;
    long long  _windowDragPauseCounter;
    bool  _windowLiftAnimationCompleted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isDragOverFullscreenRegionAtLocation:(struct CGPoint { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (bool)isDragOverSideGutterRegionsAtLocation:(struct CGPoint { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 totalContentDragGutterWidth:(double)arg3;
+ (double)prototypeSettingsContentDraggingCommandeerWidth;
+ (double)prototypeSettingsContentDraggingFloatingActivationWidth;
+ (double)prototypeSettingsContentDraggingSideActivationWidth;
+ (struct CGSize { double x1; double x2; })prototypeSettingsFullscreenActivationRegionSize;
+ (double)prototypeSettingsSideActivationGutterSize;
+ (double)prototypeSettingsWindowTearOffDraggingFloatingActivationWidth;
+ (double)prototypeSettingsWindowTearOffDraggingSideActivationWidth;
+ (bool)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2;
+ (bool)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2 isCurrentlyTracking:(bool)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceSceneInterfaceOrientedBoundsForDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2;

- (void).cxx_destruct;
- (void)_acquireStatusBarAssertions;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (bool)_areLayoutElementViewControllersBlurred;
- (bool)_areLayoutElementViewControllersCorrectlySizedForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2;
- (void)_begin;
- (void)_beginRequiringSceneViewMatchMoveAnimation;
- (bool)_canBeInterrupted;
- (bool)_canInterruptForCurrentDropAction;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_cleanUpAndCompleteTransactionIfNecessary;
- (void)_configurePlatterPreview:(id)arg1 forSceneHandle:(id)arg2 completion:(id /* block */)arg3;
- (id)_cornerRadiusConfigurationForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(bool)arg3 mode:(unsigned long long)arg4;
- (id)_createPlatterPreviewForApplication:(id)arg1 withSourceView:(id)arg2 dropSession:(id)arg3;
- (id)_currentGestureEventForGesture:(id)arg1;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (id)_dragPreviewForDroppingItem:(id)arg1 withDefault:(id)arg2;
- (void)_endDragAndDropFluidGesture;
- (void)_endRequiringSceneViewMatchMoveAnimation;
- (void)_fadeOutPreviousLayoutElementViewControllersIfNecessary;
- (unsigned long long)_gestureModifierPhaseForGestureState:(long long)arg1;
- (long long)_gestureType;
- (void)_getPlatterDiffuseShadowParameters:(struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; }*)arg1 rimShadowParameters:(struct SBDragPreviewShadowParameters { double x1; double x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; }*)arg2 diffuseFilters:(id*)arg3 rimFilters:(id*)arg4 forDropAction:(long long)arg5 setDown:(bool)arg6 mode:(unsigned long long)arg7 userInterfaceStyle:(long long)arg8;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 sideLayoutElementViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 separatorViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 sideLayoutElementViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 separatorViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6 spaceConfiguration:(long long)arg7;
- (void)_handleSessionDidEnd:(id)arg1;
- (void)_handleSessionDidPerformDrop:(id)arg1;
- (bool)_handleSessionDidUpdate:(id)arg1;
- (void)_handleWillAnimateDropWithAnimator:(id)arg1;
- (void)_interruptForDragExitedDropZoneIfNecessary;
- (void)_invalidateStatusBarAssertions;
- (long long)_layoutRoleForDropAction:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_platterFrameInSwitcherView;
- (double)_platterScale;
- (struct CGSize { double x1; double x2; })_platterSizeForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(bool)arg3;
- (id)_primaryApplicationLayoutElementViewController;
- (id)_primaryLayoutElementViewController;
- (void)_runFinalLayoutStateTransaction;
- (void)_setStatusBarsHidden:(bool)arg1;
- (void)_setupPlatterPreviewForContentDrag;
- (void)_setupResizeAnimatableProperty;
- (bool)_shouldComplete;
- (bool)_shouldFailLayoutStateTransitionForWindowDrag;
- (bool)_shouldPushInSceneLayoutViewControllerForDropAction:(long long)arg1;
- (bool)_showResizeUI;
- (id)_sideApplicationLayoutElementViewController;
- (id)_sideLayoutElementViewController;
- (struct CGSize { double x1; double x2; })_sizeForFloatingApplication;
- (id)_transitionRequestForDropAction:(long long)arg1;
- (void)_uncommandeerContentDrag;
- (void)_updateActiveSourceViewProviderWithDragState:(unsigned long long)arg1;
- (void)_updateAnchorPointForPlatterPreview:(id)arg1 dragPreview:(id)arg2 withSourceViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 location:(struct CGPoint { double x1; double x2; })arg4;
- (void)_updateCurrentDropActionForSession:(id)arg1;
- (void)_updateCurrentDropActionProposedLayoutState;
- (void)_updateForWindowDragForSession:(id)arg1;
- (void)_updateLayoutElementViewControllerBlurringWithCompletion:(id /* block */)arg1;
- (void)_updateLayoutElementViewControllerCornerRadiusWithCompletion:(id /* block */)arg1;
- (void)_updateLayoutElementViewControllerDarkeningWithCompletion:(id /* block */)arg1;
- (void)_updateLayoutElementViewControllerForDropCompletion;
- (void)_updateLayoutElementViewControllerFrames;
- (void)_updateLayoutElementViewControllerStatusBars;
- (void)_updateLayoutElementViewControllersWithCompletion:(id /* block */)arg1;
- (void)_updatePlatterPreviewForSetDown:(bool)arg1 animated:(bool)arg2;
- (void)_updatePlatterPreviewWithUpdatedSourceView;
- (void)_updateSeparatorViewWithCompletion:(id /* block */)arg1;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (bool)canInterruptForTransitionRequest:(id)arg1;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithTransitionRequest:(id)arg1 mainSwitcherContentController:(id)arg2 floatingSwitcherContentController:(id)arg3 sceneLayoutViewController:(id)arg4 dropSession:(id)arg5 delegate:(id)arg6;
- (bool)isDragging;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (bool)matchesApplicationDropSession:(id)arg1;
- (bool)matchesUIDragDropSession:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)resizeUIAnimationFactory;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;

@end
