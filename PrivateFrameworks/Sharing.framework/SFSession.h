/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSession : NSObject <NSSecureCoding, SFXPCInterface> {
    bool  _activateCalled;
    bool  _activateCompleted;
    id /* block */  _activateCompletion;
    bool  _activateInProgress;
    bool  _appleIDContactCompleted;
    SFAppleIDContactInfo * _appleIDContactInfo;
    long long  _bluetoothState;
    id /* block */  _bluetoothStateChangedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct CryptoAEADPrivate { } * _encryptionReadAEAD;
    unsigned char  _encryptionReadNonce;
    struct CryptoAEADPrivate { } * _encryptionWriteAEAD;
    unsigned char  _encryptionWriteNonce;
    id /* block */  _errorHandler;
    id /* block */  _eventMessageHandler;
    NSString * _fixedPIN;
    NSMutableData * _fragmentData;
    unsigned short  _fragmentLastIndex;
    unsigned int  _heartbeatID;
    unsigned long long  _heartbeatLastTicks;
    NSObject<OS_dispatch_source> * _heartbeatTimer;
    bool  _heartbeatV2;
    bool  _heartbeatWaiting;
    NSUUID * _identifier;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    CUMessageSessionServer * _messageSessionServer;
    CUMessageSession * _messageSessionTemplate;
    NSString * _myAppleID;
    CUAppleIDClient * _myAppleIDInfoClient;
    NSDictionary * _pairSetupACL;
    id /* block */  _pairSetupCompletion;
    bool  _pairSetupEnded;
    unsigned int  _pairSetupFlags;
    struct PairingSessionPrivate { } * _pairSetupSession;
    unsigned int  _pairSetupXID;
    NSDictionary * _pairVerifyACL;
    id /* block */  _pairVerifyCompletion;
    bool  _pairVerifyEnded;
    unsigned int  _pairVerifyFlags;
    struct PairingSessionPrivate { } * _pairVerifySession;
    NSUUID * _peer;
    NSString * _peerAppleID;
    NSString * _peerContactIdentifier;
    SFDevice * _peerDevice;
    id /* block */  _promptForPINHandler;
    id /* block */  _receivedFrameHandler;
    id /* block */  _receivedObjectHandler;
    id /* block */  _receivedRequestHandler;
    NSMutableDictionary * _requestHandlers;
    NSMutableDictionary * _requestMap;
    id /* block */  _requestMessageHandler;
    NSMutableDictionary * _requestQueue;
    id /* block */  _responseMessageInternalHandler;
    id /* block */  _sendFrameHandler;
    NSString * _serviceIdentifier;
    unsigned char  _serviceType;
    NSUUID * _serviceUUID;
    unsigned int  _sessionFlags;
    unsigned int  _sessionID;
    id /* block */  _sessionStartedHandler;
    SFTRSession * _sfTRSession;
    unsigned int  _sharingSourceVersion;
    SDStatusMonitor * _statusMonitor;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    double  _timeout;
    bool  _timeoutFired;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    bool  _touchRemoteEnabled;
    TRSession * _trSession;
    NSObject<OS_os_transaction> * _transaction;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucatCore;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucatCrypto;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic) long long bluetoothState;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ eventMessageHandler;
@property (nonatomic, copy) NSString *fixedPIN;
@property (nonatomic) unsigned long long heartbeatLastTicks;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) CUMessageSession *messageSessionTemplate;
@property (nonatomic, copy) NSString *myAppleID;
@property (nonatomic, retain) CUAppleIDClient *myAppleIDInfoClient;
@property (nonatomic, copy) NSDictionary *pairSetupACL;
@property (nonatomic, copy) NSDictionary *pairVerifyACL;
@property (nonatomic, copy) NSUUID *peer;
@property (nonatomic, copy) NSString *peerAppleID;
@property (nonatomic, copy) NSString *peerContactIdentifier;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, copy) id /* block */ receivedFrameHandler;
@property (nonatomic, copy) id /* block */ receivedObjectHandler;
@property (nonatomic, copy) id /* block */ receivedRequestHandler;
@property (nonatomic, readonly, copy) NSMutableDictionary *requestHandlers;
@property (nonatomic, copy) id /* block */ requestMessageHandler;
@property (nonatomic, copy) id /* block */ responseMessageInternalHandler;
@property (nonatomic, copy) id /* block */ sendFrameHandler;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic) unsigned char serviceType;
@property (nonatomic, copy) NSUUID *serviceUUID;
@property (nonatomic) unsigned int sessionFlags;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, copy) id /* block */ sessionStartedHandler;
@property (nonatomic) unsigned int sharingSourceVersion;
@property (nonatomic, retain) SDStatusMonitor *statusMonitor;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) double timeout;
@property (nonatomic, copy) id /* block */ timeoutHandler;
@property (nonatomic) bool touchRemoteEnabled;
@property (nonatomic, retain) TRSession *trSession;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_activated;
- (void)_activatedIfReady:(id)arg1;
- (bool)_appleIDAddProof:(id)arg1 error:(id*)arg2;
- (id)_appleIDVerifyProof:(id)arg1 error:(id*)arg2;
- (void)_cleanup;
- (void)_deregisterRequestID:(id)arg1;
- (void)_ensureXPCStarted;
- (void)_fetchInfo;
- (void)_hearbeatTimer;
- (void)_interrupted;
- (void)_invalidated;
- (void)_pairSetup:(id)arg1 start:(bool)arg2;
- (void)_pairSetupCompleted:(int)arg1;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_pairVerify:(id)arg1 start:(bool)arg2;
- (void)_pairVerifyCompleted:(int)arg1;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)_sendEncryptedObject:(id)arg1;
- (void)_sendFrameType:(unsigned char)arg1 object:(id)arg2;
- (void)_sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)_sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_sessionReceivedEncryptedData:(id)arg1 type:(unsigned char)arg2;
- (bool)_sessionReceivedEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)_sessionReceivedObject:(id)arg1 flags:(unsigned int)arg2;
- (bool)_sessionReceivedRegisteredRequestID:(id)arg1 flags:(unsigned int)arg2 xidKey:(id)arg3 xidValue:(id)arg4;
- (bool)_sessionReceivedRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(id /* block */)arg3;
- (void)_sessionReceivedRequestID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (void)_sessionReceivedResponseID:(id)arg1 object:(id)arg2 flags:(unsigned int)arg3;
- (void)_sessionReceivedStartAck:(id)arg1;
- (void)_sessionReceivedUnencryptedData:(id)arg1 type:(unsigned char)arg2;
- (void)_setupMessageSession;
- (void)_setupTouchRemote;
- (void)_startTimeoutIfNeeded;
- (void)_tearDownMessageSession;
- (void)_tearDownTouchRemote;
- (void)_timeoutTimerFired;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)appleIDAddProof:(id)arg1 dispatchQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)appleIDVerifyProof:(id)arg1 dispatchQueue:(id)arg2 completion:(id /* block */)arg3;
- (long long)bluetoothState;
- (id /* block */)bluetoothStateChangedHandler;
- (void)dealloc;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)errorHandler;
- (id /* block */)eventMessageHandler;
- (id)fixedPIN;
- (unsigned long long)heartbeatLastTicks;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)messageSessionTemplate;
- (id)myAppleID;
- (id)myAppleIDInfoClient;
- (id)pairSetupACL;
- (void)pairSetupTryPIN:(id)arg1;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)pairVerifyACL;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (bool)pairingContainsACL:(id)arg1;
- (id)pairingDeriveKeyForIdentifier:(id)arg1 keyLength:(unsigned long long)arg2;
- (id)peer;
- (id)peerAppleID;
- (id)peerContactIdentifier;
- (id)peerDevice;
- (id /* block */)promptForPINHandler;
- (id /* block */)receivedFrameHandler;
- (id /* block */)receivedObjectHandler;
- (id /* block */)receivedRequestHandler;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (id)requestHandlers;
- (id /* block */)requestMessageHandler;
- (id /* block */)responseMessageInternalHandler;
- (void)sendEvent:(id)arg1;
- (id /* block */)sendFrameHandler;
- (void)sendFrameType:(unsigned char)arg1 data:(id)arg2;
- (void)sendFrameType:(unsigned char)arg1 object:(id)arg2;
- (void)sendRequest:(id)arg1;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)sendResponse:(id)arg1;
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2;
- (id)serviceIdentifier;
- (unsigned char)serviceType;
- (id)serviceUUID;
- (void)sessionBluetoothStateChanged:(long long)arg1;
- (void)sessionError:(id)arg1;
- (unsigned int)sessionFlags;
- (unsigned int)sessionID;
- (void)sessionReceivedEvent:(id)arg1;
- (void)sessionReceivedFragmentData:(id)arg1 last:(bool)arg2;
- (void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2;
- (void)sessionReceivedRequest:(id)arg1;
- (void)sessionReceivedResponse:(id)arg1;
- (id /* block */)sessionStartedHandler;
- (void)setBluetoothState:(long long)arg1;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (int)setEncryptionReadKey:(const char *)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char *)arg3 writeKeyLen:(unsigned long long)arg4;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setEventMessageHandler:(id /* block */)arg1;
- (void)setFixedPIN:(id)arg1;
- (void)setHeartbeatLastTicks:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setMyAppleID:(id)arg1;
- (void)setMyAppleIDInfoClient:(id)arg1;
- (void)setPairSetupACL:(id)arg1;
- (void)setPairVerifyACL:(id)arg1;
- (void)setPeer:(id)arg1;
- (void)setPeerAppleID:(id)arg1;
- (void)setPeerContactIdentifier:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setReceivedFrameHandler:(id /* block */)arg1;
- (void)setReceivedObjectHandler:(id /* block */)arg1;
- (void)setReceivedRequestHandler:(id /* block */)arg1;
- (void)setRequestMessageHandler:(id /* block */)arg1;
- (void)setResponseMessageInternalHandler:(id /* block */)arg1;
- (void)setSendFrameHandler:(id /* block */)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServiceType:(unsigned char)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSessionFlags:(unsigned int)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setSessionStartedHandler:(id /* block */)arg1;
- (void)setSharingSourceVersion:(unsigned int)arg1;
- (void)setStatusMonitor:(id)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (void)setTouchRemoteEnabled:(bool)arg1;
- (void)setTrSession:(id)arg1;
- (unsigned int)sharingSourceVersion;
- (id)statusMonitor;
- (id)testListenerEndpoint;
- (double)timeout;
- (id /* block */)timeoutHandler;
- (bool)touchRemoteEnabled;
- (id)trSession;

@end
