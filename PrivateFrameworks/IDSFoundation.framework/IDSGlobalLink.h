/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSGlobalLink : NSObject <IDSGLSessionManagerDelegate, IDSLink, IDSLinkDelegate, IDSStunCandidatePairDelegate> {
    unsigned int  _acceptDelayU32;
    NSString * _acceptedRelaySessionID;
    NSObject<OS_dispatch_source> * _activityTimer;
    NSMutableArray * _allocateTimeReportBlocks;
    double  _allocbindEndTime;
    double  _allocbindStartTime;
    <IDSLinkDelegate> * _alternateDelegate;
    unsigned short  _basebandPacketChannelNumber;
    NSString * _cbuuid;
    struct IDSSimpleUInt16List { 
        unsigned long long listSize; 
        unsigned long long itemCount; 
        unsigned short *items; 
    }  _channelNumberList;
    NSMutableDictionary * _channelToCandidatePairs;
    long long  _clientType;
    unsigned char  _clientUUID;
    IDSCommnatManager * _commnatManager;
    id /* block */  _connectReadyHandler;
    NSMutableDictionary * _connectingCandidatePairSessionInfo;
    NSData * _controlMessageKey;
    bool  _delaySessionConnected;
    NSMutableArray * _delayedCellInterfaces;
    bool  _delayedConnData;
    <IDSLinkDelegate> * _delegate;
    NSString * _deviceUniqueID;
    bool  _disallowCellular;
    bool  _disallowWiFi;
    id /* block */  _disconnectCompletionHandler;
    NSObject<OS_dispatch_source> * _disconnectTimer;
    bool  _enableSKE;
    double  _firstClientPacketTime;
    bool  _forceQuickRelay;
    bool  _hasPendingAllocation;
    bool  _hasPendingSelfAllocation;
    unsigned long long  _headerOverhead;
    NSString * _idsSessionID;
    NSMutableArray * _interfaceAddressArray;
    double  _inviteRecvTime;
    double  _inviteSentTime;
    bool  _isFaceTimeCall;
    bool  _isInitiator;
    bool  _isMultiway;
    bool  _isSessionAcceptedWithNoCandidatePair;
    double  _linkConnectTime;
    BOOL  _linkIDCounter;
    NSMutableDictionary * _linkIDToCandidatePairs;
    NSMutableArray * _localCandidateList;
    int  _localConnDataCounter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct IDSNAT64PrefixCache_ { } * _nat64PrefixCache;
    double  _natMappingTimeout;
    int  _nominateCount;
    NSMutableArray * _nonAcceptedQRSessions;
    int  _portRange;
    bool  _preferCellularForCallSetup;
    unsigned long long  _previousBytesReceived;
    unsigned long long  _previousBytesSent;
    unsigned long long  _previousPacketsReceived;
    unsigned long long  _previousPacketsSent;
    double  _previousReportTime;
    IDSGlobalLinkBlocks * _qraBlocks;
    struct IDSSimpleUInt16List { 
        unsigned long long listSize; 
        unsigned long long itemCount; 
        unsigned short *items; 
    }  _reallocChannelList;
    bool  _recvRemoteSKEData;
    bool  _reduceCellularUsage;
    bool  _reduceRelayLinkCreation;
    NSMutableArray * _remoteCandidateList;
    long long  _remoteCapabilityFlag;
    int  _remoteConnDataCounter;
    short  _remoteGlobalLinkVersion;
    NSMutableArray * _selfAllocateRequestIDs;
    struct tagIDSQRSendInfoList { } * _sendInfoList;
    IDSGLSessionManager * _sessionManager;
    bool  _skeComplete;
    NSData * _skeData;
    double  _skeStartTime;
    unsigned short  _startPort;
    NSMutableDictionary * _startTimeToStunReqID;
    unsigned long long  _state;
    NSMutableArray * _targetedAllocations;
    IDSTCPLink * _tcpLink;
    IDSTCPLink * _tcpSSLLink;
    NSMutableDictionary * _tokenToCandidatePairs;
    NSMutableDictionary * _tokenToReallocBlocks;
    NSMutableDictionary * _tokenToStunCheckPairs;
    NSMutableDictionary * _tokenToStunReqID;
    unsigned long long  _totalBytesReceived;
    unsigned long long  _totalBytesSent;
    unsigned long long  _totalPacketsReceived;
    unsigned long long  _totalPacketsSent;
    IDSUDPLink * _udpLink;
    IDSUDPLink * _udpLinkv6;
    bool  _useSecureControlMessage;
}

@property <IDSLinkDelegate> *alternateDelegate;
@property (retain) NSString *cbuuid;
@property (readonly, copy) NSString *debugDescription;
@property <IDSLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long headerOverhead;
@property (getter=linkTypeString, readonly) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_IsExtIPDiscoveryNeeded:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 candidatePairList:(id)arg2;
- (bool)_addCandidate:(id)arg1 isRemoteCandidate:(bool)arg2;
- (void)_addQRAAWDBlock:(id)arg1 allocateRequestTime:(double)arg2 inferredExternalIP:(unsigned int)arg3 stunTransport:(long long)arg4 relayProviderType:(long long)arg5 idsSessionID:(id)arg6;
- (id)_addSocketAndInterfaceAddress:(unsigned long long)arg1 wantsWiFi:(bool)arg2 wantsCellular:(bool)arg3;
- (void)_addStunCheckPair:(id)arg1 isRemoteCandidate:(bool)arg2;
- (void)_callDisconnectCompletionHandler:(id)arg1;
- (void)_connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 joinSession:(bool)arg3 allocbindFailover:(bool)arg4 completionHandler:(id /* block */)arg5 withLocalInterfacePreference:(int)arg6;
- (void)_convergeSharedSessions:(id)arg1;
- (id)_createCommandData:(long long)arg1 options:(id)arg2 candidatePair:(id)arg3;
- (id)_createInterfaceAddressArray:(unsigned long long)arg1 wantsWiFi:(bool)arg2 wantsCellular:(bool)arg3;
- (id)_delayProcessingCellularInterfaces:(id)arg1;
- (void)_discardAllCandidatePairs;
- (void)_discardCandidatePairsWithOption:(bool)arg1;
- (void)_discardNonAcceptedCandidatePairs;
- (void)_discardSelfAllocateCandidatePairs;
- (id)_getCandidatePairsWithSessionID:(id)arg1 inState:(unsigned long long)arg2;
- (id)_getLink:(int)arg1 stunTransport:(long long)arg2;
- (void)_getNAT64PrefixForInterface:(int)arg1 interfaceName:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)_getPacketBufferSendInfo:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 channelNumber:(unsigned short*)arg2 transport:(long long*)arg3;
- (bool)_getSessionParticipants:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;
- (bool)_getSessionStreamInfo:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;
- (void)_handleActivityTimer;
- (void)_handleAllocbindFailoverTimer:(id)arg1 failoverTimerOnCandidatePair:(id)arg2 onInterface:(int)arg3;
- (void)_handleCommnatResult:(long long)arg1 reflextiveCandidate:(id)arg2;
- (void)_handleDisconnectTimer;
- (void)_handleSelfAllocationTimeout:(id)arg1;
- (bool)_hasActiveAllocbindFailoverTimerForSessionID:(id)arg1;
- (bool)_hasConnectedCandidatePair;
- (bool)_hasConnectingRelayCandidatePair;
- (void)_invalidateCandidatePairs:(id)arg1;
- (bool)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2;
- (bool)_isExtIPDiscoveryDone;
- (bool)_isInterfaceConstrainedWithInterfaceIndex:(unsigned int)arg1;
- (bool)_isInterfaceExpensiveWithInterfaceIndex:(unsigned int)arg1;
- (bool)_isReachableInterface:(id)arg1 interfaceIPVersion:(unsigned long long)arg2;
- (id)_nextConnectedCandidatePair;
- (void)_nominateCandidatePair:(id)arg1;
- (void)_notifyCandidatePairConnected:(id)arg1;
- (void)_notifyCandidatePairDisconnected:(id)arg1;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (void)_notifyLinkDisconnectedWithError:(long long)arg1;
- (void)_notifyQRSessionConnected:(id)arg1;
- (void)_notifySessionInfoReceived:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 success:(bool)arg4;
- (void)_parseClientUUID:(id)arg1;
- (bool)_processAllocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processCommandConnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandConnectionData:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandDisconnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandHeartbeat:(id)arg1 candidatePairToken:(id)arg2 arrivalTime:(double)arg3;
- (void)_processCommandNominate:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandZUDPData:(id)arg1 candidatePairToken:(id)arg2;
- (bool)_processDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processDataOnReallocChannel:(unsigned short)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3;
- (void)_processDelayedCellularInterfaces;
- (bool)_processDiagnosticIndication:(id)arg1 candidatePairToken:(id)arg2 arrivalTime:(double)arg3;
- (bool)_processGoAwayIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processIncomingIndicationData:(char *)arg1 length:(int)arg2 candidatePairToken:(id)arg3 arrivalTime:(double)arg4;
- (void)_processNewLocalAddressList:(id)arg1;
- (void)_processNewRemoteCandidates:(id)arg1;
- (void)_processReallocChannelData:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 channelNumber:(unsigned short)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 arrivalTime:(double)arg5;
- (bool)_processReallocIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processRemoteCandidates:(id)arg1;
- (void)_processRemoteLinkUUID:(id)arg1 candidatePair:(id)arg2;
- (void)_processRemovedLocalAddressList:(id)arg1;
- (void)_processRemovedRemoteCandidates:(id)arg1;
- (bool)_processStunPacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 arrivalTime:(double)arg4 headerOverhead:(unsigned long long)arg5;
- (bool)_processUnallocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processXORMappedAddress:(id)arg1 arrivalTime:(double)arg2;
- (bool)_qrLinkLimitExceededWithNewLinkType:(unsigned char)arg1 cellularRelayLinkCount:(unsigned short)arg2 wifiRelayLinkCount:(unsigned short)arg3;
- (void)_recvGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)_removePacketNotificationFilter;
- (void)_removeStunRequest:(id)arg1;
- (void)_reportAWDAllocateTime;
- (void)_reportSessionSetupTime;
- (void)_requestNewQRAllocationWithPreferredRemoteInterface:(int)arg1 withPreferredLocalInterface:(int)arg2;
- (void)_requestNonUDPRelayAllocation:(long long)arg1 relaySessionID:(id)arg2;
- (bool)_requestSelfAllocationForInterfaceAddress:(id)arg1;
- (void)_saveStunRequest:(id)arg1 startTime:(double)arg2 token:(id)arg3;
- (void)_selectBetterDefaultCandidatePair:(id)arg1;
- (void)_selectDefaultCandidatePair;
- (void)_sendAllocbindRequest:(id)arg1 stunMessage:(id)arg2 isRealloc:(bool)arg3 inResponseToNoSessionState:(bool)arg4;
- (void)_sendAllocbindRequestForExtIP:(id)arg1 startTime:(double)arg2;
- (void)_sendBindingRequest:(id)arg1 stunMessage:(id)arg2;
- (void)_sendCommandMessage:(long long)arg1 stunMessage:(id)arg2 options:(id)arg3 candidatePairToken:(id)arg4;
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;
- (void)_sendSKEDataWithSelectedCandidatePair;
- (void)_sendSessionDisconnectedCommand;
- (long long)_sendStunMessage:(id)arg1 sourceIfIndex:(int)arg2 source:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3 destination:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 stunTransport:(long long)arg5 token:(id)arg6;
- (void)_sendUnallocbindRequest:(id)arg1 stunMessage:(id)arg2;
- (long long)_sendZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)_setChannelToCandidatePair:(id)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3 channelNumber:(unsigned short)arg4;
- (void)_setRemoteGlobalLinkVersionWithCommand:(long long)arg1 receivedRemoteVersion:(bool)arg2 versionValue:(unsigned short)arg3 receivedSKE:(bool)arg4;
- (void)_setupNewQRLinkIfNecessary:(id)arg1;
- (void)_setupRelayConnectionForNetworkAddressChanges;
- (bool)_skipCommandMessage:(long long)arg1 candidatePair:(id)arg2 timeNow:(double)arg3;
- (void)_startActivityTimer;
- (void)_startAllocbindFailoverTimerOnCandidatePair:(id)arg1;
- (void)_startDisconnectTimer;
- (void)_startExtIPDiscovery;
- (void)_startStunCheck:(id)arg1;
- (double)_startTimeForStunRequest:(id)arg1;
- (void)_stopActivityTimer;
- (void)_stopAllocbindFailoverTimer:(id)arg1;
- (void)_stopDisconnectTimer;
- (bool)_triggerSymptomsWithCandidatePairToken:(id)arg1 subType:(id)arg2 subTypeContext:(id)arg3 duration:(unsigned short)arg4;
- (void)_updateDefaultCandidatePair:(id)arg1;
- (void)_updateInterfaceAddressesWithAddList:(id)arg1 removeList:(id)arg2;
- (void)_updateNominatedCandidatePair:(id)arg1;
- (void)_updateSendStatsWithResult:(unsigned long long)arg1 bytesSent:(long long)arg2 packetsSent:(int)arg3 linkID:(BOOL)arg4 token:(id)arg5 useRelay:(bool)arg6 isClientData:(bool)arg7 sendTime:(double)arg8 stunTransport:(long long)arg9;
- (id)alternateDelegate;
- (void)candidatePair:(id)arg1 didAddQREvent:(id)arg2;
- (void)candidatePair:(id)arg1 didReceiveSessionInfo:(id)arg2 success:(bool)arg3;
- (void)candidatePair:(id)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
- (id)cbuuid;
- (void)connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 joinSession:(bool)arg3 completionHandler:(id /* block */)arg4 withLocalInterfacePreference:(int)arg5;
- (id)copyLinkStatsDict;
- (void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3;
- (void)dealloc;
- (unsigned long long)defaultLinkType;
- (id)delegate;
- (id)deviceUniqueID;
- (void)disconnectCandidatePair:(id)arg1;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (void)dropIPPackets:(BOOL)arg1 payloadArray:(id)arg2;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (void)getSessionInfo:(id)arg1 relaySessionID:(id)arg2 requestType:(long long)arg3 options:(id)arg4;
- (void)handleCellularRATChange;
- (void)handleNetworkAddressChanges:(bool)arg1 hasIPv6AddressChange:(bool)arg2;
- (bool)hasReachableInterface:(unsigned long long)arg1;
- (unsigned long long)headerOverhead;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;
- (void)invalidate;
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (bool)link:(id)arg1 didReceivePacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (id)linkTypeString;
- (bool)remoteHostAwake;
- (void)sendAllocbindRequest:(id)arg1 isRealloc:(bool)arg2 inResponseToNoSessionState:(bool)arg3;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; double x21; unsigned long long x22; unsigned char x23[0]; }*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (unsigned long long)sendPacketBufferArray:(struct { /* ? */ }**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (void)sendSKEData:(id)arg1;
- (void)setAcceptedRelaySession:(id)arg1 options:(id)arg2;
- (void)setAlternateDelegate:(id)arg1;
- (void)setCbuuid:(id)arg1;
- (void)setDefaultUnderlyingLink:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setPacketNotificationFilter:(BOOL)arg1 uniqueTag:(unsigned int)arg2 isEnabled:(bool)arg3;
- (void)setWiFiAssistState:(bool)arg1;
- (void)startWithOptions:(id)arg1;
- (unsigned long long)state;
- (void)stopKeepAlive:(id)arg1;
- (void)updateProtocolQualityOfService:(BOOL)arg1 isGood:(bool)arg2;
- (void)updateSessionParticipants:(id)arg1 relaySessionID:(id)arg2 participants:(id)arg3;

@end
