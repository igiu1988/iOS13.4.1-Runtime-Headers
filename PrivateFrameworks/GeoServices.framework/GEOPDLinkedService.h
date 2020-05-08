/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLinkedService : PBCodable <NSCopying> {
    GEOPDEntity * _entity;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_entity : 1; 
        unsigned int read_hours : 1; 
        unsigned int read_placeInfo : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_entity : 1; 
        unsigned int wrote_hours : 1; 
        unsigned int wrote_placeInfo : 1; 
    }  _flags;
    NSMutableArray * _hours;
    GEOPDPlaceInfo * _placeInfo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDEntity *entity;
@property (nonatomic, readonly) bool hasEntity;
@property (nonatomic, readonly) bool hasPlaceInfo;
@property (nonatomic, retain) NSMutableArray *hours;
@property (nonatomic, retain) GEOPDPlaceInfo *placeInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)hoursType;
+ (bool)isValid:(id)arg1;
+ (id)linkedServicesForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsHours:(id)arg1;
- (void)_readEntity;
- (void)_readHours;
- (void)_readPlaceInfo;
- (void)addHours:(id)arg1;
- (void)clearHours;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entity;
- (bool)hasEntity;
- (bool)hasPlaceInfo;
- (unsigned long long)hash;
- (id)hours;
- (id)hoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)hoursCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeInfo;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setHours:(id)arg1;
- (void)setPlaceInfo:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
