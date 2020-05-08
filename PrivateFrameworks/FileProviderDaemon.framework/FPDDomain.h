/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDDomain : NSObject <FPDDomainIndexerDelegate, FPDFileCoordinationProviderDelegate> {
    bool  _cantStartup;
    NSMutableDictionary * _coordinatorMetadataPerURL;
    <FPDDomainBackend> * _deactivatedBackend;
    <FPDDomainBackend> * _defaultBackend;
    bool  _ejectable;
    <FPDDomainBackend> * _extensionBackend;
    NSArray * _extensionStorageURLs;
    NSDictionary * _fileCoordinationProviderByURL;
    NSMutableDictionary * _filePresenters;
    bool  _forceNoFPFSForTesting;
    Class  _fpfsClass;
    NSData * _fpfsRootBookmarkData;
    NSString * _identifier;
    <FPDDomainIndexChangeDelegate> * _indexChangeDelegate;
    FPDDomainIndexer * _indexer;
    bool  _indexerStarted;
    bool  _invalidated;
    bool  _isObservingRoot;
    bool  _isUsingFPFS;
    NSObject<OS_os_log> * _log;
    NSFileProviderDomain * _nsDomain;
    NSFileProviderDomain * _nsDomainOrNilForDefault;
    NSURL * _previouslyAccessedSecurityScopedURL;
    NSOperationQueue * _providedItemsOperationQueue;
    FPDProvider * _provider;
    NSString * _purposeIdentifier;
    FPPacer * _rootCreationPacer;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <FPDExtensionSessionProtocol> * _session;
    NSNumber * _shouldDropIndexOrNil;
    bool  _started;
    NSObject<OS_dispatch_source> * _timer;
    bool  _unableToStartup;
    bool  _userEnabled;
}

@property (nonatomic, readonly) <FPDDomainBackend> *deactivatedBackend;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <FPDDomainBackend> *defaultBackend;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FPDDomain *domainIfNotDisabledByFPFSSettings;
@property (nonatomic) bool ejectable;
@property (nonatomic, readonly) <FPDDomainBackend> *extensionBackend;
@property (nonatomic, readonly) NSArray *extensionStorageURLs;
@property (nonatomic, retain) NSMutableDictionary *filePresenters;
@property (nonatomic) bool forceNoFPFSForTesting;
@property (nonatomic, readonly) NSString *fp_prettyDescription;
@property (nonatomic, retain) NSData *fpfsRootBookmarkData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) <FPDDomainIndexChangeDelegate> *indexChangeDelegate;
@property (nonatomic, retain) FPDDomainIndexer *indexer;
@property (nonatomic, readonly) bool isConnectedToAppExtension;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSFileProviderDomain *nsDomain;
@property (nonatomic, retain) NSFileProviderDomain *nsDomainOrNilForDefault;
@property (nonatomic, readonly) FPDProvider *provider;
@property (nonatomic, readonly) FPProviderDomain *providerDomain;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *purposeIdentifier;
@property (nonatomic, readonly) NSArray *rootURLs;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) <FPDExtensionSessionProtocol> *session;
@property (nonatomic, retain) NSNumber *shouldDropIndexOrNil;
@property (nonatomic) bool started;
@property (readonly) Class superclass;
@property (nonatomic) bool unableToStartup;
@property (nonatomic) bool userEnabled;

- (void).cxx_destruct;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (id)_providedItemsOperationQueue;
- (void)_registerFileCoordinatorWithCompletion:(id /* block */)arg1;
- (id)_removeProgressForProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (void)_setupRecoveryTimer;
- (bool)_shouldDisconnect;
- (bool)_shouldDisconnectDueToLowDiskSpace;
- (id)_siblingDelegateForURL:(id)arg1;
- (void)_startObservingRootAndResumeIndexerWithCompletion:(id /* block */)arg1;
- (void)_startWithCompletion:(id /* block */)arg1;
- (void)_unregisterFromFileCoordinator;
- (bool)_wantsPresenterNotifications;
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;
- (void)cancelPendingCoordinations;
- (void)cleanupDomainKeepingArchiveFolder:(bool)arg1;
- (void)createRootAndObserveIfNeededWithCompletion:(id /* block */)arg1;
- (bool)createRootByImportingDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (void)createRootURLWithCompletion:(id /* block */)arg1;
- (void)daemonSideItemChange:(id)arg1 changedFields:(unsigned long long)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)deactivatedBackend;
- (id)defaultBackend;
- (id)description;
- (void)didChangeItemID:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)domainIfNotDisabledByFPFSSettings;
- (void)downloadItemWithItemID:(id)arg1 request:(id)arg2 progress:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dumpInternalStateTo:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(bool)arg2;
- (bool)ejectable;
- (void)enumerateWithSettings:(id)arg1 lifetimeExtender:(id)arg2 observer:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)extensionBackend;
- (void)extensionIndexer:(id)arg1 didChangeNeedsAuthentification:(bool)arg2;
- (void)extensionIndexer:(id)arg1 didIndexOneBatchWithError:(id)arg2 updatedItems:(id)arg3 deletedIDs:(id)arg4 anchor:(id)arg5 anchorPersisted:(id /* block */)arg6;
- (id)extensionStorageURLs;
- (void)fetchEnumeratorWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 lifetimeExtender:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)filePresenters;
- (void)finishSetup;
- (void)forceFSIngestionForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceIngestionAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)forceNoFPFSForTesting;
- (id)fp_prettyDescription;
- (id)fpfsRootBookmarkData;
- (id)identifier;
- (id)indexChangeDelegate;
- (id)indexer;
- (id)initWithIdentifier:(id)arg1 nsDomain:(id)arg2 extensionStorageURLs:(id)arg3 purposeIdentifier:(id)arg4 fpfsClass:(Class)arg5 provider:(id)arg6;
- (void)invalidate;
- (void)invalidateSession;
- (bool)isConnectedToAppExtension;
- (bool)isDefaultDomain;
- (bool)isHiddenDefaultDomain;
- (bool)isProviderForURL:(id)arg1;
- (bool)isUsingFPFS;
- (id)log;
- (id)materializedURLForItemID:(id)arg1;
- (long long)nonEvictableSpace;
- (id)nsDomain;
- (id)nsDomainOrNilForDefault;
- (id)provider;
- (id)providerDomain;
- (id)providerDomainID;
- (id)purposeIdentifier;
- (id)rootURLs;
- (id)serialQueue;
- (id)session;
- (void)setDefaultBackend:(id)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setFilePresenters:(id)arg1;
- (void)setForceNoFPFSForTesting:(bool)arg1;
- (void)setFpfsRootBookmarkData:(id)arg1;
- (void)setIndexChangeDelegate:(id)arg1;
- (void)setIndexer:(id)arg1;
- (void)setNsDomainOrNilForDefault:(id)arg1;
- (void)setShouldDropIndexOrNil:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setUnableToStartup:(bool)arg1;
- (void)setUserEnabled:(bool)arg1;
- (id)shouldDropIndexOrNil;
- (void)startInOrderToDropIndex;
- (void)startWithCompletion:(id /* block */)arg1;
- (bool)started;
- (bool)supportsFPFS;
- (bool)unableToStartup;
- (bool)userEnabled;
- (void)valuesForAttributes:(id)arg1 forURL:(id)arg2 request:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)workingSetDidChangeWithCompletionHandler:(id /* block */)arg1;

@end
