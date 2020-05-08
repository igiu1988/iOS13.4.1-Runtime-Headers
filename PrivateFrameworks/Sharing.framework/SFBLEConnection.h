/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFBLEConnection : NSObject <WPNearbyDelegate> {
    bool  _acceptor;
    bool  _activateCalled;
    bool  _bleEncrypted;
    id /* block */  _bluetoothBandwidthChangedHandler;
    id /* block */  _bluetoothStateChangedHandler;
    NSMutableSet * _clients;
    CURetrier * _connectRetrier;
    double  _connectStartTime;
    bool  _connected;
    bool  _connecting;
    id /* block */  _connectionStateChangedHandler;
    SFBLEData * _currentData;
    id /* block */  _dataHandler;
    NSMutableArray * _dataSendQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    id /* block */  _invalidationHandler;
    bool  _latencyCritical;
    bool  _lePipeCapable;
    SFBLEDevice * _peerDevice;
    unsigned int  _sessionFlags;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    WPNearby * _wpNearby;
}

@property (nonatomic) bool acceptor;
@property (nonatomic) bool bleEncrypted;
@property (nonatomic, copy) id /* block */ bluetoothBandwidthChangedHandler;
@property (nonatomic, copy) id /* block */ bluetoothStateChangedHandler;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, copy) id /* block */ connectionStateChangedHandler;
@property (nonatomic, copy) id /* block */ dataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) bool latencyCritical;
@property (nonatomic) bool lePipeCapable;
@property (nonatomic, retain) SFBLEDevice *peerDevice;
@property (nonatomic) unsigned int sessionFlags;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanupQueuedData:(int)arg1;
- (void)_connectIfNeeded;
- (void)_invalidate;
- (void)_processQueuedData;
- (bool)acceptor;
- (void)activate;
- (void)activateDirect;
- (void)addClient:(id)arg1;
- (bool)bleEncrypted;
- (id /* block */)bluetoothBandwidthChangedHandler;
- (id /* block */)bluetoothStateChangedHandler;
- (long long)connectionState;
- (id /* block */)connectionStateChangedHandler;
- (id /* block */)dataHandler;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)initWithDevice:(id)arg1 acceptor:(bool)arg2;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (bool)latencyCritical;
- (bool)lePipeCapable;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)arg1;
- (void)nearbyDidUpdateState:(id)arg1;
- (id)peerDevice;
- (bool)removeClient:(id)arg1;
- (void)sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDataDirect:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)sessionFlags;
- (void)setAcceptor:(bool)arg1;
- (void)setBleEncrypted:(bool)arg1;
- (void)setBluetoothBandwidthChangedHandler:(id /* block */)arg1;
- (void)setBluetoothStateChangedHandler:(id /* block */)arg1;
- (void)setConnectionStateChangedHandler:(id /* block */)arg1;
- (void)setDataHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLatencyCritical:(bool)arg1;
- (void)setLePipeCapable:(bool)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setSessionFlags:(unsigned int)arg1;

@end
