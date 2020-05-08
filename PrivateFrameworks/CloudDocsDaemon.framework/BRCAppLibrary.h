/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAppLibrary : NSObject <BRCForegroundClient> {
    NSMutableSet * _XPCClientsUsingUbiquity;
    bool  _activated;
    _Atomic unsigned long long  _activeAliasQueries;
    _Atomic unsigned long long  _activeQueries;
    _Atomic unsigned long long  _activeRecursiveQueries;
    NSString * _appLibraryID;
    BRContainer * _containerMetadata;
    NSString * _containerMetadataEtag;
    bool  _containerMetadataNeedsSyncUp;
    BRCPQLConnection * _db;
    BRCALRowID * _dbRowID;
    NSString * _deepScanReason;
    NSNumber * _deepScanStamp;
    BRCPrivateClientZone * _defaultClientZone;
    <BRCAppLibraryDelegate> * _delegate;
    NSNumber * _fileID;
    NSMutableSet * _foregroundClients;
    NSNumber * _generationID;
    BRMangledID * _mangledID;
    long long  _maxLostStamp;
    bool  _needsSave;
    NSMutableDictionary * _pendingFileCoordinators;
    NSNumber * _rootQuotaUsage;
    BRCAccountSession * _session;
    unsigned int  _state;
    NSMutableSet * _targetAppLibraries;
    NSMutableSet * _targetSharedServerZones;
    brc_task_tracker * _tracker;
    BRCZoneRowID * _zoneRowID;
}

@property (nonatomic, readonly) NSString *absolutePath;
@property (nonatomic, readonly) NSString *appLibraryID;
@property (nonatomic, readonly) BRContainer *containerMetadata;
@property (nonatomic, retain) NSString *containerMetadataEtag;
@property (nonatomic) bool containerMetadataNeedsSyncUp;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, retain) BRCALRowID *dbRowID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *deepScanStamp;
@property (nonatomic) BRCPrivateClientZone *defaultClientZone;
@property (nonatomic, retain) <BRCAppLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BRCRelativePath *documentsPath;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, readonly) BRCFSEventsMonitor *fsEventsMonitor;
@property (nonatomic, retain) NSNumber *generationID;
@property (readonly) bool hasActiveAliasQueries;
@property (readonly) bool hasActiveQueries;
@property (readonly) bool hasActiveRecursiveQueries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCloudDocsAppLibrary;
@property (nonatomic, readonly) bool isForeground;
@property (nonatomic, readonly) bool isGreedy;
@property (nonatomic, readonly) bool isiCloudDesktopAppLibrary;
@property (nonatomic, readonly) NSString *logName;
@property (nonatomic, readonly) BRMangledID *mangledID;
@property (nonatomic) long long maxLostStamp;
@property (nonatomic) bool needsSave;
@property (nonatomic, readonly) NSString *pathRelativeToRoot;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, readonly) BRCRelativePath *root;
@property (nonatomic, retain) NSNumber *rootQuotaUsage;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) bool shouldEvictUploadedItems;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BRCSyncContext *syncContext;
@property (nonatomic, readonly) BRCSyncContext *syncContextIfExists;
@property (nonatomic, readonly) unsigned long long syncedFolderType;
@property (nonatomic, readonly) brc_task_tracker *tracker;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) BRCZoneRowID *zoneRowID;

- (void).cxx_destruct;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
- (void)_addTargetAppLibrary:(id)arg1;
- (void)_addTargetAppLibraryForAliasItem:(id)arg1;
- (void)_addTargetSharedServerZone:(id)arg1;
- (void)_addTargetSharedServerZoneForSharedItem:(id)arg1;
- (id)_aliasAppLibraryTargetSQLPrefix;
- (void)_removeAllTargetAppLibrariesAndSharedServerZones;
- (void)_removeTargetSharedServerZoneForSharedServerZone:(id)arg1;
- (void)_removedAliasItemForTargetAppLibrary:(id)arg1;
- (void)_resolveTargetAppLibrariesAndSharedClientZones;
- (id)_targetAppLibrariesEnumerator;
- (id)_targetSharedServerZonesEnumerator;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(bool)arg2;
- (void)_updateIsInCloudDocsZone;
- (id)absolutePath;
- (void)activate;
- (void)addClientUsingUbiquity:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (unsigned long long)allocateLostStampAddingBackoff:(bool)arg1;
- (id)appLibraryID;
- (void)associateWithClientZone:(id)arg1;
- (void)cancelFileCoordinators;
- (void)cancelWriteCoordinatorForItem:(id)arg1;
- (void)clearStateBits:(unsigned int)arg1;
- (void)close;
- (void)computeDocumentEvictableSizeUsageWithDB:(id)arg1 reply:(id /* block */)arg2;
- (void)computeDocumentEvictableSizeUsageWithLowTimeDelta:(double)arg1 medTimeDelta:(double)arg2 highTimeDelta:(double)arg3 db:(id)arg4 reply:(id /* block */)arg5;
- (id)containerMetadata;
- (id)containerMetadataEtag;
- (id)containerMetadataFilledWithTCCInfo;
- (bool)containerMetadataNeedsSyncUp;
- (void)continueMarkingChildrenLostInZone:(id)arg1;
- (id)coordinatorForItem:(id)arg1 forRead:(bool)arg2;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(bool)arg3 error:(id*)arg4;
- (id)db;
- (id)dbRowID;
- (id)deepScanStamp;
- (id)defaultClientZone;
- (id)delegate;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (void)didCreateDataScopedItem;
- (void)didCreateDocumentScopedItem;
- (void)didFindLostItem:(id)arg1 oldAppLibrary:(id)arg2;
- (void)didReceiveHandoffRequest;
- (void)didRemoveDocumentsFolder;
- (void)didUpdateDocumentScopePublic;
- (unsigned long long)documentCountWithDB:(id)arg1;
- (unsigned long long)documentSizeUsageWithDB:(id)arg1;
- (id)documentsFolderItemID;
- (id)documentsPath;
- (id)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)arg1 db:(id)arg2;
- (id)enumerateUserVisibleChildrenOfItemGlobalID:(id)arg1 sortOrder:(unsigned char)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 db:(id)arg5;
- (id)fetchRootItem;
- (id)fetchRootItemInDB:(id)arg1;
- (id)fileID;
- (void)freeFileCoordinationSlotsAfterDelayForRead:(bool)arg1;
- (id)fsEventsMonitor;
- (void)fsrootDidMoveToPath:(id)arg1;
- (id)generationID;
- (bool)hasActiveAliasQueries;
- (bool)hasActiveQueries;
- (bool)hasActiveRecursiveQueries;
- (bool)hasDocumentsOrDirectory;
- (bool)hasInitialFaultsEverLive;
- (bool)hasInitialFaultsLive;
- (bool)hasLocalChanges;
- (bool)hasUbiquitousDocuments;
- (bool)hasUbiquityClientsConnected;
- (unsigned long long)hash;
- (id)identifier;
- (bool)includesDataScope;
- (id)init;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 zoneRowID:(id)arg3 db:(id)arg4 plist:(id)arg5 session:(id)arg6 initialCreation:(bool)arg7 createdRootOnDisk:(bool)arg8 createdCZMMoved:(bool)arg9 rootFileID:(id)arg10;
- (bool)isCloudDocsAppLibrary;
- (bool)isCoordinationPendingForItem:(id)arg1;
- (bool)isDesktopAppLibrary;
- (bool)isDocumentsAppLibrary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAppLibrary:(id)arg1;
- (bool)isForeground;
- (bool)isGreedy;
- (bool)isStillTargetingAppLibrary:(id)arg1;
- (bool)isStillTargetingSharedServerZone:(id)arg1;
- (bool)isiCloudDesktopAppLibrary;
- (id)itemByRowID:(unsigned long long)arg1;
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemIDByRowID:(unsigned long long)arg1;
- (id)itemIDByRowID:(unsigned long long)arg1 db:(id)arg2;
- (id)itemsEnumeratorChildOf:(id)arg1 withDeadItems:(bool)arg2 rankMin:(unsigned long long)arg3 rankMax:(unsigned long long)arg4 count:(unsigned long long)arg5 db:(id)arg6;
- (id)itemsEnumeratorWithRankMin:(unsigned long long)arg1 rankMax:(unsigned long long)arg2 namePrefix:(id)arg3 withDeadItems:(bool)arg4 shouldIncludeFolders:(bool)arg5 shouldIncludeOnlyFolders:(bool)arg6 shouldIncludeDocumentsScope:(bool)arg7 shouldIncludeDataScope:(bool)arg8 shouldIncludeExternalScope:(bool)arg9 shouldIncludeTrashScope:(bool)arg10 count:(unsigned long long)arg11 db:(id)arg12;
- (id)liveAliasesEnumeratorTargetingThisAppLibrary;
- (id)logName;
- (id)mangledID;
- (bool)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3;
- (bool)markChildrenLostForItemID:(id)arg1 inZone:(id)arg2 fileID:(id)arg3 startingFromRow:(unsigned long long)arg4 hasMoreWork:(bool*)arg5;
- (long long)maxLostStamp;
- (bool)needsSave;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(id /* block */)arg2;
- (id)pathRelativeToRoot;
- (id)plist;
- (void)recomputeShouldEvictState;
- (void)recreateDocumentsFolderIfNeeded;
- (void)registerQueryWithAliases:(bool)arg1 isRecursive:(bool)arg2;
- (void)removeClientUsingUbiquity:(id)arg1;
- (void)removeForegroundClient:(id)arg1;
- (id)root;
- (id)rootItemGlobalID;
- (id)rootItemID;
- (id)rootQuotaUsage;
- (void)scheduleContainerMetadataSyncUp;
- (void)scheduleDeepScanWithReason:(id)arg1;
- (id)session;
- (void)setContainerMetadataEtag:(id)arg1;
- (void)setContainerMetadataNeedsSyncUp:(bool)arg1;
- (void)setDbRowID:(id)arg1;
- (void)setDeepScanStamp:(id)arg1;
- (void)setDefaultClientZone:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setIsOverQuota:(bool)arg1;
- (void)setMaxLostStamp:(long long)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setRootFileID:(unsigned long long)arg1;
- (void)setRootQuotaUsage:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)setStateBits:(unsigned int)arg1;
- (void)setZoneRowID:(id)arg1;
- (bool)shouldEvictUploadedItems;
- (bool)shouldSaveContainerMetadataServerside;
- (unsigned int)state;
- (bool)supportsSpotlightIndexing;
- (id)syncContext;
- (id)syncContextIfExists;
- (unsigned long long)syncedFolderType;
- (long long)throttleHashWithItemID:(id)arg1;
- (id)tracker;
- (void)unregisterQueryWithAliases:(bool)arg1 isRecursive:(bool)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (id)url;
- (bool)wasMovedToCloudDocs;
- (void)zoneDidChangeMovedToCloudDocsState;
- (id)zoneRowID;

@end
