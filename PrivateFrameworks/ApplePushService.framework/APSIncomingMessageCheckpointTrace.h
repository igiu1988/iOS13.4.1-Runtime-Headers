/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSIncomingMessageCheckpointTrace : CUTCheckpointTrace {
    CUTCheckpointRange * _sendToClient;
    CUTCheckpointRange * _storeInMessageStore;
}

@property (nonatomic, readonly) CUTCheckpointRange *sendToClient;
@property (nonatomic, readonly) CUTCheckpointRange *storeInMessageStore;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)sendToClient;
- (id)storeInMessageStore;

@end
