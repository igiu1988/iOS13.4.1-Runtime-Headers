/* Generated by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCMiddlewareExceptionEvent : PBCodable <NSCopying> {
    NSData * _breadcrumb;
    unsigned int  _errorCode;
    unsigned int  _hardwareType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int hardwareType : 1; 
        unsigned int type : 1; 
        unsigned int version : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _type;
    NSData * _uuidReference;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *breadcrumb;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) unsigned int hardwareType;
@property (nonatomic, readonly) bool hasBreadcrumb;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasHardwareType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSData *uuidReference;
@property (nonatomic) unsigned int version;

- (id)breadcrumb;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (unsigned int)hardwareType;
- (bool)hasBreadcrumb;
- (bool)hasErrorCode;
- (bool)hasHardwareType;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasUuidReference;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBreadcrumb:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasHardwareType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (id)uuidReference;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
