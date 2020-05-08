/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRMSPairingSession : NSObject <NSNetServiceDelegate, TVRMSPairingServerDelegate, TVRMSPairingSession> {
    NSString * _advertisedAppName;
    NSString * _advertisedDeviceModel;
    NSString * _advertisedDeviceName;
    <TVRMSPairingSessionDelegate> * _delegate;
    TVRMSPairingServer * _pairingServer;
    NSString * _passcode;
}

@property (nonatomic, retain) NSString *advertisedAppName;
@property (nonatomic, retain) NSString *advertisedDeviceModel;
@property (nonatomic, retain) NSString *advertisedDeviceName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVRMSPairingSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *passcode;
@property (readonly) Class superclass;

+ (id)localPairingSession;
+ (id)proxyPairingSession;

- (void).cxx_destruct;
- (id)_expectedPasscodeHashForPasscode:(id)arg1 publicKey:(id)arg2;
- (id)_generatePublicKey;
- (id)_pairingNetServiceName;
- (void)_startBonjourAdvertisingWithPublicKey:(id)arg1 httpServerPort:(unsigned short)arg2;
- (id)advertisedAppName;
- (id)advertisedDeviceModel;
- (id)advertisedDeviceName;
- (void)beginPairing;
- (void)dealloc;
- (id)delegate;
- (void)endPairing;
- (id)init;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3;
- (void)pairingServerDidFail:(id)arg1;
- (id)passcode;
- (void)setAdvertisedAppName:(id)arg1;
- (void)setAdvertisedDeviceModel:(id)arg1;
- (void)setAdvertisedDeviceName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscode:(id)arg1;

@end
