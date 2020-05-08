/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource, PHPerformChangesRequest, PVPhotoLibraryProtocol> {
    PHPhotoLibraryAppPrivateData * _appPrivateData;
    NSHashTable * _availabilityObservers;
    NSMutableDictionary * _changeNotificationInfo;
    NSMutableDictionary * _changeRequests;
    bool  _clearsOIDCacheAfterFetchResultDealloc;
    NSHashTable * _externalObservers;
    NSHashTable * _fetchResults;
    PAImageConversionServiceClient * _imageConversionServiceClient;
    NSHashTable * _internalObservers;
    bool  _isChangeProcessingPending;
    double  _lastChangeProcessingStarted;
    PLLazyObject * _lazyAlbumRootFolderObjectID;
    PLLazyObject * _lazyBackgroundQueueObjectFetchingPhotoLibrary;
    PLLazyObject * _lazyBackgroundQueuePhotoLibrary;
    PLLazyObject * _lazyChangeHandlingPhotoLibrary;
    PLLazyObject * _lazyMainQueueConcurrencyPhotoLibrary;
    PLLazyObject * _lazyMainQueuePhotoLibrary;
    PLLazyObject * _lazyPhotoLibrary;
    PLLazyObject * _lazyProjectAlbumRootFolderObjectID;
    PLLazyObject * _lazyUserInitiatedQueuePhotoLibrary;
    PLFileSystemVolume * _libraryFileSystemVolume;
    PLPhotoLibraryBundle * _photoLibraryBundle;
    NSURL * _photoLibraryURL;
    NSProgress * _postOpenProgress;
    NSObject<OS_dispatch_queue> * _queue;
    PHPerformChangesRequest * _request;
    PLPhotoLibrary * _transactionPhotoLibrary;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    unsigned short  _type;
    NSError * _unavailabilityReason;
    bool  _unknownMergeEvent;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
}

@property (nonatomic, readonly) NSManagedObjectID *albumRootFolderObjectID;
@property (nonatomic, readonly) PHPhotoLibraryAppPrivateData *appPrivateData;
@property (nonatomic, readonly) PLAssetsdClient *assetsdClient;
@property (nonatomic, retain) NSHashTable *availabilityObservers;
@property (readonly) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary;
@property (readonly) PLPhotoLibrary *backgroundQueuePhotoLibrary;
@property (nonatomic, readonly) bool canUpdatePersonState;
@property (readonly) PLPhotoLibrary *changeHandlingPhotoLibrary;
@property (nonatomic, retain) NSMutableDictionary *changeNotificationInfo;
@property (nonatomic, retain) NSMutableDictionary *changeRequests;
@property (nonatomic) bool clearsOIDCacheAfterFetchResultDealloc;
@property (getter=isCloudPhotoLibraryEnabled, nonatomic, readonly) bool cloudPhotoLibraryEnabled;
@property (nonatomic, readonly) CPLStatus *cplStatus;
@property (nonatomic, readonly) PHPersistentChangeToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *externalObservers;
@property (nonatomic, retain) NSHashTable *fetchResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PAImageConversionServiceClient *imageConversionServiceClient;
@property (nonatomic, retain) NSHashTable *internalObservers;
@property (nonatomic) bool isChangeProcessingPending;
@property (nonatomic, readonly) bool isCloudPhotoLibrary;
@property (nonatomic, readonly) bool isReadOnlyCloudPhotoLibrary;
@property (nonatomic, readonly) bool isSystemPhotoLibrary;
@property (nonatomic) double lastChangeProcessingStarted;
@property (nonatomic, readonly) PLPhotoLibrary *mainQueueConcurrencyPhotoLibrary;
@property (readonly) PLPhotoLibrary *mainQueuePhotoLibrary;
@property (nonatomic, readonly) PLPhotoAnalysisServiceClient *photoAnalysisClient;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLPhotoLibraryBundle *photoLibraryBundle;
@property (nonatomic, readonly) NSURL *photoLibraryURL;
@property (nonatomic, readonly) NSProgress *postOpenProgress;
@property (nonatomic, readonly) NSManagedObjectID *projectAlbumRootFolderObjectID;
@property (getter=px_areChangesPaused, nonatomic, readonly) bool px_changesPaused;
@property (readonly) PXPhotoLibraryLocalDefaults *px_localDefaults;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) PHPerformChangesRequest *request;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PLPhotoAnalysisServiceTaxonomyResolver> *taxonomyResolver;
@property (readonly) PLPhotoLibrary *transactionPhotoLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;
@property (nonatomic, readonly) unsigned short type;
@property (retain) NSError *unavailabilityReason;
@property (nonatomic) bool unknownMergeEvent;
@property (readonly) PLPhotoLibrary *userInitiatedQueuePhotoLibrary;
@property (nonatomic, readonly) NSString *uuid;
@property (readonly) PLPhotoKitVariationCache *variationCache;
@property (nonatomic, retain) PAVideoConversionServiceClient *videoConversionServiceClient;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (Class)PHObjectClassForEntityName:(id)arg1;
+ (Class)PHObjectClassForOID:(id)arg1;
+ (id)PHObjectClasses;
+ (id)PHObjectClassesByEntityName;
+ (id)_effectiveRootEntity:(id)arg1;
+ (void)_forceUserInterfaceReload;
+ (bool)_isInternalObserver:(id)arg1;
+ (void)assertRunningInExtension;
+ (void)assertTransaction;
+ (long long)authorizationStatus;
+ (Class)classForFetchType:(id)arg1;
+ (long long)collectionListTypeForIdentifierCode:(id)arg1;
+ (void)enableMultiLibraryMode;
+ (id)fetchTypeForLocalIdentifierCode:(id)arg1;
+ (bool)hasSharedPhotoLibrary;
+ (void)initialize;
+ (bool)isMultiLibraryModeEnabled;
+ (bool)isSystemPhotoLibraryURL:(id)arg1;
+ (id)photoLibraryForCurrentTransaction;
+ (void)removeAllUniquedOIDs;
+ (void)requestAuthorization:(id /* block */)arg1;
+ (void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1;
+ (void)setSharedPhotoLibrary:(id)arg1;
+ (bool)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2;
+ (id)sharedContactStore;
+ (id)sharedMomentSharePhotoLibrary;
+ (id)sharedPhotoLibrary;
+ (bool)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2;
+ (id)stringFromPHPhotoLibraryType:(unsigned short)arg1;
+ (const char *)systemPhotoLibraryAvailableNotificationName;
+ (id)systemPhotoLibraryURL;
+ (const char *)systemPhotoLibraryURLChangeNotificationName;
+ (id)uniquedOID:(id)arg1;
+ (id)uniquedOIDs:(id)arg1;
+ (id)uniquedOIDsFromObjects:(id)arg1;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_beginTransaction;
- (void)_cancelTransaction:(id /* block */)arg1;
- (void)_checkForPeopleUIFeatureWithFetchRequest:(id)arg1 comparator:(id /* block */)arg2;
- (void)_clearSaveTokensForRequest:(id)arg1;
- (id)_cloudIdentifierKeysByFetchType;
- (void)_commitTransaction:(id /* block */)arg1;
- (id)_errorForAuthorizationStatus:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)_fetchPersistentChangesSinceToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 error:(id*)arg3;
- (void)_handleLibraryBecameUnavailable:(id)arg1 reason:(id)arg2;
- (void)_handleServiceConnectionClosed:(id)arg1;
- (void)_invalidateEverythingWithReason:(id)arg1;
- (void)_notifiyPersistentChangeObservers;
- (void)_notifyAvailabilityObserversWithReason:(id)arg1;
- (void)_onQueueNotifyAvailabilityObserversWithReason:(id)arg1;
- (bool)_postOpenInitializationWithError:(id*)arg1;
- (bool)_preflightRequestWithError:(id*)arg1;
- (void)_processPendingChanges;
- (void)_removeObserver:(id)arg1;
- (void)_requestAnalysisProgressWithCompletion:(id /* block */)arg1;
- (bool)_setUnavailabilityReason:(id)arg1;
- (void)_startObservingServiceConnectionInvalidated;
- (void)_startWatchingFileSystemVolumeForLibraryAvailability;
- (void)_startWatchingForLibraryAvailability;
- (void)_stopObservingServiceConnectionInvalidated;
- (void)_stopWatchingFileSystemVolumeForLibraryAvailability;
- (void)_stopWatchingForLibraryAvailability;
- (id)albumRootFolderObjectID;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id*)arg2;
- (id)allowedEntities;
- (id)analysisProgressCountsForWorkerType:(short)arg1;
- (double)analysisProgressForHighlight:(id)arg1 workerType:(short)arg2 error:(id*)arg3;
- (id)appPrivateData;
- (void)appPrivateDataWriteFailedWithError:(id)arg1;
- (void)assertTransaction;
- (id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)assetUUIDsAllowedForCurationFromAssets:(id)arg1;
- (id)assetsdClient;
- (id)availabilityObservers;
- (id)backgroundQueueObjectFetchingPhotoLibrary;
- (id)backgroundQueuePhotoLibrary;
- (id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2;
- (id)bfa_fetchedObjectsForOIDs:(id)arg1 objectClass:(Class)arg2;
- (id)bfa_photoLibrary;
- (id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3;
- (bool)canUpdatePersonState;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (id)changeHandlingPhotoLibrary;
- (id)changeNotificationInfo;
- (id)changeRequestForUUID:(id)arg1;
- (id)changeRequests;
- (bool)clearsOIDCacheAfterFetchResultDealloc;
- (void)close;
- (void)closeWithReason:(id)arg1;
- (id)cloudIdentifiersForLocalIdentifiers:(id)arg1;
- (unsigned long long)countOfDirtyFaceGroups;
- (void)countOfReferencedMediaWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)countOfUnclusteredFaces;
- (unsigned long long)countOfUnprocessedFaceCrops;
- (id)cplStatus;
- (bool)createPhotoLibraryWithError:(id*)arg1;
- (id)curationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)currentToken;
- (void)dealloc;
- (id)debugDescription;
- (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 error:(id*)arg3;
- (void)enableNamingFlow;
- (id)exportGraphForPurpose:(id)arg1 error:(id*)arg2;
- (id)externalObservers;
- (id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id*)arg2;
- (id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2;
- (void)faceProcessingStatusForUserInterface:(id /* block */)arg1;
- (bool)featureEnabledForWorkerType:(short)arg1;
- (bool)featureEnabledForWorkerType:(short)arg1 completion:(id /* block */)arg2;
- (id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(bool)arg3;
- (id)fetchPHObjectsForOIDs:(id)arg1;
- (id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(bool)arg3;
- (id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2;
- (id)fetchPersistentChangesSinceToken:(id)arg1 error:(id*)arg2;
- (id)fetchPersistentChangesWithRequest:(id)arg1 error:(id*)arg2;
- (id)fetchResults;
- (id)fetchUpdatedObject:(id)arg1;
- (id)fetchedObjectsForOIDs:(id)arg1 objectClass:(Class)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(id /* block */)arg1;
- (id)graphStatisticsDescription:(id*)arg1;
- (id)graphStatusDescription:(id*)arg1;
- (void)handleMergeNotification:(id)arg1;
- (id)highlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)imageConversionServiceClient;
- (id)inferredContactByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1;
- (id)inferredContactForPersonLocalIdentifier:(id)arg1;
- (id)init;
- (id)initMomentShareLibrary;
- (id)initSharedLibrary;
- (id)initWithPLPhotoLibrary:(id)arg1;
- (id)initWithPLPhotoLibrary:(id)arg1 type:(unsigned short)arg2;
- (id)initWithPhotoLibraryBundle:(id)arg1 type:(unsigned short)arg2;
- (id)initWithPhotoLibraryURL:(id)arg1;
- (id)initWithPhotoLibraryURL:(id)arg1 type:(unsigned short)arg2;
- (id)internalObservers;
- (bool)invalidatePersistentGraphCachesAndReturnError:(id*)arg1;
- (bool)invalidateTransientGraphCachesAndReturnError:(id*)arg1;
- (bool)isApplyingRequestedChanges;
- (bool)isChangeProcessingPending;
- (bool)isCloudPhotoLibrary;
- (bool)isCloudPhotoLibraryEnabled;
- (bool)isFaceProcessingFinished;
- (bool)isNamingFlowEnabled:(id /* block */)arg1;
- (bool)isPHPhotoLibraryForCMM;
- (bool)isReadOnlyCloudPhotoLibrary;
- (bool)isSystemPhotoLibrary;
- (double)lastChangeProcessingStarted;
- (id)libraryID;
- (id)librarySpecificFetchOptions;
- (void)loadGraph;
- (id)localIdentifiersForCloudIdentifiers:(id)arg1;
- (id)mainQueueConcurrencyPhotoLibrary;
- (id)mainQueueManagedObjectContext;
- (id)mainQueuePhotoLibrary;
- (id)managedObjectContext;
- (id)managedObjectContextForCurrentQueueQoS;
- (bool)markAnalysisStatesProcessedForWorkerType:(short)arg1 error:(id*)arg2;
- (id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)migrationDate;
- (id)objectFetchingContextForCurrentQueueQoS;
- (id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)openAndWaitWithUpgrade:(bool)arg1 error:(id*)arg2;
- (void)performCancellableChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)performCancellableChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (void)performChanges:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (void)personPromotionProcessingStatusForUserInterface:(id /* block */)arg1;
- (id)photoAnalysisClient;
- (id)photoLibrary;
- (id)photoLibraryBundle;
- (id)photoLibraryForCurrentQueueQoS;
- (id)photoLibraryURL;
- (id)pl_photoLibraryForCMM;
- (id)pl_syncProgressAlbums;
- (unsigned long long)pl_upgradeOptionsFromOptions:(unsigned long long)arg1;
- (id)postOpenProgress;
- (id)projectAlbumRootFolderObjectID;
- (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(bool)arg3;
- (id)queue;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)registerAvailabilityObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerFetchResult:(id)arg1;
- (id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
- (id)request;
- (void)requestAnalysisProgressCountsWithCompletion:(id /* block */)arg1;
- (bool)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id*)arg2;
- (bool)requestAssetRevGeocodingWithError:(id*)arg1;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4;
- (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(id /* block */)arg1;
- (bool)requestEnrichmentWithOptions:(id)arg1 error:(id*)arg2;
- (void)requestGenerateQuestionsWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestGraphRebuildProgressWithCompletion:(id /* block */)arg1;
- (void)requestGraphRebuildWithOptions:(id)arg1 progress:(id)arg2 completion:(id /* block */)arg3;
- (void)requestGraphRebuildWithProgress:(id)arg1 completion:(id /* block */)arg2;
- (id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id*)arg2;
- (bool)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id*)arg2;
- (bool)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id*)arg2;
- (void)requestHighlightEstimatesWithCompletion:(id /* block */)arg1;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestSearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4;
- (void)requestSearchIndexUpdates:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(bool)arg3 withOptions:(id)arg4 error:(id*)arg5;
- (id)requestSynonymsDictionariesWithError:(id*)arg1;
- (id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(id /* block */)arg3;
- (void)requestTotalProgressCountsWithCompletion:(id /* block */)arg1;
- (id)requestZeroKeywordsWithOptions:(id)arg1 error:(id*)arg2;
- (bool)resetPendingAnalysisStatesWithError:(id*)arg1;
- (void)runPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 resultBlock:(id /* block */)arg3;
- (double)sceneAnalysisProgressForHighlight:(id)arg1 usingSceneVersion:(unsigned long long)arg2;
- (id)sceneInformationFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (void)setAvailabilityObservers:(id)arg1;
- (void)setChangeNotificationInfo:(id)arg1;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (void)setChangeRequests:(id)arg1;
- (void)setClearsOIDCacheAfterFetchResultDealloc:(bool)arg1;
- (void)setExternalObservers:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setImageConversionServiceClient:(id)arg1;
- (void)setInternalObservers:(id)arg1;
- (void)setIsChangeProcessingPending:(bool)arg1;
- (void)setLastChangeProcessingStarted:(double)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setTaxonomyResolver:(id)arg1;
- (void)setTransactionQueue:(id)arg1;
- (void)setUnavailabilityReason:(id)arg1;
- (void)setUnknownMergeEvent:(bool)arg1;
- (void)setVideoConversionServiceClient:(id)arg1;
- (id)sharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)sharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)sharingSuggestionWithRandomPick:(bool)arg1 fallbackToRecentMoments:(bool)arg2 needsNotification:(bool)arg3;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id*)arg2;
- (id)suggestedContactsForPersonLocalIdentifier:(id)arg1;
- (id)suggestedMePersonIdentifierWithError:(id*)arg1;
- (id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4;
- (id)taxonomyResolver;
- (id)transactionPhotoLibrary;
- (id)transactionQueue;
- (unsigned short)type;
- (id)unavailabilityReason;
- (bool)unknownMergeEvent;
- (void)unloadGraph;
- (void)unregisterAvailabilityObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterFetchResult:(id)arg1;
- (id)upgradePhotoLibraryWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)urlForApplicationDataFolderIdentifier:(long long)arg1;
- (id)userInitiatedQueuePhotoLibrary;
- (id)uuid;
- (id)variationCache;
- (id)videoConversionServiceClient;
- (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

+ (id)_defaultAssetPropertySets;
+ (id)_defaultFacePropertySets;
+ (id)_phFaceSortDescriptors;
+ (id)_phPeopleSortDescriptors;

- (id)_defaultAssetFetchOptions;
- (id)_defaultFetchOptions;
- (double)_progressFromWorkerStatesDictionary:(id)arg1;
- (float)pv_faceProcessingProgress;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchMoments;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pv_lastAssetDate;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (bool)pv_performChangesAndWait:(id /* block */)arg1 error:(id*)arg2;
- (id)pv_persistentStorageDirectoryURL;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (id)pg_urlForGraphApplicationData;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_appPhotoLibrary;

- (bool)px_areChangesPaused;
- (id)px_assetCollectionForSmartAlbumWithSubtype:(long long)arg1;
- (id)px_assetCollectionWithLocalIdentifier:(id)arg1;
- (id)px_assetCollectionWithTransientIdentifier:(id)arg1;
- (id)px_beginPausingChangesWithTimeout:(double)arg1;
- (id)px_changeDistributor;
- (id)px_collectionListWithLocalIdentifier:(id)arg1;
- (id)px_collectionListWithTransientIdentifier:(id)arg1;
- (void)px_endPausingChanges:(id)arg1;
- (bool)px_fetchHasNoVisibleAssets;
- (id)px_localDefaults;
- (id)px_memoryWithLocalIdentifier:(id)arg1;
- (id)px_objectWithLocalIdentifier:(id)arg1;
- (void)px_registerChangeObserver:(id)arg1;
- (void)px_unregisterChangeObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit

+ (id)pk_appPhotoLibrary;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;
+ (id)vcp_defaultPhotoLibrary;
+ (id)vcp_defaultURL;

- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;
- (long long)vcp_isCPLDownloadComplete;
- (long long)vcp_isCPLEnabled;
- (long long)vcp_isCPLSyncComplete;
- (id)vcp_mediaAnalysisDatabaseFilepath;
- (id)vcp_mediaAnalysisDirectory;
- (id)vcp_url;

@end
