/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDOfflineArea : PBCodable <NSCopying> {
    NSMutableArray * _displayMapRegions;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayMapRegions : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_maximumAllowedMapRegion : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_displayMapRegions : 1; 
        unsigned int wrote_mapRegion : 1; 
        unsigned int wrote_maximumAllowedMapRegion : 1; 
    }  _flags;
    GEOMapRegion * _mapRegion;
    GEOMapRegion * _maximumAllowedMapRegion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *displayMapRegions;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasMaximumAllowedMapRegion;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) GEOMapRegion *maximumAllowedMapRegion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayMapRegionType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsDisplayMapRegion:(id)arg1;
- (void)_readDisplayMapRegions;
- (void)_readMapRegion;
- (void)_readMaximumAllowedMapRegion;
- (void)addDisplayMapRegion:(id)arg1;
- (void)clearDisplayMapRegions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegionAtIndex:(unsigned long long)arg1;
- (id)displayMapRegions;
- (unsigned long long)displayMapRegionsCount;
- (bool)hasMapRegion;
- (bool)hasMaximumAllowedMapRegion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (id)maximumAllowedMapRegion;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayMapRegions:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMaximumAllowedMapRegion:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
