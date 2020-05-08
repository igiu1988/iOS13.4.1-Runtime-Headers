/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMStore : NSObject <REMChangeTrackingProvider> {
    bool  _assertOnMainThreadFetches;
    <REMDaemonController> * _daemonController;
    _REMInProgressSaveRequestsContainer * _l_inProgressSaveRequestsContainer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _mode;
    REMStore * _nonUserInteractiveStore;
    REMStoreContainerToken * _storeContainerToken;
}

@property (nonatomic) bool assertOnMainThreadFetches;
@property (nonatomic, retain) <REMDaemonController> *daemonController;
@property (nonatomic, readonly) _REMInProgressSaveRequestsContainer *l_inProgressSaveRequestsContainer;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) REMStore *nonUserInteractiveStore;
@property (nonatomic, readonly) REMStoreContainerToken *storeContainerToken;

+ (bool)_shouldNotifyReminddOfInteractionWithPeople;
+ (id)createIsolatedStoreContainerWithError:(id*)arg1;
+ (bool)dataaccessDaemonStopSyncingReminders;
+ (bool)destroyIsolatedStoreContainerWithToken:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (bool)isEventKitSyncEnabledForReminderKit;
+ (bool)notificationsEnabled;
+ (void)notifyOfInteractionWithPeople:(id)arg1;
+ (void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1;
+ (bool)siriShouldRouteIntentsToNewRemindersApp;
+ (id)storeDidChangeNotificationName;

- (void).cxx_destruct;
- (void)_enumerateAllListsIncludingGroups:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)_incrementStoreGeneration;
- (bool)_isUserInteractiveStore;
- (void)_respondToCalDAVSharedList:(id)arg1 withResponse:(long long)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_saveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 reminderChangeItems:(id)arg3 author:(id)arg4 replicaManagerProvider:(id)arg5 synchronously:(bool)arg6 performer:(id)arg7 completion:(id /* block */)arg8;
- (void)_triggerSyncWithReason:(id)arg1 forcingCloudKitReload:(bool)arg2 discretionary:(bool)arg3 completion:(id /* block */)arg4;
- (id)_withInProgressSaveRequestContainer:(id /* block */)arg1;
- (id)_xpcSyncStorePerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)acceptCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (bool)assertOnMainThreadFetches;
- (id)compressedDistributedEvaluationDataWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)createShareForListWithID:(id)arg1 error:(id*)arg2;
- (id)daemonController;
- (id)debugDescription;
- (void)deleteAccountWithAccountID:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (void)enumerateAllGroupsAndListsWithBlock:(id /* block */)arg1;
- (void)enumerateAllListsWithBlock:(id /* block */)arg1;
- (void)enumerateAllRemindersWithBlock:(id /* block */)arg1;
- (bool)everConnectedToCar;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchAccountsForDumpingWithError:(id*)arg1;
- (id)fetchAccountsIncludingInactive:(bool)arg1 error:(id*)arg2;
- (id)fetchAccountsWithError:(id*)arg1;
- (id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchAllListsWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4;
- (id)fetchDefaultAccountWithError:(id*)arg1;
- (id)fetchDefaultListWithError:(id*)arg1;
- (id)fetchEligibleDefaultListsWithError:(id*)arg1;
- (id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id*)arg4;
- (id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListsForEventKitBridgingWithError:(id*)arg1;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2;
- (id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchReminderWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id*)arg7;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id*)arg3;
- (id)fetchRemindersWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id*)arg2;
- (id)fetchReplicaManagerForAccountID:(id)arg1 error:(id*)arg2;
- (id)fetchReplicaManagersForAccountID:(id)arg1 bundleID:(id)arg2 error:(id*)arg3;
- (id)fetchResultByExecutingFetchRequest:(id)arg1 error:(id*)arg2;
- (id)fetchShareForListWithID:(id)arg1 error:(id*)arg2;
- (id)fetchSiriFoundInAppsListWithError:(id*)arg1;
- (id)init;
- (id)initUserInteractive:(bool)arg1;
- (id)initWithDaemonController:(id)arg1;
- (id)initWithDaemonController:(id)arg1 storeContainerToken:(id)arg2;
- (id)initWithStoreContainerToken:(id)arg1;
- (void)invalidate;
- (id)l_inProgressSaveRequestsContainer;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (unsigned long long)mode;
- (id)nonUserInteractiveStore;
- (void)notifyOfInteractionWithPeople:(id)arg1 force:(bool)arg2 completion:(id /* block */)arg3;
- (void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1;
- (void)nukeDatabase;
- (id)optimisticallyMaterializeReminderChangeItem:(id)arg1;
- (id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg1;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 transactionAuthorKeysToExclude:(id)arg3;
- (id)refreshAccount:(id)arg1;
- (id)refreshList:(id)arg1;
- (id)refreshReminder:(id)arg1;
- (void)rejectCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)removeOrphanedAccountsWithCompletion:(id /* block */)arg1;
- (id)replicaManagerProviderForCalDAVSync;
- (void)requestToDeleteLocalDataWithCompletion:(id /* block */)arg1;
- (void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)resultFromPerformingInvocation:(id)arg1 error:(id*)arg2;
- (id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id*)arg4;
- (id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 error:(id*)arg7;
- (void)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 queue:(id)arg7 completion:(id /* block */)arg8;
- (void)setAssertOnMainThreadFetches:(bool)arg1;
- (void)setDaemonController:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setNonUserInteractiveStore:(id)arg1;
- (void)stopShare:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)storeContainerToken;
- (unsigned long long)storeGeneration;
- (void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg1;
- (void)triggerThrottledSyncWithReason:(id)arg1 discretionary:(bool)arg2 WithCompletion:(id /* block */)arg3;
- (void)updateAccountWithAccountID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAccountWithAccountID:(id)arg1 restartDA:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateAccountsAndFetchMigrationState:(bool)arg1 completion:(id /* block */)arg2;
- (void)updateAccountsAndSync:(bool)arg1 completion:(id /* block */)arg2;
- (void)updateShare:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

@end
