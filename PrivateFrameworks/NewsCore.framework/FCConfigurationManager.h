/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCConfigurationManager : NSObject <FCCoreConfigurationManager, FCFeldsparIDProviderObserving, FCMagazinesConfigurationManager, FCNewsAppConfigurationManager> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _appConfigFetchQueue;
    NSHashTable * _appConfigObservers;
    bool  _attemptedAppConfigFetch;
    NSDictionary * _cachedWidgetConfigurationDict;
    FCContextConfiguration * _contextConfiguration;
    NSHashTable * _coreConfigObservers;
    FCNewsAppConfig * _currentAppConfiguration;
    NSData * _currentMagazinesConfiguration;
    <FCFeldsparIDProvider> * _feldsparIDProvider;
    FCKeyValueStore * _localStore;
    FCAsyncSerialQueue * _remoteConfigManagerSerialQueue;
    RCConfigurationManager * _remoteConfigurationManager;
    bool  _runningUnitTests;
    NSArray * _segmentSetIDs;
    bool  _shouldIgnoreCache;
    NSArray * _treatmentIDs;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *appConfigFetchQueue;
@property (nonatomic, retain) NSHashTable *appConfigObservers;
@property (nonatomic, readonly) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic) bool attemptedAppConfigFetch;
@property (nonatomic, retain) NSDictionary *cachedWidgetConfigurationDict;
@property (nonatomic, readonly) <FCCoreConfiguration> *configuration;
@property (nonatomic, readonly) FCContextConfiguration *contextConfiguration;
@property (nonatomic, retain) NSHashTable *coreConfigObservers;
@property (nonatomic, copy) FCNewsAppConfig *currentAppConfiguration;
@property (nonatomic, copy) NSData *currentMagazinesConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *feldsparID;
@property (nonatomic, readonly) <FCFeldsparIDProvider> *feldsparIDProvider;
@property (nonatomic, readonly) <FCNewsAppConfiguration> *fetchedAppConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCNewsAppConfiguration><FCJSONEncodableObjectProviding> *jsonEncodableAppConfiguration;
@property (nonatomic, retain) FCKeyValueStore *localStore;
@property (nonatomic, readonly) NSData *magazinesConfigurationData;
@property (nonatomic, readonly) <FCNewsAppConfiguration> *possiblyUnfetchedAppConfiguration;
@property (nonatomic, readonly) FCAsyncSerialQueue *remoteConfigManagerSerialQueue;
@property (nonatomic, readonly) RCConfigurationManager *remoteConfigurationManager;
@property (getter=isRunningUnitTests, nonatomic) bool runningUnitTests;
@property (nonatomic, copy) NSArray *segmentSetIDs;
@property (nonatomic) bool shouldIgnoreCache;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *treatmentIDs;

+ (id)internalOverrideAdditionalSegmentSetIDs;
+ (id)internalOverrideSegmentSetIDs;
+ (id)overrideAppConfigID;

- (void).cxx_destruct;
- (id)_changeTagsInRecords:(id)arg1;
- (id)_changeTagsInWidgetConfigurationDict:(id)arg1;
- (bool)_checkIfShouldIgnoreCache;
- (void)_configurationDidChangeSignificantConfigChange:(bool)arg1;
- (id)_configurationSettingsWithRequestInfos:(id)arg1 feldsparID:(id)arg2 storefrontID:(id)arg3 contextConfiguration:(id)arg4 useBackgroundRefreshRate:(bool)arg5;
- (unsigned long long)_configurationSourceForSourceName:(id)arg1;
- (void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 forceRefresh:(bool)arg2 completion:(id /* block */)arg3;
- (void)_fetchRemoteAppWidgetConfigurationIfNeededUseBackgroundRefreshRate:(bool)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchRemoteMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadConfigurationFromStore:(id)arg1;
- (id)_mergeCachedDataWithWidgetConfigurationData:(id)arg1;
- (id)_mergeRecords:(id)arg1 withCachedRecords:(id)arg2;
- (id)_permanentURLForRequestKey:(id)arg1 storefrontID:(id)arg2;
- (id)_recordIDForRequestKey:(id)arg1 storefrontID:(id)arg2;
- (void)_refreshAppConfigurationWithConfigurationSettings:(id)arg1 force:(bool)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)_remoteConfigurationEnvironmentForContextIdentifier:(long long)arg1;
- (id)_requestInfoForRequestKey:(id)arg1 storefrontID:(id)arg2 additionalChangeTags:(id)arg3;
- (id)_responseKeyForRequestKey:(id)arg1;
- (id)_storefrontID;
- (id)accessQueue;
- (void)addAppConfigObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)appConfigFetchQueue;
- (id)appConfigObservers;
- (id)appConfiguration;
- (bool)attemptedAppConfigFetch;
- (id)cachedWidgetConfigurationDict;
- (id)configuration;
- (id)contextConfiguration;
- (id)coreConfigObservers;
- (id)currentAppConfiguration;
- (id)currentMagazinesConfiguration;
- (id)feldsparID;
- (id)feldsparIDProvider;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAppWidgetConfigurationUseBackgroundRefreshRate:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(id /* block */)arg1;
- (id)fetchedAppConfiguration;
- (id)init;
- (id)initForTesting;
- (id)initWithContextConfiguration:(id)arg1 contentHostDirectoryFileURL:(id)arg2 feldsparIDProvider:(id)arg3;
- (bool)isRunningUnitTests;
- (id)jsonEncodableAppConfiguration;
- (id)localStore;
- (id)magazinesConfigurationData;
- (id)possiblyUnfetchedAppConfiguration;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)arg1 refreshCompletion:(id /* block */)arg2;
- (id)remoteConfigManagerSerialQueue;
- (id)remoteConfigurationManager;
- (void)removeAppConfigObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)segmentSetIDs;
- (void)setAppConfigObservers:(id)arg1;
- (void)setAttemptedAppConfigFetch:(bool)arg1;
- (void)setCachedWidgetConfigurationDict:(id)arg1;
- (void)setCoreConfigObservers:(id)arg1;
- (void)setCurrentAppConfiguration:(id)arg1;
- (void)setCurrentMagazinesConfiguration:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)setRunningUnitTests:(bool)arg1;
- (void)setSegmentSetIDs:(id)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (void)setTreatmentIDs:(id)arg1;
- (bool)shouldIgnoreCache;
- (id)treatmentIDs;

@end
