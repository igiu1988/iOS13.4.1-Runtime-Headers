/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFluidSwitcherViewController : UIViewController <BSDescriptionProviding, BSUIScrollViewDelegate, PTSettingsKeyObserver, PTSettingsKeyPathObserver, SBAppSwitcherReusableSnapshotViewDelegate, SBAppSwitcherSnapshotImageCacheDelegate, SBChainableModifierDelegate, SBFluidSwitcherItemContainerDelegate, SBFluidSwitcherPageContentViewProviderDelegate, SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate, SBIconViewObserver, SBSearchGestureObserver, SBSwitcherContentViewControlling, SBSwitcherLiveContentOverlayCoordinatorDelegate, SBTetheredSwitcherContentViewControlling, UIGestureRecognizerDelegate> {
    id /* block */  _activeTransitionSubcompletionGenerator;
    NSMutableDictionary * _appLayoutToHeaderItemController;
    SBBestAppSuggestion * _bestAppSuggestion;
    UIPanGestureRecognizer * _borrowableScrollViewPanGestureRecognizer;
    NSArray * _cachedAdjustedAppLayouts;
    long long  _contentOrientation;
    SBFluidSwitcherContentView * _contentView;
    UIView * _crossfadeSnapshotView;
    long long  _currentBackdropBlurType;
    bool  _currentHomeScreenContentRequired;
    long long  _currentKeyboardSuppressionMode;
    bool  _currentWallpaperRequiredForSwitcher;
    long long  _currentWallpaperStyle;
    bool  _currentlyRequestingTethering;
    <SBSwitcherContentViewControllerDataSource> * _dataSource;
    NSString * _debugName;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    <SBSwitcherContentViewControllerDelegate> * _delegate;
    UITapGestureRecognizer * _dismissTapGestureRecognizer;
    UINotificationFeedbackGenerator * _emptySwitcherFeedbackGenerator;
    NSString * _fluidSwitcherAssertionReason;
    UINotificationFeedbackGenerator * _flyInFeedbackGenerator;
    SBFHomeGrabberSettings * _grabberSettings;
    NSMutableDictionary * _hiddenIconViews;
    NSMutableArray * _hiddenRecycledItemContainers;
    UIView * _hitTestBlockerView;
    unsigned long long  _ignoreNotifyTetheredControllerReasonCount;
    SBFloatingDockBehaviorAssertion * _inAppFloatingDockBehaviorAssertion;
    bool  _isShowingModifierTimeline;
    bool  _isTetheree;
    SBFluidSwitcherLayoutContext * _layoutContext;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    <SBSwitcherLiveContentOverlayCoordinating> * _liveContentOverlayCoordinator;
    NSMutableDictionary * _liveContentOverlays;
    bool  _liveContentRasterizationDisabled;
    SBAppSwitcherSnapshotLockoutViewControllerProvider * _lockoutVCProvider;
    UILabel * _modifierStackDebugLabel;
    SBFluidSwitcherModifierTimelineController * _modifierTimelineController;
    SBViewMorphAnimator * _morphToPiPAnimator;
    SBFluidSwitcherPageContentViewProvider * _pageContentViewProvider;
    SBWorkspaceApplicationSceneTransitionContext * _pendingTransitionContext;
    SBFluidSwitcherButton * _plusButton;
    UINotificationFeedbackGenerator * _reduceMotionFeedbackGenerator;
    SBSwitcherModifier * _reduceMotionModifier;
    SBFluidSwitcherTitledButton * _reopenClosedWindowsButton;
    UIApplicationSceneDeactivationAssertion * _resignActiveAssertion;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> * _rootModifier;
    SBSceneManager * _sceneManager;
    SBAppSwitcherScrollView * _scrollView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewLastContentOffset;
    bool  _scrollViewLastScrolledForward;
    SBAppSwitcherSettings * _settings;
    SBAppSwitcherSnapshotImageCache * _snapshotCache;
    SBFluidSwitcherContentView * _stashedContentView;
    <BSInvalidatable> * _stateCaptureInvalidatable;
    SBFloatingDockBehaviorAssertion * _switcherFloatingDockBehaviorAssertion;
    SBFloatingDockWindowLevelAssertion * _switcherFloatingDockWindowLevelAssertion;
    NSString * _tapticEngineEmptySwitcherReason;
    NSString * _tapticEngineForcePressCommitReason;
    NSString * _tapticEngineForcePressPreviewReason;
    <SBTetheredSwitcherContentViewControlling> * _tetheredViewController;
    SBFloatingDockBehaviorAssertion * _transientOverlayFloatingDockBehaviorAssertion;
    SBFloatingDockWindowLevelAssertion * _transientOverlayFloatingDockWindowLevelAssertion;
    UIApplicationSceneDeactivationAssertion * _transitionBeginResignActiveAssertion;
    NSMutableDictionary * _visibleItemContainers;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visibleItemRange;
    <BSInvalidatable> * _wallpaperRequireAssertion;
}

@property (nonatomic, readonly) NSArray *appLayouts;
@property (nonatomic, retain) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic, readonly) bool canInterruptActiveTransition;
@property (nonatomic) long long contentOrientation;
@property (nonatomic, retain) SBFluidSwitcherContentView *contentView;
@property (nonatomic) <SBSwitcherContentViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) BSAnimationSettings *defaultTransitionAnimationSettings;
@property (nonatomic) <SBSwitcherContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFHomeGrabberSettings *grabberSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *hiddenIconViews;
@property (nonatomic, retain) NSMutableArray *hiddenRecycledItemContainers;
@property (nonatomic, retain) SBFloatingDockBehaviorAssertion *inAppFloatingDockBehaviorAssertion;
@property (nonatomic, retain) SBFluidSwitcherLayoutContext *layoutContext;
@property (getter=isLiveContentRasterizationDisabled, nonatomic) bool liveContentRasterizationDisabled;
@property (nonatomic, retain) UILabel *modifierStackDebugLabel;
@property (nonatomic) SBViewMorphAnimator *morphToPiPAnimator;
@property (nonatomic, retain) SBFluidSwitcherButton *plusButton;
@property (nonatomic, retain) SBSwitcherModifier *reduceMotionModifier;
@property (nonatomic, retain) SBFluidSwitcherTitledButton *reopenClosedWindowsButton;
@property (nonatomic, retain) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *rootModifier;
@property (nonatomic, retain) SBAppSwitcherScrollView *scrollView;
@property (getter=isShowingModifierTimeline, nonatomic) bool showModifierTimeline;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFloatingDockBehaviorAssertion *switcherFloatingDockBehaviorAssertion;
@property (nonatomic, retain) SBFloatingDockWindowLevelAssertion *switcherFloatingDockWindowLevelAssertion;
@property (nonatomic, readonly) <SBTetheredSwitcherContentViewControlling> *tetheredViewController;
@property (nonatomic, retain) SBFloatingDockBehaviorAssertion *transientOverlayFloatingDockBehaviorAssertion;
@property (nonatomic, retain) SBFloatingDockWindowLevelAssertion *transientOverlayFloatingDockWindowLevelAssertion;
@property (nonatomic, retain) NSMutableDictionary *visibleItemContainers;
@property (nonatomic, retain) <BSInvalidatable> *wallpaperRequireAssertion;

- (void).cxx_destruct;
- (void)_acquireKeyboardSuppressionAssertionForMode:(long long)arg1;
- (void)_acquireResignActiveAssertionWithReason:(long long)arg1;
- (id)_activeTransientOverlayPresentedAppLayout;
- (void)_actuateEmptyAppSwitcherHaptic;
- (void)_addVisibleItemContainerForAppLayout:(id)arg1;
- (bool)_allowsHeaderItemsForAppLayout:(id)arg1;
- (id)_appLayoutForItemContainerAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_appLayoutForItemContainerIfExists:(id)arg1;
- (id)_appLayoutForWorkspaceTransientOverlay:(id)arg1;
- (bool)_appLayoutWantsToBeKeptInViewHierarchy:(id)arg1;
- (void)_applyStyleToItemContainer:(id)arg1 withMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)_applyStyleToLiveContentOverlay:(id)arg1 forItemContainer:(id)arg2;
- (void)_applyStyleToVisibleItemContainersWithMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)_blurItemContainerWithAnimation:(id)arg1;
- (void)_cancelInProcessAnimations;
- (void)_configureApplicationAndTransientOverlayDockBehaviorAssertionsForContext:(id)arg1;
- (void)_configureTransitionRequestForGestureBegin:(id)arg1;
- (void)_coolDownEmptyAppSwitcherHaptic;
- (id)_createWorkspaceTransientOverlayForAppLayout:(id)arg1;
- (double)_delayForTransitionWithContext:(id)arg1 animated:(bool)arg2;
- (void)_dispatchEventAndHandleAction:(id)arg1;
- (id)_dispatchEventAndReturnAction:(id)arg1;
- (void)_ensureCardSubviewOrdering;
- (id)_floatingDockIconLocationForTransitionSource:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFloatingAppLayoutInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForInlineAppExposeItemAspectFill:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemWithRole:(long long)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(long long)arg3;
- (void)_handleDismissTapGesture:(id)arg1;
- (void)_handleModifierAction:(id)arg1;
- (void)_handlePlusButtonTapped:(id)arg1;
- (id)_iconForApplicationSceneEntity:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconImageFrameForIconView:(id)arg1;
- (id)_iconViewForDisplayItem:(id)arg1 isVisible:(bool*)arg2;
- (bool)_isLayoutStateSwitcher:(id)arg1 allowTransitions:(bool)arg2;
- (bool)_isPerformingMatchMoveToIconView;
- (bool)_isScrollingConsideringTetheredSwitcher:(bool)arg1;
- (id)_itemContainerAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_itemContainerForAppLayoutIfExists:(id)arg1;
- (void)_layoutAppLayout:(id)arg1 behaviorMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)_layoutVisibleItemsWithBehaviorMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)_makeAppLayoutVisibleForTransitionWithContext:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_performActivatePlusButtonSwitcherModifierAction:(id)arg1;
- (void)_performBlurItemContainerAction:(id)arg1;
- (void)_performContentViewScaleAnimationForDosido;
- (void)_performCrossfadeIfNeededWithCompletion:(id /* block */)arg1;
- (void)_performModifierAction:(id)arg1;
- (void)_performModifierCompletionAction:(id)arg1;
- (void)_performModifierDosidoScaleAnimationAction:(id)arg1;
- (void)_performModifierEmitSBEventAction:(id)arg1;
- (void)_performModifierEmitStudyLogAction:(id)arg1;
- (void)_performModifierGroupAction:(id)arg1;
- (void)_performModifierHapticAction:(id)arg1;
- (void)_performModifierIconOverlayVisibilityUpdateAction:(id)arg1;
- (void)_performModifierIconViewVisibilityUpdateAction:(id)arg1;
- (void)_performModifierInjectVelocityAction:(id)arg1;
- (void)_performModifierInvalidateAdjustedAppLayoutsAction:(id)arg1;
- (void)_performModifierInvalidateReopenButtonTextAction:(id)arg1;
- (void)_performModifierMatchMoveToIconViewAction:(id)arg1;
- (void)_performModifierPerformTransitionAction:(id)arg1;
- (void)_performModifierReachabilityAction:(id)arg1;
- (void)_performModifierScrollToAppLayoutAction:(id)arg1;
- (void)_performModifierTimerEventAction:(id)arg1;
- (void)_performModifierUpdateLayoutAction:(id)arg1;
- (void)_performWithoutNotifyingTetheredViewController:(id /* block */)arg1;
- (void)_prepareForCrossfadeIfNeeded;
- (void)_rebuildCachedAdjustedAppLayouts;
- (bool)_removeVisibleItemContainerForAppLayout:(id)arg1;
- (void)_resetLastScrollViewState;
- (id)_rotationAnimationSettingsForTransitionContext:(id)arg1;
- (id /* block */)_sceneDeactivationPredicateMatchingAppLayouts;
- (void)_scrollToAppLayout:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGPoint { double x1; double x2; })_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg2 translation:(struct CGPoint { double x1; double x2; })arg3 startPoint:(struct CGPoint { double x1; double x2; })arg4 locationInView:(struct CGPoint { double x1; double x2; })arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7;
- (void)_setContentViewAlpha:(double)arg1 withMode:(long long)arg2 completion:(id /* block */)arg3;
- (void)_setScrollViewContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setupContentAndTransientViews;
- (void)_setupLiveContentOverlayForAppLayout:(id)arg1 itemContainer:(id)arg2 overlay:(id)arg3;
- (void)_setupMorphToPiPIfNeededForTransitionContext:(id)arg1;
- (bool)_shouldInterruptPresentationAndDismiss;
- (bool)_shouldItemContainersUseDarkLabels;
- (void)_temporarilyHideMatchMovedZoomDownAnimationViewAnimated:(bool)arg1;
- (id)_transitionEventForTransitionToLayoutState:(id)arg1 identifier:(id)arg2 phase:(unsigned long long)arg3 animated:(bool)arg4;
- (id)_transitionEventForTransitionWithContext:(id)arg1 identifier:(id)arg2 phase:(unsigned long long)arg3 animated:(bool)arg4;
- (id)_unadjustedAppLayouts;
- (void)_unblurItemContainer:(id)arg1;
- (void)_updateAppExposeAccessoryButtonsExtendedTouchRegions;
- (void)_updateAppStatusBarAndHomeGrabberVisibilityAnimated:(bool)arg1;
- (void)_updateAsynchronousSurfaceRetentionAssertion;
- (void)_updateBackdropType;
- (void)_updateContentViewPassesTouchesThrough;
- (void)_updateFloatingDockBehaviorAssertion;
- (void)_updateFloatingDockWindowLevelAssertion;
- (void)_updateHeaderItemsLabelColor;
- (void)_updateHomeScreenContentRequirement;
- (void)_updateHomeScreenCursorInteractions;
- (void)_updateKeyboardSuppressionAssertion;
- (void)_updateLayoutForInterfaceOrientation:(long long)arg1;
- (void)_updateLayoutWithBehaviorMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateLiveContentRasterization;
- (void)_updateModifierStackDebugLabel;
- (void)_updateModifierStackDebugLabelPresence;
- (void)_updateModifierTimelinePresence;
- (void)_updatePlusButtonPresence;
- (void)_updatePlusButtonStyleWithMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateReopenClosedWindowsButtonPresence;
- (void)_updateReopenClosedWindowsButtonText;
- (void)_updateReopenClosedWindowsButtonWithMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateResignActiveAssertion;
- (void)_updateScrollViewScrollEnabled;
- (void)_updateScrollViewSizeAndSpacing;
- (void)_updateSnapshotCacheReloadingForActiveInterfaceOrientationChange;
- (void)_updateSpringBoardStatusBarAssertionAnimated:(bool)arg1;
- (void)_updateStatusBarAndHomeGrabberVisibilityForAppLayout:(id)arg1 animated:(bool)arg2;
- (void)_updateStyleWithBehaviorMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateTetheredScrolling;
- (void)_updateVisibleItems;
- (void)_updateVisibleItemsLayoutAndStyleWithBehaviorMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateWallpaperStyle;
- (void)_warmupEmptyAppSwitcherHaptic;
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
- (id)activatingDisplayItemForAppLayout:(id)arg1;
- (void)addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(bool)arg3;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (id)appLayouts;
- (id)appLayoutsForImageCache:(id)arg1;
- (id)appLayoutsForWhichToGenerateFullSizeSnapshotsInImageCache:(id)arg1;
- (bool)areLiveContentOverlayUpdatesSuspended;
- (void)beginTetheringWithViewController:(id)arg1 asTetheree:(bool)arg2;
- (id)bestAppSuggestion;
- (bool)biasForwardForImageCache:(id)arg1;
- (id)borrowScrollViewPanGestureRecognizer;
- (bool)canInterruptActiveTransition;
- (bool)canSelectContainer:(id)arg1 numberOfTaps:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (id)containerViewControllerForPageViewFromProvider:(id)arg1;
- (long long)contentOrientation;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)dataSource;
- (void)dealloc;
- (id)defaultAppLayoutsForImageCache:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultHomeScreenIconSize;
- (id)defaultTransitionAnimationSettings;
- (id)delegate;
- (id)delegateForForSnapshotPageViewFromProvider:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didSelectContainer:(id)arg1;
- (void)dispatchAndHandleTetheredRemovalEvent:(id)arg1;
- (id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (double)displayCornerRadius;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (double)distanceToTetheredLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (void)endTetheringWithViewController:(id)arg1;
- (id)enterAppExposeForBundleID:(id)arg1;
- (id)entityRemovalSettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (double)floatingDockHeight;
- (double)floatingDockViewTopMargin;
- (double)floatingDockWindowLevel;
- (void)folderExpansionAnimationWillBegin:(id)arg1;
- (void)folderScrolledEnoughToClipSwitcherIconView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPageViewOfContainer:(id)arg1 fullyPresented:(bool)arg2;
- (struct CGPoint { double x1; double x2; })gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2;
- (void)gestureHandlingModifierRequestsUpdate:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)grabberSettings;
- (id)handleGestureDidBegin:(id)arg1;
- (id)handleGestureDidEnd:(id)arg1;
- (id)handleGestureDidUpdate:(id)arg1;
- (void)handleModifierAction:(id)arg1;
- (void)handleReopenClosedWindowsButtonTapped:(id)arg1;
- (bool)hasHomeButton;
- (bool)hasItemContainerAtLocationInContentView:(struct CGPoint { double x1; double x2; })arg1;
- (id)hiddenIconViews;
- (id)hiddenRecycledItemContainers;
- (id)highPriorityAppLayoutsForImageCache:(id)arg1;
- (void)historianModifier:(id)arg1 didRecordEntry:(id)arg2;
- (id)homeGestureSettings;
- (bool)homeScreenHasOpenFolder;
- (bool)homeScreenHasOpenFolderInLocation:(id)arg1;
- (double)homeScreenIconCornerRadiusForAppLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })homeScreenIconFrameForAppLayout:(id)arg1;
- (id)homeScreenIconLocationForAppLayout:(id)arg1;
- (double)homeScreenIconScaleForAppLayout:(id)arg1;
- (long long)homeScreenInterfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconImageFrameForAppLayout:(id)arg1;
- (id)iconLeafIdentifierForDisplayItem:(id)arg1;
- (id)iconViewForAppLayout:(id)arg1;
- (void)iconViewWasRecycled:(id)arg1;
- (id)inAppFloatingDockBehaviorAssertion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3;
- (bool)isAppLayoutHigherPriorityInTetheredSwitcher:(id)arg1;
- (bool)isAppLayoutVisibleInSwitcherBounds:(id)arg1;
- (bool)isDevicePad;
- (bool)isFloatingDockFullyPresented;
- (bool)isFloatingDockGesturePossible;
- (bool)isHomeScreenSidebarVisible;
- (bool)isLiveContentRasterizationDisabled;
- (bool)isRTLEnabled;
- (bool)isReduceMotionEnabled;
- (bool)isScrolling;
- (bool)isShowingModifierTimeline;
- (bool)isShowingSpotlightOrTodayView;
- (bool)isStatusBarHiddenForAppLayout:(id)arg1;
- (bool)isStudyLogEnabled;
- (bool)isUserInteractionEnabled;
- (bool)isWindowVisible;
- (bool)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1;
- (void)killContainer:(id)arg1 forReason:(long long)arg2;
- (id)layoutContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(id)arg4;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)loadView;
- (id)medusaSettings;
- (double)minimumHomeScreenScale;
- (id)modifierStackDebugLabel;
- (id)morphToPiPAnimator;
- (double)morphToPiPSourceAlpha;
- (struct CGPoint { double x1; double x2; })morphToPiPTargetCenter;
- (double)morphToPiPTargetScale;
- (void)noteAppLayoutsDidChange;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(bool)arg3;
- (id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(bool)arg3;
- (unsigned long long)numberOfAppLayouts;
- (long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1;
- (unsigned long long)numberOfTetheredAppLayouts;
- (long long)numberOfVisibleCards;
- (long long)orientationForPageViewFromProvider:(id)arg1;
- (long long)orientationForSnapshotOfAppLayout:(id)arg1 inImageCache:(id)arg2;
- (id)parentViewControllerForContentOverlay;
- (void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(id /* block */)arg3;
- (void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(id /* block */)arg3;
- (void)performTransitionWithContext:(id)arg1 animated:(bool)arg2 alongsideAnimationHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)plusButton;
- (id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (void)prepareToReopenClosedWindowsWithCompletion:(id /* block */)arg1;
- (id)reduceMotionModifier;
- (void)reduceMotionStatusDidChange:(id)arg1;
- (void)relinquishTransientOverlayViewController:(id)arg1;
- (void)removeLiveContentOverlayForAppLayout:(id)arg1 animated:(bool)arg2;
- (id)reopenClosedWindowsButton;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(bool)arg1;
- (void)returnScrollViewPanGestureRecognizer:(id)arg1;
- (id)rootModifier;
- (double)scaleForDownscaledSnapshotsForImageCache:(id)arg1;
- (struct CGPoint { double x1; double x2; })scrollProvidingModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })scrollProvidingModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(struct CGPoint { double x1; double x2; })arg2;
- (id)scrollView;
- (struct CGPoint { double x1; double x2; })scrollViewContentOffset;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1 withContext:(struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg2;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 startedShowing:(bool)arg2;
- (void)setBestAppSuggestion:(id)arg1;
- (void)setContentOrientation:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGrabberSettings:(id)arg1;
- (void)setHiddenIconViews:(id)arg1;
- (void)setHiddenRecycledItemContainers:(id)arg1;
- (void)setInAppFloatingDockBehaviorAssertion:(id)arg1;
- (void)setLayoutContext:(id)arg1;
- (void)setLiveContentOverlayUpdatesSuspended:(bool)arg1;
- (void)setLiveContentRasterizationDisabled:(bool)arg1;
- (void)setModifierStackDebugLabel:(id)arg1;
- (void)setMorphToPiPAnimator:(id)arg1;
- (void)setPlusButton:(id)arg1;
- (void)setReduceMotionModifier:(id)arg1;
- (void)setReopenClosedWindowsButton:(id)arg1;
- (void)setRootModifier:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setShowModifierTimeline:(bool)arg1;
- (void)setSwitcherFloatingDockBehaviorAssertion:(id)arg1;
- (void)setSwitcherFloatingDockWindowLevelAssertion:(id)arg1;
- (void)setTetheredContentView:(id)arg1;
- (void)setTetheredScrollViewContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setTransientOverlayFloatingDockBehaviorAssertion:(id)arg1;
- (void)setTransientOverlayFloatingDockWindowLevelAssertion:(id)arg1;
- (void)setVisibleItemContainers:(id)arg1;
- (void)setWallpaperRequireAssertion:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(bool)arg3;
- (bool)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (bool)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldMorphToPiPForTransitionContext:(id)arg1;
- (bool)shouldRubberbandHomeGrabberView;
- (bool)shouldUseBackgroundWallpaperTreatmentForItemContainer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForAppLayout:(id)arg1 fromProvider:(id)arg2;
- (double)snapshotScale;
- (double)snapshotScaleForSceneHandle:(id)arg1;
- (struct CGSize { double x1; double x2; })snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(id)arg2 interfaceOrientation:(long long)arg3 inImageCache:(id)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)switcherCardScale;
- (id)switcherFloatingDockBehaviorAssertion;
- (id)switcherFloatingDockWindowLevelAssertion;
- (long long)switcherInterfaceOrientation;
- (id)switcherSettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })switcherViewBounds;
- (id)switcherWindow;
- (double)switcherWindowLevel;
- (struct CGSize { double x1; double x2; })tetheredScrollViewContentSize;
- (id)tetheredViewController;
- (void)tetheredViewController:(id)arg1 didPerformTransitionWithMode:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transientOverlayFloatingDockBehaviorAssertion;
- (id)transientOverlayFloatingDockWindowLevelAssertion;
- (id)viewControllerForTransientOverlayAppLayout:(id)arg1 fromProvider:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleAppLayoutRangeForImageCache:(id)arg1;
- (id)visibleItemContainers;
- (id)wallpaperRequireAssertion;

@end
