/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueContainer : PBCodable <NSCopying> {
    int  _browseType;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _buildingIds;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_venueId : 1; 
        unsigned int has_browseType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_buildingIds : 1; 
        unsigned int read_label : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_buildingIds : 1; 
        unsigned int wrote_label : 1; 
        unsigned int wrote_muid : 1; 
        unsigned int wrote_venueId : 1; 
        unsigned int wrote_browseType : 1; 
    }  _flags;
    GEOPDVenueLabel * _label;
    unsigned long long  _muid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueId;
}

@property (nonatomic) int browseType;
@property (nonatomic, readonly) unsigned long long*buildingIds;
@property (nonatomic, readonly) unsigned long long buildingIdsCount;
@property (nonatomic) bool hasBrowseType;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasVenueId;
@property (nonatomic, retain) GEOPDVenueLabel *label;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned long long venueId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsBrowseType:(id)arg1;
- (void)_addNoFlagsBuildingId:(unsigned long long)arg1;
- (void)_readBuildingIds;
- (void)_readLabel;
- (void)addBuildingId:(unsigned long long)arg1;
- (int)browseType;
- (id)browseTypeAsString:(int)arg1;
- (unsigned long long)buildingIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)buildingIds;
- (unsigned long long)buildingIdsCount;
- (void)clearBuildingIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrowseType;
- (bool)hasLabel;
- (bool)hasMuid;
- (bool)hasVenueId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBrowseType:(int)arg1;
- (void)setBuildingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasBrowseType:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasVenueId:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setVenueId:(unsigned long long)arg1;
- (id)unknownFields;
- (unsigned long long)venueId;
- (void)writeTo:(id)arg1;

@end
