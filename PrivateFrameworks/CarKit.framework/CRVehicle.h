/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicle : NSObject <NSSecureCoding> {
    NSString * _PPID;
    NSSet * _accessoryProtocols;
    long long  _albumArtUserPreference;
    NSString * _bluetoothAddress;
    NSString * _carplayWiFiUUID;
    NSData * _certificateSerialNumber;
    unsigned long long  _enhancedIntegrationStatus;
    NSUUID * _identifier;
    NSString * _internalNotes;
    NSDate * _lastConnectedDate;
    unsigned long long  _pairingStatus;
    bool  _supportsEnhancedIntegration;
    NSString * _vehicleModelName;
    NSString * _vehicleName;
}

@property (nonatomic, retain) NSString *PPID;
@property (nonatomic, retain) NSSet *accessoryProtocols;
@property (nonatomic) long long albumArtUserPreference;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSString *carplayWiFiUUID;
@property (nonatomic, retain) NSData *certificateSerialNumber;
@property (nonatomic) unsigned long long enhancedIntegrationStatus;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSString *internalNotes;
@property (nonatomic, readonly) bool isEnhancedIntegrationEnabled;
@property (nonatomic, readonly) bool isPaired;
@property (nonatomic, retain) NSDate *lastConnectedDate;
@property (nonatomic) unsigned long long pairingStatus;
@property (nonatomic) bool supportsEnhancedIntegration;
@property (nonatomic, retain) NSString *vehicleModelName;
@property (nonatomic, retain) NSString *vehicleName;

+ (bool)supportsSecureCoding;
+ (id)vehicleForVehicleAccessory:(id)arg1;

- (void).cxx_destruct;
- (id)PPID;
- (id)_enhancedIntegrationDebugDescription;
- (id)_pairingDebugDescription;
- (id)accessoryProtocols;
- (long long)albumArtUserPreference;
- (id)bluetoothAddress;
- (id)carplayWiFiUUID;
- (id)certificateSerialNumber;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)enhancedIntegrationStatus;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (id)internalNotes;
- (bool)isEnhancedIntegrationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (id)lastConnectedDate;
- (void)mergeAttributesFromVehicle:(id)arg1;
- (unsigned long long)pairingStatus;
- (void)setAccessoryProtocols:(id)arg1;
- (void)setAlbumArtUserPreference:(long long)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCarplayWiFiUUID:(id)arg1;
- (void)setCertificateSerialNumber:(id)arg1;
- (void)setEnhancedIntegrationStatus:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalNotes:(id)arg1;
- (void)setLastConnectedDate:(id)arg1;
- (void)setPPID:(id)arg1;
- (void)setPairingStatus:(unsigned long long)arg1;
- (void)setSupportsEnhancedIntegration:(bool)arg1;
- (void)setVehicleModelName:(id)arg1;
- (void)setVehicleName:(id)arg1;
- (bool)supportsEnhancedIntegration;
- (id)vehicleModelName;
- (id)vehicleName;

@end
