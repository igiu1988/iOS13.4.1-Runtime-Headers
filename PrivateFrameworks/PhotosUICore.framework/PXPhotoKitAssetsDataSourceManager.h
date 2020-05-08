/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXMutableAssetsDataSourceManager, PXPhotosDataSourceChangeObserver> {
    NSNumber * _backgroundFetchOriginSection;
    PXPhotosDataSource * _photosDataSource;
    <PXPhotosDataSourceProvider> * _photosDataSourceProvider;
}

@property (nonatomic) long long backgroundFetchOriginSection;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPhotosDataSource *photosDataSource;
@property (nonatomic, retain) <PXPhotosDataSourceProvider> *photosDataSourceProvider;
@property (readonly) Class superclass;

+ (id)dataSourceManagerForAssetCollection:(id)arg1;
+ (id)dataSourceManagerWithAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2;
- (void)_ensurePhotosDataSource;
- (long long)backgroundFetchOriginSection;
- (id)createInitialDataSource;
- (void)dealloc;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (id)init;
- (id)initWithPhotosDataSource:(id)arg1;
- (id)initWithPhotosDataSourceProvider:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (id)photosDataSource;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceDidFinishBackgroundFetching:(id)arg1;
- (id)photosDataSourceInterestingAssetReferences:(id)arg1;
- (id)photosDataSourceProvider;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setBackgroundFetchOriginSection:(long long)arg1;
- (void)setCurationEnabled:(bool)arg1 forAssetCollection:(id)arg2;
- (void)setPhotosDataSource:(id)arg1;
- (void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(bool)arg2;
- (void)setPhotosDataSourceProvider:(id)arg1;
- (void)startBackgroundFetchIfNeeded;
- (void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2;

@end
