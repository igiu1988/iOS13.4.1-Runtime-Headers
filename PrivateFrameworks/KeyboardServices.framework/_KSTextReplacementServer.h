/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementServer : NSObject <APSConnectionDelegate, NSXPCListenerDelegate, _KSTextReplacementCancellation, _KSTextReplacementStoreProtocol, _KSTextReplacementSyncProtocol> {
    _KSTRClient * _daemonClient;
    NSString * _directoryPath;
    NSXPCListener * _listener;
    APSConnection * _pushConnection;
    _KSTextReplacementManager * _textReplacementManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (readonly) Class superclass;
@property (nonatomic, retain) _KSTextReplacementManager *textReplacementManager;

+ (bool)isBlackListed:(unsigned int)arg1;
+ (id)textReplacementServer;

- (void).cxx_destruct;
- (bool)_cancelPendingUpdateForClient:(id)arg1;
- (void)_performCleanup;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)buddySetupDidFinish;
- (void)cancelPendingUpdates;
- (void)cleanup;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)directoryPath;
- (id)init;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (bool)isSetupAssistantRunning;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pushConnection;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (void)reachabilityDidChange:(id)arg1;
- (void)registerForPushNotifications;
- (void)removeAllEntries;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)runMigration;
- (void)scheduleSyncTask;
- (void)setDirectoryPath:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setTextReplacementManager:(id)arg1;
- (void)shutdown;
- (void)start;
- (id)textReplacementEntries;
- (id)textReplacementEntriesForClient:(id)arg1;
- (id)textReplacementManager;

@end
