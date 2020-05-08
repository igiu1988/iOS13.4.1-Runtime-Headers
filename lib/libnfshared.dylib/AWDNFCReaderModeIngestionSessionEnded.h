/* Generated by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCReaderModeIngestionSessionEnded : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasDuration;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end