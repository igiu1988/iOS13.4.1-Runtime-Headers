/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoSharingHelper : NSObject

+ (bool)_derivativeExistsForAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (id)_downloadRequestQueue;
+ (id)_localizationKeyForAssets:(id)arg1;
+ (void)_markStreamVideosAsPurgeable;
+ (id)_pathToServerConfigurationCache;
+ (id)_phoneInvitationFailureFile;
+ (id)_processPhoneFailuresQueue;
+ (bool)_recentlyRequestedDownloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (void)_resetServerSideConfigurationDictionary;
+ (long long)_serverLimitValueForKey:(id)arg1 withDefaultResult:(long long)arg2;
+ (bool)_sharedStreamsEnabled;
+ (bool)_sharedStreamsExplicitlyDisabled;
+ (id)_temporaryUploadDerivativesPathForCollectionGUID:(id)arg1 pathExtension:(id)arg2;
+ (id)_transactionWithName:(const char *)arg1;
+ (void)_userDidDeleteSharedAlbum:(id)arg1;
+ (void)_userDidDeleteSharedAssets:(id)arg1;
+ (id)_videoDerivativeForVideoAtURL:(id)arg1 outputURL:(id)arg2 withPreset:(id)arg3 outputFileType:(id)arg4;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)accountMatchesEmail:(id)arg1;
+ (void)accountSettingsChanged;
+ (void)applicationIsInForeground:(bool)arg1 photoLibraryURL:(id)arg2;
+ (bool)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id*)arg2;
+ (bool)canCreateStreamInPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (bool)canSetUserCloudSharedLiked:(bool)arg1 forAssets:(id)arg2 error:(id*)arg3;
+ (void)checkServerModelForAlbum:(id)arg1 photoLibrary:(id)arg2;
+ (void)clearCachedAccountState;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(id /* block */)arg1;
+ (bool)debugAlwaysStreamSharedVideos;
+ (bool)debugAutoAcceptInvitation;
+ (bool)debugDownloadAllDerivatives;
+ (bool)debugDownloadMetadataOnly;
+ (bool)debugDownloadThumbnailsOnly;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUID:(id)arg1 inviterAddress:(id)arg2;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (struct CGSize { double x1; double x2; })derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (double)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(bool)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(bool)arg2;
+ (void)downloadAsset:(id)arg1 cloudPlaceholderKind:(short)arg2 shouldPrioritize:(bool)arg3 shouldExtendTimer:(bool)arg4;
+ (id)downloadNotificationForAssetwithUUID:(id)arg1 cloudPlaceholderKind:(short)arg2;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)forgetSharingPersonID:(id)arg1;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(id /* block */)arg1;
+ (bool)hasPhoneInvitationForAlbum:(id)arg1;
+ (bool)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (bool)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (void)initializeMSPlatform;
+ (double)intervalBetweenAlbumPolls;
+ (double)intervalBetweenPolls;
+ (bool)isBreadcrumbDebugEnabled;
+ (bool)isCellularConnection;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(id /* block */)arg1;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(bool)arg2;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (void)markPendingInvitationAsSpamForAlbum:(id)arg1 completionHandler:(id /* block */)arg2;
+ (long long)maxAssetsPerStream;
+ (long long)maxCharactersPerComment;
+ (long long)maxCommentsPerAsset;
+ (long long)maxGIFSizeForPublishing;
+ (long long)maxNumDerivativesToDownloadPerPush;
+ (long long)maxNumDerivativesToPrefetchPerDay;
+ (long long)maxNumThumbnailsToPrefetchPerDay;
+ (long long)maxOwnedStreams;
+ (long long)maxSubscribedStreams;
+ (long long)maxSubscribersPerStream;
+ (long long)maxVideoLengthForPublishing;
+ (void)photosPreferencesChanged;
+ (void)pollForAlbumListUpdates;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)pruneCloudSharingContentIfNecessaryInLibrary:(id)arg1;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;
+ (unsigned long long)purgeableSpace;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int*)arg1 handler:(id /* block */)arg2;
+ (bool)removeCloudSharingDirectories:(id*)arg1;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)resetAllLocalState;
+ (void)retryOutstandingActivities;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (id)serverSideConfigurationDictionary;
+ (bool)sharedStreamsEnabledForPhotoLibraryURL:(id)arg1;
+ (bool)sharedStreamsExplictlyDisabledForPhotoLibraryURL:(id)arg1;
+ (id)sharingPersonID;
+ (id)sharingUsername;
+ (id)streamdVideoCache;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1 uti:(id)arg2;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;
+ (void)trackUploadBatchSize:(unsigned long long)arg1;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;
+ (struct CGSize { double x1; double x2; })videoPosterFrameDimension;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(bool)arg3;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;

@end
