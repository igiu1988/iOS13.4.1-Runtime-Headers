/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECNWConnectionWrapper : NSObject <ECNWConnectionWrapper> {
    NSString * _accountIdentifier;
    bool  _allowsTrustPrompt;
    NSData * _buffer;
    unsigned long long  _bufferOffset;
    id /* block */  _bytesAvailableHandler;
    NSArray * _clientCertificates;
    double  _connectTime;
    NSObject<OS_nw_connection> * _connection;
    NSString * _connectionServiceType;
    int  _connectionState;
    bool  _disableEphemeralDiffieHellmanCiphers;
    NSObject<OS_nw_endpoint> * _endpoint;
    NSError * _error;
    NSObject<OS_dispatch_semaphore> * _eventSemaphore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _networkAccountIdentifier;
    id /* block */  _networkActivityChangeBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSConditionLock * _readBufferLock;
    NSObject<OS_nw_error> * _readError;
    bool  _readScheduled;
    bool  _readable;
    NSString * _securityProtocol;
    NSArray * _serverCertificates;
    id /* block */  _serverTrustHandler;
    NSString * _service;
    NSString * _sourceApplicationBundleIdentifier;
    unsigned int  _timeout;
    bool  _usesOpportunisticSockets;
    bool  _writable;
    NSObject<OS_dispatch_group> * _writeGroup;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) bool allowsTrustPrompt;
@property (copy) id /* block */ bytesAvailableHandler;
@property (nonatomic, retain) NSArray *clientCertificates;
@property (nonatomic, copy) NSString *connectionServiceType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableEphemeralDiffieHellmanCiphers;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCellularConnection;
@property (nonatomic, readonly) bool isConstrained;
@property (nonatomic, readonly) bool isReadable;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, copy) NSString *networkAccountIdentifier;
@property (nonatomic, copy) id /* block */ networkActivityChangeBlock;
@property (nonatomic, readonly) NSString *remoteHostname;
@property (nonatomic, readonly) unsigned int remotePortNumber;
@property (nonatomic, readonly, copy) NSArray *serverCertificates;
@property (nonatomic, copy) id /* block */ serverTrustHandler;
@property (nonatomic, readonly, copy) NSString *service;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *sourceIPAddressString;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int timeout;
@property (nonatomic) bool usesOpportunisticSockets;

+ (id)log;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_closeWithErrorDomain:(id)arg1 code:(long long)arg2;
- (void)_configureTLS:(id)arg1;
- (id)_createConnectionWithEndpoint:(id)arg1 error:(int*)arg2;
- (void)_handleConnectionFailure:(int)arg1;
- (void)_handleConnectionReady;
- (id)_negotiatedSecurityProtocol;
- (void)_networkActivityEnded;
- (void)_networkActivityStarted;
- (void)_scheduleNextRead;
- (id)accountIdentifier;
- (bool)allowsTrustPrompt;
- (id /* block */)bytesAvailableHandler;
- (void)cancel;
- (id)clientCertificates;
- (void)close;
- (bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (id)connectionServiceType;
- (void)dealloc;
- (id)description;
- (bool)disableEphemeralDiffieHellmanCiphers;
- (void)enableThroughputMonitoring:(bool)arg1;
- (id)error;
- (id)init;
- (bool)isCellularConnection;
- (bool)isConstrained;
- (bool)isReadable;
- (bool)isValid;
- (bool)isWritable;
- (id)networkAccountIdentifier;
- (id /* block */)networkActivityChangeBlock;
- (long long)readBytesIntoBuffer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)registerForBytesAvailableWithHandler:(id /* block */)arg1;
- (id)remoteHostname;
- (unsigned int)remotePortNumber;
- (id)securityProtocol;
- (id)serverCertificates;
- (id /* block */)serverTrustHandler;
- (id)service;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAllowsTrustPrompt:(bool)arg1;
- (void)setBytesAvailableHandler:(id /* block */)arg1;
- (void)setClientCertificates:(id)arg1;
- (void)setConnectionServiceType:(id)arg1;
- (void)setDisableEphemeralDiffieHellmanCiphers:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setNetworkAccountIdentifier:(id)arg1;
- (void)setNetworkActivityChangeBlock:(id /* block */)arg1;
- (bool)setSecurityProtocol:(id)arg1;
- (void)setServerTrustHandler:(id /* block */)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setTimeout:(unsigned int)arg1;
- (void)setUsesOpportunisticSockets:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceIPAddressString;
- (unsigned int)timeout;
- (void)unregisterForBytesAvailable;
- (bool)usesOpportunisticSockets;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
