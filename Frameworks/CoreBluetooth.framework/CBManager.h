/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    NSData * _advertisingAddress;
    long long  _advertisingAddressType;
    long long  _authorization;
    CBXpcConnection * _connection;
    NSString * _localAddressString;
    NSString * _localName;
    CBPairingAgent * _pairingAgent;
    long long  _state;
    bool  _tccComplete;
}

@property (nonatomic, copy) NSData *advertisingAddress;
@property (nonatomic, readonly) long long advertisingAddressType;
@property (nonatomic) long long authorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *localAddressString;
@property (readonly) NSString *localName;
@property (nonatomic, readonly, retain) CBPairingAgent *sharedPairingAgent;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool tccComplete;

+ (long long)authorization;

- (void).cxx_destruct;
- (void)_handleAdvertisingAddressChanged:(id)arg1;
- (id)advertisingAddress;
- (long long)advertisingAddressType;
- (long long)authorization;
- (void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2;
- (void)dealloc;
- (void)doneWithTCC;
- (void)extractLocalDeviceStatesDictionary:(id)arg1;
- (unsigned int)getAppSDKVersion;
- (void)handleLocalDeviceStateUpdatedMsg:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleStateUpdatedMsg:(id)arg1;
- (id)initInternal;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)localAddressString;
- (id)localName;
- (id)peerWithInfo:(id)arg1;
- (void)performTCCCheck:(id)arg1;
- (bool)sendDebugMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (bool)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (bool)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)setAdvertisingAddress:(id)arg1;
- (void)setAuthorization:(long long)arg1;
- (void)setConnectionTargetQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTccComplete:(bool)arg1;
- (id)sharedPairingAgent;
- (void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3;
- (long long)state;
- (bool)tccComplete;
- (void)triggerBTErrorReport:(long long)arg1;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end
