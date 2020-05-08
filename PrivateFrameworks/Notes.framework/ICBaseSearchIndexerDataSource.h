/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {
    bool  _needsReindexing;
    NSMutableOrderedSet * _objectIDsBeingProcessed;
    NSMutableOrderedSet * _objectIDsToProcess;
    bool  _observingChanges;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool needsReindexing;
@property (nonatomic, retain) NSMutableOrderedSet *objectIDsBeingProcessed;
@property (nonatomic, retain) NSMutableOrderedSet *objectIDsToProcess;
@property (getter=isObservingChanges, nonatomic) bool observingChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) Class superclass;

+ (id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg1;
+ (bool)isAccountReindexedForMigration:(id)arg1;
+ (void)markAccountReindexedForMigration:(id)arg1;

- (void).cxx_destruct;
- (id)allIndexableObjectIDsInReversedReindexingOrder;
- (void)clearObjectIDsToIgnoreAndStageForReindexing;
- (void)clearObjectIDsToProcess;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (id)indexableObjectIDsWithURIs:(id)arg1;
- (unsigned long long)indexingPriority;
- (id)init;
- (bool)isObservingChanges;
- (void)loadState;
- (bool)needsReindexing;
- (id)newManagedObjectContext;
- (id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)objectIDURIsToBeDeleted;
- (id)objectIDsBeingProcessed;
- (id)objectIDsFromSearchableItems:(id)arg1;
- (id)objectIDsNeedingIndexing;
- (id)objectIDsToProcess;
- (id)persistentStoreCoordinator;
- (id)processingQueue;
- (void)resetContextObservers;
- (void)saveState;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
- (void)searchIndexerWillIndexObjectIDs:(id)arg1;
- (id)searchableItemForObject:(id)arg1;
- (id)searchableItemsForObjectIDs:(id)arg1;
- (void)setNeedsReindexing:(bool)arg1;
- (void)setObjectIDsBeingProcessed:(id)arg1;
- (void)setObjectIDsToProcess:(id)arg1;
- (void)setObservingChanges:(bool)arg1;
- (void)setProcessingQueue:(id)arg1;
- (bool)shouldIndexableObjectExistInIndexing:(id)arg1;
- (void)stageForReindexing;
- (void)stageObjectIDURIsForIndexing:(id)arg1;
- (void)startObservingChanges;
- (id)stateDefaultsKey;
- (void)stopObservingChanges;

@end
