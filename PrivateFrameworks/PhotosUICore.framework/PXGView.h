/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGView : UIView <PXDebugHierarchyProvider, PXDiagnosticsEnvironment, PXGAccessibilityRendererDelegate, PXGDiagnosticsProvider, PXGEngineDelegate, PXScrollViewControllerObserver, UIGestureRecognizerDelegate> {
    <PXGViewAccessibilityDelegate> * _accessibilityDelegate;
    UIColor * _backgroundColor;
    PXGDebugHUDLayer * _debugHUDLayer;
    <PXGViewDiagnosticsSource> * _diagnosticsSource;
    PXGEngine * _engine;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestPadding;
    bool  _isAnimatingScroll;
    bool  _isScrolling;
    MTKView * _metalView;
    id /* block */  _nextDidLayoutHandler;
    NSDictionary * _ppt_currentTestOptions;
    PXGRectDiagnosticsLayer * _rectDiagnosticsLayer;
    PXScrollViewController * _scrollViewController;
    PXGAnchor * _scrollingAnimationAnchor;
    PXScrollViewSpeedometer * _scrollingSpeedometer;
    bool  _shouldWorkaround18475431;
    bool  _showDebugHUD;
    bool  _showPerspectiveDebug;
    PXGLayout * accessibilityRootLayout;
    bool  canSelectAccessibilityGroupElements;
    bool  canSelectAccessibilityGroupElementsChildren;
}

@property (nonatomic) <PXGViewAccessibilityDelegate> *accessibilityDelegate;
@property (nonatomic, readonly) PXGLayout *accessibilityRootLayout;
@property (nonatomic, readonly) bool canSelectAccessibilityGroupElements;
@property (nonatomic, readonly) bool canSelectAccessibilityGroupElementsChildren;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *debugHierarchyIdentifiers;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic, retain) <PXGViewDiagnosticsSource> *diagnosticsSource;
@property (nonatomic, readonly) PXGEngine *engine;
@property (nonatomic, readonly) bool hasExtendedColorDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestPadding;
@property (nonatomic) bool isAnimatingScroll;
@property (nonatomic) bool isScrolling;
@property (nonatomic, readonly) MTKView *metalView;
@property (nonatomic, copy) id /* block */ nextDidLayoutHandler;
@property (setter=ppt_setCurrentTestOptions:, nonatomic, copy) NSDictionary *ppt_currentTestOptions;
@property (nonatomic, readonly) NSDictionary *ppt_extraResults;
@property (nonatomic, readonly) NSString *preferredFileNameForExportingDebugHierarchy;
@property (nonatomic, retain) PXGLayout *rootLayout;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, retain) PXGAnchor *scrollingAnimationAnchor;
@property (nonatomic, readonly) PXScrollViewSpeedometer *scrollingSpeedometer;
@property (nonatomic) bool shouldWorkaround18475431;
@property (nonatomic) bool showDebugHUD;
@property (nonatomic) bool showPerspectiveDebug;
@property (nonatomic) bool slowAnimationsEnabled;
@property (readonly) Class superclass;

+ (id)allDescriptions;
+ (id)debugHierarchyChildGroupingID;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3;
+ (void)enumerateAllViewsUsingBlock:(id /* block */)arg1;
+ (bool)forceAccessibilityEnabled;
+ (bool)isAvailable;
+ (long long)screenPixelCount;
+ (void)setForceAccessibilityEnabled:(bool)arg1;

- (void).cxx_destruct;
- (void)_applicationAccessibilityStatusChanged:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_ensureEndAnimatedScroll;
- (struct CGImage { }*)_fallbackImageForAssetReference:(id)arg1 mediaProvider:(id)arg2;
- (void)_forceAccessibilityEnabledChanged:(id)arg1;
- (void)_installNextDidLayoutHandler:(id /* block */)arg1;
- (void)_updateAccessibilityStatus;
- (void)_updateDebugHUD;
- (void)_updateFocusItemProvider;
- (void)_updateIsVisible;
- (void)_updateLayoutScreenScale;
- (void)_updateLayoutViewEnvironment;
- (void)_updateMetalView;
- (void)_updateUserInterfaceDirection;
- (void)_willChangeBoundsSizeFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)accessibilityDelegate;
- (id)accessibilityHitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)accessibilityRootLayout;
- (id)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (id)assetClosestToAsset:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)axScrollToAsset:(id)arg1;
- (id)backgroundColor;
- (bool)canSelectAccessibilityGroupElements;
- (bool)canSelectAccessibilityGroupElementsChildren;
- (id)curatedLibraryHitTestResultsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withControl:(long long)arg2;
- (id)debugHierarchyIdentifiers;
- (id)diagnosticDescription;
- (id)diagnosticsSource;
- (void)didMoveToWindow;
- (void)disablePreheating;
- (id)engine;
- (void)engine:(id)arg1 updateDebugHUDWithStats:(struct { double x1[6]; double x2[6]; long long x3[6]; double x4[6]; double x5[6]; }*)arg2;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint { double x1; double x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint { double x1; double x2; })arg1 withControls:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateCuratedLibraryHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateCuratedLibraryHitTestResultsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDebugHierarchyWithIdentifier:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)exportDebugHierarchyToURL:(id)arg1 error:(id*)arg2;
- (id)firstCuratedLibraryHitTestResultsAtPoint:(struct CGPoint { double x1; double x2; })arg1 withControl:(long long)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePan:(id)arg1;
- (bool)hasExtendedColorDisplay;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestPadding;
- (id)hitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 passingTest:(id /* block */)arg3;
- (id)hitTestResultsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTestResultsAtPoint:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 passingTest:(id /* block */)arg3;
- (id)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2;
- (id)hitTestResultsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 passingTest:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)installAnimationRenderingCompletionHandler:(id /* block */)arg1;
- (void)installLayoutCompletionHandler:(id /* block */)arg1;
- (bool)isAnimatingScroll;
- (bool)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2;
- (bool)isScrolling;
- (bool)itemDidShowAlternateUIAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)itemDidShowDefaultUIAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)itemWasDoubleClickedWithHitTestResult:(id)arg1;
- (bool)itemWasRightClickedWithHitTestResult:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (id)metalView;
- (id /* block */)nextDidLayoutHandler;
- (void)notifySelectedCellsChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)ppt_cleanUpAfterTest:(id)arg1 isScrollTest:(bool)arg2;
- (id)ppt_currentTestOptions;
- (id)ppt_extraResults;
- (void)ppt_prepareForTest:(id)arg1 withOptions:(id)arg2 isScrollTest:(bool)arg3;
- (void)ppt_setCurrentTestOptions:(id)arg1;
- (id)preferredFileNameForExportingDebugHierarchy;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage {}**)arg2 fallbackMediaProvider:(id)arg3;
- (id)regionOfInterestForHitTestResult:(id)arg1;
- (id)regionOfInterestForObjectReference:(id)arg1;
- (id)regionOfInterestForSpriteReference:(id)arg1;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1 pixelBufferSourcesProvider:(id)arg2 namedImagesBundle:(id)arg3;
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;
- (id)rootLayout;
- (void)safeAreaInsetsDidChange;
- (id)scrollViewController;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewControllerDidLayoutSubviews:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
- (id)scrollingAnimationAnchor;
- (id)scrollingSpeedometer;
- (void)selectAssets:(id)arg1;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDiagnosticsSource:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsAnimatingScroll:(bool)arg1;
- (void)setIsScrolling:(bool)arg1;
- (void)setNextDidLayoutHandler:(id /* block */)arg1;
- (void)setRootLayout:(id)arg1;
- (void)setScrollingAnimationAnchor:(id)arg1;
- (void)setShouldWorkaround18475431:(bool)arg1;
- (void)setShowDebugHUD:(bool)arg1;
- (void)setShowPerspectiveDebug:(bool)arg1;
- (void)setSlowAnimationsEnabled:(bool)arg1;
- (bool)shouldWorkaround18475431;
- (bool)showDebugHUD;
- (bool)showPerspectiveDebug;
- (bool)slowAnimationsEnabled;
- (void)test_installRenderSnapshotHandler:(id /* block */)arg1;
- (struct CGImage { }*)textureSnapshotForSpriteReference:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForSpriteIndex:(unsigned int)arg1;

@end
