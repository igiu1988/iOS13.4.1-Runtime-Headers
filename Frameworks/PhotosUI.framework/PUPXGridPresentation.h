/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXGridPresentation : NSObject <PXGridPresentation> {
    PUSessionInfo * _sessionInfo;
    long long  _userInterfaceIdiom;
}

@property (getter=_isRunningInPhotoPicker, nonatomic, readonly) bool _isRunningInPhotoPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;
@property long long userInterfaceIdiom;

- (void).cxx_destruct;
- (id)_assetCollectionToAssetsMapForAssets:(id)arg1;
- (bool)_isEmpty:(id)arg1;
- (bool)_isRunningInPhotoPicker;
- (id)createAlbumListViewControllerWithConfiguration:(id)arg1;
- (void)createGridViewControllerWithAssets:(id)arg1 withTitle:(id)arg2 hideTabBar:(bool)arg3 gridPresentationContext:(long long)arg4 containerViewController:(id)arg5 navigationItemDelegate:(id)arg6 andCompletion:(id /* block */)arg7;
- (id)createImportHistoryGridViewControllerWithCollection:(id)arg1;
- (id)createPanoramaViewController;
- (id)createPhotosAlbumViewControllerForAlbum:(id)arg1 withFetchResult:(id)arg2;
- (id)createPhotosPickerViewControllerWithSelectedAssets:(id)arg1 anchorAtAsset:(id)arg2 inAssetCollection:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)createSharedAlbumListViewControllerWithConfiguration:(id)arg1;
- (id)init;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (long long)userInterfaceIdiom;

@end
