/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeFilter : PBCodable <NSCopying, NSSecureCoding, _INPBHomeFilter> {
    bool  __encodeLegacyGloryData;
    _INPBDataString * _accessory;
    int  _deviceType;
    NSArray * _entityIdentifiers;
    _INPBDataString * _entityName;
    int  _entityType;
    _INPBDataString * _group;
    struct { 
        unsigned int deviceType : 1; 
        unsigned int entityType : 1; 
        unsigned int isExcludeFilter : 1; 
        unsigned int outerDeviceType : 1; 
        unsigned int serviceType : 1; 
        unsigned int subServiceType : 1; 
    }  _has;
    _INPBDataString * _home;
    bool  _isExcludeFilter;
    _INPBDataString * _outerDeviceName;
    int  _outerDeviceType;
    _INPBDataString * _room;
    _INPBDataString * _scene;
    _INPBDataString * _service;
    int  _serviceType;
    int  _subServiceType;
    _INPBDataString * _zone;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, retain) _INPBDataString *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType;
@property (nonatomic, copy) NSArray *entityIdentifiers;
@property (nonatomic, readonly) unsigned long long entityIdentifiersCount;
@property (nonatomic, retain) _INPBDataString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, retain) _INPBDataString *group;
@property (nonatomic, readonly) bool hasAccessory;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasGroup;
@property (nonatomic, readonly) bool hasHome;
@property (nonatomic) bool hasIsExcludeFilter;
@property (nonatomic, readonly) bool hasOuterDeviceName;
@property (nonatomic) bool hasOuterDeviceType;
@property (nonatomic, readonly) bool hasRoom;
@property (nonatomic, readonly) bool hasScene;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasServiceType;
@property (nonatomic) bool hasSubServiceType;
@property (nonatomic, readonly) bool hasZone;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDataString *home;
@property (nonatomic) bool isExcludeFilter;
@property (nonatomic, retain) _INPBDataString *outerDeviceName;
@property (nonatomic) int outerDeviceType;
@property (nonatomic, retain) _INPBDataString *room;
@property (nonatomic, retain) _INPBDataString *scene;
@property (nonatomic, retain) _INPBDataString *service;
@property (nonatomic) int serviceType;
@property (nonatomic) int subServiceType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *zone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsOuterDeviceType:(id)arg1;
- (int)StringAsServiceType:(id)arg1;
- (int)StringAsSubServiceType:(id)arg1;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)accessory;
- (void)addEntityIdentifiers:(id)arg1;
- (void)clearEntityIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifiers;
- (id)entityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityIdentifiersCount;
- (id)entityName;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (id)group;
- (bool)hasAccessory;
- (bool)hasDeviceType;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasGroup;
- (bool)hasHome;
- (bool)hasIsExcludeFilter;
- (bool)hasOuterDeviceName;
- (bool)hasOuterDeviceType;
- (bool)hasRoom;
- (bool)hasScene;
- (bool)hasService;
- (bool)hasServiceType;
- (bool)hasSubServiceType;
- (bool)hasZone;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExcludeFilter;
- (id)outerDeviceName;
- (int)outerDeviceType;
- (id)outerDeviceTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)room;
- (id)scene;
- (id)service;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (void)setAccessory:(id)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setEntityIdentifiers:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setGroup:(id)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasIsExcludeFilter:(bool)arg1;
- (void)setHasOuterDeviceType:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setHasSubServiceType:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setIsExcludeFilter:(bool)arg1;
- (void)setOuterDeviceName:(id)arg1;
- (void)setOuterDeviceType:(int)arg1;
- (void)setRoom:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)setSubServiceType:(int)arg1;
- (void)setZone:(id)arg1;
- (int)subServiceType;
- (id)subServiceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;
- (id)zone;

@end
