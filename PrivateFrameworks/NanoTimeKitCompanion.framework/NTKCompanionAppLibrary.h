/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionAppLibrary : NSObject <ACXDeviceConnectionDelegate, LSApplicationWorkspaceObserverProtocol, NTKCompanionAppDelegate, NTKSystemAppStateCache> {
    NSArray * _allApps;
    NSObject<OS_dispatch_queue> * _appProcessingQueue;
    NSHashTable * _changeObservers;
    CLKDevice * _device;
    NSArray * _firstPartyApps;
    NSSet * _installedSystemApplicationIdentifiers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _observerCallbackQueue;
    NSMutableArray * _prewarmCallbacks;
    struct os_unfair_lock_s { unsigned int x1; } * _prewarmLock;
    NSArray * _thirdPartyApps;
    NSObject<OS_dispatch_queue> * _updateProcessingQueue;
    NSArray * _watchSystemApps;
}

@property (nonatomic, retain) NSArray *allApps;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *appProcessingQueue;
@property (nonatomic, retain) NSHashTable *changeObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic, retain) NSArray *firstPartyApps;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *installedSystemApplicationIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerCallbackQueue;
@property (nonatomic, retain) NSMutableArray *prewarmCallbacks;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; }*prewarmLock;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *thirdPartyApps;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateProcessingQueue;
@property (nonatomic, retain) NSArray *watchSystemApps;

+ (id)sharedAppLibrary;

- (void).cxx_destruct;
- (void)_activeDeviceChanged;
- (void)_load;
- (void)_loadApps;
- (void)_loadWatchApps;
- (void)_notifyAppAdded:(id)arg1;
- (void)_notifyAppIconUpdated:(id)arg1;
- (void)_notifyAppRemoved:(id)arg1;
- (void)_notifyAppUpdated:(id)arg1;
- (void)_queue_loadApps;
- (void)addObserver:(id)arg1;
- (id)allApps;
- (id)appProcessingQueue;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (id)changeObservers;
- (void)companionAppUpdatedIcon:(id)arg1;
- (void)companionAppWasUpdated:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)firstPartyApps;
- (id)init;
- (id)installedSystemApplicationIdentifiers;
- (id)internalQueue;
- (bool)isRemovedSystemApp:(id)arg1;
- (bool)isRestrictedSystemApp:(id)arg1;
- (id)observerCallbackQueue;
- (id)prewarmCallbacks;
- (void)prewarmCompanionDaemonWithCompletion:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; }*)prewarmLock;
- (void)removeObserver:(id)arg1;
- (void)setAllApps:(id)arg1;
- (void)setAppProcessingQueue:(id)arg1;
- (void)setChangeObservers:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setFirstPartyApps:(id)arg1;
- (void)setInstalledSystemApplicationIdentifiers:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setObserverCallbackQueue:(id)arg1;
- (void)setPrewarmCallbacks:(id)arg1;
- (void)setThirdPartyApps:(id)arg1;
- (void)setUpdateProcessingQueue:(id)arg1;
- (void)setWatchSystemApps:(id)arg1;
- (id)thirdPartyApps;
- (id)updateProcessingQueue;
- (id)watchSystemApps;

@end