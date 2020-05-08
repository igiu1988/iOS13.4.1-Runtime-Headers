/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface _HAPAccessoryServerBTLE200 : HAPAccessoryServerBTLE <CBPeripheralDelegate, HAPAuthSessionDelegate, HAPBTLEControlOutputStreamDelegate, HAPPairSetupSessionClientDelegate, HAPSecuritySessionDelegate, HMFLogging, HMFTimerDelegate> {
    HAPBLEAccessoryCache * _accessoryCache;
    HAPAuthSession * _authSession;
    bool  _authenticated;
    HAPAccessoryProtocolInfo * _authenticatedProtocolInfo;
    bool  _badPairSetupCode;
    NSMapTable * _characteristicEnableEventCompletionHandlers;
    NSMapTable * _characteristicWriteCompletionHandlers;
    NSOperationQueue * _clientOperationQueue;
    id /* block */  _connectionCompletionHandler;
    HMFTimer * _connectionIdleTimer;
    long long  _connectionState;
    _HAPBTLEDiscoveryContext * _discoveryContext;
    unsigned char  _featureFlags;
    bool  _hasValidCache;
    HAPCharacteristic * _identifyCharacteristic;
    double  _pairSetupBackoffTimeInterval;
    HAPCharacteristic * _pairSetupCharacteristic;
    HAPPairSetupSession * _pairSetupSession;
    HAPCharacteristic * _pairVerifyCharacteristic;
    NSOperationQueue * _pairVerifyOperationQueue;
    bool  _pairing;
    HAPCharacteristic * _pairingFeaturesCharacteristic;
    HAPCharacteristic * _pairingsCharacteristic;
    NSMutableArray * _pendingRequests;
    NSMutableArray * _pendingResponses;
    NSOperationQueue * _requestOperationQueue;
    HAPSecuritySession * _securitySession;
    id /* block */  _setupCodeCompletionHandler;
    bool  _verified;
}

@property (retain) HAPBLEAccessoryCache *accessoryCache;
@property (nonatomic, retain) HAPAuthSession *authSession;
@property (nonatomic) bool authenticated;
@property (nonatomic, retain) HAPAccessoryProtocolInfo *authenticatedProtocolInfo;
@property (getter=isBadSetupCode, nonatomic) bool badPairSetupCode;
@property (nonatomic, readonly) NSMapTable *characteristicEnableEventCompletionHandlers;
@property (nonatomic, readonly) NSMapTable *characteristicWriteCompletionHandlers;
@property (nonatomic, readonly) NSOperationQueue *clientOperationQueue;
@property (nonatomic, copy) id /* block */ connectionCompletionHandler;
@property (nonatomic, retain) HMFTimer *connectionIdleTimer;
@property (nonatomic) long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _HAPBTLEDiscoveryContext *discoveryContext;
@property (nonatomic) unsigned char featureFlags;
@property bool hasValidCache;
@property (readonly) unsigned long long hash;
@property (nonatomic) HAPCharacteristic *identifyCharacteristic;
@property (nonatomic) double pairSetupBackoffTimeInterval;
@property (nonatomic) HAPCharacteristic *pairSetupCharacteristic;
@property (nonatomic, retain) HAPPairSetupSession *pairSetupSession;
@property (nonatomic) HAPCharacteristic *pairVerifyCharacteristic;
@property (nonatomic, readonly) NSOperationQueue *pairVerifyOperationQueue;
@property (getter=isPairing, nonatomic) bool pairing;
@property (nonatomic) HAPCharacteristic *pairingFeaturesCharacteristic;
@property (nonatomic) HAPCharacteristic *pairingsCharacteristic;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) NSMutableArray *pendingResponses;
@property (nonatomic, readonly) NSOperationQueue *requestOperationQueue;
@property (nonatomic, retain) HAPSecuritySession *securitySession;
@property (nonatomic, copy) id /* block */ setupCodeCompletionHandler;
@property (readonly) Class superclass;
@property (getter=isVerified, nonatomic) bool verified;

+ (id)configurationRequestForCharacteristic:(id)arg1 isBroadcasted:(bool)arg2 interval:(unsigned long long)arg3 error:(id*)arg4;
+ (id)configurationRequestForService:(id)arg1 configRequestType:(unsigned char)arg2 error:(id*)arg3;
+ (id)executeWriteRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id*)arg3;
+ (bool)isHAPDescriptor:(id)arg1;
+ (bool)isHAPService:(id)arg1;
+ (id)logCategory;
+ (bool)parseCharacteristicConfigurationResponse:(id)arg1 error:(id*)arg2;
+ (bool)parseProtocolConfigurationResponse:(id)arg1 key:(id*)arg2 stateNumber:(id*)arg3 error:(id*)arg4;
+ (bool)parseReadResponse:(id)arg1 value:(id*)arg2 error:(id*)arg3;
+ (id)parseServiceSignatureResponse:(id)arg1 serviceInstanceID:(id)arg2 serviceType:(id)arg3 error:(id*)arg4;
+ (id)parseSignatureResponse:(id)arg1 error:(id*)arg2;
+ (bool)parseWriteResponse:(id)arg1 value:(id*)arg2 error:(id*)arg3;
+ (id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id*)arg5;
+ (id)readRequestForCharacteristic:(id)arg1 options:(long long)arg2 error:(id*)arg3;
+ (id)signatureRequestForCharacteristic:(id)arg1 requiresAuthentication:(bool)arg2 error:(id*)arg3;
+ (id)signatureRequestForService:(id)arg1 characteristic:(id)arg2 requiresAuthentication:(bool)arg3 error:(id*)arg4;
+ (id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)_cacheServices:(id)arg1;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_cancelConnectionWithError:(id)arg1;
- (bool)_cancelDiscoveryWithError:(id)arg1;
- (id)_characteristicForCBCharacteristic:(id)arg1;
- (void)_checkForAuthPrompt:(bool)arg1;
- (void)_configureBroadcastKeyGeneration:(unsigned char)arg1 service:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_continuePairingAfterMFiCertValidation;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (id)_decryptData:(id)arg1 error:(id*)arg2;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_discoverCharacteristic:(id)arg1;
- (void)_discoverCharacteristicsForService:(id)arg1;
- (void)_discoverServices;
- (void)_discoverWithType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_enableBroadcastEvent:(bool)arg1 interval:(unsigned long long)arg2 forCharacteristic:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_enableEvent:(bool)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)_enableEvent:(bool)arg1 toCharacteristic:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2;
- (void)_enqueueRequest:(id)arg1;
- (void)_establishSecureSession;
- (void)_generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_getCBCharacteristic:(id)arg1 instanceId:(id)arg2 service:(id)arg3;
- (id)_getCBService:(id)arg1 instanceOrder:(unsigned long long)arg2;
- (id)_getCachedService:(id)arg1;
- (id)_getCharacteristicInstanceID:(id)arg1 error:(id*)arg2;
- (unsigned long long)_getPairSetupType;
- (void)_getPairingFeaturesWithCompletionHandler:(id /* block */)arg1;
- (id)_getProtocolInfoService;
- (id)_getServiceInstanceID:(id)arg1;
- (void)_handleCompletedDiscovery;
- (void)_handleConnectionIdleTimeout;
- (void)_handleConnectionWithError:(id)arg1;
- (void)_handleDiscoveredCharacteristicsForService:(id)arg1 error:(id)arg2;
- (void)_handleDiscoveredCharactersitic:(id)arg1 error:(id)arg2;
- (void)_handleDiscoveredDescriptors:(id)arg1;
- (void)_handleDiscoveredServices:(id)arg1 error:(id)arg2;
- (void)_handleEventIndicationForCharacteristic:(id)arg1;
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;
- (void)_handlePairSetupSessionExchangeData:(id)arg1;
- (void)_handlePairingSetupCodeRequestWithCompletionHandler:(id /* block */)arg1;
- (void)_handleReadCharacteristicSignature:(id)arg1 error:(id)arg2;
- (void)_handleReadCharacteristicValue:(id)arg1 error:(id)arg2;
- (void)_handleReadDescriptorValue:(id)arg1 error:(id)arg2;
- (void)_handleReadServiceInstanceId:(id)arg1;
- (void)_handleReadServiceSignature:(id)arg1 error:(id)arg2;
- (void)_handleResponseData:(id)arg1 fromCharacteristic:(id)arg2 error:(id)arg3;
- (void)_handleSecuritySessionSetupExchangeData:(id)arg1;
- (void)_handleWriteCompletionForCharacteristic:(id)arg1 error:(id)arg2;
- (id)_hapServicesFromCache;
- (void)_kickConnectionIdleTimer;
- (unsigned long long)_maximumControlWriteLengthForRequest:(id)arg1;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (unsigned long long)_outstandingRequests;
- (void)_pairingCompletedWithError:(id)arg1;
- (id)_parseCharacteristic:(id)arg1 error:(id*)arg2;
- (bool)_parsePairingFeaturesCharacteristic:(id)arg1 authMethod:(unsigned long long*)arg2 error:(id*)arg3;
- (id)_parseService:(id)arg1 error:(id*)arg2;
- (id)_pendingRequestForCharacteristic:(id)arg1;
- (id)_pendingResponseForRequest:(id)arg1;
- (void)_performEnableEvent:(bool)arg1 toCharacteristic:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 logEventSession:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 logEventSession:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 logEventSession:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 logEventSession:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_readCharacteristicSignature:(id)arg1;
- (void)_readCharacteristicSignatures;
- (void)_readCharacteristicValue:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 logEventSession:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_readDescriptorValue:(id)arg1;
- (void)_readServiceSignature:(id)arg1;
- (void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 logEventSession:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_reallySendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_requestResponseForRequest:(id)arg1;
- (void)_resetWithError:(id)arg1;
- (void)_restartConnectionIdleTimer:(double)arg1;
- (void)_resumeAllOperations;
- (void)_resumeConnectionIdleTimer;
- (void)_retryDiscovery;
- (void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendData:(id)arg1 toCharacteristic:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendPairingRequestData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sendProtocolInfoServiceExchangeData:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_serviceCacheFromHAPService:(id)arg1 serviceOrder:(unsigned long long)arg2;
- (id)_serviceForCBService:(id)arg1;
- (void)_suspendAllOperations;
- (void)_suspendConnectionIdleTimer;
- (void)_updateConnectionIdleTime:(unsigned char)arg1;
- (bool)_validateProtocolInfo:(id)arg1;
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 logEventSession:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)accessoryCache;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)authSession;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (void)authenticateAccessory;
- (bool)authenticated;
- (id)authenticatedProtocolInfo;
- (id)characteristicEnableEventCompletionHandlers;
- (id)characteristicWriteCompletionHandlers;
- (id)clientOperationQueue;
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)connectionCompletionHandler;
- (id)connectionIdleTimer;
- (long long)connectionState;
- (void)continueAuthAfterValidation:(bool)arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)controlOutputStreamDidComplete:(id)arg1;
- (void)controlOutputStreamDidOpen:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (void)discoverAccessories;
- (id)discoveryContext;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (unsigned char)featureFlags;
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getAccessoryInfo:(id /* block */)arg1;
- (id)getLocalPairingIdentityWithError:(id*)arg1;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)hapBLEProtocolVersion;
- (bool)hasValidCache;
- (id)identifyCharacteristic;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13;
- (bool)isBLELinkConnected;
- (bool)isBadSetupCode;
- (bool)isHAPCharacteristic:(id)arg1;
- (bool)isPairing;
- (bool)isSecuritySessionOpen;
- (bool)isVerified;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)markNotifyingCharacteristicUpdatedforCharacteristic:(id)arg1;
- (double)pairSetupBackoffTimeInterval;
- (id)pairSetupCharacteristic;
- (id)pairSetupSession;
- (bool)pairSetupSession:(id)arg1 didPairWithPeer:(id)arg2 error:(id*)arg3;
- (bool)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (id)pairSetupSession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(id /* block */)arg2;
- (void)pairSetupSession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)pairSetupSession:(id)arg1 didStopWithError:(id)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
- (id)pairVerifyCharacteristic;
- (id)pairVerifyOperationQueue;
- (id)pairingFeaturesCharacteristic;
- (id)pairingsCharacteristic;
- (id)pendingRequests;
- (id)pendingResponses;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)protocolInfoServiceSignatureCharacteristics;
- (void)provisionToken:(id)arg1;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)requestOperationQueue;
- (id)securitySession;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (void)setAccessoryCache:(id)arg1;
- (void)setAuthSession:(id)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticatedProtocolInfo:(id)arg1;
- (void)setBadPairSetupCode:(bool)arg1;
- (void)setConnectionCompletionHandler:(id /* block */)arg1;
- (void)setConnectionIdleTimer:(id)arg1;
- (void)setConnectionState:(long long)arg1;
- (void)setDiscoveryContext:(id)arg1;
- (void)setFeatureFlags:(unsigned char)arg1;
- (void)setHasValidCache:(bool)arg1;
- (void)setIdentifyCharacteristic:(id)arg1;
- (void)setPairSetupBackoffTimeInterval:(double)arg1;
- (void)setPairSetupCharacteristic:(id)arg1;
- (void)setPairSetupSession:(id)arg1;
- (void)setPairVerifyCharacteristic:(id)arg1;
- (void)setPairing:(bool)arg1;
- (void)setPairingFeaturesCharacteristic:(id)arg1;
- (void)setPairingsCharacteristic:(id)arg1;
- (void)setSecuritySession:(id)arg1;
- (void)setSecuritySessionOpen:(bool)arg1;
- (void)setSetupCodeCompletionHandler:(id /* block */)arg1;
- (void)setVerified:(bool)arg1;
- (id /* block */)setupCodeCompletionHandler;
- (id)shortDescription;
- (bool)shouldVerifyHAPCharacteristic:(id)arg1;
- (bool)shouldVerifyHAPService:(id)arg1;
- (void)startPairingWithConsentRequired:(bool)arg1 config:(id)arg2 ownershipToken:(id)arg3;
- (bool)stopPairingWithError:(id*)arg1;
- (void)tearDownSessionOnAuthCompletion;
- (void)timerDidFire:(id)arg1;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 logEventSession:(id)arg4 completionHandler:(id /* block */)arg5;

@end
