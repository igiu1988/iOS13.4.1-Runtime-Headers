/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

@interface WPDScanManager : WPDManager <CBCentralManagerDelegate> {
    CBCentralManager * _centralManager;
    NSObject<OS_dispatch_queue> * _centralQueue;
    NSMutableDictionary * _connectionsInProgress;
    NSIndexSet * _currentScanners;
    bool  _isRanging;
    NSMutableDictionary * _peerRequests;
    NSMutableSet * _peripheralConnections;
    NSIndexSet * _rangingTypes;
    NSDictionary * _scanOptions;
    NSSet * _scanRequestHashes;
    NSMutableDictionary * _scanRequests;
    NSSet * _scanRuleHashes;
    bool  _scanning;
    bool  _scanningDisabled;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSMutableSet * _spyScanClients;
}

@property (retain) CBCentralManager *centralManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *centralQueue;
@property (retain) NSMutableDictionary *connectionsInProgress;
@property (retain) NSIndexSet *currentScanners;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRanging;
@property (retain) NSMutableDictionary *peerRequests;
@property (retain) NSMutableSet *peripheralConnections;
@property (nonatomic, readonly) NSIndexSet *rangingTypes;
@property (retain) NSDictionary *scanOptions;
@property (retain) NSSet *scanRequestHashes;
@property (retain) NSMutableDictionary *scanRequests;
@property (retain) NSSet *scanRuleHashes;
@property bool scanning;
@property bool scanningDisabled;
@property (nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) NSMutableSet *spyScanClients;
@property (readonly) Class superclass;

+ (long long)zonesAvailableForType:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)addPeerTrackingRequest:(id)arg1 forClient:(id)arg2;
- (id)addScanRequest:(id)arg1 forClient:(id)arg2;
- (void)addSpyScanClient:(id)arg1;
- (id)centralManager;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2;
- (void)centralManager:(id)arg1 didFindPeripheral:(id)arg2 forType:(id)arg3;
- (void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)centralQueue;
- (void)cleanup;
- (void)clearExistingConnections;
- (id)connectToPeripheral:(id)arg1 fromClient:(id)arg2 withOptions:(id)arg3;
- (id)connectionsInProgress;
- (id)currentScanners;
- (void)disconnectFromCentral:(id)arg1 forClient:(id)arg2;
- (id)disconnectFromPeripheral:(id)arg1 withSubscribedCharacteristics:(id)arg2 forClient:(id)arg3;
- (void)enableRanging:(bool)arg1;
- (id)generateStateDump;
- (id)getScanRequestsForClient:(id)arg1;
- (id)initWithServer:(id)arg1;
- (bool)isRanging;
- (void)logScanRequests:(id)arg1 method:(bool)arg2 window:(long long)arg3 interval:(long long)arg4;
- (id)peerRequests;
- (id)peripheralConnections;
- (id)rangingTypes;
- (void)removeAllPeerTrackingRequestsForClient:(id)arg1;
- (id)removePeerTrackingRequest:(id)arg1 checkZonesAvailable:(bool)arg2 forClient:(id)arg3;
- (void)removePeripheralConnection:(id)arg1 forClient:(id)arg2;
- (void)removePeripheralConnectionsForClient:(id)arg1;
- (id)removeScanRequest:(id)arg1 forClient:(id)arg2;
- (void)removeScanRequestsForClient:(id)arg1;
- (void)removeSpyScanClient:(id)arg1;
- (id)retrievePeripheralWithUUID:(id)arg1;
- (id)ruleHashesFromScanOptions:(id)arg1;
- (id)scanOptions;
- (bool)scanOptionsChanged:(id)arg1 ForRequests:(id)arg2;
- (id)scanRequestHashes;
- (id)scanRequestHashesFromScanRequests:(id)arg1;
- (id)scanRequests;
- (id)scanRuleHashes;
- (bool)scanning;
- (bool)scanningDisabled;
- (id)serverQueue;
- (void)setCentralManager:(id)arg1;
- (void)setCentralQueue:(id)arg1;
- (void)setConnectionsInProgress:(id)arg1;
- (void)setCurrentScanners:(id)arg1;
- (void)setIsRanging:(bool)arg1;
- (void)setPeerRequests:(id)arg1;
- (void)setPeripheralConnections:(id)arg1;
- (void)setScanOptions:(id)arg1;
- (void)setScanRequestHashes:(id)arg1;
- (void)setScanRequests:(id)arg1;
- (void)setScanRuleHashes:(id)arg1;
- (void)setScanning:(bool)arg1;
- (void)setScanningDisabled:(bool)arg1;
- (void)setServerQueue:(id)arg1;
- (void)setSpyScanClients:(id)arg1;
- (id)spyScanClients;
- (bool)startTrackingPeripheral:(id)arg1 ofType:(id)arg2;
- (void)stopTrackingPeripheral:(id)arg1 ofType:(id)arg2;
- (void)update;
- (bool)updateScanRules;
- (void)updateScanner;

@end
