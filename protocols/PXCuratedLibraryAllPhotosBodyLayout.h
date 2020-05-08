/* Generated by EzioChiu.
 */

@protocol PXCuratedLibraryAllPhotosBodyLayout <NSObject>

@required

- (id)anchorObjectReference;
- (struct CGPoint { double x1; double x2; })anchorViewportCenter;
- (long long)columnForItem:(long long)arg1;
- (bool)enableBestCropRect;
- (bool)fillSafeAreaTopInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;
- (bool)hideIncompleteLastRow;
- (double)interItemSpacing;
- (double)itemCaptionSpacing;
- (bool)itemCaptionsVisible;
- (long long)itemClosestTo:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemRangeInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)loadItemsOutsideAnchorViewport;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })loadedItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })loadedItemsRect;
- (unsigned char)mediaFlags;
- (long long)numberOfColumns;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (double)rowHeight;
- (void)setAnchorObjectReference:(id)arg1;
- (void)setAnchorViewportCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnableBestCropRect:(bool)arg1;
- (void)setFillSafeAreaTopInset:(bool)arg1;
- (void)setHideIncompleteLastRow:(bool)arg1;
- (void)setInterItemSpacing:(double)arg1;
- (void)setItemCaptionSpacing:(double)arg1;
- (void)setLoadItemsOutsideAnchorViewport:(bool)arg1;
- (void)setMediaFlags:(unsigned char)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(bool)arg3;
- (bool)supportsContentMode;
- (long long)visualItemShift;

@optional

- (long long)contentMode;
- (void)setContentMode:(long long)arg1;

@end
