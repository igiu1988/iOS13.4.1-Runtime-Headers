/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGOneColumnLayout : PXGItemsLayout <PXCuratedLibraryAllPhotosBodyLayout> {
    long long  _anchorItem;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorItemCenter;
    id  _anchorObjectReference;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorViewportCenter;
    double  _aspectRatioLimit;
    bool  _didAlreadyUpdateLoadedItems;
    bool  _enableBestCropRect;
    bool  _fillSafeAreaTopInset;
    double  _interItemSpacing;
    bool  _isUpdating;
    double  _itemCaptionSpacing;
    int  _mediaKind;
    double  _overrideAspectRatio;
    double  _overrideAspectRatioAmount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    int  _presentationType;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
}

@property (nonatomic) long long anchorItem;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorItemCenter;
@property (nonatomic, retain) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorViewportCenter;
@property (nonatomic) double aspectRatioLimit;
@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableBestCropRect;
@property (nonatomic) bool fillSafeAreaTopInset;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideIncompleteLastRow;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemCaptionSpacing;
@property (nonatomic, readonly) bool itemCaptionsVisible;
@property (nonatomic) bool loadItemsOutsideAnchorViewport;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } loadedItems;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } loadedItemsRect;
@property (nonatomic) unsigned char mediaFlags;
@property (nonatomic) int mediaKind;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) double overrideAspectRatio;
@property (nonatomic) double overrideAspectRatioAmount;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) int presentationType;
@property (nonatomic, readonly) double rowHeight;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsContentMode;
@property (nonatomic, readonly) long long visualItemShift;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_itemsToLoadForAnchorItem:(long long)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateSpriteStyles;
- (void)_updateSprites;
- (void)_updateVisibleRect;
- (void)alphaDidChange;
- (long long)anchorItem;
- (struct CGPoint { double x1; double x2; })anchorItemCenter;
- (id)anchorObjectReference;
- (struct CGPoint { double x1; double x2; })anchorViewportCenter;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(id /* block */)arg3 modifyState:(id /* block */)arg4;
- (double)aspectRatioLimit;
- (bool)canHandleVisibleRectRejection;
- (long long)columnForItem:(long long)arg1;
- (id)description;
- (id)diagnosticDescription;
- (bool)enableBestCropRect;
- (bool)fillSafeAreaTopInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;
- (bool)hideIncompleteLastRow;
- (id)init;
- (double)interItemSpacing;
- (void)invalidateLoadedItems;
- (double)itemCaptionSpacing;
- (bool)itemCaptionsVisible;
- (long long)itemClosestTo:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemRangeInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemsToLoad;
- (bool)loadItemsOutsideAnchorViewport;
- (void)loadedItemsDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })loadedItemsRect;
- (unsigned char)mediaFlags;
- (int)mediaKind;
- (long long)numberOfColumns;
- (double)overrideAspectRatio;
- (double)overrideAspectRatioAmount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (int)presentationType;
- (void)referenceSizeDidChange;
- (double)rowHeight;
- (void)screenScaleDidChange;
- (void)setAnchorItem:(long long)arg1;
- (void)setAnchorItemCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorObjectReference:(id)arg1;
- (void)setAnchorViewportCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAspectRatioLimit:(double)arg1;
- (void)setEnableBestCropRect:(bool)arg1;
- (void)setFillSafeAreaTopInset:(bool)arg1;
- (void)setHideIncompleteLastRow:(bool)arg1;
- (void)setInterItemSpacing:(double)arg1;
- (void)setItemCaptionSpacing:(double)arg1;
- (void)setLoadItemsOutsideAnchorViewport:(bool)arg1;
- (void)setMediaFlags:(unsigned char)arg1;
- (void)setMediaKind:(int)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(id /* block */)arg3;
- (void)setOverrideAspectRatio:(double)arg1;
- (void)setOverrideAspectRatioAmount:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPresentationType:(int)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(bool)arg3;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })spriteIndexRangeCoveringRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)supportsContentMode;
- (void)update;
- (void)visibleRectDidChange;
- (long long)visualItemShift;

@end
