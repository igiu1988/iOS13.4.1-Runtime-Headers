/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSignGuidance : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maneuverArrowOverride : 1; 
        unsigned int has_stackRanking : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_junctionInfo : 1; 
        unsigned int read_secondarySigns : 1; 
        unsigned int read_shieldName : 1; 
        unsigned int read_signDetails : 1; 
        unsigned int read_signTitles : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_junctionInfo : 1; 
        unsigned int wrote_secondarySigns : 1; 
        unsigned int wrote_shieldName : 1; 
        unsigned int wrote_signDetails : 1; 
        unsigned int wrote_signTitles : 1; 
        unsigned int wrote_maneuverArrowOverride : 1; 
        unsigned int wrote_stackRanking : 1; 
    }  _flags;
    GEOJunctionInfo * _junctionInfo;
    int  _maneuverArrowOverride;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _secondarySigns;
    GEONameInfo * _shieldName;
    NSMutableArray * _signDetails;
    NSMutableArray * _signTitles;
    unsigned int  _stackRanking;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasJunctionInfo;
@property (nonatomic) bool hasManeuverArrowOverride;
@property (nonatomic, readonly) bool hasShieldName;
@property (nonatomic) bool hasStackRanking;
@property (nonatomic, retain) GEOJunctionInfo *junctionInfo;
@property (nonatomic) int maneuverArrowOverride;
@property (nonatomic, retain) NSMutableArray *secondarySigns;
@property (nonatomic, retain) GEONameInfo *shieldName;
@property (nonatomic, retain) NSMutableArray *signDetails;
@property (nonatomic, retain) NSMutableArray *signTitles;
@property (nonatomic) unsigned int stackRanking;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)secondarySignType;
+ (Class)signDetailType;
+ (Class)signTitleType;

- (void).cxx_destruct;
- (int)StringAsManeuverArrowOverride:(id)arg1;
- (void)_addNoFlagsSecondarySign:(id)arg1;
- (void)_addNoFlagsSignDetail:(id)arg1;
- (void)_addNoFlagsSignTitle:(id)arg1;
- (void)_readJunctionInfo;
- (void)_readSecondarySigns;
- (void)_readShieldName;
- (void)_readSignDetails;
- (void)_readSignTitles;
- (void)addSecondarySign:(id)arg1;
- (void)addSignDetail:(id)arg1;
- (void)addSignTitle:(id)arg1;
- (void)clearSecondarySigns;
- (void)clearSignDetails;
- (void)clearSignTitles;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasJunctionInfo;
- (bool)hasManeuverArrowOverride;
- (bool)hasShieldName;
- (bool)hasStackRanking;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)junctionInfo;
- (int)maneuverArrowOverride;
- (id)maneuverArrowOverrideAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondarySignAtIndex:(unsigned long long)arg1;
- (id)secondarySigns;
- (unsigned long long)secondarySignsCount;
- (void)setHasManeuverArrowOverride:(bool)arg1;
- (void)setHasStackRanking:(bool)arg1;
- (void)setJunctionInfo:(id)arg1;
- (void)setManeuverArrowOverride:(int)arg1;
- (void)setSecondarySigns:(id)arg1;
- (void)setShieldName:(id)arg1;
- (void)setSignDetails:(id)arg1;
- (void)setSignTitles:(id)arg1;
- (void)setStackRanking:(unsigned int)arg1;
- (id)shieldName;
- (id)signDetailAtIndex:(unsigned long long)arg1;
- (id)signDetails;
- (unsigned long long)signDetailsCount;
- (id)signTitleAtIndex:(unsigned long long)arg1;
- (id)signTitles;
- (unsigned long long)signTitlesCount;
- (unsigned int)stackRanking;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
