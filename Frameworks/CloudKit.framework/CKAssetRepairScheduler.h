/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAssetRepairScheduler : NSObject {
    NSMutableDictionary * _assetCache;
    NSMutableSet * _assetsBeingRequested;
    NSMutableSet * _assetsBeingUploaded;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableSet * _confirmedMissingAssets;
    CKContainer * _container;
    <CKAssetRepairSchedulerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _remainingAssetsToRequestCallbacks;
    CKUploadRequestConfiguration * _repairContainerOverrides;
    NSOperationQueue * _requestOperationQueue;
    NSMutableDictionary * _retryCountForAssets;
    NSURL * _temporaryAssetDirectory;
    NSOperationQueue * _uploadOperationQueue;
    NSObject<OS_dispatch_source> * _uploadPendingRequestTimer;
    NSObject<OS_dispatch_source> * _uploadSuspensionTimer;
}

@property (nonatomic, retain) NSMutableDictionary *assetCache;
@property (nonatomic, retain) NSMutableSet *assetsBeingRequested;
@property (nonatomic, retain) NSMutableSet *assetsBeingUploaded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSSet *confirmedAvailableAssets;
@property (nonatomic, retain) NSMutableSet *confirmedMissingAssets;
@property (nonatomic) CKContainer *container;
@property <CKAssetRepairSchedulerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) NSSet *remainingAssets;
@property (nonatomic, retain) NSMutableDictionary *remainingAssetsToRequestCallbacks;
@property (nonatomic, copy) CKUploadRequestConfiguration *repairContainerOverrides;
@property (nonatomic, retain) NSOperationQueue *requestOperationQueue;
@property (nonatomic, retain) NSMutableDictionary *retryCountForAssets;
@property (nonatomic, copy) NSURL *temporaryAssetDirectory;
@property (nonatomic, retain) NSOperationQueue *uploadOperationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *uploadPendingRequestTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *uploadSuspensionTimer;

+ (long long)assetSizeEstimate;
+ (long long)cacheCountLimit;
+ (long long)cacheSizeLimit;
+ (long long)canCopyFromFileURL:(id)arg1 toDirectoryURL:(id)arg2;
+ (double)defaultSuspensionTime;
+ (unsigned long long)diskSpaceBuffer;
+ (long long)estimatedSizeForAssetOrPackage:(id)arg1;
+ (id)nameForEvent:(long long)arg1;
+ (long long)packageSizeEstimate;
+ (unsigned long long)remainingCapacityAtURL:(id)arg1 error:(id*)arg2;
+ (long long)repairBatchCountLimit;
+ (long long)repairBatchSizeLimit;
+ (long long)repairRetryCount;
+ (double)requestTimeout;

- (void).cxx_destruct;
- (void)addUploadRequestsWithMetadata:(id)arg1 requestBlocks:(id)arg2;
- (id)allRemainingRequestableAssets;
- (id)allRemainingUploadableAssets;
- (id)assetCache;
- (id)assetsBeingRequested;
- (id)assetsBeingUploaded;
- (void)cacheAsset:(id)arg1 withMetadata:(id)arg2;
- (unsigned long long)cacheCount;
- (unsigned long long)cacheSize;
- (id)callbackQueue;
- (void)cancelAllOperations;
- (void)clearAssetCache;
- (id)clonedAsset:(id)arg1 withError:(id*)arg2;
- (id)confirmedAvailableAssets;
- (id)confirmedMissingAssets;
- (id)container;
- (void)dealloc;
- (id)delegate;
- (bool)hasPendingWork;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (id)internalQueue;
- (id)remainingAssets;
- (id)remainingAssetsToRequestCallbacks;
- (void)removeAssetFromCacheWithMetadata:(id)arg1;
- (void)removeUploadRequestWithRecordID:(id)arg1;
- (id)repairContainerOverrides;
- (id)requestOperationQueue;
- (void)respondToEvent:(long long)arg1 withObject:(id)arg2;
- (id)retryCountForAssets;
- (void)scheduleClearAssetCache;
- (void)scheduleRequestsWithMaxCount:(long long)arg1;
- (void)scheduleUploadBatch;
- (void)setAssetCache:(id)arg1;
- (void)setAssetsBeingRequested:(id)arg1;
- (void)setAssetsBeingUploaded:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setConfirmedMissingAssets:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setRemainingAssetsToRequestCallbacks:(id)arg1;
- (void)setRepairContainerOverrides:(id)arg1;
- (void)setRequestOperationQueue:(id)arg1;
- (void)setRetryCountForAssets:(id)arg1;
- (void)setTemporaryAssetDirectory:(id)arg1;
- (void)setUploadOperationQueue:(id)arg1;
- (void)setUploadPendingRequestTimer:(id)arg1;
- (void)setUploadSuspensionTimer:(id)arg1;
- (id)temporaryAssetDirectory;
- (void)tickle;
- (id)uploadOperationQueue;
- (id)uploadPendingRequestTimer;
- (id)uploadSuspensionTimer;

@end
