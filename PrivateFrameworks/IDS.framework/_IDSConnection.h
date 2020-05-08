/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSConnection : NSObject <IDSAccountDelegate, IDSDaemonListenerProtocol> {
    IDSAccount * _account;
    NSSet * _commands;
    unsigned int  _delegateCapabilities;
    id  _delegateContext;
    NSMapTable * _delegateToInfo;
    unsigned char  _incomingMessageLoggingSequence;
    bool  _indirectDelegateCallouts;
    id  _messageContext;
    unsigned char  _outgoingMessageLoggingSequence;
    IMOrderedMutableDictionary * _pendingSends;
    NSString * _serviceToken;
}

@property (nonatomic, readonly) IDSAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeDevice;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(id /* block */)arg2 callbackBlock:(id /* block */)arg3 postCallbacksBlock:(id /* block */)arg4;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(id /* block */)arg2 callbackBlock:(id /* block */)arg3 postCallbacksBlock:(id /* block */)arg4 group:(id)arg5;
- (void)_callDelegatesWithBlock:(id /* block */)arg1;
- (void)_callDelegatesWithBlock:(id /* block */)arg1 group:(id)arg2;
- (bool)_canServiceNameAcceptMessagesInTransientRegistrationState:(id)arg1;
- (void)_connect;
- (void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2;
- (id)_init;
- (bool)_isAccountInValidRegistrationStateToAcceptMessages;
- (bool)_isDestinationSingleLocalAddress:(id)arg1;
- (void)_replaceSentinelInSendParameters:(id)arg1 withCurrentActiveDevice:(id)arg2;
- (void)_resendPendingSends;
- (void)_sendMissingMessageMetric:(id)arg1;
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned long long)arg4;
- (void)_setTemporaryMessageContext:(id)arg1;
- (bool)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 localURI:(id)arg3 remoteURI:(id)arg4 validateAliases:(bool)arg5 guid:(id)arg6;
- (void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;
- (id)account;
- (void)account:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)account:(id)arg1 devicesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(bool)arg2;
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)checkTransportLogWithReason:(long long)arg1;
- (void)daemonConnected;
- (id)daemonController;
- (id)daemonListener;
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)dealloc;
- (void)didFlushCacheForService:(id)arg1 remoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;
- (void)didSendOpportunisticDataWithIdentifier:(id)arg1 onAccount:(id)arg2 toIDs:(id)arg3;
- (void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(bool)arg3 delegateContext:(id)arg4;
- (bool)isActive;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(bool)arg6 context:(id)arg7;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
- (void)opportunisticDataReceived:(id)arg1 withIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)pendingIncomingMessageWithGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)receivedGroupSessionParticipantDataUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
- (void)receivedGroupSessionParticipantUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
- (void)removeDelegate:(id)arg1;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendServerMessage:(id)arg1 command:(id)arg2;
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
- (void)setDelegateCapabilities:(unsigned int)arg1;
- (void)updateDeviceIdentity:(id)arg1 error:(id)arg2;

@end
