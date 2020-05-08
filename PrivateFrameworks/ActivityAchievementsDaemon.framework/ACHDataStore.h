/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHDataStore : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    NSString * _databaseIdentifier;
    HDKeyValueDomain * _defaultsDomain;
    bool  _hasCompletedFirstPopulateFromDatabase;
    NSError * _injectedError;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _needsPopulationWhenProtectedDataAvailable;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSHashTable * _observers;
    bool  _populatesValuesFromDatabase;
    id /* block */  _populationCompleteBlock;
    HDProfile * _profile;
    NSHashTable * _propertyProviders;
}

@property (nonatomic, copy) NSString *databaseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HDKeyValueDomain *defaultsDomain;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCompletedFirstPopulateFromDatabase;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *injectedError;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) bool needsPopulationWhenProtectedDataAvailable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) bool populatesValuesFromDatabase;
@property (nonatomic, copy) id /* block */ populationCompleteBlock;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSHashTable *propertyProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_forceDatabasePopulate;
- (void)_injectError:(id)arg1;
- (id)_queue_allPropertyProviderKeys;
- (id)_queue_dictionaryRepresentationOfAllProviderProperties;
- (bool)_queue_populateAllPropertiesFromDatabase;
- (bool)_queue_populateFromDatabaseForProviders:(id)arg1 error:(id*)arg2;
- (bool)_queue_setDatabaseIdentifier:(id)arg1 error:(id*)arg2;
- (void)_syncEntityDidReceiveValues:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addPropertyProvider:(id)arg1;
- (bool)clearAllPropertiesWithError:(id*)arg1 databaseContext:(id)arg2;
- (void)commitAllPropertiesToDatabaseWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)databaseIdentifier;
- (id)defaultsDomain;
- (bool)hasCompletedFirstPopulateFromDatabase;
- (id)initWithProfile:(id)arg1;
- (id)injectedError;
- (id)internalQueue;
- (bool)needsPopulationWhenProtectedDataAvailable;
- (id)notificationQueue;
- (id)observers;
- (bool)populatesValuesFromDatabase;
- (id /* block */)populationCompleteBlock;
- (id)profile;
- (id)propertyProviders;
- (void)removeObserver:(id)arg1;
- (void)setDatabaseIdentifier:(id)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setHasCompletedFirstPopulateFromDatabase:(bool)arg1;
- (void)setInjectedError:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setNeedsPopulationWhenProtectedDataAvailable:(bool)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPopulatesValuesFromDatabase:(bool)arg1;
- (void)setPopulationCompleteBlock:(id /* block */)arg1;
- (void)setProfile:(id)arg1;
- (void)setPropertyProviders:(id)arg1;

@end
