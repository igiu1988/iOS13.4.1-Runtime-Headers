/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSearchIndexer : NSObject <CSSearchableIndexDelegate> {
    ICSelectorDelayer * _changeProcessingDelayer;
    NSDictionary * _dataSourcesByIdentifier;
    bool  _disabled;
    NSObject<OS_dispatch_queue> * _indexingQueue;
    unsigned long long  _maxBytesPerIndexingBatch;
    bool  _observingChanges;
    NSOperationQueue * _operationQueue;
    bool  _retryOnErrors;
    NSMutableDictionary * _retryTimers;
    CSSearchableIndex * _searchableIndex;
}

@property (nonatomic, retain) ICSelectorDelayer *changeProcessingDelayer;
@property (nonatomic, readonly) NSArray *dataSources;
@property (nonatomic, copy) NSDictionary *dataSourcesByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *indexingQueue;
@property (nonatomic) unsigned long long maxBytesPerIndexingBatch;
@property (getter=isObservingChanges, nonatomic) bool observingChanges;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) bool retryOnErrors;
@property (nonatomic, retain) NSMutableDictionary *retryTimers;
@property (nonatomic, retain) CSSearchableIndex *searchableIndex;
@property (readonly) Class superclass;

+ (id)sharedIndexer;

- (void).cxx_destruct;
- (void)addDataSource:(id)arg1;
- (void)cancelIndexingOperationsWithCompletionHandler:(id /* block */)arg1;
- (id)changeProcessingDelayer;
- (void)clearObjectIDsToProcess;
- (void)clearRetryForSelector:(SEL)arg1;
- (void)dataSourceDidChange:(id)arg1;
- (id)dataSourceWithIdentifier:(id)arg1;
- (id)dataSources;
- (id)dataSourcesByIdentifier;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (void)finishRemainingOperationsWithCompletionHandler:(id /* block */)arg1;
- (id)indexingQueue;
- (id)init;
- (bool)isDisabled;
- (bool)isObservingChanges;
- (unsigned long long)maxBytesPerIndexingBatch;
- (id)newContextsForAllDataSources;
- (id)objectForManagedObjectIDURI:(id)arg1 inContexts:(id)arg2;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)objectsDictionaryForSearchableItems:(id)arg1 inContexts:(id)arg2;
- (id)objectsForSearchableItems:(id)arg1 inContexts:(id)arg2;
- (id)operationQueue;
- (id)pendingReindexingOperation;
- (void)performBlockOnIndexingQueue:(id /* block */)arg1;
- (void)processChanges;
- (void)reindexAllSearchableItemsInIndex;
- (void)reindexAllSearchableItemsInIndex:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 inIndex:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeDataSource:(id)arg1;
- (bool)retryOnErrors;
- (void)retrySelector:(SEL)arg1;
- (id)retryTimers;
- (id)searchableIndex;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)setChangeProcessingDelayer:(id)arg1;
- (void)setDataSourcesByIdentifier:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIndexingQueue:(id)arg1;
- (void)setMaxBytesPerIndexingBatch:(unsigned long long)arg1;
- (void)setObservingChanges:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRetryOnErrors:(bool)arg1;
- (void)setRetryTimers:(id)arg1;
- (void)setSearchableIndex:(id)arg1;
- (void)startObservingChanges;
- (void)stopObservingChanges;

@end
