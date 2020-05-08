/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver> {
    PSSearchOperation * _activeSearchOperation;
    NSString * _currentQuery;
    PSSearchResults * _currentResults;
    <PSSearchModelDataSource> * _dataSource;
    NSMutableArray * _deferredSpecifierUpdates;
    NSMutableSet * _delegates;
    NSMutableSet * _entriesBeingIndexed;
    NSMutableSet * _entriesPendingSearch;
    bool  _hasLoadedRootEntries;
    bool  _hasStartedIndexing;
    NSOperationQueue * _indexOperationQueue;
    bool  _indexing;
    NSMutableSet * _indexingEntriesWithLoadedDataSources;
    NSString * _queryForCurrentResults;
    NSMutableSet * _removedEntriesStillIndexing;
    NSMutableSet * _removedEntriesStillSearching;
    NSMutableArray * _rootEntries;
    NSOperationQueue * _searchOperationQueue;
    NSObject<OS_dispatch_queue> * _searchStateAccessQueue;
    bool  _showSectionInDetailText;
    NSMapTable * _specifierDataSources;
    bool  _waitUntilFinished;
}

@property (retain) PSSearchOperation *activeSearchOperation;
@property (copy) NSString *currentQuery;
@property (readonly) PSSearchResults *currentResults;
@property (nonatomic) <PSSearchModelDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCompletedIndexing;
@property (readonly) unsigned long long hash;
@property (getter=isIndexing, nonatomic, readonly) bool indexing;
@property (getter=isLoadingResults, nonatomic, readonly) bool loadingResults;
@property (nonatomic, readonly) long long observerType;
@property (nonatomic, readonly) NSArray *rootEntries;
@property (nonatomic) bool showSectionInDetailText;
@property (readonly) Class superclass;
@property (nonatomic) bool waitUntilFinished;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addSearchEntries:(id)arg1 parent:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_addSpecifierDataSource:(id)arg1 forSearchEntry:(id)arg2;
- (void)_beginIndexingIfNecessary;
- (void)_beginSearchingEntriesForCurrentQuery:(id)arg1 newSearch:(bool)arg2;
- (void)_cancelAllSearchOperations;
- (id /* block */)_defaultSearchResultsSectionComparator;
- (void)_enumerateDelegatesUsingBlock:(id /* block */)arg1;
- (void)_finishedIndexingEntry:(id)arg1;
- (void)_loadChildrenForEntry:(id)arg1;
- (void)_performDeferredUpdatesForEntry:(id)arg1;
- (void)_performSpecifierUpdates:(id)arg1 forSearchEntries:(id)arg2;
- (void)_reloadSearchEntries:(id)arg1;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(id /* block */)arg2 forReload:(bool)arg3;
- (id)_rootSpecifiers;
- (id)_searchEntriesForSpecifierDataSource:(id)arg1;
- (void)_updateWithNewSearchResults:(id)arg1 forQuery:(id)arg2 newSearch:(bool)arg3;
- (void)_updatedEntry:(id)arg1 withChildren:(id)arg2;
- (id)activeSearchOperation;
- (void)addDelegate:(id)arg1;
- (void)addRootSpecifier:(id)arg1;
- (id)currentQuery;
- (id)currentResults;
- (id)dataSource;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)dealloc;
- (bool)hasCompletedIndexing;
- (id)init;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (bool)isIndexing;
- (bool)isLoadingResults;
- (long long)observerType;
- (void)preheat;
- (id)recursiveDescription;
- (void)reloadRootSpecifier:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRootSpecifier:(id)arg1;
- (id)rootEntries;
- (void)searchForQuery:(id)arg1;
- (void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
- (void)searchIndexOperationDidCancel:(id)arg1;
- (void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;
- (void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
- (id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
- (void)searchOperationDidBegin:(id)arg1;
- (void)searchOperationDidCancel:(id)arg1;
- (void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
- (void)setActiveSearchOperation:(id)arg1;
- (void)setCurrentQuery:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setShowSectionInDetailText:(bool)arg1;
- (void)setWaitUntilFinished:(bool)arg1;
- (bool)showSectionInDetailText;
- (bool)waitUntilFinished;

@end
