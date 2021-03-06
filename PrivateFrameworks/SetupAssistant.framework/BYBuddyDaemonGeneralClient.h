/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYBuddyDaemonGeneralClient : NSObject {
    NSXPCConnection * _connection;
    NSLock * _connectionLock;
}

- (void).cxx_destruct;
- (id)_daemonConnection;
- (id)backupMetadata;
- (void)cancelDataMigratorDeferredExit;
- (void)deferDataMigratorExit;
- (void)ensureShortLivedTokenUpgrade;
- (void)ensureSilentLoginUpgrade;
- (id)init;
- (void)observeFinishSetupTriggers;
- (void)performSilentICDPUpgrade;
- (bool)setupAssistantNeedsToRun;

@end
