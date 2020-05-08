/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding> {
    bool  _bluetoothCloudPaired;
    NSUUID * _bluetoothID;
    NSData * _hintToken;
    bool  _keyExists;
    long long  _majorOSVersion;
    NSString * _modelDescription;
    NSString * _modelName;
    bool  _placeholder;
    NSUUID * _proxyBluetoothID;
    NSDictionary * _results;
    bool  _supportsAdvertisingUnlocked;
    bool  _supportsAlwaysDirect;
    bool  _supportsApproveIcon;
    bool  _supportsApproveWithWatch;
    bool  _supportsConnectionCache;
    bool  _supportsEncryption;
    bool  _supportsHEIC;
    bool  _unlockEnabled;
}

@property (nonatomic) bool bluetoothCloudPaired;
@property (nonatomic, retain) NSUUID *bluetoothID;
@property (nonatomic, retain) NSData *hintToken;
@property (nonatomic) bool keyExists;
@property (nonatomic) long long majorOSVersion;
@property (nonatomic, copy) NSString *modelDescription;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic) bool placeholder;
@property (nonatomic, copy) NSUUID *proxyBluetoothID;
@property (nonatomic, retain) NSDictionary *results;
@property (nonatomic) bool supportsAdvertisingUnlocked;
@property (nonatomic) bool supportsAlwaysDirect;
@property (nonatomic) bool supportsApproveIcon;
@property (nonatomic) bool supportsApproveWithWatch;
@property (nonatomic) bool supportsConnectionCache;
@property (nonatomic) bool supportsEncryption;
@property (nonatomic) bool supportsHEIC;
@property (nonatomic, readonly) long long type;
@property (nonatomic) bool unlockEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)bluetoothCloudPaired;
- (id)bluetoothID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hintToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)keyExists;
- (long long)majorOSVersion;
- (id)modelDescription;
- (id)modelName;
- (bool)placeholder;
- (id)proxyBluetoothID;
- (id)results;
- (void)setBluetoothCloudPaired:(bool)arg1;
- (void)setBluetoothID:(id)arg1;
- (void)setHintToken:(id)arg1;
- (void)setKeyExists:(bool)arg1;
- (void)setMajorOSVersion:(long long)arg1;
- (void)setModelDescription:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setProxyBluetoothID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSupportsAdvertisingUnlocked:(bool)arg1;
- (void)setSupportsAlwaysDirect:(bool)arg1;
- (void)setSupportsApproveIcon:(bool)arg1;
- (void)setSupportsApproveWithWatch:(bool)arg1;
- (void)setSupportsConnectionCache:(bool)arg1;
- (void)setSupportsEncryption:(bool)arg1;
- (void)setSupportsHEIC:(bool)arg1;
- (void)setUnlockEnabled:(bool)arg1;
- (bool)supportsAdvertisingUnlocked;
- (bool)supportsAlwaysDirect;
- (bool)supportsApproveIcon;
- (bool)supportsApproveWithWatch;
- (bool)supportsConnectionCache;
- (bool)supportsEncryption;
- (bool)supportsHEIC;
- (long long)type;
- (bool)unlockEnabled;

@end
