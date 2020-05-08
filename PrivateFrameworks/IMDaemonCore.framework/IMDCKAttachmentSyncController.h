/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKAttachmentSyncController : IMDCKAbstractSyncController {
    IMDCKAttachmentSyncCKOperationFactory * _CKOperationFactory;
    NSObject<OS_xpc_object> * _activity;
    bool  _assetDownloadInProgress;
    NSObject<OS_dispatch_queue> * _ckQueue;
    NSMutableDictionary * _completionBlocksForAssetFetchOperations;
    unsigned long long  _deviceConditionsToCheck;
    NSMutableArray * _downloadAssetsForTransferGUIDs;
    id /* block */  _perTransferProgress;
    NSMutableDictionary * _recordIDToTransferMap;
    IMDRecordZoneManager * _recordZoneManager;
    <IMDCKSyncTokenStore> * _syncTokenStore;
}

@property (nonatomic, retain) IMDCKAttachmentSyncCKOperationFactory *CKOperationFactory;
@property NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool assetDownloadInProgress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) NSMutableDictionary *completionBlocksForAssetFetchOperations;
@property (nonatomic) unsigned long long deviceConditionsToCheck;
@property (nonatomic, retain) NSMutableArray *downloadAssetsForTransferGUIDs;
@property (nonatomic, copy) id /* block */ perTransferProgress;
@property (nonatomic, retain) NSMutableDictionary *recordIDToTransferMap;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) <IMDCKSyncTokenStore> *syncTokenStore;

+ (id)sharedInstance;

- (id)CKOperationFactory;
- (id)__databaseRequestForAttachmentsWithAssets;
- (void)__databaseRequestResetAllAttachmentsInFaiedCloudDownloadState;
- (bool)__shouldOptimizeAttachmentDefault;
- (unsigned long long)_attachmentDeleteBatchSize;
- (bool)_attachmentDownloadCanStart:(bool)arg1 withActivity:(id)arg2;
- (bool)_attachmentZoneCreated;
- (id)_attachmentZoneID;
- (id)_attachmentZoneSalt;
- (id)_changeTokenKeyForSyncType:(long long)arg1;
- (id)_ckUtilitiesInstance;
- (id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)_deleteAttachmentsWithRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)_deleteStingRayToken;
- (bool)_deviceConditionsAllowsMessageSync;
- (bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(bool)arg1;
- (void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(bool)arg2 useNonHSA2ManateeDatabase:(bool)arg3 retryCount:(unsigned long long)arg4 numAttachmentsDownloaded:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(bool)arg2 useNonHSA2ManateeDatabase:(bool)arg3 retryCount:(unsigned long long)arg4 numAttachmentsDownloaded:(unsigned long long)arg5 transfers:(id)arg6 completion:(id /* block */)arg7;
- (void)_fetchAndValidateFileTransfersFromCloudKit:(id)arg1 capturedWithABC:(bool)arg2 completion:(id /* block */)arg3;
- (void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(bool)arg1 desiredKeys:(long long)arg2 syncType:(long long)arg3 currentBatchCount:(long long)arg4 maxBatchCount:(long long)arg5 syncToken:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 useNonHSA2ManateeDatabase:(bool)arg3 completion:(id /* block */)arg4;
- (bool)_fetchedAllChangesFromCloudKit;
- (void)_hasMarkedAllAttachmentsAsNeedingSync;
- (void)_kickOffAssetFetchForTransfersIfNeeded;
- (bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(id /* block */)arg2;
- (void)_kickOffWriteOnCKQueueWithCompletion:(id /* block */)arg1;
- (void)_markAllUnsuccessFullSyncAttachmentsAsNeedingSync;
- (void)_markAttachmentWithROWIDAsSyncedWithCloudKit:(id)arg1;
- (void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg1;
- (void)_migrateSyncToken;
- (void)_needsToMarkAllAttachmentsAsNeedingSync;
- (unsigned long long)_numberOfAttachmentsToDownload;
- (unsigned long long)_numberOfAttachmentsToWriteUp;
- (long long)_numberOfBatchesOfAttachmentsToFetchInInitialSync;
- (long long)_numberOfMetadataBatchesOfAttachmentsToFetchInInitialSync;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processAndValidateAttachmentRecordsEligibleForPurge:(id)arg1 recordIDsToTransfers:(id)arg2 capturedWithABC:(bool)arg3 completion:(id /* block */)arg4;
- (void)_processAssetFetchOperationCompletionBlock:(id)arg1 operationID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordCompletionBlock:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchPerRecordProgressBlock:(id)arg1 progress:(double)arg2;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_processRecordChanged:(id)arg1;
- (void)_processRecordDeletion:(id)arg1;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3 syncType:(long long)arg4;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(bool)arg4 shouldWriteBackChanges:(bool)arg5 desiredKeys:(long long)arg6 syncType:(long long)arg7 error:(id)arg8 currentBatchCount:(long long)arg9 maxBatchCount:(long long)arg10 completionBlock:(id /* block */)arg11;
- (id)_recordIDsToProcessWithError:(id)arg1 error:(id)arg2;
- (id)_recordKeyManagerSharedInstance;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;
- (void)_resetAttachmentSyncStateForRecord:(id)arg1 toState:(long long)arg2;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldMarkAllAttachmentsAsNeedingSync;
- (bool)_shouldMarkAttachmentsAsNeedingReupload;
- (id)_updateAttachmentGUIDIfNeededAndReturnTransfersToForceMarkAsSync:(id)arg1 transfersToSyncRowIDs:(id)arg2;
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (void)_updateTransferUsingCKRecord:(id)arg1 wasFetched:(bool)arg2;
- (void)_validateTransferFromCloudKit:(id)arg1 localTransfer:(id)arg2 validateCompletion:(id /* block */)arg3;
- (void)_writeAttachmentsToCloudKit:(id /* block */)arg1;
- (void)_writeCKRecordsToAttachmentZone:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)acceptFileTransfer:(id)arg1 completion:(id /* block */)arg2;
- (id)activity;
- (bool)assetDownloadInProgress;
- (id)ckQueue;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (id)completionBlocksForAssetFetchOperations;
- (void)dealloc;
- (void)deleteAttachmentSyncToken;
- (void)deleteAttachmentZone;
- (unsigned long long)deviceConditionsToCheck;
- (id)downloadAssetsForTransferGUIDs;
- (void)downloadAttachmentAssetsForChatIDs:(id)arg1 services:(id)arg2 style:(unsigned char)arg3 completion:(id /* block */)arg4;
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(bool)arg2;
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(bool)arg2 useNonHSA2ManateeDatabase:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(bool)arg2 perTransferProgress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(bool)arg2 useNonHSA2ManateeDatabase:(bool)arg3 perTransferProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)fileTransferCenter;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncTokenForSyncType:(long long)arg1;
- (id /* block */)perTransferProgress;
- (unsigned long long)purgedAttachmentsCountForChat:(id)arg1 services:(id)arg2;
- (id)purgedAttachmentsForChat:(id)arg1 services:(id)arg2 limit:(long long)arg3;
- (id)recordIDToTransferMap;
- (id)recordZoneManager;
- (void)setActivity:(id)arg1;
- (void)setAssetDownloadInProgress:(bool)arg1;
- (void)setCKOperationFactory:(id)arg1;
- (void)setCompletionBlocksForAssetFetchOperations:(id)arg1;
- (void)setDeviceConditionsToCheck:(unsigned long long)arg1;
- (void)setDownloadAssetsForTransferGUIDs:(id)arg1;
- (void)setLatestSyncToken:(id)arg1 forSyncType:(long long)arg2;
- (void)setPerTransferProgress:(id /* block */)arg1;
- (void)setRecordIDToTransferMap:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (void)syncAttachmentDeletesToCloudKit:(id /* block */)arg1;
- (void)syncAttachmentsWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(id /* block */)arg4;
- (long long)syncControllerRecordType;
- (id)syncTokenStore;

@end
