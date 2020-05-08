/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryUIViewController : UIViewController <PXCPLServiceUIDelegate, PXChangeObserver, PXCuratedLibraryActionPerformerDelegate, PXCuratedLibraryFooterControllerDelegate, PXCuratedLibrarySkimmingControllerDelegate, PXCuratedLibraryUIKeyCommandDelegate, PXCuratedLibraryZoomLevelControlDelegate, PXMovieProviderDelegate, PXOneUpPresentationDelegate, PXPhotosCursorControllerDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXSwipeSelectionManagerDelegate, PXTouchingUIGestureRecognizerDelegate, PXUserInterfaceFeatureViewController, UIContextMenuInteractionDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate> {
    UIContextMenuInteraction * __contextMenuInteraction;
    PXAssetReference * __interactionAssetReference;
    UIViewController * __interactionPreviewViewController;
    UITargetedPreview * __interactionTargetedPreview;
    bool  __previewCommitting;
    PXChangeDirectionNumberFilter * _backNavigationGestureDirectionFilter;
    PXGTransition * _backNavigationTransition;
    PXCuratedLibraryBarsController * _barsController;
    PXCPLServiceUI * _cplServiceUI;
    PXPhotosCursorController * _cursorController;
    <UIDragSession> * _dragSession;
    PXContentUnavailableView * _emptyPlaceHolderView;
    PXProgrammaticNavigationRequest * _initialNavigationRequest;
    bool  _isGridViewReady;
    PXMovieProvider * _movieProvider;
    PXAssetReference * _navigatedAssetReference;
    UIPanGestureRecognizer * _panGesture;
    PHPhotoLibrary * _photoLibrary;
    UIPinchGestureRecognizer * _pinchGesture;
    PXRelaxedScreenEdgePanGestureRecognizer * _screenEdgePanGestureRecognizer;
    PXCuratedLibrarySecondaryToolbarController * _secondaryToolbarController;
    PXCuratedLibrarySkimmingController * _skimmingController;
    PXTouchingUIGestureRecognizer * _skimmingTouchGesture;
    PXSwipeSelectionManager * _swipeSelectionManager;
    UITapGestureRecognizer * _tapGesture;
    struct { 
        long long zoomLevel; 
        long long scrollRegime; 
    }  _trackedScrollContext;
    PXCuratedLibraryViewProvider * _viewProvider;
    long long  _zoomLevelBeforeBackNavigationTransition;
    PXCuratedLibraryZoomLevelControl * _zoomLevelControl;
    PXCuratedLibraryZoomLevelPinchFilter * _zoomLevelPinchFilter;
}

@property (setter=_setContextMenuInteraction:, nonatomic, retain) UIContextMenuInteraction *_contextMenuInteraction;
@property (setter=_setInteractionAssetReference:, nonatomic, retain) PXAssetReference *_interactionAssetReference;
@property (setter=_setInteractionPreviewViewController:, nonatomic, retain) UIViewController *_interactionPreviewViewController;
@property (setter=_setInteractionTargetedPreview:, nonatomic, retain) UITargetedPreview *_interactionTargetedPreview;
@property (setter=_setPreviewCommitting:, nonatomic) bool _previewCommitting;
@property (nonatomic, retain) PXChangeDirectionNumberFilter *backNavigationGestureDirectionFilter;
@property (nonatomic, retain) PXGTransition *backNavigationTransition;
@property (nonatomic, readonly) PXCuratedLibraryBarsController *barsController;
@property (nonatomic, readonly) bool canDragIn;
@property (nonatomic, readonly) bool canDragOut;
@property (nonatomic, retain) PXCPLServiceUI *cplServiceUI;
@property (nonatomic, readonly) PXPhotosCursorController *cursorController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <UIDragSession> *dragSession;
@property (nonatomic, retain) PXContentUnavailableView *emptyPlaceHolderView;
@property (nonatomic, readonly) PXGView *gridView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXProgrammaticNavigationRequest *initialNavigationRequest;
@property (nonatomic, readonly) bool isDraggingOut;
@property (nonatomic) bool isGridViewReady;
@property (nonatomic, retain) PXMovieProvider *movieProvider;
@property (nonatomic, retain) PXAssetReference *navigatedAssetReference;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGesture;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic, readonly) PXRelaxedScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;
@property (nonatomic, readonly) PXCuratedLibrarySecondaryToolbarController *secondaryToolbarController;
@property (nonatomic, readonly) PXCuratedLibrarySkimmingController *skimmingController;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *skimmingTouchGesture;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSwipeSelectionManager *swipeSelectionManager;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct { long long x1; long long x2; } trackedScrollContext;
@property (nonatomic, readonly) long long userInterfaceFeature;
@property (nonatomic, readonly) PXCuratedLibraryViewProvider *viewProvider;
@property (nonatomic, readonly) PXCuratedLibraryViewProvider *viewProviderIfLoaded;
@property (nonatomic) long long zoomLevelBeforeBackNavigationTransition;
@property (nonatomic, readonly) PXCuratedLibraryZoomLevelControl *zoomLevelControl;
@property (nonatomic, readonly) PXCuratedLibraryZoomLevelPinchFilter *zoomLevelPinchFilter;

- (void).cxx_destruct;
- (bool)_addDraggedAssetReferences:(id)arg1;
- (id)_assetReferenceForDragItem:(id)arg1;
- (id)_bestHitTestResultForCursorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_buttonHitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)_conditionallyUpdateEmptyPlaceholder;
- (id)_contextMenuInteraction;
- (void)_createAnimationForSkimmingWithDuration:(double)arg1 indicatorsDidChangeVisibility:(bool)arg2;
- (id)_createDragItemForAssetReference:(id)arg1;
- (id)_createPreviewViewForAssetReference:(id)arg1;
- (id)_createPreviewViewForHitTestResult:(id)arg1;
- (id)_dominantAssetCollectionReferenceForSkimming;
- (id)_draggableAssetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleNavigationRequestConditionCompletionForNavigationRequest:(id)arg1 withAssetReference:(id)arg2;
- (void)_handlePan:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handleScreenEdgePan:(id)arg1;
- (bool)_handleShowingChromeIfNeeded:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleTap:(id)arg1;
- (bool)_handleTapOnTitleWithHitTestResult:(id)arg1;
- (bool)_handleTapWithHitTestResult:(id)arg1;
- (id)_hitTestAssetReferenceAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)_hitTestResultAtLocation:(struct CGPoint { double x1; double x2; })arg1 withPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 swipeSelectionManager:(id)arg3;
- (id)_hitTestResultForPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_indexPathForAssetAtLocation:(struct CGPoint { double x1; double x2; })arg1 withPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 forSwipeSelectionManager:(id)arg3;
- (id)_interactionAssetReference;
- (id)_interactionPreviewViewController;
- (id)_interactionTargetedPreview;
- (void)_invalidateSecondaryToolbarContent;
- (void)_navigateToInitialScrollPositionForNavigationRequest:(id)arg1;
- (void)_navigateToRevealAssetForNavigationRequest:(id)arg1;
- (void)_prepareDragAndDrop;
- (void)_prepareGestureRecognizers;
- (void)_prepareSelectionManager;
- (void)_presentConfidentialityWarning;
- (void)_presentOneUpForAssetReference:(id)arg1 animated:(bool)arg2 withInteractiveMode:(long long)arg3;
- (bool)_previewCommitting;
- (id)_previewImageViewForImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 regionOfInterest:(id)arg3;
- (id)_regionOfInterestForAssetReference:(id)arg1 image:(id*)arg2;
- (id)_regionOfInterestForDragItem:(id)arg1 image:(id*)arg2;
- (void)_rescheduleNavigationRequest:(id)arg1;
- (void)_saveCurrentAllPhotosScrollPosition;
- (void)_scrollLibraryViewToInitialPositionWithCompletionHandler:(id /* block */)arg1;
- (void)_scrollToBottomAnimated:(bool)arg1;
- (bool)_scrollToNextSectionInDirection:(long long)arg1 animated:(bool)arg2;
- (id)_scrollView;
- (void)_setContextMenuInteraction:(id)arg1;
- (void)_setHiddenAssetReferences:(id)arg1;
- (void)_setInteractionAssetReference:(id)arg1;
- (void)_setInteractionPreviewViewController:(id)arg1;
- (void)_setInteractionTargetedPreview:(id)arg1;
- (void)_setPreviewCommitting:(bool)arg1;
- (bool)_shouldExposeCursorAnimations;
- (void)_stopLibraryViewScrolling;
- (void)_updateEmptyPlaceholder;
- (void)_updateSecondaryToolbarContent;
- (void)_updateSkimmingSlideshowEnabled;
- (void)_updateStatusBarStyle;
- (void)_updateTrackedScrollLevelIfNeeded;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)assetCollectionReferenceForSkimmingSlideshow:(id)arg1;
- (id)assetCollectionReferenceToShowSkimmingHints:(id)arg1;
- (id)backNavigationGestureDirectionFilter;
- (id)backNavigationTransition;
- (id)barsController;
- (bool)canBecomeFirstResponder;
- (bool)canDragIn;
- (bool)canDragOut;
- (bool)canRouteToDestination:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (id)cplServiceUI;
- (void)curatedLibraryActionPerformer:(id)arg1 presentShareSheetWithSharingContext:(id)arg2;
- (id)cursorController;
- (void)cursorController:(id)arg1 didExitRegionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCoordinateSpace:(id)arg3;
- (id)cursorController:(id)arg1 identifierForRegionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (long long)cursorController:(id)arg1 interactionOptionsForRegionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (id)cursorController:(id)arg1 regionOfInterestForCursorAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (id)cursorController:(id)arg1 viewForCursorInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (void)cursorController:(id)arg1 willEnterRegionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCoordinateSpace:(id)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragSession;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)emptyPlaceHolderView;
- (void)footerControllerRevealFooter:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gridView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initialNavigationRequest;
- (bool)isDraggingOut;
- (bool)isGridViewReady;
- (void)keyCommandDidRequestToBePerformed:(id)arg1;
- (void)keyCommandDidRequestToNavigateToOneUp:(id)arg1;
- (id)keyCommands;
- (id)movieProvider;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)navigatedAssetReference;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (bool)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)arg1;
- (id)panGesture;
- (id)photoLibrary;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (id)pinchGesture;
- (id)preferredFocusEnvironments;
- (long long)preferredStatusBarStyle;
- (id)presentingViewControllerForFooterController:(id)arg1;
- (id)presentingViewControllerForMovieProvider:(id)arg1;
- (bool)pu_handleSecondTabTap;
- (bool)pu_scrollToInitialPositionAnimated:(bool)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)px_didTransitionBars;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)px_willTransitionBars;
- (id)screenEdgePanGestureRecognizer;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (bool)scrollViewControllerShouldScrollToTop:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)secondaryToolbarController;
- (bool)serviceUI:(id)arg1 performAction:(long long)arg2;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (void)setBackNavigationGestureDirectionFilter:(id)arg1;
- (void)setBackNavigationTransition:(id)arg1;
- (void)setCplServiceUI:(id)arg1;
- (void)setDragSession:(id)arg1;
- (void)setEmptyPlaceHolderView:(id)arg1;
- (void)setInitialNavigationRequest:(id)arg1;
- (void)setIsGridViewReady:(bool)arg1;
- (void)setMovieProvider:(id)arg1;
- (void)setNavigatedAssetReference:(id)arg1;
- (void)setTrackedScrollContext:(struct { long long x1; long long x2; })arg1;
- (void)setZoomLevelBeforeBackNavigationTransition:(long long)arg1;
- (id)skimmingController;
- (void)skimmingController:(id)arg1 willHideSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(id)arg1 willShowSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingController:(id)arg1 willStartSkimmingAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
- (void)skimmingControllerDidStopSkimming:(id)arg1 animationDuration:(double)arg2;
- (id)skimmingTouchGesture;
- (id)swipeSelectionManager;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 toIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (void)swipeSelectionManagerDidAutoScroll:(id)arg1;
- (bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (id)tapGesture;
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;
- (struct { long long x1; long long x2; })trackedScrollContext;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)userInterfaceFeature;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (id)viewProvider;
- (id)viewProviderIfLoaded;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)zoomLevelBeforeBackNavigationTransition;
- (id)zoomLevelControl;
- (void)zoomLevelControl:(id)arg1 didTapOnAlreadySelectedZoomLevel:(long long)arg2;
- (id)zoomLevelPinchFilter;

@end
