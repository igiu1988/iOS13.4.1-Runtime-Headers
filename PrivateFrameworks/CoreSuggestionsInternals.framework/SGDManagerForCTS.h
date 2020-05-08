/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDManagerForCTS : NSObject {
    NSObject<OS_dispatch_source> * _adjustActivitySource;
    SGServiceContext * _context;
    struct SGDSuggestManagerCTSCriteriaState { 
        bool hasItemsHighPriority; 
        bool hasItemsLowPriority; 
    }  _ctsCriteriaState;
    NSString * _customResponsesCKPTFullPath;
    NSDate * _customResponsesLatestProcessedDate;
    NSString * _customResponsesModelConfigPath;
    NSString * _customResponsesModelFilePath;
    SGCustomResponsesParameters * _customResponsesParameters;
    int  _customResponsesStep;
    NSMutableDictionary * _embedderExistsForLanguage;
    NSFileManager * _fManager;
    NSObject<OS_dispatch_queue> * _frontfillQueue;
    NSObject<OS_dispatch_semaphore> * _frontfillSemaphoreForTesting;
    NSObject<OS_dispatch_source> * _frontfillSource;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _geocodeLock;
    NSObject<OS_dispatch_queue> * _harvestQueue;
    SGSqlEntityStore * _harvestStore;
    double  _lastFrontfillFinishTime;
    NSCache * _perLanguageEmbedderCache;
    PETEventTracker2 * _pet2tracker;
    NSString * _preferredLanguage;
    <SGXPCActivityManagerProtocol> * _xpcActivityManager;
}

+ (void)_logCallInteractions:(id)arg1;
+ (void)clearCustomResponsesCheckpointForTesting;
+ (id)defaultInstance;
+ (id)sharedSingletonInstance;

- (void).cxx_destruct;
- (bool)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (void)_doAdjustCriteriaForCTS;
- (void)_doFrontfillHarvestOnFrontfillQueue;
- (void)_performCollectWeeklyStats:(id)arg1;
- (void)_performCustomResponseHarvest:(id)arg1;
- (void)_performHarvestActivity:(id)arg1 callback:(id /* block */)arg2;
- (void)_performIdentityAnalysisActivity:(id)arg1;
- (void)_performMobileAssetMetadataDownloadActivity:(id)arg1;
- (void)_performProcessPendingGeocodesActivity:(id)arg1;
- (void)_performSendRTCActivity;
- (void)_performTrimActivity:(id)arg1;
- (void)_performVacuumActivity;
- (void)_registerForCTSHarvestActivity;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_registerForCTSTrimActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_registerForCollectWeeklyStats;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_registerForCustomResponseHarvest;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_registerProcessPendingGeocodesActivity;
- (struct SGMEventICSSourceType_ { unsigned long long x1; })accountTypeFor:(id)arg1;
- (id)accountTypeForBundle:(id)arg1;
- (void)adjustCriteriaForCTS;
- (id)cachedEmbedderForLanguage:(id)arg1;
- (id)customResponseParametersForTrial:(id)arg1;
- (void)dealloc;
- (bool)deferAfterFilterWithStore:(id)arg1 forActivity:(id)arg2 andCustomResponseParameters:(id)arg3;
- (bool)deferAfterWriteCheckpointForActivity:(id)arg1;
- (void)drainDefaultQueueCompletely;
- (bool)drainHarvestQueue:(id)arg1 highPriorityOnly:(bool)arg2 continuingWhile:(id /* block */)arg3;
- (id)getCustomResponsesLatestProcessedDateForTesting;
- (int)getCustomResponsesStepForTesting;
- (bool)hasAlreadyHarvestedSearchableItem:(id)arg1;
- (struct SGMEventICSSourceType_ { unsigned long long x1; })icsTypeForBundle:(id)arg1;
- (id)initWithHarvestStore:(id)arg1 xpcActivityManager:(id)arg2;
- (bool)isSupportedLanguage:(id)arg1;
- (void)loadCustomResponsesCheckpoint;
- (void)performContactDetailCacheRebuildActivity:(id)arg1;
- (void)performContactDetailCacheRebuildActivity:(id)arg1 usingContacts:(id)arg2;
- (bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3;
- (bool)processSearchableItemForTesting:(id)arg1;
- (void)registerForCTS;
- (void)resetLastFrontfillFinishTimeForTesting;
- (void)resumeFrontfillForTesting;
- (void)setCustomResponsesLatestProcessedDateForTesting:(id)arg1;
- (void)setCustomResponsesStepForTesting:(int)arg1;
- (void)setPet2TrackerForTesting:(id)arg1;
- (void)suspendFrontfillForTesting;
- (void)triggerFrontfillHarvest;
- (void)waitForXpcActivityQueue;
- (void)waitUntilFrontfillFinishedForTesting;

@end
