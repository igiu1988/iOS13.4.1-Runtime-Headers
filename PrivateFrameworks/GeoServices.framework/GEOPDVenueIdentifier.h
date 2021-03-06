/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueIdentifier : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _containedBys;
    unsigned long long  _featureId;
    unsigned long long  _fixtureId;
    struct { 
        unsigned int has_buildingId : 1; 
        unsigned int has_featureId : 1; 
        unsigned int has_fixtureId : 1; 
        unsigned int has_geminiId : 1; 
        unsigned int has_levelId : 1; 
        unsigned int has_unitId : 1; 
        unsigned int has_venueGeminiId : 1; 
        unsigned int has_venueId : 1; 
        unsigned int has_levelOrdinal : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_containedBys : 1; 
        unsigned int read_sectionIds : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_containedBys : 1; 
        unsigned int wrote_sectionIds : 1; 
        unsigned int wrote_buildingId : 1; 
        unsigned int wrote_featureId : 1; 
        unsigned int wrote_fixtureId : 1; 
        unsigned int wrote_geminiId : 1; 
        unsigned int wrote_levelId : 1; 
        unsigned int wrote_unitId : 1; 
        unsigned int wrote_venueGeminiId : 1; 
        unsigned int wrote_venueId : 1; 
        unsigned int wrote_levelOrdinal : 1; 
    }  _flags;
    unsigned long long  _geminiId;
    unsigned long long  _levelId;
    int  _levelOrdinal;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sectionIds;
    unsigned long long  _unitId;
    PBUnknownFields * _unknownFields;
    unsigned long long  _venueGeminiId;
    unsigned long long  _venueId;
}

@property (nonatomic) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long*containedBys;
@property (nonatomic, readonly) unsigned long long containedBysCount;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic) unsigned long long fixtureId;
@property (nonatomic) unsigned long long geminiId;
@property (nonatomic) bool hasBuildingId;
@property (nonatomic) bool hasFeatureId;
@property (nonatomic) bool hasFixtureId;
@property (nonatomic) bool hasGeminiId;
@property (nonatomic) bool hasLevelId;
@property (nonatomic) bool hasLevelOrdinal;
@property (nonatomic) bool hasUnitId;
@property (nonatomic) bool hasVenueGeminiId;
@property (nonatomic) bool hasVenueId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) int levelOrdinal;
@property (nonatomic, readonly) unsigned long long*sectionIds;
@property (nonatomic, readonly) unsigned long long sectionIdsCount;
@property (nonatomic) unsigned long long unitId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned long long venueGeminiId;
@property (nonatomic) unsigned long long venueId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsContainedBy:(unsigned long long)arg1;
- (void)_addNoFlagsSectionId:(unsigned long long)arg1;
- (void)_readContainedBys;
- (void)_readSectionIds;
- (void)addContainedBy:(unsigned long long)arg1;
- (void)addSectionId:(unsigned long long)arg1;
- (unsigned long long)buildingId;
- (void)clearContainedBys;
- (void)clearSectionIds;
- (void)clearUnknownFields:(bool)arg1;
- (unsigned long long)containedByAtIndex:(unsigned long long)arg1;
- (unsigned long long*)containedBys;
- (unsigned long long)containedBysCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)featureId;
- (unsigned long long)fixtureId;
- (unsigned long long)geminiId;
- (bool)hasBuildingId;
- (bool)hasFeatureId;
- (bool)hasFixtureId;
- (bool)hasGeminiId;
- (bool)hasLevelId;
- (bool)hasLevelOrdinal;
- (bool)hasUnitId;
- (bool)hasVenueGeminiId;
- (bool)hasVenueId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)levelId;
- (int)levelOrdinal;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sectionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)sectionIds;
- (unsigned long long)sectionIdsCount;
- (void)setBuildingId:(unsigned long long)arg1;
- (void)setContainedBys:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setFeatureId:(unsigned long long)arg1;
- (void)setFixtureId:(unsigned long long)arg1;
- (void)setGeminiId:(unsigned long long)arg1;
- (void)setHasBuildingId:(bool)arg1;
- (void)setHasFeatureId:(bool)arg1;
- (void)setHasFixtureId:(bool)arg1;
- (void)setHasGeminiId:(bool)arg1;
- (void)setHasLevelId:(bool)arg1;
- (void)setHasLevelOrdinal:(bool)arg1;
- (void)setHasUnitId:(bool)arg1;
- (void)setHasVenueGeminiId:(bool)arg1;
- (void)setHasVenueId:(bool)arg1;
- (void)setLevelId:(unsigned long long)arg1;
- (void)setLevelOrdinal:(int)arg1;
- (void)setSectionIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setUnitId:(unsigned long long)arg1;
- (void)setVenueGeminiId:(unsigned long long)arg1;
- (void)setVenueId:(unsigned long long)arg1;
- (unsigned long long)unitId;
- (id)unknownFields;
- (unsigned long long)venueGeminiId;
- (unsigned long long)venueId;
- (void)writeTo:(id)arg1;

@end
