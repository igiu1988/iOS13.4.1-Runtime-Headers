/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPEndpoint : NSObject <NSSecureCoding> {
    SFDevice * _bleDevice;
    CUBonjourDevice * _bonjourDevice;
    NSString * _homeKitUserIdentifier;
    unsigned int  _hotspotInfo;
    NSString * _identifier;
    IDSDevice * _idsDevice;
    NSString * _idsDeviceIdentifier;
    int  _linkType;
    NSString * _mediaRemoteIdentifier;
    NSString * _mediaRouteIdentifier;
    NSString * _model;
    NSString * _name;
    bool  _present;
    int  _proximity;
    NSDictionary * _serviceInfo;
    NSString * _serviceType;
    NSArray * _serviceTypes;
    NSString * _sourceVersion;
    unsigned long long  _statusFlags;
}

@property (nonatomic, retain) SFDevice *bleDevice;
@property (nonatomic, retain) CUBonjourDevice *bonjourDevice;
@property (nonatomic, readonly, copy) NSString *homeKitUserIdentifier;
@property (nonatomic, readonly) unsigned int hotspotInfo;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) IDSDevice *idsDevice;
@property (nonatomic, copy) NSString *idsDeviceIdentifier;
@property (nonatomic) int linkType;
@property (nonatomic, copy) NSString *mediaRemoteIdentifier;
@property (nonatomic, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool present;
@property (nonatomic, readonly) int proximity;
@property (nonatomic, readonly, copy) NSDictionary *serviceInfo;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (nonatomic, copy) NSArray *serviceTypes;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic) unsigned long long statusFlags;

+ (id)nullEndpoint;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bleDevice;
- (id)bonjourDevice;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKitUserIdentifier;
- (unsigned int)hotspotInfo;
- (id)identifier;
- (id)idsDevice;
- (id)idsDeviceIdentifier;
- (id)initWithCoder:(id)arg1;
- (int)linkType;
- (id)mediaRemoteIdentifier;
- (id)mediaRouteIdentifier;
- (id)model;
- (id)name;
- (bool)present;
- (int)proximity;
- (bool)removeBonjourDevice:(id)arg1;
- (unsigned int)removeIDSDevice;
- (bool)removeSFDevice:(id)arg1;
- (id)serviceInfo;
- (id)serviceType;
- (id)serviceTypes;
- (void)setBleDevice:(id)arg1;
- (void)setBonjourDevice:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDevice:(id)arg1;
- (void)setIdsDeviceIdentifier:(id)arg1;
- (void)setLinkType:(int)arg1;
- (void)setMediaRemoteIdentifier:(id)arg1;
- (void)setMediaRouteIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setServiceTypes:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setStatusFlags:(unsigned long long)arg1;
- (id)sourceVersion;
- (unsigned long long)statusFlags;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithIDSDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;

@end
