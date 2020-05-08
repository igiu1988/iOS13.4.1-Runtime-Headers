/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate> {
    WBSHistoryDatabaseAccessBroker * _databaseAccessBroker;
    NSObject<OS_dispatch_queue> * _historyServiceQueue;
    NSDate * _initDate;
    NSXPCListener * _listener;
    WBSHistoryURLCompletionDataStore * _urlCompletionDataStore;
}

@property (nonatomic, readonly) WBSHistoryDatabaseAccessBroker *databaseAccessBroker;
@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBSHistoryURLCompletionDataStore *urlCompletionDataStore;

- (void).cxx_destruct;
- (bool)_connectionIsEntitledToUseUserDatabase:(id)arg1;
- (void)_resume;
- (void)_shutdown;
- (id)databaseAccessBroker;
- (id)databaseURL;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)urlCompletionDataStore;

@end
