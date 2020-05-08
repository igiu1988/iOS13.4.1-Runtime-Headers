/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGDecoratingLayout : PXGLayout {
    <PXGAssetBadgeDecorationSource> * _assetBadgeDecorationSource;
    <PXGCaptionDecorationSource> * _captionDecorationSource;
    <PXGDebugDecorationSource> * _debugDecorationSource;
    PXGLayout * _decoratedLayout;
    <PXGLayoutContentSource> * _decorationSource;
    <PXGDragDecorationSource> * _dragDecorationSource;
    <PXGHighlightDecorationSource> * _highlightDecorationSource;
    NSMutableIndexSet * _invalidatedDecoratedSpriteIndexes;
    bool  _isUpdatingDecoratedLayout;
    unsigned int  _numberOfDecoratingSpritesPerDecoratedSprite;
    unsigned long long  _selectionDecorationAdditions;
    <PXGSelectionDecorationSource> * _selectionDecorationSource;
    long long  _selectionDecorationStyle;
    <PXGShadowSource> * _shadowSource;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
    bool  _wantsCaptionDecorations;
}

@property (nonatomic, readonly) <PXGAssetBadgeDecorationSource> *assetBadgeDecorationSource;
@property (nonatomic, readonly) <PXGCaptionDecorationSource> *captionDecorationSource;
@property (nonatomic, readonly) unsigned int debugDecorationIndex;
@property (nonatomic, readonly) <PXGDebugDecorationSource> *debugDecorationSource;
@property (nonatomic, retain) PXGLayout *decoratedLayout;
@property (nonatomic) <PXGLayoutContentSource> *decorationSource;
@property (nonatomic, readonly) <PXGDragDecorationSource> *dragDecorationSource;
@property (nonatomic, readonly) <PXGHighlightDecorationSource> *highlightDecorationSource;
@property (nonatomic, readonly) unsigned int numberOfDecoratingSpritesPerDecoratedSprite;
@property (nonatomic, readonly) <PXGSelectionDecorationSource> *selectionDecorationSource;

- (void).cxx_destruct;
- (void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (void)_updateDecoratedLayout;
- (void)_updateDecorationSources;
- (void)_updateDecorationSprites;
- (id)assetBadgeDecorationSource;
- (bool)canHandleVisibleRectRejection;
- (id)captionDecorationSource;
- (unsigned int)debugDecorationIndex;
- (id)debugDecorationSource;
- (id)decoratedLayout;
- (id)decorationSource;
- (struct PXGDecorationSpriteInfo { long long x1; double x2; })decorationSpriteInfoForDecoratedSpriteIndex:(unsigned int)arg1 decorationIndex:(unsigned int)arg2 assetBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg3 isItemSelected:(bool)arg4 isItemHighlighted:(bool)arg5 isItemDragged:(bool)arg6;
- (id)description;
- (id)dragDecorationSource;
- (id)highlightDecorationSource;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)init;
- (id)initWithDecoratedLayout:(id)arg1;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int*)arg2;
- (id)itemsLayout;
- (double)lastBaseline;
- (id)layoutForItemChanges;
- (unsigned int)numberOfDecoratingSpritesPerDecoratedSprite;
- (void)referenceSizeDidChange;
- (void)safeAreaInsetsDidChange;
- (void)screenScaleDidChange;
- (id)selectionDecorationSource;
- (void)setContentSource:(id)arg1;
- (void)setDecoratedLayout:(id)arg1;
- (void)setDecorationSource:(id)arg1;
- (void)setLastBaseline:(double)arg1;
- (void)sublayout:(id)arg1 didApplySpriteChangeDetails:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)update;
- (void)userInterfaceDirectionDidChange;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;

@end
