/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBClassicManager : CBManager {
    id /* block */  _classicPeerDiscovered;
    id /* block */  _connectCallback;
    id /* block */  _connectRFCOMMCallback;
    bool  _connectable;
    id /* block */  _disconnectCallback;
    bool  _discoverable;
    NSMutableSet * _inquiryServices;
    id /* block */  _inquiryServicesAdded;
    bool  _inquiryState;
    bool  _isInquiryRunning;
    NSMapTable * _peers;
    long long  _powerState;
    id /* block */  _sdpRecordAdded;
    NSMutableDictionary * _sdpRecords;
    NSMutableSet * _sdpServices;
    id /* block */  _servicesAdded;
    bool  _testMode;
}

@property (nonatomic, copy) id /* block */ classicPeerDiscovered;
@property (copy) id /* block */ connectCallback;
@property (copy) id /* block */ connectRFCOMMCallback;
@property (readonly) bool connectable;
@property (copy) id /* block */ disconnectCallback;
@property (readonly) bool discoverable;
@property (nonatomic, readonly, retain) NSMutableSet *inquiryServices;
@property (nonatomic, copy) id /* block */ inquiryServicesAdded;
@property (readonly) bool inquiryState;
@property (nonatomic, readonly) bool isInquiryRunning;
@property (nonatomic, readonly, retain) NSMapTable *peers;
@property (readonly) long long powerState;
@property (nonatomic, copy) id /* block */ sdpRecordAdded;
@property (nonatomic, readonly, retain) NSMutableDictionary *sdpRecords;
@property (nonatomic, readonly, retain) NSMutableSet *sdpServices;
@property (nonatomic, copy) id /* block */ servicesAdded;
@property (nonatomic) bool testMode;

- (void).cxx_destruct;
- (void)addAAPClient:(unsigned short)arg1 aapClientAdded:(id /* block */)arg2;
- (void)addService:(id)arg1 sdpRecord:(id)arg2 sdpRecordAdded:(id /* block */)arg3;
- (void)addServices:(id)arg1 servicesAdded:(id /* block */)arg2;
- (void)addServicesToInquiryList:(id)arg1 servicesAdded:(id /* block */)arg2;
- (void)cancelPeerConnection:(id)arg1;
- (void)cancelPeerConnection:(id)arg1 force:(bool)arg2;
- (id /* block */)classicPeerDiscovered;
- (id)classicPeerWithInfo:(id)arg1;
- (id /* block */)connectCallback;
- (void)connectPeer:(id)arg1 options:(id)arg2;
- (id /* block */)connectRFCOMMCallback;
- (bool)connectable;
- (void)dealloc;
- (id /* block */)disconnectCallback;
- (bool)discoverable;
- (void)forEachClassicPeer:(id /* block */)arg1;
- (void)handleLocalDeviceStateUpdatedMsg:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePeerConnectionCompleted:(id)arg1;
- (void)handlePeerDisconnectionCompleted:(id)arg1;
- (void)handlePeerDiscovered:(id)arg1;
- (void)handleSDPRecordAdded:(id)arg1;
- (void)handleServicesAddedToInquiryList:(id)arg1;
- (void)handleServicesAddedToSDP:(id)arg1;
- (id)initWithQueue:(id)arg1 options:(id)arg2;
- (id)inquiryServices;
- (id /* block */)inquiryServicesAdded;
- (bool)inquiryState;
- (bool)isInquiryRunning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanClassicPeers;
- (id)peerWithIdentifier:(id)arg1;
- (id)peerWithInfo:(id)arg1;
- (id)peers;
- (long long)powerState;
- (void)removeAAPClient:(unsigned short)arg1;
- (void)removeAllServices;
- (void)removeAllServicesFromInquiryList;
- (void)removeService:(id)arg1;
- (void)removeServiceFromInquiryList:(id)arg1;
- (id)retrievePairedPeersWithOptions:(id)arg1;
- (id /* block */)sdpRecordAdded;
- (id)sdpRecords;
- (id)sdpServices;
- (id /* block */)servicesAdded;
- (void)setBTConnectable:(bool)arg1;
- (void)setBTDiscoverable:(bool)arg1;
- (void)setBTPowerState:(bool)arg1;
- (void)setClassicPeerDiscovered:(id /* block */)arg1;
- (void)setConnectCallback:(id /* block */)arg1;
- (void)setConnectRFCOMMCallback:(id /* block */)arg1;
- (void)setDisconnectCallback:(id /* block */)arg1;
- (void)setInquiryServicesAdded:(id /* block */)arg1;
- (void)setSdpRecordAdded:(id /* block */)arg1;
- (void)setServicesAdded:(id /* block */)arg1;
- (void)setTestMode:(bool)arg1;
- (void)startInquiryWithOptions:(id)arg1 classicPeerDiscovered:(id /* block */)arg2;
- (void)stopInquiry;
- (bool)testMode;

@end
