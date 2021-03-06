/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitSetupAssistant : NSObject {
    NSObject<OS_dispatch_semaphore> * _cloudKitSemaphore;
    CKContainer * _container;
    CKDatabase * _database;
    CKDatabaseSubscription * _databaseSubscription;
    NSURL * _largeBlobDirectoryURL;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    CKRecordZone * _recordZone;
    PFCloudKitStoreMonitor * _storeMonitor;
    PFCloudKitStoreMonitor * storeMonitor;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitSemaphore;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKDatabaseSubscription *databaseSubscription;
@property (nonatomic, readonly) NSURL *largeBlobDirectoryURL;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) PFCloudKitStoreMonitor *storeMonitor;

- (bool)_checkAccountStatus:(id*)arg1;
- (bool)_checkAndInitializeMetadata:(id*)arg1;
- (bool)_checkUserIdentity:(id*)arg1;
- (bool)_createZoneIfNecessary:(id*)arg1;
- (bool)_deleteZone:(id)arg1 error:(id*)arg2;
- (bool)_initializeAssetStorageURLError:(id*)arg1;
- (bool)_initializeCloudKitForObservedStore:(id*)arg1;
- (bool)_saveZone:(id)arg1 error:(id*)arg2;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setStoreMonitor:(id)arg1;
- (bool)_setupDatabaseSubscriptionIfNecessary:(id*)arg1;
- (bool)_shouldAttemptRecoveryForZone:(id)arg1 byDeletingExistingZone:(bool*)arg2 afterError:(id)arg3;
- (id)cloudKitSemaphore;
- (id)container;
- (id)database;
- (id)databaseSubscription;
- (void)dealloc;
- (id)initWithMirroringOptions:(id)arg1 observedStore:(id)arg2 zone:(id)arg3 databaseSubscription:(id)arg4;
- (id)largeBlobDirectoryURL;
- (id)mirroringOptions;
- (id)recordZone;
- (id)storeMonitor;

@end
