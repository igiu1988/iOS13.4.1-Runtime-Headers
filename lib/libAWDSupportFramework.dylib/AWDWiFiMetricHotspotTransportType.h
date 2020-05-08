/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricHotspotTransportType : PBCodable <NSCopying> {
    unsigned int  _bt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bt : 1; 
        unsigned int usb : 1; 
        unsigned int wifi : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _usb;
    unsigned int  _wifi;
}

@property (nonatomic) unsigned int bt;
@property (nonatomic) bool hasBt;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUsb;
@property (nonatomic) bool hasWifi;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int usb;
@property (nonatomic) unsigned int wifi;

- (unsigned int)bt;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBt;
- (bool)hasTimestamp;
- (bool)hasUsb;
- (bool)hasWifi;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBt:(unsigned int)arg1;
- (void)setHasBt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUsb:(bool)arg1;
- (void)setHasWifi:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsb:(unsigned int)arg1;
- (void)setWifi:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)usb;
- (unsigned int)wifi;
- (void)writeTo:(id)arg1;

@end
