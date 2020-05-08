/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHTemplateStore : NSObject <ACHTemplateEntitySyncedTemplatesObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    unsigned char  _device;
    ACHTemplateEntityWrapper * _entityWrapper;
    bool  _initialFetchComplete;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
    NSMutableSet * _templates;
    NSMutableDictionary * _templatesByKey;
    NSMutableDictionary * _templatesByUniqueName;
    NSDictionary * _templatesReadyToAdd;
}

@property (nonatomic, readonly) NSArray *allTemplates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char device;
@property (nonatomic, retain) ACHTemplateEntityWrapper *entityWrapper;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialFetchComplete;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic, retain) NSMutableSet *templates;
@property (nonatomic, retain) NSMutableDictionary *templatesByKey;
@property (nonatomic, retain) NSMutableDictionary *templatesByUniqueName;
@property (nonatomic, retain) NSDictionary *templatesReadyToAdd;

- (void).cxx_destruct;
- (void)_addTemplatesToLocalCollections:(id)arg1;
- (bool)_isValidTemplate:(id)arg1;
- (void)_notifyObserversOfInitialFetchCompletion;
- (void)_notifyObserversOfNewTemplates:(id)arg1;
- (void)_notifyObserversOfRemovedTemplates:(id)arg1;
- (bool)_queue_addTemplates:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 triggerSync:(bool)arg4 error:(id*)arg5;
- (bool)_queue_addTemplatesToDatabase:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id*)arg4;
- (id)_queue_templatesFilteredForDuplicates:(id)arg1;
- (bool)_removeTemplatesFromDatabase:(id)arg1 error:(id*)arg2;
- (void)_removeTemplatesFromLocalCollections:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addTemplates:(id)arg1;
- (bool)addTemplates:(id)arg1 databaseContext:(id)arg2 error:(id*)arg3;
- (id)allTemplates;
- (id)availableTemplatesForDateComponents:(id)arg1 countryCode:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (unsigned char)device;
- (id)entityWrapper;
- (id)initWithProfile:(id)arg1 entityWrapper:(id)arg2 device:(unsigned char)arg3;
- (bool)initialFetchComplete;
- (void)loadAllTemplatesFromDatabaseIfNecessary;
- (id)notificationQueue;
- (id)observers;
- (id)profile;
- (bool)removeAllTemplates:(id*)arg1;
- (void)removeObserver:(id)arg1;
- (bool)removeTemplates:(id)arg1 error:(id*)arg2;
- (void)setDevice:(unsigned char)arg1;
- (void)setEntityWrapper:(id)arg1;
- (void)setInitialFetchComplete:(bool)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSynchronizationQueue:(id)arg1;
- (void)setTemplates:(id)arg1;
- (void)setTemplatesByKey:(id)arg1;
- (void)setTemplatesByUniqueName:(id)arg1;
- (void)setTemplatesReadyToAdd:(id)arg1;
- (id)synchronizationQueue;
- (void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2;
- (id)templateForTemplateKey:(unsigned long long)arg1;
- (id)templateForUniqueName:(id)arg1;
- (id)templates;
- (id)templatesByKey;
- (id)templatesByUniqueName;
- (id)templatesReadyToAdd;

@end
