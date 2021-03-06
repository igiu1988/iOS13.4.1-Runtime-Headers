/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WAXPCConnection : NSObject {
    NSXPCConnection * _connection;
    <WAXPCConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _token;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) <WAXPCConnectionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (void)clearMessageStoreAndReply:(id /* block */)arg1;
- (void)clientConfigChangeDelegateSetForGroupType:(long long)arg1 andReply:(id /* block */)arg2;
- (id)connection;
- (id)delegate;
- (void)establishConnectionWithToken:(id)arg1 andReply:(id /* block */)arg2;
- (void)getMessageForUUID:(id)arg1 andReply:(id /* block */)arg2;
- (void)getMessagesModelForGroupType:(long long)arg1 andReply:(id /* block */)arg2;
- (void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3;
- (void)ingestMessage:(id)arg1 andReply:(id /* block */)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (void)killDaemonAndReply:(id /* block */)arg1;
- (id)queue;
- (void)registerForQueryableMessageWithidentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3;
- (void)registerMessageGroup:(long long)arg1 andReply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setToken:(id)arg1;
- (void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(id /* block */)arg3;
- (id)token;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(id /* block */)arg2;
- (void)trigger11axPerfStudyAndReply:(id /* block */)arg1;
- (void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(id /* block */)arg3;
- (void)triggerQueryForNWActivity:(long long)arg1 andReply:(id /* block */)arg2;

@end
