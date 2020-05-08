/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDragAndDropCollectionView : UICollectionView {
    UIVisualEffect * _blurEffect;
    <PXPeopleDragAndDropCollectionViewDelegate> * _dragDropDelegate;
    PXPeopleCollectionViewCell * _dragSourceCell;
    NSIndexPath * _dragSourceIndexPath;
    bool  _interactiveMode;
    bool  _validDrop;
}

@property (nonatomic, retain) UIVisualEffect *blurEffect;
@property (nonatomic) <PXPeopleDragAndDropCollectionViewDelegate> *dragDropDelegate;
@property (nonatomic, retain) PXPeopleCollectionViewCell *dragSourceCell;
@property (nonatomic, retain) NSIndexPath *dragSourceIndexPath;
@property (nonatomic) bool interactiveMode;
@property (nonatomic) bool validDrop;

- (void).cxx_destruct;
- (id)_footerAttributes;
- (double)_highestVisibleCellZOrder;
- (bool)beginInteractiveMovementAtLocation:(struct CGPoint { double x1; double x2; })arg1 forItemAtIndexPath:(id)arg2;
- (id)blurEffect;
- (void)cancelInteractiveMovement;
- (id)dragDropDelegate;
- (id)dragSourceCell;
- (id)dragSourceIndexPath;
- (void)endInteractiveMovement;
- (bool)interactiveMode;
- (void)layoutSubviews;
- (void)reloadData;
- (void)resetTransformForSourceIndex:(id)arg1;
- (long long)sectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBlurEffect:(id)arg1;
- (void)setDragDropDelegate:(id)arg1;
- (void)setDragSourceCell:(id)arg1;
- (void)setDragSourceIndexPath:(id)arg1;
- (void)setInteractiveMode:(bool)arg1;
- (void)setValidDrop:(bool)arg1;
- (id)sortedIndexPathsForSelectedItems;
- (bool)validDrop;

@end
