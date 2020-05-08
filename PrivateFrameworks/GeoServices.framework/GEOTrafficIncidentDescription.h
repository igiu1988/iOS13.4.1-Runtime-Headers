/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficIncidentDescription : PBCodable <NSCopying> {
    struct { 
        unsigned int read_incidentDescription : 1; 
        unsigned int read_language : 1; 
        unsigned int wrote_incidentDescription : 1; 
        unsigned int wrote_language : 1; 
    }  _flags;
    NSString * _incidentDescription;
    NSString * _language;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasIncidentDescription;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, retain) NSString *incidentDescription;
@property (nonatomic, retain) NSString *language;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readIncidentDescription;
- (void)_readLanguage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncidentDescription;
- (bool)hasLanguage;
- (unsigned long long)hash;
- (id)incidentDescription;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIncidentDescription:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
