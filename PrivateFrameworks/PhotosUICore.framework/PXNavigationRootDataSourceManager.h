/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationRootDataSourceManager : PXDataSectionManager {
    <PXNavigationRoot> * _navigationRoot;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) <PXNavigationRoot> *navigationRoot;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)createDataSection;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithNavigationRoot:(id)arg1 photoLibrary:(id)arg2;
- (id)navigationRoot;
- (id)photoLibrary;

@end
