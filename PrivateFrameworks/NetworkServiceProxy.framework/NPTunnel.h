/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnel : NSObject {
    NSPAppRule * _appRule;
    NSDate * _connectionStartDate;
    long long  _connectionState;
    <NPTunnelDelegate> * _delegate;
    bool  _disableIdleTimeout;
    NSObject<OS_nw_endpoint> * _endpoint;
    bool  _eof;
    int  _error;
    long long  _fallbackReason;
    NSMutableDictionary * _flows;
    bool  _handledDisconnected;
    NSUUID * _identifier;
    void * _idleTimer;
    bool  _isCancelled;
    bool  _isReadyForData;
    bool  _isTFOProbeSucceeded;
    NSObject<OS_nw_endpoint> * _localEndpoint;
    NSObject<OS_nw_parameters> * _parameters;
    NSObject<OS_nw_path> * _path;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  _protocol;
    NSObject<OS_dispatch_data> * _savedData;
    double  _timeToFirstByte;
    double  _timeToFirstRequest;
    unsigned long long * _timestamps;
}

@property (nonatomic, readonly) NSPAppRule *appRule;
@property (nonatomic, readonly) bool canHandleMoreData;
@property (nonatomic, retain) NSDate *connectionStartDate;
@property (nonatomic) long long connectionState;
@property (nonatomic, readonly) <NPTunnelDelegate> *delegate;
@property (nonatomic) bool disableIdleTimeout;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic) bool eof;
@property (nonatomic) int error;
@property (nonatomic) long long fallbackReason;
@property (nonatomic, readonly) NSMutableDictionary *flows;
@property (nonatomic) bool handledDisconnected;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long initialWindowSize;
@property (nonatomic) bool isCancelled;
@property (nonatomic, readonly) bool isConnectionAlive;
@property (nonatomic, readonly) bool isReadyForData;
@property (nonatomic, readonly) bool isTFOProbeSucceeded;
@property (nonatomic, retain) NSObject<OS_nw_endpoint> *localEndpoint;
@property (nonatomic, readonly) NSObject<OS_nw_interface> *outputInterface;
@property (nonatomic, readonly) NSObject<OS_nw_parameters> *parameters;
@property (nonatomic, retain) NSObject<OS_nw_path> *path;
@property (nonatomic, readonly) struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*protocol;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) double timeToFirstRequest;
@property (nonatomic, readonly) unsigned long long*timestamps;

+ (void)initializeProtocol;

- (void).cxx_destruct;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (bool)addNewFlow:(id)arg1;
- (unsigned long long)allocateFlowID;
- (id)appRule;
- (bool)canHandleMoreData;
- (void)cancelConnection;
- (void)closeFlow:(id)arg1;
- (id)connectionStartDate;
- (long long)connectionState;
- (id)createConnectionInfo;
- (void)dealloc;
- (id)delegate;
- (void)destroyConnection;
- (bool)disableIdleTimeout;
- (id)endpoint;
- (bool)eof;
- (int)error;
- (long long)fallbackReason;
- (bool)flowIsFirstFlow:(id)arg1;
- (id)flows;
- (void)handleCanHandleMoreData;
- (void)handleConnected;
- (void)handleConnectionIsDisconnected;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)handleDisconnected;
- (void)handleEOF;
- (void)handleFallbackForFlow:(id)arg1;
- (id)handleFlowClosed:(unsigned long long)arg1 withFallbackReason:(long long)arg2;
- (void)handleFlowUsedTunnel;
- (void)handleInputAvailable;
- (void)handleOutputAvailable;
- (void)handleReadData:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1;
- (void)handleReady;
- (bool)handledDisconnected;
- (bool)hasFlow:(unsigned long long)arg1;
- (id)identifier;
- (void)increaseWindowSizeForFlow:(unsigned long long)arg1 byBytes:(unsigned long long)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 delegate:(id)arg5;
- (unsigned long long)initialWindowSize;
- (bool)isCancelled;
- (bool)isConnectionAlive;
- (bool)isReadyForData;
- (bool)isTFOProbeSucceeded;
- (id)localEndpoint;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (id)outputInterface;
- (id)parameters;
- (id)path;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)protocol;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (void)removeFlow:(unsigned long long)arg1;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)sendData:(id)arg1 toClientFlow:(unsigned long long)arg2;
- (void)setConnectionStartDate:(id)arg1;
- (void)setConnectionState:(long long)arg1;
- (void)setDisableIdleTimeout:(bool)arg1;
- (void)setEof:(bool)arg1;
- (void)setError:(int)arg1;
- (void)setFallbackReason:(long long)arg1;
- (void)setHandledDisconnected:(bool)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setTimeToFirstByte:(double)arg1;
- (void)setTimeToFirstRequest:(double)arg1;
- (bool)start;
- (void)startIdleTimer;
- (void)teardownOutputHandler;
- (double)timeToFirstByte;
- (double)timeToFirstRequest;
- (unsigned long long*)timestamps;
- (void)write:(id)arg1;
- (void)writeInitialData;

@end
