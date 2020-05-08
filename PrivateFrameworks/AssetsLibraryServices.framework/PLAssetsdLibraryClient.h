/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {
    _Atomic bool  _isOpen;
    PLAssetsdClientSandboxExtensions * _sandboxExtensions;
}

- (void).cxx_destruct;
- (id)_assetURIStringsForPhotos:(id)arg1;
- (bool)_consumeSandboxExtensions:(id)arg1;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)createPhotoLibraryDatabaseWithError:(id*)arg1;
- (long long)getCurrentModelVersion;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (void)importFileSystemAssetsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 sandboxExtensions:(id)arg4;
- (void)launchAssetsd;
- (bool)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 error:(id*)arg2;
- (bool)openPhotoLibraryDatabaseWithoutProgressIfNeeded:(id*)arg1;
- (void)pendingEventsForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)recoverFromCrashIfNeeded;
- (bool)repairSingletonObjectsWithError:(id*)arg1;
- (bool)synchronouslyImportFileSystemAssetsWithError:(id*)arg1;
- (bool)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(bool)arg2 forceRefresh:(bool)arg3 error:(id*)arg4;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(bool)arg2 forceRefresh:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end