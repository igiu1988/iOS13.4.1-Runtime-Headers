/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncPersistenceHandler : NSObject {
    NNMKBatchRequestHandler * _batchRequestHandler;
    <NNMKDeviceRegistryHolder> * _delegate;
    NNMKSyncSessionController * _sessionController;
    NNMKSyncController * _syncController;
    <NNMKSyncStateManager> * _syncStateManager;
}

@property (nonatomic, retain) NNMKBatchRequestHandler *batchRequestHandler;
@property (nonatomic) <NNMKDeviceRegistryHolder> *delegate;
@property (nonatomic, retain) NNMKSyncSessionController *sessionController;
@property (nonatomic, retain) NNMKSyncController *syncController;
@property (nonatomic) <NNMKSyncStateManager> *syncStateManager;

- (void).cxx_destruct;
- (void)_createDefaultMailbox:(id)arg1;
- (id)addAccountAuthenticationStatusRequest:(double)arg1;
- (id)addMessageContent:(id)arg1 forMessage:(id)arg2 mailbox:(id)arg3 isProtectedData:(bool)arg4;
- (id)addMessages:(id)arg1 containsNewMessages:(bool)arg2 mailbox:(id)arg3;
- (id)addMessagesToResend:(id)arg1 mailbox:(id)arg2 isProtectedData:(bool)arg3;
- (id)addMoreConversationSpecificMessages:(id)arg1 conversationId:(id)arg2 mailbox:(id)arg3 isProtectedData:(bool)arg4;
- (id)addMoreMessages:(id)arg1 mailbox:(id)arg2 isProtectedData:(bool)arg3;
- (id)addStandaloneAccountIdentity:(id)arg1;
- (id)batchRequestHandler;
- (id)currentDeviceRegistry;
- (id)delegate;
- (id)deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2;
- (id)persistAccounts:(id)arg1;
- (id)protoMessageFromMessage:(id)arg1;
- (id)sessionController;
- (void)setBatchRequestHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSessionController:(id)arg1;
- (void)setSyncController:(id)arg1;
- (void)setSyncStateManager:(id)arg1;
- (id)syncController;
- (id)syncStateManager;
- (id)updateMailboxListForAccount:(id)arg1 mailboxListChanged:(bool*)arg2;
- (id)updateMessagesFromConversation:(id)arg1 withNotifyConversationState:(bool)arg2 mailbox:(id)arg3;
- (id)updateMessagesStatus:(id)arg1 mailbox:(id)arg2;

@end
