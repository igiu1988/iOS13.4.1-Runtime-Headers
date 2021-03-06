/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGLayout : NSObject <PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder, PXGDataSourceDrivenLayout, PXGDiagnosticsProvider, PXGSpriteIndexReferencing> {
    PXGReusableAccessibilityContentInfo * _accessibilityGroupElement;
    PXGAnchor * _activeAnchor;
    double  _alpha;
    NSMutableArray * _animations;
    <PXGAXResponder> * _axNextResponder;
    NSMutableArray * _changeDetails;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <PXGLayoutContentSource> * _contentSource;
    <PXGDisplayAssetSource> * _displayAssetSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _estimatedContentSize;
    NSMutableArray * _fences;
    bool  _isLastVisibleAreaAnchoringInformationInvalidated;
    bool  _isPerformingWithLocalUpdate;
    bool  _isRequestingVisibleRect;
    bool  _isUpdatingSpriteStyling;
    double  _lastBaseline;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastScrollDirection;
    PXGAnchor * _lastVisibleAreaAnchor;
    NSIndexSet * _localHiddenSpriteIndexes;
    bool  _needsUpdate;
    long long  _numberOfDescendantAnchors;
    unsigned int  _numberOfSprites;
    unsigned short  _referenceOptions;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    PXGBasicAXGroup * _reusableAXGroup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    double  _screenScale;
    PXGSpriteDataStore * _spriteDataStore;
    NSIndexSet * _spriteIndexesWithInvalidatedStyle;
    PXGSpriteMetadataStore * _spriteMetadataStore;
    PXGSublayoutDataStore * _sublayoutDataStore;
    PXGLayout * _superlayout;
    NSMutableArray * _transitions;
    long long  _updateCount;
    <PXGLayoutUpdateDelegate> * _updateDelegate;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
    id  _userData;
    unsigned long long  _userInterfaceDirection;
    long long  _version;
    PXGViewEnvironment * _viewEnvironment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    <PXGLayoutVisibleRectDelegate> * _visibleRectDelegate;
}

@property (nonatomic, retain) PXGReusableAccessibilityContentInfo *accessibilityGroupElement;
@property (nonatomic, readonly, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) PXGAnchor *activeAnchor;
@property (nonatomic, readonly) bool allowsObjectReferenceSpriteIndexLookup;
@property (nonatomic) double alpha;
@property (nonatomic, readonly) unsigned long long anchoredContentEdges;
@property (nonatomic, readonly) long long anchoredSublayoutIndex;
@property (nonatomic, readonly, copy) NSArray *animations;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } axFrame;
@property (nonatomic, readonly) PXGBasicAXGroup *axGroup;
@property (nonatomic) <PXGAXResponder> *axNextResponder;
@property (nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } axVisibleRect;
@property (nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;
@property (nonatomic, readonly) bool canCreateAccessibilityGroupElement;
@property (nonatomic, readonly) bool canHandleVisibleRectRejection;
@property (nonatomic, readonly) bool canSelectAccessibilityGroupElements;
@property (nonatomic, readonly) bool canSelectAccessibilityGroupElementsChildren;
@property (nonatomic, readonly) NSMutableArray *changeDetails;
@property (nonatomic, readonly) unsigned int childrenNumberOfSprites;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) <PXGLayoutContentSource> *contentSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic) <PXGDisplayAssetSource> *displayAssetSource;
@property (nonatomic) struct CGSize { double x1; double x2; } estimatedContentSize;
@property (nonatomic, readonly, copy) NSArray *fences;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) unsigned long long fullyVisibleEdgesWithDefaultTolerance;
@property (nonatomic, readonly) bool hasBodyContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexSet *hiddenSpriteIndexes;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic, readonly) bool isUpdatingSpriteStyling;
@property (nonatomic, readonly) PXGItemsLayout *itemsLayout;
@property (nonatomic) double lastBaseline;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastScrollDirection;
@property (nonatomic, retain) PXGAnchor *lastVisibleAreaAnchor;
@property (nonatomic, readonly) PXGItemsLayout *layoutForItemChanges;
@property (nonatomic, readonly) unsigned int localNumberOfSprites;
@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic, readonly) long long numberOfDescendantAnchors;
@property (nonatomic, readonly) unsigned int numberOfSprites;
@property (nonatomic, readonly) long long numberOfSublayouts;
@property (nonatomic, readonly) struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; } orientedContentTransform;
@property (nonatomic, readonly) NSArray *pendingAnimations;
@property (nonatomic, readonly) NSArray *pendingFences;
@property (nonatomic, readonly) NSString *recursiveDescription;
@property (nonatomic) unsigned short referenceOptions;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) PXGLayout *rootLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic) double screenScale;
@property (nonatomic, readonly) bool shouldFaultInContentAtAnchoredContentEdges;
@property (nonatomic, readonly) bool shouldInvalidateDecorationForModifiedSprites;
@property (nonatomic, readonly) bool shouldUpdateDecorationMediaTargetSizes;
@property (nonatomic, readonly) PXGSpriteDataStore *spriteDataStore;
@property (nonatomic, readonly) PXGSpriteMetadataStore *spriteMetadataStore;
@property (nonatomic, readonly) PXGSublayoutDataStore *sublayoutDataStore;
@property (readonly) Class superclass;
@property (nonatomic) PXGLayout *superlayout;
@property (nonatomic, readonly, copy) NSArray *transitions;
@property (nonatomic, readonly) long long updateCount;
@property (nonatomic) <PXGLayoutUpdateDelegate> *updateDelegate;
@property (nonatomic, retain) id userData;
@property (nonatomic) unsigned long long userInterfaceDirection;
@property (nonatomic, readonly) long long version;
@property (nonatomic, retain) PXGViewEnvironment *viewEnvironment;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic) <PXGLayoutVisibleRectDelegate> *visibleRectDelegate;
@property (nonatomic, readonly) unsigned long long zoomBehavior;

- (void).cxx_destruct;
- (void)_addAnimations:(id)arg1;
- (void)_addFences:(id)arg1;
- (void)_addHiddenSpriteIndexes:(id)arg1;
- (void)_appendDescription:(id)arg1 atLevel:(long long)arg2;
- (id)_createAnchorForContentEdges:(unsigned long long)arg1 priority:(long long)arg2;
- (id)_createAnchorWithAnchor:(id)arg1 resetPriority:(bool)arg2;
- (id)_createAnchorWithPriority:(long long)arg1 constraints:(id /* block */)arg2;
- (void)_ensureSpriteDataStore;
- (void)_ensureSublayoutDataStore;
- (void)_enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 transform:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; })arg2 spriteOffset:(unsigned int)arg3 stop:(bool*)arg4 usingBlock:(id /* block */)arg5;
- (void)_enumerateSpritesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)_incrementNumberOfSprites:(long long)arg1;
- (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (void)_invalidateStyleOfSpritesWithIndexes:(id)arg1;
- (struct CGPoint { double x1; double x2; })_offsetToDescendantLayout:(id)arg1;
- (id)_paddingForLevel:(long long)arg1;
- (void)_recycleSpriteDataStore;
- (void)_resetHiddenSpriteIndexes;
- (void)_updateAnchoring;
- (void)_updateVersion;
- (void)_willAddSublayout:(id)arg1;
- (id)accessibilityGroupElement;
- (id)accessibilityLabel;
- (id)activeAnchor;
- (void)addAnchor:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)addFence:(id)arg1;
- (unsigned short)addResizableCapInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })addSpriteCount:(unsigned int)arg1 withInitialState:(id /* block */)arg2;
- (unsigned int)addSpriteWithInitialState:(id /* block */)arg1;
- (void)addSpritesAtIndexes:(id)arg1 initialState:(id /* block */)arg2;
- (void)addSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 initialState:(id /* block */)arg2;
- (void)addSublayout:(id)arg1;
- (void)addTransition:(id)arg1;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
- (bool)allowsObjectReferenceSpriteIndexLookup;
- (double)alpha;
- (void)alphaDidChange;
- (unsigned long long)anchoredContentEdges;
- (long long)anchoredSublayoutIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchoringRectForSpriteAtIndex:(unsigned int)arg1;
- (void)animationDidComplete:(id)arg1;
- (id)animations;
- (void)applySectionedChangeDetails:(id)arg1 dataSourceAfterChanges:(id)arg2 sublayoutProvider:(id)arg3 outChangedSections:(id*)arg4 outSectionsWithItemChanges:(id*)arg5 changeMediaVersionHandler:(id /* block */)arg6;
- (void)applySectionedChangedDetailsForSingleSection:(id)arg1 dataSourceAfterChanges:(id)arg2 changeMediaVersionHandler:(id /* block */)arg3;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(id /* block */)arg3 modifyState:(id /* block */)arg4;
- (void)applySublayoutChangeDetails:(id)arg1 countAfterChanges:(long long)arg2 sublayoutProvider:(id)arg3;
- (void)axAddSubgroupForSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (id)axContainingViewForAXGroup:(id)arg1;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;
- (struct CGPoint { double x1; double x2; })axConvertPoint:(struct CGPoint { double x1; double x2; })arg1 fromDescendantGroup:(id)arg2;
- (struct CGPoint { double x1; double x2; })axConvertPoint:(struct CGPoint { double x1; double x2; })arg1 toDescendantGroup:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axConvertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDescendantGroup:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axConvertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDescendantGroup:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axFrame;
- (id)axGroup;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)axNextResponder;
- (void)axRemoveSubgroupForSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (id)axSelectedSpriteIndexes;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axVisibleRect;
- (id)axVisibleSpriteIndexes;
- (bool)canCreateAccessibilityGroupElement;
- (bool)canHandleVisibleRectRejection;
- (bool)canSelectAccessibilityGroupElements;
- (bool)canSelectAccessibilityGroupElementsChildren;
- (id)changeDetails;
- (bool)changeVisibleRectToProposedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned int)childrenNumberOfSprites;
- (void)clearLastVisibleAreaAnchoringInformation;
- (id)commonAncestorWithLayout:(id)arg1;
- (void)containingScrollViewDidScroll:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)contentSizeDidChange;
- (id)contentSource;
- (id)convertChangeDetails:(id)arg1 fromSublayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayout:(id)arg2;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })convertRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 fromSublayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDescendantLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDescendantLayout:(id)arg2;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 fromDescendantLayout:(id)arg2;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 fromLayout:(id)arg2;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 toDescendantLayout:(id)arg2;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })convertSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 fromDescendantLayout:(id)arg2;
- (id)convertSpriteIndexes:(id)arg1 fromDescendantLayout:(id)arg2;
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 applySpriteTransforms:(bool)arg2 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; }*)arg3 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; unsigned short x4; unsigned short x5; unsigned char x6; }*)arg4 infos:(struct { int x1; int x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg5;
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 applySpriteTransforms:(bool)arg2 parentTransform:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; })arg3 parentSublayoutOrigin:(struct CGPoint { double x1; double x2; })arg4 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; }*)arg5 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; unsigned short x4; unsigned short x5; unsigned char x6; }*)arg6 infos:(struct { int x1; int x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg7;
- (void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 geometries:(struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; }*)arg2 styles:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; unsigned short x4; unsigned short x5; unsigned char x6; }*)arg3 infos:(struct { int x1; int x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg4;
- (id)createAnchorForContentEdges:(unsigned long long)arg1;
- (id)createAnchorForScrollingAnimationTowardsContentEdges:(unsigned long long)arg1;
- (id)createAnchorForScrollingSpriteAtIndex:(unsigned int)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)createAnchorForScrollingSpriteForObjectReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)createAnchorForScrollingSpriteForSpriteReference:(id)arg1 toScrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 customOffset:(id /* block */)arg4;
- (id)createAnchorForScrollingToContentEdges:(unsigned long long)arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)createAnchorForSpriteAtIndex:(unsigned int)arg1;
- (id)createAnchorForSpriteReferences:(id)arg1;
- (id)createAnchorForVisibleArea;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)arg1;
- (id)createAnchorFromSuperlayoutWithSublayoutIndex:(long long)arg1 sublayoutPositionEdges:(unsigned long long)arg2 ignoringScrollingAnimationAnchors:(bool)arg3;
- (id)createAnchorWithAnchor:(id)arg1;
- (id)createAnchorWithConstraints:(id /* block */)arg1;
- (id)createAnimation;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1;
- (id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(long long)arg1 userData:(id)arg2;
- (id)createCuratedLibraryLayoutSkimmingSlideshowAnimationFromSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 toSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(long long)arg1;
- (id)createCuratedLibraryLayoutZoomLevelChangeAnimationFromZoomLevel:(long long)arg1 toZoomLevel:(long long)arg2 withContext:(long long)arg3;
- (id)createFenceWithType:(unsigned long long)arg1;
- (id)createTransitionWithAnimations:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (void)didApplySpriteChangeDetails:(id)arg1;
- (void)didApplySublayoutChangeDetails:(id)arg1 axAdjustedSubgroupChangeDetails:(id)arg2 countAfterChanges:(long long)arg3;
- (void)didChangeSublayoutOrigins;
- (void)didFaultInSublayout:(id)arg1 atIndex:(long long)arg2 fromEstimatedContentSize:(struct CGSize { double x1; double x2; })arg3;
- (id)displayAssetSource;
- (id)dynamicSpriteReferenceForObjectReference:(id)arg1;
- (void)enumerateDescendantsLayoutsBreadthFirstReverseUsingBlock:(id /* block */)arg1;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)arg1;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSpritesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)arg1;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })estimatedContentSize;
- (id)fences;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)fullyVisibleEdgesWithDefaultTolerance;
- (unsigned long long)fullyVisibleEdgesWithTolerance:(double)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; })geometryForSpriteAtIndex:(unsigned int)arg1;
- (void)getIsAnyLayoutAnimating:(out bool*)arg1 zoomBehavior:(out unsigned long long*)arg2;
- (bool)hasBodyContent;
- (id)hiddenSpriteIndexes;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)init;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)insertSublayoutProvider:(id)arg1 atIndexes:(id)arg2;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)invalidateDecoration;
- (void)invalidateDecorationForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1;
- (void)invalidateLastVisibleAreaAnchoringInformation;
- (void)invalidateVersion;
- (bool)isAnimating;
- (bool)isDescendantOfLayout:(id)arg1;
- (bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int*)arg2;
- (bool)isUpdatingSpriteStyling;
- (id)itemsLayout;
- (double)lastBaseline;
- (struct CGPoint { double x1; double x2; })lastScrollDirection;
- (void)lastScrollDirectionDidChange;
- (id)lastVisibleAreaAnchor;
- (id)layoutForItemChanges;
- (id)leafSublayoutForSpriteIndex:(unsigned int)arg1;
- (unsigned int)localNumberOfSprites;
- (void)markLastVisibleAreaAnchoringInformationForInvalidation;
- (struct CGSize { double x1; double x2; })minPlayableSizeForSpriteAtIndex:(unsigned int)arg1;
- (void)modifySpritesAtIndexes:(id)arg1 state:(id /* block */)arg2;
- (void)modifySpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 state:(id /* block */)arg2;
- (void)moveSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 toRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg2;
- (bool)needsUpdate;
- (long long)numberOfDescendantAnchors;
- (unsigned int)numberOfSprites;
- (long long)numberOfSublayouts;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; double x2; })orientedContentTransform;
- (id)pendingAnimations;
- (id)pendingFences;
- (void)performChangesWithLocalUpdate:(id /* block */)arg1;
- (id)recursiveDescription;
- (unsigned short)referenceOptions;
- (void)referenceOptionsDidChange;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)referenceSizeDidChange;
- (void)removeAllAnimations;
- (void)removeAllFences;
- (void)removeAllTransitions;
- (void)removeAnchor:(id)arg1;
- (void)removeSpritesAtIndexes:(id)arg1;
- (void)removeSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeSublayoutsAtIndexes:(id)arg1;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceSublayoutAtIndex:(long long)arg1 withSublayout:(id)arg2;
- (id)rootLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (double)screenScale;
- (void)screenScaleDidChange;
- (void)setAccessibilityGroupElement:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setAxNextResponder:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentSource:(id)arg1;
- (void)setDisplayAssetSource:(id)arg1;
- (void)setEstimatedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHiddenSpriteIndexes:(id)arg1;
- (void)setLastBaseline:(double)arg1;
- (void)setLastScrollDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastVisibleAreaAnchor:(id)arg1;
- (void)setNeedsUpdate;
- (void)setReferenceOptions:(unsigned short)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScreenScale:(double)arg1;
- (void)setSuperlayout:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)setUserData:(id)arg1;
- (void)setUserInterfaceDirection:(unsigned long long)arg1;
- (void)setViewEnvironment:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleRectDelegate:(id)arg1;
- (bool)shouldFaultInContentAtAnchoredContentEdges;
- (bool)shouldInvalidateDecorationForModifiedSprites;
- (bool)shouldUpdateDecorationMediaTargetSizes;
- (id)spriteDataStore;
- (unsigned int)spriteIndexForObjectReference:(id)arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (unsigned int)spriteIndexForSpriteReference:(id)arg1;
- (unsigned int)spriteIndexForSpriteReference:(id)arg1 options:(unsigned long long)arg2;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)spriteMetadataStore;
- (id)spriteReferenceForObjectReference:(id)arg1;
- (id)spriteReferenceForSpriteIndex:(unsigned int)arg1;
- (id)spriteReferenceForSpriteIndex:(unsigned int)arg1 objectReference:(id)arg2;
- (id)spriteReferenceForSpriteReference:(id)arg1;
- (struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; unsigned short x4; unsigned short x5; unsigned char x6; })styleForSpriteAtIndex:(unsigned int)arg1;
- (void)sublayout:(id)arg1 didAddAnchor:(id)arg2;
- (void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2;
- (void)sublayout:(id)arg1 didRemoveAnchor:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)sublayoutAtIndex:(long long)arg1 loadIfNeeded:(bool)arg2;
- (id)sublayoutDataStore;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (id)sublayoutForSpriteIndex:(unsigned int)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (long long)sublayoutIndexForSpriteIndex:(unsigned int)arg1;
- (long long)sublayoutIndexForSpriteReference:(id)arg1 options:(unsigned long long)arg2;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (id)superlayout;
- (id)transitions;
- (void)update;
- (long long)updateCount;
- (id)updateDelegate;
- (void)updateIfNeeded;
- (void)updateStylingForSpritesAtIndexes:(id)arg1;
- (id)userData;
- (unsigned long long)userInterfaceDirection;
- (void)userInterfaceDirectionDidChange;
- (long long)version;
- (id)viewEnvironment;
- (void)viewEnvironmentDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (id)visibleRectDelegate;
- (void)visibleRectDidChange;
- (void)willFaultOutSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (unsigned long long)zoomBehavior;

@end
