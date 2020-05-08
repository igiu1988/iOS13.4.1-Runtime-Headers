/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserDefaults : NSObject {
    NSMutableDictionary * _cache;
    NSString * _clientZoneIdentifier;
    BRCUserDefaults * _globalUserDefault;
    NSDictionary * _serverContainerConfigurationDict;
}

@property (nonatomic, readonly) double accessTimeDeltaInHighUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInLowUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInMedUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInVeryHighUrgency;
@property (nonatomic, readonly) double activeDownloadSizeRefreshInterval;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *aggressivePCSChainActivity;
@property (nonatomic, readonly) bool aggressivelyPCSChain;
@property (nonatomic, readonly) unsigned long long aliasDeletionBatchSize;
@property (nonatomic, readonly) bool allowReadOnlyDBInIPC;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *analyticsReportXPCActivity;
@property (nonatomic, readonly) NSDictionary *appLibraryAliasRemovalThrottleParams;
@property (nonatomic, readonly) NSDictionary *appLibraryResetThrottleParams;
@property (nonatomic, readonly) NSDictionary *appLibraryScanThrottleParams;
@property (nonatomic, readonly) unsigned long long applyCountToSignalFaultsLive;
@property (nonatomic, readonly) unsigned long long applyRetryCountForFailure;
@property (nonatomic, readonly) NSDictionary *applyThrottleParams;
@property (nonatomic, readonly) double appsFetchPacerDelay;
@property (nonatomic, readonly) NSSet *autoEvictableUTIs;
@property (nonatomic, readonly) unsigned long long availableQuotaComfortSize;
@property (nonatomic, readonly) NSSet *blacklistPCSPrep;
@property (nonatomic, readonly) NSSet *blacklistedPackageExtensions;
@property (nonatomic, readonly) NSSet *blacklistedThumbnailExtensions;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *cacheDeletePushXPCActivity;
@property (nonatomic, readonly) double cacheDeleteRecomputeInterval;
@property (nonatomic, readonly) bool canSaveRecordsDirectlyForDeltaSync;
@property (nonatomic, readonly) NSArray *carryPartitions;
@property (nonatomic, readonly) bool changeItemIDOnUnknownItem;
@property (nonatomic, readonly) unsigned long long computeEvictableBatchSize;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *configurationUpdateXPCActivity;
@property (nonatomic, readonly) unsigned long long copyShareIDsBatchSize;
@property (nonatomic, readonly) long long dbAutovacuumBatchSize;
@property (nonatomic, readonly) float dbAutovacuumRatio;
@property (nonatomic, readonly) double dbBatchDelay;
@property (nonatomic, readonly) int dbBatchSize;
@property (nonatomic, readonly) bool dbProfiled;
@property (nonatomic, readonly) long long dbReclaimableSpaceThreshold;
@property (nonatomic, readonly) bool dbTraced;
@property (nonatomic, readonly) double defaultOnDiskAccessTimeDefaultForEviction;
@property (nonatomic, readonly) double defaultTimeDeltaForEviction;
@property (nonatomic, readonly) long long delayForStuckThrottle;
@property (nonatomic, readonly) unsigned long long deleteShareIDBatchCount;
@property (nonatomic, readonly) bool destroyiWorkShares;
@property (nonatomic, readonly) double diskSpaceCheckInterval;
@property (nonatomic, readonly) unsigned long long diskSpaceRequiredToReturnToGreedyState;
@property (nonatomic, readonly) double documentAccessHighPriorityInterval;
@property (nonatomic, readonly) unsigned long long downloadBatchCount;
@property (nonatomic, readonly) unsigned long long downloadBatchRecordsCount;
@property (nonatomic, readonly) unsigned long long downloadRetryCountForFailure;
@property (nonatomic, readonly) double downloadSizeRefreshInterval;
@property (nonatomic, readonly) NSDictionary *downloadThrottleParams;
@property (nonatomic, readonly) unsigned long long downloadWillRetryProgressMaxCount;
@property (nonatomic, readonly) double eventMetricTimeout;
@property (nonatomic, readonly) NSSet *excludedExtensionsWorthPreserving;
@property (nonatomic, readonly) NSSet *excludedFilenamesWorthPreserving;
@property (nonatomic, readonly) NSSet *excludedFilenamesWorthWarningAtLogout;
@property (nonatomic, readonly) NSSet *extensionsSkippingBundleBitFixup;
@property (nonatomic, readonly) NSString *fakeEtagForFailIfOutdated;
@property (nonatomic, readonly) unsigned long long fieldsToMoveOutOfTrashMask;
@property (nonatomic, readonly) bool forceBatchFailureWhenReceivingAssetTokenExpiration;
@property (nonatomic, readonly) bool forceFailIfExistOnRevival;
@property (nonatomic, readonly) double forceForegroundGracePeriod;
@property (nonatomic, readonly) BOOL forceSyncOverride;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *forcedSyncXPCActivity;
@property (nonatomic, readonly) double foregroundGracePeriod;
@property (nonatomic, readonly) unsigned long long fseventProcessBatchSize;
@property (nonatomic, readonly) unsigned long long fseventQueueBufferSize;
@property (nonatomic, readonly) double fseventsLatency;
@property (nonatomic, readonly) double fseventsResetBackoff;
@property (nonatomic, readonly) double graveyardAgeDeltaInLowUrgency;
@property (nonatomic, readonly) double graveyardAgeDeltaInMedUrgency;
@property (nonatomic, readonly) unsigned int ignoredQuarantineMask;
@property (nonatomic, readonly) double intervalToWaitBeforeShowingAdditionalDescription;
@property (nonatomic, readonly) bool isBlacklistedFromFolderSharing;
@property (nonatomic, readonly) NSSet *iworkShareableExtensions;
@property (nonatomic, readonly) unsigned int logoutTimeout;
@property (nonatomic, readonly) NSDictionary *lostItemThrottleParams;
@property (nonatomic, readonly) unsigned long long lostScanDeepScanFirstThreshold;
@property (nonatomic, readonly) double markChildLostBackoff;
@property (nonatomic, readonly) unsigned long long maxBackoffToRetryUserInitiated;
@property (nonatomic, readonly) unsigned long long maxFolderEnumerationCount;
@property (nonatomic, readonly) unsigned long long maxFolderEnumerationDepth;
@property (nonatomic, readonly) unsigned long long maxNumberOfFilesInAFolder;
@property (nonatomic, readonly) unsigned long long maxPreservedXattrBlobSize;
@property (nonatomic, readonly) unsigned int maxRecordCountInClientZoneModifyRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInFetchRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInModifyRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInQuerySharedRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRelativePathDepth;
@property (nonatomic, readonly) unsigned int maxSyncPathDepth;
@property (nonatomic, readonly) unsigned long long maxTotalFilesCount;
@property (nonatomic, readonly) unsigned long long maxXattrBlobSize;
@property (nonatomic, readonly) unsigned long long maximumAccountSizeToBeAlwaysGreedy;
@property (nonatomic, readonly) double maximumDocumentAgeToBeGreedy;
@property (nonatomic, readonly) NSDictionary *migrationThrottleParams;
@property (nonatomic, readonly) long long minAutomaticallyEvictableFilesize;
@property (nonatomic, readonly) double minFetchQuotaInterval;
@property (nonatomic, readonly) long long minFileSizeForGraveyard;
@property (nonatomic, readonly) long long minFileSizeForThumbnailTransfer;
@property (nonatomic, readonly) long long minimalSizeToShowAdditionalDescription;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToBeFunctional;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToBeGreedy;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToDownload;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToDownloadUserInitiated;
@property (nonatomic, readonly) float modifyRecordsCountAdditiveIncreaseFraction;
@property (nonatomic, readonly) float modifyRecordsCountMultiplicativeDecrease;
@property (nonatomic, readonly) NSSet *nonAutoEvictableExtensions;
@property (nonatomic, readonly) NSSet *nonAutoEvictableUTIs;
@property (nonatomic, readonly) NSSet *nonEvictableExtensions;
@property (nonatomic, readonly) NSSet *nonEvictablePathComponents;
@property (nonatomic, readonly) unsigned long long notifBatchSize;
@property (nonatomic, readonly) unsigned long long notifGatherUpTo;
@property (nonatomic, readonly) unsigned long long notifOverflowLimit;
@property (nonatomic, readonly) bool nsurlsessiondEnabled;
@property (nonatomic, readonly) double onDiskAccessTimeDeltaInHighUrgency;
@property (nonatomic, readonly) double onDiskAccessTimeDeltaInLowUrgency;
@property (nonatomic, readonly) double onDiskAccessTimeDeltaInMedUrgency;
@property (nonatomic, readonly) double onDiskAccessTimeDeltaInVeryHighUrgency;
@property (nonatomic, readonly) bool onlyTreatCaughtUpAsConsistent;
@property (nonatomic, readonly) NSDictionary *operationFailureThrottleParams;
@property (nonatomic, readonly) bool optimisticallyPCSChain;
@property (nonatomic, readonly) double packageExtensionPlistWriteInterval;
@property (nonatomic, readonly) NSSet *packageExtensions;
@property (nonatomic, readonly) bool pcsChainShareAliases;
@property (nonatomic, readonly) unsigned long long pcsChainingBatchSize;
@property (nonatomic, readonly) unsigned long long pcsChainingMaxPathDepth;
@property (nonatomic, readonly) NSDictionary *perItemSyncUpThrottleParams;
@property (nonatomic, readonly) double periodicSyncTimeInterval;
@property (nonatomic, readonly) double powerLogReportInterval;
@property (nonatomic, readonly) unsigned int publishURLTimeout;
@property (nonatomic, readonly) double purgePacerInterval;
@property (nonatomic, readonly) double quotaFetchPacerDelay;
@property (nonatomic, readonly) double readerIOsCancelDelay;
@property (nonatomic, readonly) double readerLostItemBackoff;
@property (nonatomic, readonly) unsigned long long readerMarkChildrenLostBatchSize;
@property (nonatomic, readonly) int readerMaxConcurrentIOs;
@property (nonatomic, readonly) double readerPackageProcessingDelay;
@property (nonatomic, readonly) int readerScanBatchSize;
@property (nonatomic, readonly) NSDictionary *readerThrottleParams;
@property (nonatomic, readonly) unsigned long long recentsEnumeratorBatchSize;
@property (nonatomic, readonly) NSDictionary *recentsEnumeratorFailureThrottleParams;
@property (nonatomic, readonly) unsigned long long recentsEnumeratorMaxHierarchyDepth;
@property (nonatomic, readonly) double recentsEnumeratorPacerInterval;
@property (nonatomic, readonly) float relativeDiskSpaceRequiredToReturnToGreedyState;
@property (nonatomic, readonly) NSString *serverConfigurationURL;
@property (nonatomic, readonly) bool sessionZombiesEnabled;
@property (nonatomic, readonly) NSDictionary *sharedAppLibraryResetThrottleParams;
@property (nonatomic, readonly) unsigned long long sharedDBSyncDownBatchRecordsCount;
@property (nonatomic, readonly) unsigned long long sharedDbSyncDownCoalesceNanoseconds;
@property (nonatomic, readonly) bool should2PhasePCSChain;
@property (nonatomic, readonly) bool shouldAppLibraryBeGreedy;
@property (nonatomic, readonly) bool shouldAutoMigrateToCloudDocs;
@property (nonatomic, readonly) bool shouldDisplayUploadNotification;
@property (nonatomic, readonly) bool shouldFetchAllChanges;
@property (nonatomic, readonly) bool shouldFixupBundleBitOnPackages;
@property (nonatomic, readonly) bool shouldFixupTargetCZMAliases;
@property (nonatomic, readonly) bool shouldMigrateFetchShareAliases;
@property (nonatomic, readonly) bool shouldPreparePCSMigration;
@property (nonatomic, readonly) bool shouldReportAllPerItemFailures;
@property (nonatomic, readonly) bool shouldSessionBeGreedy;
@property (nonatomic, readonly) bool skipPerItemSyncUpThrottling;
@property (nonatomic, readonly) bool skipServerSideThrottling;
@property (nonatomic, readonly) bool skipSyncUpThrottlingOnBatchFailures;
@property (nonatomic, readonly) bool spotlightIndexingEnabled;
@property (nonatomic, readonly) unsigned long long sqliteCacheSize;
@property (nonatomic, readonly) unsigned long long sqliteCacheSpill;
@property (nonatomic, readonly) unsigned short stageDirectoryUmask;
@property (nonatomic, readonly) unsigned short stageFSRootUmask;
@property (nonatomic, readonly) unsigned short stageFileUmask;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *stageGCXPCActivity;
@property (nonatomic, readonly) unsigned short stageInPackageDirectoryUmask;
@property (nonatomic, readonly) unsigned short stageInPackageFileUmask;
@property (nonatomic, readonly) unsigned long long statementCacheMaxCountForClientTruth;
@property (nonatomic, readonly) unsigned long long statementCacheMaxCountForServerTruth;
@property (nonatomic, readonly) NSDictionary *syncClientZoneErrorThrottleParams;
@property (nonatomic, readonly) NSDictionary *syncClientZoneThrottleParams;
@property (nonatomic, readonly) double syncDownDelayForFailure;
@property (nonatomic, readonly) BRCSyncOperationThrottleParams *syncDownThrottle;
@property (nonatomic, readonly) NSArray *syncThrottles;
@property (nonatomic, readonly) float syncUpDailyBudget;
@property (nonatomic, readonly) float syncUpDataCreateCost;
@property (nonatomic, readonly) float syncUpDataDeleteCost;
@property (nonatomic, readonly) float syncUpDataEditCost;
@property (nonatomic, readonly) double syncUpDelayForFailure;
@property (nonatomic, readonly) float syncUpDocumentCreateCost;
@property (nonatomic, readonly) float syncUpDocumentDeleteCost;
@property (nonatomic, readonly) float syncUpDocumentEditCost;
@property (nonatomic, readonly) float syncUpHourlyBudget;
@property (nonatomic, readonly) float syncUpInitialItemCost;
@property (nonatomic, readonly) float syncUpMinimalBudget;
@property (nonatomic, readonly) float syncUpMinutelyBudget;
@property (nonatomic, readonly) float syncUpStructureCreateCost;
@property (nonatomic, readonly) float syncUpStructureDeleteCost;
@property (nonatomic, readonly) float syncUpStructureEditCost;
@property (nonatomic, readonly) BRCSyncOperationThrottleParams *syncUpThrottle;
@property (nonatomic, readonly) double systemLowDiskLatency;
@property (nonatomic, readonly) double systemPowerLatency;
@property (nonatomic, readonly) double systemReachabilityLatency;
@property (nonatomic, readonly) unsigned int thumbnailTransferQueueWidth;
@property (nonatomic, readonly) int transferQueueMaxConcurrentOperations;
@property (nonatomic, readonly) int transferQueueMinBatchSize;
@property (nonatomic, readonly) int transferQueueMinConcurrentOperations;
@property (nonatomic, readonly) double transferQueueTransferBudget;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *transmogrifyXPCActivity;
@property (nonatomic, readonly) unsigned int treeEnumeratorBatchSize;
@property (nonatomic, readonly) unsigned long long uploadBatchCount;
@property (nonatomic, readonly) unsigned long long uploadBatchRecordsCount;
@property (nonatomic, readonly) NSDictionary *uploadFileModifiedThrottleParams;
@property (nonatomic, readonly) long long uploadMaxFileSize;
@property (nonatomic, readonly) long long uploadMaxInPkgFileSize;
@property (nonatomic, readonly) unsigned long long uploadRetryCountForFailure;
@property (nonatomic, readonly) NSDictionary *uploadThrottleParams;
@property (nonatomic, readonly) bool useFailIfOutdatedForResets;
@property (nonatomic, readonly) bool useShareReferenceOnSideCar;
@property (nonatomic, readonly) unsigned long long utiCacheSize;
@property (nonatomic, readonly) int writerApplyBatchSize;
@property (nonatomic, readonly) double writerIOsCancelDelay;
@property (nonatomic, readonly) int writerMaxConcurrentIOs;
@property (nonatomic, readonly) unsigned long long zoneHealthReportedRecordNamesCount;
@property (nonatomic, readonly) unsigned long long zoneHealthSyncDownBatchRecordsCount;

+ (id)_userDefaultsManager;
+ (id)defaultsForMangledID:(id)arg1;
+ (id)defaultsForMetadataContainer;
+ (id)defaultsForSharedZone;
+ (id)defaultsForSideCar;
+ (void)loadCachedServerConfigFromDB:(id)arg1;
+ (int)rampNumber;
+ (void)reset;
+ (void)saveServerConfigToDB:(id)arg1;
+ (void)setServerConfigurationURL:(id)arg1 whenLoaded:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_UTISetFor:(id)arg1 startingWithExtensions:(id)arg2;
- (float)_defaultSyncUpDailyBudget;
- (float)_defaultSyncUpHourlyBudget;
- (float)_defaultSyncUpMinutelyBudget;
- (id)_extensionSetForKey:(id)arg1 startingWithExtensions:(id)arg2;
- (id)_loadObjectForKey:(id)arg1 inheritFromGlobal:(bool)arg2 validateWithBlock:(id /* block */)arg3;
- (id)_serverDefaultForKey:(id)arg1;
- (bool)_shouldRampForKey:(id)arg1;
- (unsigned short)_umaskForKey:(id)arg1;
- (double)accessTimeDeltaInHighUrgency;
- (double)accessTimeDeltaInLowUrgency;
- (double)accessTimeDeltaInMedUrgency;
- (double)accessTimeDeltaInVeryHighUrgency;
- (double)activeDownloadSizeRefreshInterval;
- (id)aggressivePCSChainActivity;
- (bool)aggressivelyPCSChain;
- (unsigned long long)aliasDeletionBatchSize;
- (bool)allowReadOnlyDBInIPC;
- (id)analyticsReportXPCActivity;
- (id)appLibraryAliasRemovalThrottleParams;
- (id)appLibraryResetThrottleParams;
- (id)appLibraryScanThrottleParams;
- (unsigned long long)applyCountToSignalFaultsLive;
- (unsigned long long)applyRetryCountForFailure;
- (id)applyThrottleParams;
- (double)appsFetchPacerDelay;
- (id)autoEvictableUTIs;
- (unsigned long long)availableQuotaComfortSize;
- (id)blacklistPCSPrep;
- (id)blacklistedPackageExtensions;
- (id)blacklistedThumbnailExtensions;
- (bool)boolForKey:(id)arg1 byDefault:(bool)arg2;
- (bool)boolForKey:(id)arg1 inheritFromGlobal:(bool)arg2 byDefault:(bool)arg3;
- (id)cacheDeletePushXPCActivity;
- (double)cacheDeleteRecomputeInterval;
- (bool)canSaveRecordsDirectlyForDeltaSync;
- (id)carryPartitions;
- (bool)changeItemIDOnUnknownItem;
- (unsigned long long)computeEvictableBatchSize;
- (id)configurationUpdateXPCActivity;
- (unsigned long long)copyShareIDsBatchSize;
- (long long)dbAutovacuumBatchSize;
- (float)dbAutovacuumRatio;
- (double)dbBatchDelay;
- (int)dbBatchSize;
- (bool)dbProfiled;
- (long long)dbReclaimableSpaceThreshold;
- (bool)dbTraced;
- (double)defaultOnDiskAccessTimeDefaultForEviction;
- (double)defaultTimeDeltaForEviction;
- (long long)delayForStuckThrottle;
- (unsigned long long)deleteShareIDBatchCount;
- (bool)destroyiWorkShares;
- (double)diskSpaceCheckInterval;
- (unsigned long long)diskSpaceRequiredToReturnToGreedyState;
- (double)documentAccessHighPriorityInterval;
- (double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4;
- (unsigned long long)downloadBatchCount;
- (unsigned long long)downloadBatchRecordsCount;
- (unsigned long long)downloadRetryCountForFailure;
- (double)downloadSizeRefreshInterval;
- (id)downloadThrottleParams;
- (unsigned long long)downloadWillRetryProgressMaxCount;
- (double)eventMetricTimeout;
- (id)excludedExtensionsWorthPreserving;
- (id)excludedFilenamesWorthPreserving;
- (id)excludedFilenamesWorthWarningAtLogout;
- (id)extensionsSkippingBundleBitFixup;
- (id)fakeEtagForFailIfOutdated;
- (unsigned long long)fieldsToMoveOutOfTrashMask;
- (float)floatForKey:(id)arg1 inheritFromGlobal:(bool)arg2 min:(float)arg3 max:(float)arg4 byDefault:(float)arg5;
- (float)floatForKey:(id)arg1 min:(float)arg2 max:(float)arg3 byDefault:(float)arg4;
- (bool)forceBatchFailureWhenReceivingAssetTokenExpiration;
- (bool)forceFailIfExistOnRevival;
- (double)forceForegroundGracePeriod;
- (BOOL)forceSyncOverride;
- (id)forcedSyncXPCActivity;
- (double)foregroundGracePeriod;
- (unsigned long long)fseventProcessBatchSize;
- (unsigned long long)fseventQueueBufferSize;
- (double)fseventsLatency;
- (double)fseventsResetBackoff;
- (double)graveyardAgeDeltaInLowUrgency;
- (double)graveyardAgeDeltaInMedUrgency;
- (unsigned int)ignoredQuarantineMask;
- (id)initAsGlobalWithServerConfiguration:(id)arg1;
- (id)initWithServerConfiguration:(id)arg1 globalUserDefaults:(id)arg2 clientZoneIdentifier:(id)arg3;
- (int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4;
- (double)intervalToWaitBeforeShowingAdditionalDescription;
- (bool)isBlacklistedFromFolderSharing;
- (id)iworkShareableExtensions;
- (unsigned int)logoutTimeout;
- (id)lostItemThrottleParams;
- (unsigned long long)lostScanDeepScanFirstThreshold;
- (double)markChildLostBackoff;
- (unsigned long long)maxBackoffToRetryUserInitiated;
- (unsigned long long)maxFolderEnumerationCount;
- (unsigned long long)maxFolderEnumerationDepth;
- (unsigned long long)maxNumberOfFilesInAFolder;
- (unsigned long long)maxPreservedXattrBlobSize;
- (unsigned int)maxRecordCountInClientZoneModifyRecordsOperation;
- (unsigned int)maxRecordCountInFetchRecordsOperation;
- (unsigned int)maxRecordCountInModifyRecordsOperation;
- (unsigned int)maxRecordCountInQuerySharedRecordsOperation;
- (unsigned int)maxRelativePathDepth;
- (unsigned int)maxSyncPathDepth;
- (unsigned long long)maxTotalFilesCount;
- (unsigned long long)maxXattrBlobSize;
- (unsigned long long)maximumAccountSizeToBeAlwaysGreedy;
- (double)maximumDocumentAgeToBeGreedy;
- (id)migrationThrottleParams;
- (long long)minAutomaticallyEvictableFilesize;
- (double)minFetchQuotaInterval;
- (long long)minFileSizeForGraveyard;
- (long long)minFileSizeForThumbnailTransfer;
- (long long)minimalSizeToShowAdditionalDescription;
- (unsigned long long)minimumDiskSpaceRequiredToBeFunctional;
- (unsigned long long)minimumDiskSpaceRequiredToBeGreedy;
- (unsigned long long)minimumDiskSpaceRequiredToDownload;
- (unsigned long long)minimumDiskSpaceRequiredToDownloadUserInitiated;
- (float)modifyRecordsCountAdditiveIncreaseFraction;
- (float)modifyRecordsCountMultiplicativeDecrease;
- (id)nonAutoEvictableExtensions;
- (id)nonAutoEvictableUTIs;
- (id)nonEvictableExtensions;
- (id)nonEvictablePathComponents;
- (unsigned long long)notifBatchSize;
- (unsigned long long)notifGatherUpTo;
- (unsigned long long)notifOverflowLimit;
- (bool)nsurlsessiondEnabled;
- (id)objectForKey:(id)arg1 inheritFromGlobal:(bool)arg2 validateWithBlock:(id /* block */)arg3;
- (double)onDiskAccessTimeDeltaInHighUrgency;
- (double)onDiskAccessTimeDeltaInLowUrgency;
- (double)onDiskAccessTimeDeltaInMedUrgency;
- (double)onDiskAccessTimeDeltaInVeryHighUrgency;
- (bool)onlyTreatCaughtUpAsConsistent;
- (id)operationFailureThrottleParams;
- (bool)optimisticallyPCSChain;
- (double)packageExtensionPlistWriteInterval;
- (id)packageExtensions;
- (bool)pcsChainShareAliases;
- (unsigned long long)pcsChainingBatchSize;
- (unsigned long long)pcsChainingMaxPathDepth;
- (id)perItemSyncUpThrottleParams;
- (double)periodicSyncTimeInterval;
- (double)powerLogReportInterval;
- (unsigned int)publishURLTimeout;
- (double)purgePacerInterval;
- (double)quotaFetchPacerDelay;
- (double)readerIOsCancelDelay;
- (double)readerLostItemBackoff;
- (unsigned long long)readerMarkChildrenLostBatchSize;
- (int)readerMaxConcurrentIOs;
- (double)readerPackageProcessingDelay;
- (int)readerScanBatchSize;
- (id)readerThrottleParams;
- (unsigned long long)recentsEnumeratorBatchSize;
- (id)recentsEnumeratorFailureThrottleParams;
- (unsigned long long)recentsEnumeratorMaxHierarchyDepth;
- (double)recentsEnumeratorPacerInterval;
- (float)relativeDiskSpaceRequiredToReturnToGreedyState;
- (id)serverConfigurationURL;
- (bool)sessionZombiesEnabled;
- (id)sharedAppLibraryResetThrottleParams;
- (unsigned long long)sharedDBSyncDownBatchRecordsCount;
- (unsigned long long)sharedDbSyncDownCoalesceNanoseconds;
- (bool)should2PhasePCSChain;
- (bool)shouldAppLibraryBeGreedy;
- (bool)shouldAutoMigrateToCloudDocs;
- (bool)shouldDisplayUploadNotification;
- (bool)shouldFetchAllChanges;
- (bool)shouldFixupBundleBitOnPackages;
- (bool)shouldFixupTargetCZMAliases;
- (bool)shouldMigrateFetchShareAliases;
- (bool)shouldPreparePCSMigration;
- (bool)shouldReportAllPerItemFailures;
- (bool)shouldSessionBeGreedy;
- (bool)skipPerItemSyncUpThrottling;
- (bool)skipServerSideThrottling;
- (bool)skipSyncUpThrottlingOnBatchFailures;
- (bool)spotlightIndexingEnabled;
- (unsigned long long)sqliteCacheSize;
- (unsigned long long)sqliteCacheSpill;
- (unsigned short)stageDirectoryUmask;
- (unsigned short)stageFSRootUmask;
- (unsigned short)stageFileUmask;
- (id)stageGCXPCActivity;
- (unsigned short)stageInPackageDirectoryUmask;
- (unsigned short)stageInPackageFileUmask;
- (unsigned long long)statementCacheMaxCountForClientTruth;
- (unsigned long long)statementCacheMaxCountForServerTruth;
- (id)stringForKey:(id)arg1 byDefault:(id)arg2;
- (id)stringForKey:(id)arg1 inheritFromGlobal:(bool)arg2 byDefault:(id)arg3;
- (id)syncClientZoneErrorThrottleParams;
- (id)syncClientZoneThrottleParams;
- (double)syncDownDelayForFailure;
- (id)syncDownThrottle;
- (id)syncThrottles;
- (float)syncUpDailyBudget;
- (float)syncUpDataCreateCost;
- (float)syncUpDataDeleteCost;
- (float)syncUpDataEditCost;
- (double)syncUpDelayForFailure;
- (float)syncUpDocumentCreateCost;
- (float)syncUpDocumentDeleteCost;
- (float)syncUpDocumentEditCost;
- (float)syncUpHourlyBudget;
- (float)syncUpInitialItemCost;
- (float)syncUpMinimalBudget;
- (float)syncUpMinutelyBudget;
- (float)syncUpStructureCreateCost;
- (float)syncUpStructureDeleteCost;
- (float)syncUpStructureEditCost;
- (id)syncUpThrottle;
- (double)systemLowDiskLatency;
- (double)systemPowerLatency;
- (double)systemReachabilityLatency;
- (unsigned int)thumbnailTransferQueueWidth;
- (int)transferQueueMaxConcurrentOperations;
- (int)transferQueueMinBatchSize;
- (int)transferQueueMinConcurrentOperations;
- (double)transferQueueTransferBudget;
- (id)transmogrifyXPCActivity;
- (unsigned int)treeEnumeratorBatchSize;
- (unsigned int)unsignedIntForKey:(id)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3 byDefault:(unsigned int)arg4;
- (unsigned long long)unsignedLongLongForKey:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3 byDefault:(unsigned long long)arg4;
- (unsigned long long)uploadBatchCount;
- (unsigned long long)uploadBatchRecordsCount;
- (id)uploadFileModifiedThrottleParams;
- (long long)uploadMaxFileSize;
- (long long)uploadMaxInPkgFileSize;
- (unsigned long long)uploadRetryCountForFailure;
- (id)uploadThrottleParams;
- (bool)useFailIfOutdatedForResets;
- (bool)useShareReferenceOnSideCar;
- (unsigned long long)utiCacheSize;
- (int)writerApplyBatchSize;
- (double)writerIOsCancelDelay;
- (int)writerMaxConcurrentIOs;
- (id)xpcActivityDictionaryForKey:(id)arg1 byDefault:(id)arg2;
- (unsigned long long)zoneHealthReportedRecordNamesCount;
- (unsigned long long)zoneHealthSyncDownBatchRecordsCount;

@end
