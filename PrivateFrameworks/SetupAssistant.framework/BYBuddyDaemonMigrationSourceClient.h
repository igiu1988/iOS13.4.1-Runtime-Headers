/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol> {
    NSXPCConnection * _connection;
    <BYDeviceMigrationDelegate> * _delegate;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BYDeviceMigrationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;

- (void).cxx_destruct;
- (void)_connectToDaemon;
- (void)cancel;
- (id)connection;
- (id)delegate;
- (void)didChangeConnectionInformation:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (id)init;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileTransferTemplate:(id)arg1;

@end
