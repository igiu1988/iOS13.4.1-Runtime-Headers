/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSTransactionLogSyncTaskHandler : IDSTransactionLogTaskHandler {
    <IDSTransactionLogTaskHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    IDSTransactionLogSyncTask * _syncTask;
}

@property (nonatomic) <IDSTransactionLogTaskHandlerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IDSTransactionLogSyncTask *syncTask;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (id)_destinationsInMessages:(id)arg1;
- (id)_groupIDsFromMessages:(id)arg1;
- (id)_groupsByGroupIDFromGroups:(id)arg1;
- (id)_participantsByAliasFromParticipants:(id)arg1;
- (id)_transactionMessageFromTransportMessage:(id)arg1 groups:(id)arg2 participants:(id)arg3 accountInfo:(id)arg4;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withDecryptedPayload:(id)arg2 accountInfo:(id)arg3;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withGroupID:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withParticipants:(id)arg2 accountInfo:(id)arg3;
- (void)_transactionMessagesFromTransportMessages:(id)arg1 withParticipants:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 completion:(id /* block */)arg5;
- (id)delegate;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)perform;
- (void)qFetchParticipantsFromDeviceMessges:(id)arg1 andGroupsFromGroupMessages:(id)arg2 completion:(id /* block */)arg3;
- (void)qIngestMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)qPerformWithToken:(id)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSyncTask:(id)arg1;
- (id)syncTask;

@end
