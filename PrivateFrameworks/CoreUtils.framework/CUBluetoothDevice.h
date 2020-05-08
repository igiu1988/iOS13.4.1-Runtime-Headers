/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBluetoothDevice : NSObject {
    struct { 
        unsigned char bytes[6]; 
    }  _address;
    NSString * _addressString;
    int  _colorCode;
    unsigned int  _connectedServices;
    unsigned int  _deviceFlags;
    NSUUID * _identifier;
    bool  _magicPaired;
    NSString * _manufacturer;
    NSString * _modelNumber;
    NSString * _name;
    bool  _present;
    int  _primaryPlacement;
    unsigned int  _productIdentifier;
    int  _secondaryPlacement;
    bool  _supportsAACPService;
}

@property (nonatomic) struct { unsigned char x1[6]; } address;
@property (nonatomic, copy) NSString *addressString;
@property (nonatomic) int colorCode;
@property (nonatomic) unsigned int connectedServices;
@property (nonatomic) unsigned int deviceFlags;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) bool magicPaired;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool present;
@property (nonatomic) int primaryPlacement;
@property (nonatomic) unsigned int productIdentifier;
@property (nonatomic) int secondaryPlacement;
@property (nonatomic) bool supportsAACPService;

- (void).cxx_destruct;
- (struct { unsigned char x1[6]; })address;
- (id)addressString;
- (int)colorCode;
- (unsigned int)connectedServices;
- (id)description;
- (unsigned int)deviceFlags;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)magicPaired;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (bool)present;
- (int)primaryPlacement;
- (unsigned int)productIdentifier;
- (int)secondaryPlacement;
- (void)setAddress:(struct { unsigned char x1[6]; })arg1;
- (void)setAddressString:(id)arg1;
- (void)setColorCode:(int)arg1;
- (void)setConnectedServices:(unsigned int)arg1;
- (void)setDeviceFlags:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMagicPaired:(bool)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setPrimaryPlacement:(int)arg1;
- (void)setProductIdentifier:(unsigned int)arg1;
- (void)setSecondaryPlacement:(int)arg1;
- (void)setSupportsAACPService:(bool)arg1;
- (bool)supportsAACPService;

@end
