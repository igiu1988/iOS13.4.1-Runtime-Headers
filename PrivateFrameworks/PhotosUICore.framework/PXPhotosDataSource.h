/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSMutableSet * __inaccurateAssetCollections;
    PXPhotosDataSourceSectionCache * __preparedSectionCache;
    unsigned long long  __previousCollectionsCount;
    PXPhotosDataSourceSectionCache * __sectionCache;
    bool  _allowNextChangeDeliveryOnAllRunLoopModes;
    NSSet * _allowedUUIDs;
    long long  _backgroundFetchOriginSection;
    bool  _backgroundFetchOriginSectionChanged;
    PXBackgroundFetchToken * _backgroundFetchToken;
    PXLIFOQueue * _backgroundLIFOQueue;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    PHFetchResult * _collectionListFetchResult;
    long long  _curationType;
    PHFetchResult * _emptyAssetsFetchResult;
    NSMutableDictionary * _facesByAssetCache;
    unsigned long long  _fetchLimit;
    NSArray * _fetchPropertySets;
    NSArray * _filterPersons;
    NSPredicate * _filterPredicate;
    bool  _hideHiddenAssets;
    NSDictionary * _hintIndexPathByAssetReferenceCache;
    bool  _inaccurateAssetCollectionsNeedsUpdate;
    NSMutableDictionary * _infoForAssetCollection;
    bool  _interruptBackgroundFetch;
    bool  _isBackgroundFetching;
    bool  _needToStartBackgroundFetch;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSHashTable * _observersQueue_observers;
    bool  _observersQueue_shouldCopyChangeObserversOnWrite;
    unsigned long long  _options;
    bool  _pauseBackgroundFetchResultsDelivery;
    NSMutableSet * _pauseLibraryChangeDeliveryTokens;
    NSMutableDictionary * _pendingResultsByAssetCollection;
    NSObject<OS_dispatch_queue> * _pendingResultsIsolationQueue;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _prefetchQueue;
    NSMutableDictionary * _preparedChangeDetailsByAssetCollection;
    NSDictionary * _preparedIndexPathByAssetReferenceCache;
    NSDictionary * _preparedResultRecordChangeDetailsByAssetCollection;
    bool  _processAndPublishScheduledOnRunloop;
    NSMutableOrderedSet * _queuedAssetCollectionsToFetch;
    PHAsset * _referenceAsset;
    NSMutableDictionary * _resultRecordByAssetCollection;
    bool  _reverseSortOrder;
    NSArray * _sortDescriptors;
    unsigned long long  _versionIdentifier;
    bool  _wantsCurationByDefault;
    NSMutableDictionary * _weightByAssetCache;
}

@property (setter=_setPreviousCollectionsCount:, nonatomic) unsigned long long _previousCollectionsCount;
@property (nonatomic) bool allowNextChangeDeliveryOnAllRunLoopModes;
@property (nonatomic, copy) NSSet *allowedUUIDs;
@property (nonatomic, readonly) bool areAllSectionsConsideredAccurate;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (nonatomic, retain) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) bool containsMultipleAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedOtherCount;
@property (nonatomic, readonly) long long estimatedPhotosCount;
@property (nonatomic, readonly) long long estimatedVideosCount;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBackgroundFetching;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isImmutable;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PHAsset *referenceAsset;
@property (nonatomic) bool reverseSortOrder;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long versionIdentifier;
@property (nonatomic) bool wantsCurationByDefault;
@property (nonatomic, readonly) bool wantsCurationForFirstAssetCollection;

+ (id)_curationSharedBackgroundQueue;
+ (id)_sharedPrefetchQueue;
+ (id)backgroundFetchingGroup;
+ (void)waitForAllBackgroundFetchingToFinish;

- (void).cxx_destruct;
- (void)_addResultTuple:(id)arg1 forAssetCollection:(id)arg2 toMutableResultRecord:(id)arg3;
- (bool)_allSectionsConsideredAccurate;
- (id)_allowedUUIDsForAssetCollection:(id)arg1;
- (bool)_areFiltersDisabledForAssetCollection:(id)arg1;
- (unsigned long long)_assetCollectionFetchStatus:(id)arg1;
- (id)_assetOidsByAssetCollectionForAssetsAtIndexPaths:(id)arg1;
- (id)_assetsForAssetCollection:(id)arg1;
- (unsigned long long)_cachedSectionForAssetCollection:(id)arg1;
- (void)_cancelBackgroundFetchIfNeeded;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_commonInit;
- (id)_createResultRecordForAssetCollection:(id)arg1;
- (void)_didFinishBackgroundFetching;
- (void)_enumerateChangeObserversWithBlock:(id /* block */)arg1;
- (id)_fetchAssetsStartingAtIndexPath:(id)arg1;
- (void)_fetchRemainingCollectionsBackgroundLoop;
- (id)_fetchTupleForAssetCollection:(id)arg1 calledOnMainQueue:(bool)arg2 isLimitedInitialFetch:(bool)arg3;
- (id)_fetcher;
- (id)_filterPredicateForAssetCollection:(id)arg1;
- (id)_finalFilterPredicateForAssetCollection:(id)arg1;
- (void)_getFetchLimit:(unsigned long long*)arg1 fetchWithReverseSortOrder:(bool*)arg2 forAssetCollection:(id)arg3 isLimitedInitialFetch:(bool)arg4;
- (id)_inaccurateAssetCollections;
- (id)_inclusionPredicateForAssetCollection:(id)arg1;
- (void)_incrementVersionIdentifier;
- (void)_interruptBackgroundFetch;
- (bool)_isCurationEnabled;
- (id)_keyAssetsForAssetCollection:(id)arg1;
- (id)_mutableResultRecordForAssetCollection:(id)arg1;
- (id)_observerInterestingAssetReferences;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)_performManualChangesForAssetCollections:(id)arg1 changeBlock:(id /* block */)arg2;
- (void)_performManualChangesForAssetCollections:(id)arg1 collectionsToDiff:(id)arg2 changeBlock:(id /* block */)arg3;
- (void)_performManualReloadWithChangeBlock:(id /* block */)arg1;
- (void)_performProcessAndPublishSelectorInDefaultRunLoopMode;
- (void)_prefetchIndexesByFetchResult:(id)arg1 onlyThumbnails:(bool)arg2;
- (void)_prepareDiffsForPendingResultsWithCompletion:(id /* block */)arg1;
- (unsigned long long)_previousCollectionsCount;
- (void)_processAndPublishPendingCollectionFetchResults;
- (void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
- (void)_publishChange:(id)arg1;
- (void)_publishDidReceivePhotoLibraryChange:(id)arg1;
- (void)_publishReloadChange;
- (void)_publishWillChange;
- (id)_resultRecordForAssetCollection:(id)arg1;
- (bool)_reverseSortOrderForAssetCollection:(id)arg1;
- (id)_sectionCache;
- (void)_setPreviousCollectionsCount:(unsigned long long)arg1;
- (void)_updateInaccurateAssetCollectionsIfNeeded;
- (bool)allowNextChangeDeliveryOnAllRunLoopModes;
- (id)allowedUUIDs;
- (id)approximateAssetsAtIndexPaths:(id)arg1;
- (bool)areAllSectionsConsideredAccurate;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)assetCollectionForSection:(long long)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetReferenceForAsset:(id)arg1 containedInAssetCollectionWithType:(long long)arg2;
- (id)assetsAtIndexPaths:(id)arg1;
- (id)assetsInSection:(long long)arg1;
- (id)assetsStartingAtIndexPath:(id)arg1;
- (long long)backgroundFetchOriginSection;
- (void)clearResultsForAssetCollection:(id)arg1;
- (id)collectionListFetchResult;
- (bool)containsMultipleAssets;
- (id)createDataSourceWithAssetsAtIndexPaths:(id)arg1;
- (id)curatedAssetsForAssetCollection:(id)arg1;
- (id)curatedAssetsInSection:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateStartingAtIndexPath:(id)arg1 reverseDirection:(bool)arg2 usingBlock:(id /* block */)arg3;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1;
- (long long)estimatedOtherCount;
- (long long)estimatedPhotosCount;
- (long long)estimatedVideosCount;
- (id)facesAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (unsigned long long)fetchLimit;
- (id)fetchResultWithAssetsAtIndexPaths:(id)arg1;
- (id)fetchResultWithAssetsInSections:(id)arg1;
- (id)fetchResultsByAssetCollection;
- (id)filterPredicate;
- (id)firstAssetCollection;
- (bool)forceAccurateAllSectionsIfNeeded;
- (bool)forceAccurateIndexPath:(id)arg1 andAssetsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (bool)forceAccurateSectionsIfNeeded:(id)arg1 reloadChanges:(bool)arg2;
- (void)forceExcludeAssetsAtIndexPaths:(id)arg1;
- (void)forceIncludeAssetsAtIndexPaths:(id)arg1;
- (bool)hasCurationForAssetCollection:(id)arg1;
- (long long)indexForAsset:(id)arg1 inCollection:(id)arg2 hintIndex:(long long)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3;
- (id)indexPathForAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollections:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (id)indexPathForAssetReference:(id)arg1;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollection:(id)arg4;
- (id)indexPathForAssetWithUUID:(id)arg1 orBurstIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollections:(id)arg4;
- (id)indexPathForFirstAsset;
- (id)indexPathForLastAsset;
- (id)infoForAssetCollection:(id)arg1;
- (id)initWithPhotosDataSource:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPhotosDataSourceConfiguration:(id)arg1;
- (bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (bool)isBackgroundFetching;
- (bool)isCuratedAssetsEmptyForAssetCollection:(id)arg1;
- (bool)isCuratedAssetsFutilelyForAssetCollection:(id)arg1;
- (bool)isEmpty;
- (bool)isImmutable;
- (long long)keyAssetIndexInSection:(long long)arg1;
- (id)keyAssetsInSection:(long long)arg1;
- (id)lastAssetCollection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1;
- (unsigned long long)options;
- (id)pauseChangeDeliveryAndBackgroundLoadingWithTimeout:(double)arg1;
- (void)pauseChangeDeliveryFor:(double)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)arg1 reverseOrder:(bool)arg2;
- (void)prefetchAssetsAtIndexPaths:(id)arg1 onlyThumbnailAssets:(bool)arg2;
- (void)prefetchAssetsInSections:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)referenceAsset;
- (void)refetchResultsForAssetCollection:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (bool)reverseSortOrder;
- (unsigned long long)sectionForAssetCollection:(id)arg1;
- (void)setAllowNextChangeDeliveryOnAllRunLoopModes:(bool)arg1;
- (void)setAllowedUUIDs:(id)arg1;
- (void)setBackgroundFetchOriginSection:(long long)arg1;
- (void)setCollectionListFetchResult:(id)arg1;
- (void)setDisableFilters:(bool)arg1 forAssetCollection:(id)arg2;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setIsBackgroundFetching:(bool)arg1;
- (void)setKeyAsset:(id)arg1 forAssetCollection:(id)arg2;
- (void)setReverseSortOrder:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setWantsCuration:(bool)arg1 forAssetCollection:(id)arg2;
- (void)setWantsCurationByDefault:(bool)arg1;
- (void)setWantsCurationForAllCollections:(bool)arg1 collectionsToDiff:(id)arg2;
- (id)sortDescriptors;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)arg1;
- (void)stopForceIncludingAllAssets;
- (id)uncuratedAssetsForAssetCollection:(id)arg1;
- (id)uncuratedAssetsInSection:(long long)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (unsigned long long)versionIdentifier;
- (bool)wantsCurationByDefault;
- (bool)wantsCurationForAssetCollection:(id)arg1;
- (bool)wantsCurationForFirstAssetCollection;
- (double)weightForAsset:(id)arg1;

@end
