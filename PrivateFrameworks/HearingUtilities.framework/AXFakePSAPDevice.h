/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface AXFakePSAPDevice : AXPSAPDevice {
    bool  _connected;
    unsigned long long  _deviceType;
    unsigned long long  _excludedProperties;
    bool  _isConnecting;
    NSMutableArray * _leftFakePrograms;
    NSString * _leftFirmwareVersion;
    NSString * _leftHardwareVersion;
    NSString * _leftUUID;
    NSArray * _manufacturer;
    NSArray * _model;
    NSString * _name;
    NSMutableArray * _rightFakePrograms;
    NSString * _rightFirmwareVersion;
    NSString * _rightHardwareVersion;
    NSString * _rightUUID;
    unsigned long long  _type;
    id /* block */  _writeBlock;
    CBPeripheral * leftPeripheral;
    CBPeripheral * rightPeripheral;
}

@property (nonatomic) bool connected;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned long long excludedProperties;
@property (nonatomic) bool isConnecting;
@property (nonatomic, retain) NSString *leftFirmwareVersion;
@property (nonatomic, retain) NSString *leftHardwareVersion;
@property (nonatomic, retain) CBPeripheral *leftPeripheral;
@property (nonatomic, retain) NSString *leftUUID;
@property (nonatomic, retain) NSArray *manufacturer;
@property (nonatomic, retain) NSArray *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *rightFirmwareVersion;
@property (nonatomic, retain) NSString *rightHardwareVersion;
@property (nonatomic, retain) CBPeripheral *rightPeripheral;
@property (nonatomic, retain) NSString *rightUUID;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)availablePropertiesForPeripheral:(id)arg1;
- (void)connect;
- (bool)connected;
- (void)createPrograms;
- (void)dealloc;
- (bool)deviceSupportsProperty:(unsigned long long)arg1;
- (unsigned long long)deviceType;
- (bool)didLoadBasicProperties;
- (bool)didLoadRequiredProperties;
- (void)disconnect;
- (unsigned long long)excludedProperties;
- (bool)hasConnection;
- (id)initWithDeviceType:(unsigned long long)arg1;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isFakeDevice;
- (bool)isLeftConnected;
- (bool)isPersistent;
- (bool)isRightConnected;
- (bool)leftAvailable;
- (id)leftFirmwareVersion;
- (id)leftHardwareVersion;
- (id)leftPeripheral;
- (id)leftPrograms;
- (id)leftUUID;
- (id)manufacturer;
- (id)manufacturerForType;
- (id)model;
- (id)modelForType;
- (id)name;
- (void)persist;
- (id)persistentRepresentation;
- (bool)programsListsAreEqual;
- (bool)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;
- (void)registerWriteBlock:(id /* block */)arg1;
- (bool)rightAvailable;
- (id)rightFirmwareVersion;
- (id)rightHardwareVersion;
- (id)rightPeripheral;
- (id)rightPrograms;
- (id)rightUUID;
- (void)setConnected:(bool)arg1;
- (void)setDeviceType:(unsigned long long)arg1;
- (void)setExcludedProperties:(unsigned long long)arg1;
- (void)setIsConnecting:(bool)arg1;
- (void)setLeftFirmwareVersion:(id)arg1;
- (void)setLeftHardwareVersion:(id)arg1;
- (void)setLeftPeripheral:(id)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNewName:(id)arg1;
- (void)setRightFirmwareVersion:(id)arg1;
- (void)setRightHardwareVersion:(id)arg1;
- (void)setRightPeripheral:(id)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (bool)showCombinedPrograms;
- (unsigned long long)type;
- (id)valueForProperty:(unsigned long long)arg1;
- (void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;
- (void)writeSignedInt:(BOOL)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3;

@end
