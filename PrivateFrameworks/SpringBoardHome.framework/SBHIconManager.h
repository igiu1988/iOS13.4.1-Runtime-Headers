/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHIconManager : NSObject <PTSettingsKeyObserver, SBHIconModelDelegate, SBHomeScreenIconTransitionAnimatorDelegate, SBIconLocationPresenting, SBIconViewDelegate, SBIconViewObserver, SBIconViewProviding, SBIconViewQuerying, SBNestingViewControllerDelegate, SBReusableViewMapDelegate, SBRootFolderControllerDelegate, SBRootFolderDelegate, SBRootFolderPageStateObserver, UIPopoverPresentationControllerDelegate> {
    bool  _animatingFolderCreation;
    bool  _animatingFolderOpeningOrClosing;
    bool  _animatingForUnscatter;
    SBFolder * _closingFolder;
    NSMutableArray * _currentCollapseCompletions;
    NSMutableArray * _currentExpandCompletions;
    SBWorkspaceInteractionContext * _currentInteractionContext;
    SBHomeScreenIconTransitionAnimator * _currentTransitionAnimator;
    <SBHIconManagerDelegate> * _delegate;
    bool  _dockPinnedForRotation;
    bool  _editing;
    NSTimer * _editingEndTimer;
    SBFloatingDockViewController * _floatingDockViewController;
    SBFolderIconImageCache * _folderIconImageCache;
    NSHashTable * _folderPresentationObservers;
    SBIconView * _highlightedIconView;
    SBHomeScreenDefaults * _homeScreenDefaults;
    SBHHomeScreenSettings * _homeScreenSettings;
    SBReusableViewMap * _homescreenIconAccessoryViewMap;
    SBReusableViewMap * _homescreenIconImageViewMap;
    SBReusableViewMap * _homescreenIconLabelAccessoryViewMap;
    SBIconDragManager * _iconDragManager;
    UIImpactFeedbackGenerator * _iconEditingFeedbackBehavior;
    NSTimer * _iconEditingFeedbackWarmTimer;
    SBHIconImageCache * _iconImageCache;
    SBHIconModel * _iconModel;
    SBIconPageIndicatorImageSetCache * _iconPageIndicatorImageSetCache;
    SBLeafIcon * _iconToReveal;
    NSMutableArray * _iconTouchesFinishedBlocks;
    SBReusableViewMap * _iconViewMap;
    SBIconLabelImageCache * _labelImageCache;
    _UILegibilitySettings * _legibilitySettings;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    unsigned long long  _listLayoutProviderLayoutOptions;
    unsigned long long  _maxIconViewsInHierarchy;
    bool  _needsRelayout;
    NSHashTable * _pageStateObservers;
    SBIconView * _popoverIconView;
    NSIndexPath * _postResetIndexPath;
    NSString * _precachedContentSizeCategory;
    SBIconView * _previewInteractingIconView;
    SBIconPreviousLocationTracker * _previousIconLocationTracker;
    unsigned long long  _relayoutCount;
    bool  _resettingRootIconLists;
    SBRootFolder * _rootFolder;
    SBRootFolderController * _rootFolderController;
    SBHRootFolderSettings * _rootFolderSettings;
    UIViewController<SBHIconRootViewProviding> * _rootViewController;
    bool  _showsDoneButtonWhileEditing;
    UIViewController<SBHSidebarProvider> * _sidebarViewController;
    Class  _subclassIconViewClass;
    NSMutableSet * _touchedIconViews;
    BSEventQueue * _transitionEventQueue;
}

@property (nonatomic, readonly) bool allowsNestedFolders;
@property (getter=isAnimatingFolderCreation, nonatomic) bool animatingFolderCreation;
@property (getter=isAnimatingFolderOpeningOrClosing, nonatomic) bool animatingFolderOpeningOrClosing;
@property (getter=isAnimatingForUnscatter, nonatomic) bool animatingForUnscatter;
@property (nonatomic, readonly) bool canCloseFolders;
@property (nonatomic, retain) SBFolder *closingFolder;
@property (nonatomic, retain) SBWorkspaceInteractionContext *currentInteractionContext;
@property (nonatomic, retain) SBHomeScreenIconTransitionAnimator *currentTransitionAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHIconManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDockPinnedForRotation, nonatomic) bool dockPinnedForRotation;
@property (getter=isEditing, nonatomic) bool editing;
@property (getter=isEditingAllowed, nonatomic, readonly) bool editingAllowed;
@property (nonatomic, retain) NSTimer *editingEndTimer;
@property (nonatomic, retain) SBFloatingDockViewController *floatingDockViewController;
@property (nonatomic, readonly) SBFolderIconImageCache *folderIconImageCache;
@property (getter=isFolderScrolling, nonatomic, readonly) bool folderScrolling;
@property (nonatomic, readonly) bool hasAnimatingFolder;
@property (nonatomic, readonly) bool hasOpenFolder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBIconView *highlightedIconView;
@property (nonatomic, readonly) SBHomeScreenDefaults *homeScreenDefaults;
@property (nonatomic, readonly) SBHHomeScreenSettings *homeScreenSettings;
@property (getter=isIconContentPossiblyVisibleOverApplication, nonatomic, readonly) bool iconContentPossiblyVisibleOverApplication;
@property (nonatomic, readonly) SBIconDragManager *iconDragManager;
@property (getter=isIconDragging, nonatomic, readonly) bool iconDragging;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *iconEditingFeedbackBehavior;
@property (nonatomic, retain) NSTimer *iconEditingFeedbackWarmTimer;
@property (nonatomic, readonly) SBHIconImageCache *iconImageCache;
@property (nonatomic, retain) SBHIconModel *iconModel;
@property (nonatomic, readonly) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache;
@property (nonatomic, retain) SBLeafIcon *iconToReveal;
@property (getter=isIconTouched, nonatomic, readonly) bool iconTouched;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic) unsigned long long listLayoutProviderLayoutOptions;
@property (nonatomic) bool needsRelayout;
@property (nonatomic, readonly) SBFolder *openedFolder;
@property (nonatomic, readonly) SBFolderController *openedFolderController;
@property (getter=isPerformingCancelledCollapseTransition, nonatomic, readonly) bool performingCancelledCollapseTransition;
@property (getter=isPerformingExpandTransition, nonatomic, readonly) bool performingExpandTransition;
@property (nonatomic, retain) SBIconView *popoverIconView;
@property (nonatomic, copy) NSIndexPath *postResetIndexPath;
@property (nonatomic, copy) NSString *precachedContentSizeCategory;
@property (nonatomic, readonly, copy) NSSet *presentedIconLocations;
@property (nonatomic, retain) SBIconView *previewInteractingIconView;
@property (getter=isResettingRootIconLists, nonatomic) bool resettingRootIconLists;
@property (nonatomic, retain) SBRootFolder *rootFolder;
@property (getter=isRootFolderContentVisible, nonatomic, readonly) bool rootFolderContentVisible;
@property (nonatomic, retain) SBRootFolderController *rootFolderController;
@property (getter=isRootFolderScrolling, nonatomic, readonly) bool rootFolderScrolling;
@property (nonatomic, readonly) SBHRootFolderSettings *rootFolderSettings;
@property (nonatomic, retain) UIViewController<SBHIconRootViewProviding> *rootViewController;
@property (getter=isScrolling, nonatomic, readonly) bool scrolling;
@property (nonatomic, readonly) SBSearchGesture *searchGesture;
@property (getter=isShowingOrTransitioningToTodayView, nonatomic, readonly) bool showingOrTransitioningToTodayView;
@property (getter=isShowingPullDownOrTodayViewSearch, nonatomic, readonly) bool showingPullDownOrTodayViewSearch;
@property (getter=isShowingPullDownSearch, nonatomic, readonly) bool showingPullDownSearch;
@property (getter=isShowingSpotlightOrTodayView, nonatomic, readonly) bool showingSpotlightOrTodayView;
@property (getter=isShowingTodayView, nonatomic, readonly) bool showingTodayView;
@property (nonatomic) bool showsDoneButtonWhileEditing;
@property (getter=isSidebarEffectivelyVisible, nonatomic, readonly) bool sidebarEffectivelyVisible;
@property (nonatomic, retain) UIViewController<SBHSidebarProvider> *sidebarViewController;
@property (getter=isSidebarVisibilityGestureActive, nonatomic, readonly) bool sidebarVisibilityGestureActive;
@property (getter=isSidebarVisible, nonatomic, readonly) bool sidebarVisible;
@property (nonatomic, readonly, copy) NSString *statisticsSummary;
@property (readonly) Class superclass;
@property (getter=isTrackingScroll, nonatomic, readonly) bool trackingScroll;
@property (nonatomic, readonly) BSEventQueue *transitionEventQueue;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;
@property (getter=isTransitioningHomeScreenState, nonatomic, readonly) bool transitioningHomeScreenState;

+ (double)defaultIconLayoutAnimationDuration;

- (void).cxx_destruct;
- (void)_addTouchedIconView:(id)arg1;
- (void)_animateFolderIcon:(id)arg1 open:(bool)arg2 location:(id)arg3 animated:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)_cleanupForClosingFolderAnimated:(bool)arg1;
- (void)_closeFolderController:(id)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(bool)arg1;
- (void)_configureRootFolderConfiguration:(id)arg1;
- (id)_createAppropriateRootViewControllerForRootFolder:(id)arg1;
- (id)_createRootFolderControllerForRootFolder:(id)arg1;
- (id)_createRootTableControllerForRootFolder:(id)arg1;
- (id)_currentFolderController;
- (void)_enqueueTransitionName:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_ensureRootFolderController;
- (void)_finishResetRootIconLists;
- (void)_finishResetRootIconListsReusingPreviousControllers:(bool)arg1;
- (void)_folderDidFinishOpenClose:(bool)arg1 animated:(bool)arg2 success:(bool)arg3;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_iconModelDidReloadIcons:(id)arg1;
- (void)_iconModelWillLayout:(id)arg1;
- (void)_iconModelWillReloadIcons:(id)arg1;
- (bool)_isShowingOrTransitioningToSearchableTodayView;
- (bool)_isShowingPullDownSearchOrTransitioning;
- (bool)_isShowingSearchableTodayView;
- (bool)_isShowingTodayViewSearch;
- (bool)_isShowingTodayViewSearchOrTransitioning;
- (void)_noteUserIsInteractingWithIcons;
- (void)_precacheImagesForRootIcons;
- (void)_prepareToResetRootIconLists;
- (id)_proposedFolderNameForGrabbedIcon:(id)arg1 recipientIcon:(id)arg2;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_removeTouchedIconView:(id)arg1;
- (void)_restartEditingEndTimer;
- (id)_rootFolderForRootViewControllerForRootFolder:(id)arg1;
- (void)_setupApplicationShortcutItemsForPresentation:(id)arg1;
- (bool)_shouldParallaxInIconLocation:(id)arg1;
- (bool)_shouldRespondToIconCloseBoxes;
- (void)_sizeCategoryDidChange:(id)arg1;
- (void)_tryScrollToIconToRevealAnimated:(bool)arg1;
- (void)_updateVisibleIconsViewsForAllowableCloseBoxes;
- (id)accessibilityTintColorForIconView:(id)arg1;
- (id)accessibilityTintColorForScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)activateTodayViewWithCompletion:(id /* block */)arg1;
- (id)addDownloadingIconsForDataSources:(id)arg1;
- (void)addFolderPresentationObserver:(id)arg1;
- (void)addIcons:(id)arg1 intoFolderIcon:(id)arg2 openFolderOnFinish:(bool)arg3 complete:(id /* block */)arg4;
- (void)addNewIconToDesignatedLocation:(id)arg1 animate:(bool)arg2 scrollToList:(bool)arg3 saveIconState:(bool)arg4;
- (void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(bool)arg2;
- (void)addPageStateObserver:(id)arg1;
- (double)additionalDragLiftScaleForIconView:(id)arg1;
- (unsigned long long)allowedInterfaceOrientations;
- (bool)allowsNestedFolders;
- (void)animateToDefaultStateWithCompletionHandler:(id /* block */)arg1;
- (id)animator:(id)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(id)arg3;
- (bool)animator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(id /* block */)arg2;
- (id)applicationBundleURLForShortcutsWithIconView:(id)arg1;
- (id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1;
- (id)backgroundViewForComponentsOfIconView:(id)arg1;
- (id)backgroundViewForDockForRootFolderController:(id)arg1;
- (id)backgroundViewForEditingDoneButtonForRootFolderController:(id)arg1;
- (bool)canCloseFolders;
- (bool)canOpenFolders;
- (bool)canSaveIconState:(id)arg1;
- (void)cancelAllDrags;
- (void)cancelAllFolderScrolling;
- (void)clearHighlightedIcon;
- (void)clearHighlightedIcon:(id)arg1;
- (long long)closeBoxTypeForIconView:(id)arg1;
- (void)closeFolderAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)closingFolder;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)containerViewForPresentingContextMenuForIconView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (Class)controllerClassForFolder:(id)arg1;
- (Class)controllerClassForFolderClass:(Class)arg1;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (long long)currentIconListIndex;
- (id)currentInteractionContext;
- (id)currentRootIconList;
- (id)currentTransitionAnimator;
- (id)defaultIconStateForIconModel:(id)arg1;
- (id)delegate;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didDeleteIconState:(id)arg1;
- (void)didSaveIconState:(id)arg1;
- (bool)dismissSpotlightAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)dismissSpotlightOrTodayViewAnimated:(bool)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderController:(id)arg1;
- (id)dockListView;
- (id)editingEndTimer;
- (id)effectiveDockListView;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)arg1;
- (void)enumerateIconModelsUsingBlock:(id /* block */)arg1;
- (void)enumerateIconViewQueryableChildrenUsingBlock:(id /* block */)arg1;
- (void)enumeratePageStateObserversUsingBlock:(id /* block */)arg1;
- (double)externalDockHeightForRootFolderController:(id)arg1;
- (id)externalDockIconListViewForRootFolderController:(id)arg1;
- (id)fakeStatusBarForFolderController:(id)arg1;
- (void)finishInstallingIconAnimated:(bool)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)firstPageLeafIdentifiersForIconModel:(id)arg1;
- (id)floatingDockListView;
- (id)floatingDockSuggestionsListView;
- (id)floatingDockViewController;
- (id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (bool)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (bool)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2;
- (void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2;
- (void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(bool)arg5;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (id)folderControllerForFolder:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (bool)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (id)folderControllerWantsToHideStatusBar:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerWillClose:(id)arg1;
- (void)folderControllerWillOpen:(id)arg1;
- (id)folderIconImageCache;
- (void)getListView:(id*)arg1 folder:(id*)arg2 relativePath:(id*)arg3 forIndexPath:(id)arg4 createIfNecessary:(bool)arg5;
- (void)getStatistics:(struct SBHIconManagerStatistics { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; }*)arg1;
- (bool)hasAnimatingFolder;
- (void)hasAnimatingFolderChanged;
- (bool)hasOpenFolder;
- (bool)hasOpenFolderInLocation:(id)arg1;
- (bool)hasRootFolderController;
- (bool)hasRootViewController;
- (void)highlightIconView:(id)arg1;
- (id)highlightedIconView;
- (id)homeScreenDefaults;
- (id)homeScreenSettings;
- (id)homescreenIconAccessoryViewMap;
- (id)homescreenIconImageViewMap;
- (id)homescreenIconLabelAccessoryViewMap;
- (bool)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)icon:(id)arg1 touchEnded:(bool)arg2;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (bool)iconAllowsBadging:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (id)iconDragManager;
- (void)iconDragManager:(id)arg1 didEndDragOriginatingFromIconView:(id)arg2 userDidBeginDrag:(bool)arg3 lastUserInteractionDate:(id)arg4;
- (void)iconDragManagerIconDraggingDidChange:(id)arg1;
- (void)iconDragManagerMultiItemIconDraggingDidChange:(id)arg1;
- (id)iconEditingFeedbackBehavior;
- (id)iconEditingFeedbackWarmTimer;
- (id)iconImageCache;
- (id)iconLabelImageCache;
- (id)iconListViewAtIndex:(unsigned long long)arg1 inFolder:(id)arg2 createIfNecessary:(bool)arg3;
- (id)iconListViewForIndexPath:(id)arg1;
- (id)iconLocationForPrecachingImages;
- (id)iconModel;
- (id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3;
- (void)iconModel:(id)arg1 launchIcon:(id)arg2 fromLocation:(id)arg3 context:(id)arg4;
- (id)iconModel:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2;
- (unsigned long long)iconModel:(id)arg1 maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
- (unsigned long long)iconModel:(id)arg1 maxIconCountForListInFolderClass:(Class)arg2;
- (unsigned long long)iconModel:(id)arg1 maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
- (bool)iconModel:(id)arg1 shouldAvoidPlacingIconOnFirstPage:(id)arg2;
- (void)iconModel:(id)arg1 willRemoveIcon:(id)arg2;
- (id)iconPageIndicatorImageSetCache;
- (bool)iconShouldAllowCloseBoxTap:(id)arg1;
- (bool)iconShouldAllowTap:(id)arg1;
- (void)iconTapped:(id)arg1;
- (id)iconToReveal;
- (void)iconTouchBegan:(id)arg1;
- (id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2;
- (bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4;
- (long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (bool)iconView:(id)arg1 editingModeGestureRecognizerDidFire:(id)arg2;
- (id)iconView:(id)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (id)iconView:(id)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (id)iconView:(id)arg1 labelImageWithParameters:(id)arg2;
- (id)iconView:(id)arg1 parallaxSettingsForIconAccessoryView:(id)arg2;
- (void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (bool)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)iconView:(id)arg1 shouldContinueToUseBackgroundViewForComponents:(id)arg2;
- (void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)iconView:(id)arg1 willRemoveIconAccessoryView:(id)arg2;
- (void)iconView:(id)arg1 willRemoveIconImageView:(id)arg2;
- (void)iconView:(id)arg1 willRemoveIconLabelAccessoryView:(id)arg2;
- (void)iconView:(id)arg1 willUseContextMenuStyle:(id)arg2;
- (void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3;
- (bool)iconViewCanBeginDrags:(id)arg1;
- (Class)iconViewClass;
- (bool)iconViewDisplaysBadges:(id)arg1;
- (bool)iconViewDisplaysCloseBox:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)iconViewMap;
- (void)iconViewShortcutsPresentationDidCancel:(id)arg1;
- (void)iconViewShortcutsPresentationDidFinish:(id)arg1;
- (bool)iconViewShouldBeginShortcutsPresentation:(id)arg1;
- (void)iconViewWasRecycled:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (id)iconViewWillCancelDrag:(id)arg1;
- (bool)iconsShouldAllowCloseBoxes;
- (id)imageViewForIconView:(id)arg1;
- (id)init;
- (long long)interfaceOrientation;
- (bool)isAnimatingFolderCreation;
- (bool)isAnimatingFolderOpeningOrClosing;
- (bool)isAnimatingForUnscatter;
- (bool)isDisplayingIcon:(id)arg1;
- (bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (bool)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2;
- (bool)isDisplayingIconView:(id)arg1;
- (bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (bool)isDockPinnedForRotation;
- (bool)isEditing;
- (bool)isEditingAllowed;
- (bool)isFloatingDockVisible;
- (bool)isFolderScrolling;
- (bool)isIconContentPossiblyVisibleOverApplication;
- (bool)isIconCurrentlyOnscreen:(id)arg1;
- (bool)isIconDragging;
- (bool)isIconTouched;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isIconVisiblyRepresented:(id)arg1;
- (bool)isPerformingCancelledCollapseTransition;
- (bool)isPerformingCancelledExpandTransition;
- (bool)isPerformingExpandTransition;
- (bool)isPresentingIconLocation:(id)arg1;
- (bool)isResettingRootIconLists;
- (bool)isRootFolderContentVisible;
- (bool)isRootFolderScrolling;
- (bool)isScrolling;
- (bool)isShowingOrTransitioningToTodayView;
- (bool)isShowingPullDownOrTodayViewSearch;
- (bool)isShowingPullDownSearch;
- (bool)isShowingSpotlightOrTodayView;
- (bool)isShowingTodayView;
- (bool)isSidebarEffectivelyVisible;
- (bool)isSidebarVisibilityGestureActive;
- (bool)isSidebarVisible;
- (bool)isTrackingScroll;
- (bool)isTransitioning;
- (bool)isTransitioningHomeScreenState;
- (id)launchActionsForIconView:(id)arg1;
- (id)launchURLForIconView:(id)arg1;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(bool)arg3;
- (void)layoutIconListsWithAnimationType:(long long)arg1;
- (void)layoutIconListsWithAnimationType:(long long)arg1 duration:(double)arg2 forceRelayout:(bool)arg3;
- (void)layoutIconListsWithAnimationType:(long long)arg1 forceRelayout:(bool)arg2;
- (id)legibilitySettings;
- (id)listLayoutProvider;
- (unsigned long long)listLayoutProviderLayoutOptions;
- (id)localizedDefaultFolderName;
- (id)localizedFolderNameForDefaultDisplayName:(id)arg1;
- (double)maxExternalDockHeightForRootFolderController:(id)arg1;
- (unsigned long long)maxIconCountForDockForIconModel:(id)arg1;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned long long)maxListCountForFolders;
- (unsigned long long)maxListCountForFoldersForIconModel:(id)arg1;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
- (bool)needsRelayout;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)noteFloatingDockWillAnimateChangeInHeight;
- (void)noteFloatingDockWillChangeHeight;
- (void)noteIconStateChangedExternally;
- (void)noteInterfaceOrientationChanged;
- (void)openFolderIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)openedFolder;
- (id)openedFolderController;
- (void)organizeAllIconsIntoFolders;
- (void)performAfterAllIconTouchesFinishedUsingBlock:(id /* block */)arg1;
- (void)popExpandedIconAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)popExpandedIconFromLocation:(id)arg1 interactionContext:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)popToCurrentRootIconList;
- (void)popToCurrentRootIconListWhenPossible;
- (id)popoverIconView;
- (id)postResetIndexPath;
- (id)precachedContentSizeCategory;
- (double)preferredExternalDockVerticalMarginForRootFolderController:(id)arg1;
- (bool)presentSpotlightFromBreadcrumb:(bool)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)presentSpotlightFromSource:(unsigned long long)arg1 fromBreadcrumb:(bool)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)presentStatistics;
- (id)presentedIconLocations;
- (id)previewInteractingIconView;
- (void)pushExpandedIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)reasonToDisallowInteractionOnIconView:(id)arg1;
- (id)reasonToDisallowTapOnIconView:(id)arg1;
- (void)recycleIconView:(id)arg1;
- (id)recycledViewsContainerProviderForViewMap:(id)arg1;
- (bool)relayout;
- (void)removeAllIconAnimations;
- (void)removeFolderPresentationObserver:(id)arg1;
- (void)removeIcon:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)removePageStateObserver:(id)arg1;
- (id)replaceDownloadingIconsForDataSources:(id)arg1 withIconsFromGenerator:(id /* block */)arg2;
- (void)replaceFolderIcon:(id)arg1 byContainedIcon:(id)arg2 animated:(bool)arg3;
- (bool)resetIconLayoutWithOptions:(unsigned long long)arg1;
- (void)resetRootIconLists;
- (id)rootFolder;
- (bool)rootFolder:(id)arg1 canBounceIcon:(id)arg2;
- (bool)rootFolder:(id)arg1 shouldAllowBadgingForIcon:(id)arg2;
- (id)rootFolderController;
- (void)rootFolderController:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderController:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderController:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;
- (void)rootFolderController:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderController:(id)arg1 statusBarInsetsDidChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)rootFolderController:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)rootFolderController:(id)arg1 willUsePropertyAnimator:(id)arg2 toTransitionToState:(long long)arg3;
- (void)rootFolderController:(id)arg1 willUseTransitionContext:(id)arg2 toTransitionToState:(long long)arg3;
- (bool)rootFolderControllerCanUseSeparateWindowForRotation:(id)arg1;
- (void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
- (void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(bool)arg3;
- (id)rootFolderSettings;
- (id)rootIconListAtIndex:(long long)arg1;
- (id)rootViewController;
- (void)runDownloadingIconTest;
- (void)scrollToIconListContainingIcon:(id)arg1 animate:(bool)arg2;
- (id)searchGesture;
- (void)setAnimatingFolderCreation:(bool)arg1;
- (void)setAnimatingFolderOpeningOrClosing:(bool)arg1;
- (void)setAnimatingForUnscatter:(bool)arg1;
- (void)setClosingFolder:(id)arg1;
- (void)setCurrentInteractionContext:(id)arg1;
- (void)setCurrentTransitionAnimator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockPinnedForRotation:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 withFeedbackBehavior:(id)arg2;
- (void)setEditingEndTimer:(id)arg1;
- (void)setFloatingDockViewController:(id)arg1;
- (void)setHighlightedIconView:(id)arg1;
- (void)setIconEditingFeedbackWarmTimer:(id)arg1;
- (void)setIconModel:(id)arg1;
- (void)setIconToReveal:(id)arg1;
- (void)setIconToReveal:(id)arg1 revealingPrevious:(bool)arg2;
- (void)setIdleModeText:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setListLayoutProviderLayoutOptions:(unsigned long long)arg1;
- (void)setNeedsRelayout:(bool)arg1;
- (void)setPopoverIconView:(id)arg1;
- (void)setPostResetIndexPath:(id)arg1;
- (void)setPrecachedContentSizeCategory:(id)arg1;
- (void)setPreviewInteractingIconView:(id)arg1;
- (void)setResettingRootIconLists:(bool)arg1;
- (void)setRootFolder:(id)arg1;
- (void)setRootFolderController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setShowsDoneButtonWhileEditing:(bool)arg1;
- (void)setSidebarViewController:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldHighlightTouchedIconView:(id)arg1;
- (bool)shouldRecycleIconView:(id)arg1;
- (bool)showsDoneButtonWhileEditing;
- (id)sidebarViewController;
- (id)statisticsSummary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarEdgeInsetsForFolderController:(id)arg1;
- (id)statusBarStyleRequestForFolderController:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsDockForIconModel:(id)arg1;
- (void)tearDownAndResetRootIconLists;
- (id)transitionEventQueue;
- (void)tryScrollToIconToRevealAnimated:(bool)arg1;
- (void)uninstallIcon:(id)arg1;
- (void)uninstallIcon:(id)arg1 animate:(bool)arg2;
- (void)uninstallIcon:(id)arg1 animate:(bool)arg2 completion:(id /* block */)arg3;
- (void)unscatterAnimated:(bool)arg1 afterDelay:(double)arg2 withCompletion:(id /* block */)arg3;
- (void)updateVisibleIconsToShowLeafIcons:(id)arg1 hideLeafIcons:(id)arg2 forceRelayout:(bool)arg3;
- (id)viewControllerForPresentingViewControllers;
- (id)viewMap:(id)arg1 makeNewViewOfClass:(Class)arg2;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (bool)viewMap:(id)arg1 shouldRecycleView:(id)arg2;

@end
