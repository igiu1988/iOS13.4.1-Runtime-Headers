/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource {
    NSCache * __assetReferenceByIndexPathCache;
    PXPhotosDataSourceChange * _change;
    NSString * _changeFromDataSourceIdentifier;
    PXPhotosDataSource * _photosDataSource;
}

@property (nonatomic, readonly) NSCache *_assetReferenceByIndexPathCache;
@property (nonatomic, readonly) PXPhotosDataSourceChange *change;
@property (nonatomic, readonly) NSString *changeFromDataSourceIdentifier;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;

- (void).cxx_destruct;
- (id)_assetReferenceByIndexPathCache;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)change;
- (id)changeFromDataSourceIdentifier;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (bool)couldAssetReferenceAppear:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3;
- (bool)isEmpty;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)photosDataSource;
- (id)startingAssetReference;

@end
