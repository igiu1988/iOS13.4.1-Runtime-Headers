/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying> {
    struct { 
        unsigned int has_statusCode : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_spatialEventLookupResults : 1; 
        unsigned int read_spatialPlaceLookupResults : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_spatialEventLookupResults : 1; 
        unsigned int wrote_spatialPlaceLookupResults : 1; 
        unsigned int wrote_statusCode : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _spatialEventLookupResults;
    NSMutableArray * _spatialPlaceLookupResults;
    int  _statusCode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *spatialEventLookupResults;
@property (nonatomic, retain) NSMutableArray *spatialPlaceLookupResults;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)spatialEventLookupResultType;
+ (Class)spatialPlaceLookupResultType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)_addNoFlagsSpatialEventLookupResult:(id)arg1;
- (void)_addNoFlagsSpatialPlaceLookupResult:(id)arg1;
- (void)_readSpatialEventLookupResults;
- (void)_readSpatialPlaceLookupResults;
- (void)addSpatialEventLookupResult:(id)arg1;
- (void)addSpatialPlaceLookupResult:(id)arg1;
- (void)clearSpatialEventLookupResults;
- (void)clearSpatialPlaceLookupResults;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setSpatialEventLookupResults:(id)arg1;
- (void)setSpatialPlaceLookupResults:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (id)spatialEventLookupResultAtIndex:(unsigned long long)arg1;
- (id)spatialEventLookupResults;
- (unsigned long long)spatialEventLookupResultsCount;
- (id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1;
- (id)spatialPlaceLookupResults;
- (unsigned long long)spatialPlaceLookupResultsCount;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
