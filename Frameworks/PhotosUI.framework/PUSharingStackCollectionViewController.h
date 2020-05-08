/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSharingStackCollectionViewController : UICollectionViewController <PUSharingStackCollectionViewLayoutDelegate> {
    NSArray * _assets;
    long long  _currentRotationDirection;
    long long  _currentVerticalAdjustmentDirection;
    <PUSharingStackCollectionViewControllerDataSource> * _dataSource;
    <PXUIImageProvider> * _imageProvider;
    NSMutableDictionary * _layoutItemsByAssets;
    bool  _needsUpdate;
    unsigned long long  _numberOfItems;
    PUSharingStackCollectionViewLayout * _stackLayout;
}

@property (nonatomic, retain) NSArray *assets;
@property (nonatomic) long long currentRotationDirection;
@property (nonatomic) long long currentVerticalAdjustmentDirection;
@property (nonatomic) <PUSharingStackCollectionViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PXUIImageProvider> *imageProvider;
@property (nonatomic, retain) NSMutableDictionary *layoutItemsByAssets;
@property (nonatomic) bool needsUpdate;
@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic, readonly) PUSharingStackCollectionViewLayout *stackLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_layoutItemInputForAsset:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })_sizeForAsset:(id)arg1;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (id)assets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)currentRotationDirection;
- (long long)currentVerticalAdjustmentDirection;
- (id)dataSource;
- (id)imageProvider;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithImageProvider:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateContent;
- (id)layoutItemsByAssets;
- (bool)needsUpdate;
- (unsigned long long)numberOfItems;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setCurrentRotationDirection:(long long)arg1;
- (void)setCurrentVerticalAdjustmentDirection:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setLayoutItemsByAssets:(id)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setNumberOfItems:(unsigned long long)arg1;
- (id)sharingStackCollectionViewLayout:(id)arg1 layoutItemForItemAtIndexPath:(id)arg2;
- (id)stackLayout;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end