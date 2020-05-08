/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBluetoothScalablePipe : NSObject <CBScalablePipeManagerDelegate, CUReadWriteRequestable> {
    struct channel { } * _btChannel;
    bool  _btEndpointRegistered;
    bool  _btEndpointRegistering;
    int  _btPeerHostState;
    bool  _btPeerKVORegistered;
    CBScalablePipe * _btPipe;
    CBScalablePipeManager * _btPipeManager;
    char * _btReadLeftoverBuf;
    char * _btReadLeftoverEnd;
    unsigned long long  _btReadLeftoverMaxLen;
    char * _btReadLeftoverPtr;
    struct channel_ring_desc { } * _btReadRing;
    struct channel_ring_desc { } * _btWriteRing;
    int  _channelFD;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _identifier;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    int  _peerHostState;
    id /* block */  _peerHostStateChangedHandler;
    NSUUID * _peerIdentifier;
    int  _priority;
    CUReadRequest * _readRequestCurrent;
    NSMutableArray * _readRequests;
    NSObject<OS_dispatch_source> * _readSource;
    bool  _readSuspended;
    int  _state;
    id /* block */  _stateChangedHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUWriteRequest * _writeRequestCurrent;
    NSMutableArray * _writeRequests;
    NSObject<OS_dispatch_source> * _writeSource;
    bool  _writeSuspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) int peerHostState;
@property (nonatomic, copy) id /* block */ peerHostStateChangedHandler;
@property (nonatomic, copy) NSUUID *peerIdentifier;
@property (nonatomic) int priority;
@property (nonatomic, readonly) int state;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_ensureStarted;
- (void)_ensureStopped:(id)arg1;
- (void)_handleBTPeerHostStateChanged;
- (void)_invalidate;
- (void)_prepareReadRequest:(id)arg1;
- (bool)_prepareWriteRequest:(id)arg1 error:(id*)arg2;
- (void)_processReads;
- (void)_processWrites;
- (int)_readBytes:(char *)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long*)arg4;
- (void)_setupPipe;
- (void)_tearDownPipe;
- (unsigned long long)_writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (int)_writeIOArray:(struct iovec {}**)arg1 ioCount:(int*)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)peerHostState;
- (id /* block */)peerHostStateChangedHandler;
- (id)peerIdentifier;
- (int)priority;
- (void)readWithRequest:(id)arg1;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeerHostStateChangedHandler:(id /* block */)arg1;
- (void)setPeerIdentifier:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (int)state;
- (id /* block */)stateChangedHandler;
- (void)writeWithRequest:(id)arg1;

@end
