/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASStateMachine : NSObject <MSASAssetDownloaderDelegate, MSASAssetUploaderDelegate, MSBackoffManagerDelegate> {
    MSBackoffManager * _MMCSBackoffManager;
    NSDictionary * _MMCSBackoffManagerParameters;
    MSASAssetDownloader * _assetDownloader;
    NSMutableArray * _assetInfoToReauthForDownload;
    MSASAssetUploader * _assetUploader;
    int  _commandState;
    NSString * _currentCommand;
    long long  _currentCommandID;
    NSDictionary * _currentCommandParams;
    MSAlbumSharingDaemon * _daemon;
    id  _delegate;
    MSImageScalingSpecification * _derivativeImageScalingSpecification;
    NSArray * _derivativeSpecifications;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSString * _focusAlbumGUID;
    NSString * _focusAssetCollectionGUID;
    bool  _hasShutDown;
    bool  _isRetryingOutstandingActivities;
    int  _maxMetadataRetryCount;
    NSObject<OS_dispatch_queue> * _memberQueue;
    MSBackoffManager * _metadataBackoffManager;
    NSDictionary * _metadataBackoffManagerParameters;
    MSASPersonModel * _model;
    NSString * _personID;
    MSASPhoneInvitations * _phoneInvitations;
    id /* block */  _postCommandCompletionBlock;
    MSASProtocol * _protocol;
    NSObject<OS_dispatch_queue> * _serverSideConfigQueue;
    NSDictionary * _serverSideConfiguration;
    NSString * _serverSideConfigurationVersion;
    id /* block */  _stopHandlerBlock;
    MSImageScalingSpecification * _thumbnailImageScalingSpecification;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSDictionary *MMCSBackoffManagerParameters;
@property (setter=_setAssetInfoToReauthForDownload:, nonatomic, retain) NSMutableArray *_assetInfoToReauthForDownload;
@property (setter=_setStopHandlerBlock:, nonatomic, copy) id /* block */ _stopHandlerBlock;
@property (nonatomic) MSAlbumSharingDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (nonatomic, readonly, retain) MSImageScalingSpecification *derivativeImageScalingSpecification;
@property (nonatomic, readonly, retain) NSArray *derivativeSpecifications;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, retain) NSString *focusAlbumGUID;
@property (nonatomic, retain) NSString *focusAssetCollectionGUID;
@property (nonatomic) bool hasShutDown;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRetryingOutstandingActivities;
@property (nonatomic) int maxMetadataRetryCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSDictionary *metadataBackoffManagerParameters;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic, retain) MSASPhoneInvitations *phoneInvitations;
@property (nonatomic, copy) id /* block */ postCommandCompletionBlock;
@property (nonatomic, retain) MSASProtocol *protocol;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverSideConfigQueue;
@property (nonatomic, retain) NSDictionary *serverSideConfiguration;
@property (nonatomic, readonly, retain) NSString *serverSideConfigurationVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) MSImageScalingSpecification *thumbnailImageScalingSpecification;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)MMCSBackoffManagerParameters;
- (void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4;
- (void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2;
- (void)MSASAssetDownloaderDidFinishBatch:(id)arg1;
- (void)MSASAssetUploader:(id)arg1 didFinishUploadingAssetCollection:(id)arg2 intoAlbum:(id)arg3 error:(id)arg4;
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)arg1;
- (id)_URLReauthFailureWithUnderlyingError:(id)arg1;
- (void)_addAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_addCommentDisposition:(int)arg1 params:(id)arg2;
- (void)_addSharingRelationshipsDisposition:(int)arg1 params:(id)arg2;
- (id)_assetCollectionFailedError;
- (id)_assetCollectionRejectedError;
- (id)_assetDownloader;
- (id)_assetInfoToReauthForDownload;
- (id)_assetUploader;
- (void)_cancelOutstandingCommandsDisposition:(int)arg1 params:(id)arg2;
- (id)_canceledError;
- (void)_checkForAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForAssetCollectionUpdatesDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForChangesDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForCommentChangesDisposition:(int)arg1 params:(id)arg2;
- (void)_checkForUpdatesInAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_continueAddingAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_createAlbumDisposition:(int)arg1 params:(id)arg2;
- (id)_createCopiedAssetsInAssetCollections:(id)arg1;
- (void)_deleteAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_deleteAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_deleteAssetFilesInAssetCollection:(id)arg1;
- (void)_deleteAssetFilesInAssetCollections:(id)arg1;
- (void)_deleteCommentDisposition:(int)arg1 params:(id)arg2;
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)arg1 params:(id)arg2;
- (void)_getAccessControlsDisposition:(int)arg1 params:(id)arg2;
- (void)_getAlbumURLDisposition:(int)arg1 params:(id)arg2;
- (void)_markAsSpamInvitationForAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_markAsSpamInvitationForTokenDisposition:(int)arg1 params:(id)arg2;
- (id)_metadataBackoffManager;
- (id)_model;
- (void)_removeSharingRelationshipsDisposition:(int)arg1 params:(id)arg2;
- (void)_scheduleEventDisposition:(int)arg1 params:(id)arg2;
- (void)_sendGetServerSideConfigurationDisposition:(int)arg1 params:(id)arg2;
- (void)_sendGetUploadTokensDisposition:(int)arg1 params:(id)arg2;
- (void)_sendPutAssetCollectionsDisposition:(int)arg1 params:(id)arg2;
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)arg1 params:(id)arg2;
- (void)_sendUploadCompleteDisposition:(int)arg1 params:(id)arg2;
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)arg1;
- (void)_setAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)_setAssetCollectionSyncedStateDisposition:(int)arg1 params:(id)arg2;
- (void)_setAssetInfoToReauthForDownload:(id)arg1;
- (void)_setStopHandlerBlock:(id /* block */)arg1;
- (id /* block */)_stopHandlerBlock;
- (id)_stoppedError;
- (void)_subscribeToAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_unsubscribeFromAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_updateAlbumDisposition:(int)arg1 params:(id)arg2;
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id /* block */)arg1;
- (void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)addAssetCollections:(id)arg1 toAlbum:(id)arg2 info:(id)arg3;
- (void)addComments:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)addSharingRelationships:(id)arg1 toOwnedAlbum:(id)arg2 info:(id)arg3;
- (int)assetsInDownloadQueueCount;
- (void)cancelCompletionBlock:(id /* block */)arg1;
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)arg1;
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)arg1;
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)arg1 info:(id)arg2;
- (void)checkForAssetCollectionUpdates:(id)arg1 inAlbum:(id)arg2 info:(id)arg3;
- (void)checkForChangesInfo:(id)arg1;
- (void)checkForChangesResetSync:(bool)arg1 info:(id)arg2;
- (void)checkForCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)checkForUpdatesInAlbums:(id)arg1 resetSync:(bool)arg2 info:(id)arg3;
- (void)continueAddingAssetCollections:(id)arg1 skipAssetCollections:(id)arg2 toAlbum:(id)arg3 info:(id)arg4;
- (void)createAlbum:(id)arg1 info:(id)arg2;
- (id)daemon;
- (id)delegate;
- (void)deleteAlbum:(id)arg1 info:(id)arg2;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 info:(id)arg3;
- (void)deleteComments:(id)arg1 inAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (id)derivativeImageScalingSpecification;
- (id)derivativeSpecifications;
- (id)eventQueue;
- (id)focusAlbumGUID;
- (id)focusAssetCollectionGUID;
- (void)getAccessControlsForAlbums:(id)arg1 info:(id)arg2;
- (bool)hasEnqueuedActivities;
- (bool)hasShutDown;
- (id)init;
- (id)initWithPersonID:(id)arg1;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (bool)isInRetryState;
- (bool)isRetryingOutstandingActivities;
- (id)latestNextActivityDate;
- (void)markAsSpamInvitationForAlbum:(id)arg1 invitationGUID:(id)arg2 info:(id)arg3;
- (void)markAsSpamInvitationForToken:(id)arg1 info:(id)arg2;
- (int)maxMetadataRetryCount;
- (id)memberQueue;
- (id)memberQueueMetadataBackoffManager;
- (id)metadataBackoffManagerParameters;
- (id)persistentObjectForKey:(id)arg1;
- (id)personID;
- (id)phoneInvitations;
- (id /* block */)postCommandCompletionBlock;
- (id)protocol;
- (void)purgeEverythingCompletionBlock:(id /* block */)arg1;
- (void)refreshServerSideConfig;
- (void)removeSharingRelationships:(id)arg1 fromOwnedAlbum:(id)arg2 info:(id)arg3;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)retryOutstandingActivities;
- (id)rootCtagToCheckForChanges;
- (void)scheduleEvent:(id)arg1 assetCollectionGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
- (id)serverCommunicationBackoffDate;
- (id)serverSideConfigQueue;
- (id)serverSideConfiguration;
- (id)serverSideConfigurationVersion;
- (id)serverSideQueueServerSideConfiguration;
- (void)serverSideQueueSetServerSideConfiguration:(id)arg1;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 info:(id)arg3;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 album:(id)arg3 info:(id)arg4;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setHasShutDown:(bool)arg1;
- (void)setIsRetryingOutstandingActivities:(bool)arg1;
- (void)setMMCSBackoffManagerParameters:(id)arg1;
- (void)setMaxMetadataRetryCount:(int)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setMetadataBackoffManagerParameters:(id)arg1;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setPendingRootCtag:(id)arg1;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (void)setPersonID:(id)arg1;
- (void)setPhoneInvitations:(id)arg1;
- (void)setPostCommandCompletionBlock:(id /* block */)arg1;
- (void)setProtocol:(id)arg1;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setRootCtagFromPendingRootCtag;
- (void)setServerSideConfigQueue:(id)arg1;
- (void)setServerSideConfiguration:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownCompletionBlock:(id /* block */)arg1;
- (void)start;
- (void)stopAssetDownloadsCompletionBlock:(id /* block */)arg1;
- (void)subscribeToAlbum:(id)arg1 info:(id)arg2;
- (id)thumbnailImageScalingSpecification;
- (void)unsubscribeFromAlbum:(id)arg1 info:(id)arg2;
- (void)updateAlbum:(id)arg1 updateAlbumFlags:(int)arg2 info:(id)arg3;
- (void)videoURLForAssetCollection:(id)arg1 inAlbum:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)videoURLsForAssetCollection:(id)arg1 forMediaAssetType:(unsigned long long)arg2 inAlbum:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)workQueue;
- (void)workQueueApplyServerSideConfiguration;
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)arg1 assetCollectionGUID:(id)arg2;
- (void)workQueueCancelCompletionBlock:(id /* block */)arg1;
- (void)workQueueCheckForNextCommand;
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)arg1;
- (void)workQueueDidFinishCommand;
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)workQueueDidFinishCommandDueToCancellation;
- (bool)workQueueEndCommandWithError:(id)arg1 command:(id)arg2 params:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;
- (void)workQueuePerformNextCommand;
- (void)workQueueRefreshServerSideConfig;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueScheduleReauthForAssets:(id)arg1 inAlbum:(id)arg2;
- (void)workQueueUpdateNextActivityDate;

@end
