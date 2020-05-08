/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@interface BCCloudDataManager : NSObject <BDSCloudKitSupportSignOutDissociate> {
    BCCloudKitController * _cloudKitController;
    <BCCloudDataMapper> * _dataMapper;
    BCCloudDataSource * _dataSource;
    NSString * _entityName;
    Class  _immutableClass;
    NSManagedObjectContext * _moc;
    Class  _mutableClass;
    NSString * _notificationName;
    <BCCloudDataPrivacyDelegate> * _privacyDelegate;
    NSObject<OS_dispatch_queue> * _responseQueue;
    bool  _signalDataChangedTransaction;
    BCCloudDataSyncManager * _syncManager;
}

@property (nonatomic) BCCloudKitController *cloudKitController;
@property (nonatomic, retain) <BCCloudDataMapper> *dataMapper;
@property (nonatomic, retain) BCCloudDataSource *dataSource;
@property (nonatomic, copy) NSString *entityName;
@property Class immutableClass;
@property (nonatomic) NSManagedObjectContext *moc;
@property Class mutableClass;
@property (nonatomic, copy) NSString *notificationName;
@property (nonatomic) <BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic) bool signalDataChangedTransaction;
@property (nonatomic) BCCloudDataSyncManager *syncManager;

- (void).cxx_destruct;
- (void)_logError:(id)arg1;
- (void)cloudDataWithPredicate:(id)arg1 sortDescriptors:(id)arg2 completion:(id /* block */)arg3;
- (void)cloudDatasWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)cloudDatasWithPredicate:(id)arg1 sortDescriptors:(id)arg2 maximumResultCount:(unsigned long long)arg3 filter:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)cloudKitController;
- (void)countWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)currentCloudSyncVersions:(id /* block */)arg1;
- (id)dataMapper;
- (id)dataSource;
- (void)deleteCloudDataForPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (id)entityName;
- (void)failedRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCloudDataIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)getChangesSince:(id)arg1 forEntityClass:(Class)arg2 completion:(id /* block */)arg3;
- (Class)immutableClass;
- (id)initWithCloudDataSource:(id)arg1 entityName:(id)arg2 notificationName:(id)arg3 immutableClass:(Class)arg4 mutableClass:(Class)arg5 syncManager:(id)arg6 cloudKitController:(id)arg7;
- (id)initWithCloudDataSource:(id)arg1 entityName:(id)arg2 notificationName:(id)arg3 immutableClass:(Class)arg4 mutableClass:(Class)arg5 syncManager:(id)arg6 cloudKitController:(id)arg7 dataMapper:(id)arg8;
- (id)moc;
- (id)mq_cloudSyncVersions;
- (void)mq_incrementCloudVersion;
- (id)mq_sanitizeError:(id)arg1;
- (void)mq_signalTransactions;
- (Class)mutableClass;
- (id)notificationName;
- (id)privacyDelegate;
- (void)removeCloudDataForPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveConflictsForRecords:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveConflictsForRecords:(id)arg1 withResolvers:(id)arg2 completion:(id /* block */)arg3;
- (void)resolveConflictsForRecords:(id)arg1 withResolvers:(id)arg2 mergers:(id)arg3 completion:(id /* block */)arg4;
- (void)resolvedCloudDataForCloudData:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
- (void)resolvedCloudDataForCloudData:(id)arg1 withResolvers:(id)arg2 mergers:(id)arg3 predicate:(id)arg4 completion:(id /* block */)arg5;
- (void)resolvedCloudDataForCloudData:(id)arg1 withResolvers:(id)arg2 predicate:(id)arg3 completion:(id /* block */)arg4;
- (id)responseQueue;
- (void)setCloudData:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
- (void)setCloudData:(id)arg1 predicate:(id)arg2 mergers:(id)arg3 completion:(id /* block */)arg4;
- (void)setCloudData:(id)arg1 predicate:(id)arg2 propertyIDKey:(id)arg3 completion:(id /* block */)arg4;
- (void)setCloudData:(id)arg1 predicate:(id)arg2 propertyIDKey:(id)arg3 mergers:(id)arg4 completion:(id /* block */)arg5;
- (void)setCloudKitController:(id)arg1;
- (void)setDataMapper:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setImmutableClass:(Class)arg1;
- (void)setMoc:(id)arg1;
- (void)setMutableClass:(Class)arg1;
- (void)setNotificationName:(id)arg1;
- (void)setPrivacyDelegate:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)setSignalDataChangedTransaction:(bool)arg1;
- (void)setSyncManager:(id)arg1;
- (bool)signalDataChangedTransaction;
- (void)startSyncToCKWithCompletion:(id /* block */)arg1;
- (id)syncManager;
- (void)transformedCloudDatasWithPredicate:(id)arg1 transformer:(id /* block */)arg2 limit:(long long)arg3 completion:(id /* block */)arg4;
- (void)updateSyncGenerationFromCloudData:(id)arg1 predicate:(id)arg2 propertyIDKey:(id)arg3 completion:(id /* block */)arg4;

@end
