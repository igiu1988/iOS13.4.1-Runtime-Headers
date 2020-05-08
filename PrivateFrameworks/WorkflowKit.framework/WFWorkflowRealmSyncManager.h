/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFWorkflowRealmSyncManager : NSObject <WFApplicationStateObserver, WFDatabaseResultObserver> {
    long long  _accountStatus;
    NSLock * _completionHandlerLock;
    NSMutableArray * _completionHandlers;
    WFDatabase * _database;
    WFDatabaseResult * _databaseResultForObservation;
    unsigned long long  _pauseCount;
    bool  _pendingResume;
    unsigned long long  _start;
    bool  _syncPending;
    NSObject<OS_dispatch_queue> * _syncSessionQueue;
    NSObject<OS_dispatch_source> * _timer;
    NSLock * _timerLock;
    <WFUserInterface> * _userInterface;
}

@property (nonatomic, readonly) long long accountStatus;
@property (nonatomic, readonly) NSLock *completionHandlerLock;
@property (nonatomic, readonly) NSMutableArray *completionHandlers;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, retain) WFDatabaseResult *databaseResultForObservation;
@property (nonatomic) unsigned long long pauseCount;
@property (nonatomic) bool pendingResume;
@property (nonatomic) unsigned long long start;
@property (nonatomic, readonly) bool syncPending;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncSessionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) NSLock *timerLock;
@property (nonatomic, retain) <WFUserInterface> *userInterface;

+ (id)defaultManager;
+ (void)setDefaultManager:(id)arg1;

- (void).cxx_destruct;
- (long long)accountStatus;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)completeSyncWithSuccess:(bool)arg1 changes:(bool)arg2 error:(id)arg3;
- (id)completionHandlerLock;
- (id)completionHandlers;
- (id)database;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)databaseResultForObservation;
- (void)dealloc;
- (void)handleAccountChangedNotification:(id)arg1;
- (void)handleUserDeletedZoneErrorIfNeededWithSuccess:(bool)arg1 changes:(bool)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithDatabase:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseAutomaticUpdates;
- (unsigned long long)pauseCount;
- (bool)pendingResume;
- (void)pushCompletionHandler:(id /* block */)arg1;
- (void)resumeAutomaticUpdates;
- (void)setDatabaseResultForObservation:(id)arg1;
- (void)setPauseCount:(unsigned long long)arg1;
- (void)setPendingResume:(bool)arg1;
- (void)setStart:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (void)setUserInterface:(id)arg1;
- (unsigned long long)start;
- (void)startAutomaticUpdates;
- (void)startObservingUserDefaults;
- (void)startSync;
- (void)stopAutomaticUpdates;
- (void)stopObservingUserDefaults;
- (void)subscribeToCloudKitAccountStatusNotifications;
- (bool)syncPending;
- (id)syncSessionQueue;
- (id)timer;
- (id)timerLock;
- (void)triggerSync:(bool)arg1 completion:(id /* block */)arg2;
- (void)triggerSync:(bool)arg1 onlyIfPending:(bool)arg2 completion:(id /* block */)arg3;
- (void)unsubscribeFromCloudKitAccountStatusNotifications;
- (void)updateAccountStatus;
- (id)userDefaultsKeysToObserve;
- (id)userInterface;

@end
