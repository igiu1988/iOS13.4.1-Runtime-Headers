/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
 */

@interface NRDevicePairingProperties : NRDeviceProperties {
    NSData * _bluetoothMACAddress;
    NSData * _outOfBandKey;
    bool  _pairWithSPPLink;
    bool  _wasInitiallySetupUsingIDSPairing;
}

@property (nonatomic, retain) NSData *bluetoothMACAddress;
@property (nonatomic, retain) NSData *outOfBandKey;
@property (nonatomic) bool pairWithSPPLink;
@property (nonatomic) bool wasInitiallySetupUsingIDSPairing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bluetoothMACAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)outOfBandKey;
- (bool)pairWithSPPLink;
- (void)setBluetoothMACAddress:(id)arg1;
- (void)setOutOfBandKey:(id)arg1;
- (void)setPairWithSPPLink:(bool)arg1;
- (void)setWasInitiallySetupUsingIDSPairing:(bool)arg1;
- (bool)wasInitiallySetupUsingIDSPairing;

@end
