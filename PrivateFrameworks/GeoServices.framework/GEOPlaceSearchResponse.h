/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int has_turnaroundTime : 1; 
        unsigned int has_statusCodeInfo : 1; 
        unsigned int has_isChainResultSet : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_namedFeatures : 1; 
        unsigned int read_nearbySectionHeader : 1; 
        unsigned int read_placeResults : 1; 
        unsigned int read_suggestionEntryLists : 1; 
        unsigned int read_suggestionMetadata : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_mapRegion : 1; 
        unsigned int wrote_namedFeatures : 1; 
        unsigned int wrote_nearbySectionHeader : 1; 
        unsigned int wrote_placeResults : 1; 
        unsigned int wrote_suggestionEntryLists : 1; 
        unsigned int wrote_suggestionMetadata : 1; 
        unsigned int wrote_turnaroundTime : 1; 
        unsigned int wrote_statusCodeInfo : 1; 
        unsigned int wrote_status : 1; 
        unsigned int wrote_isChainResultSet : 1; 
    }  _flags;
    bool  _isChainResultSet;
    GEOMapRegion * _mapRegion;
    NSMutableArray * _namedFeatures;
    NSString * _nearbySectionHeader;
    NSMutableArray * _placeResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _status;
    int  _statusCodeInfo;
    NSMutableArray * _suggestionEntryLists;
    NSData * _suggestionMetadata;
    double  _turnaroundTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasNearbySectionHeader;
@property (nonatomic) bool hasStatusCodeInfo;
@property (nonatomic, readonly) bool hasSuggestionMetadata;
@property (nonatomic) bool hasTurnaroundTime;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSMutableArray *namedFeatures;
@property (nonatomic, retain) NSString *nearbySectionHeader;
@property (nonatomic, retain) NSMutableArray *placeResults;
@property (nonatomic) int status;
@property (nonatomic) int statusCodeInfo;
@property (nonatomic, retain) NSMutableArray *suggestionEntryLists;
@property (nonatomic, retain) NSData *suggestionMetadata;
@property (nonatomic) double turnaroundTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)namedFeaturesType;
+ (Class)placeResultType;
+ (Class)suggestionEntryListsType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsStatusCodeInfo:(id)arg1;
- (void)_addNoFlagsNamedFeatures:(id)arg1;
- (void)_addNoFlagsPlaceResult:(id)arg1;
- (void)_addNoFlagsSuggestionEntryLists:(id)arg1;
- (void)_readMapRegion;
- (void)_readNamedFeatures;
- (void)_readNearbySectionHeader;
- (void)_readPlaceResults;
- (void)_readSuggestionEntryLists;
- (void)_readSuggestionMetadata;
- (void)addNamedFeatures:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearNamedFeatures;
- (void)clearPlaceResults;
- (void)clearSensitiveFields;
- (void)clearSuggestionEntryLists;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsChainResultSet;
- (bool)hasMapRegion;
- (bool)hasNearbySectionHeader;
- (bool)hasStatusCodeInfo;
- (bool)hasSuggestionMetadata;
- (bool)hasTurnaroundTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatures;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (id)nearbySectionHeader;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (id)placeResults;
- (unsigned long long)placeResultsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setHasStatusCodeInfo:(bool)arg1;
- (void)setHasTurnaroundTime:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setNearbySectionHeader:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusCodeInfo:(int)arg1;
- (void)setSuggestionEntryLists:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setTurnaroundTime:(double)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (int)statusCodeInfo;
- (id)statusCodeInfoAsString:(int)arg1;
- (id)suggestionEntryLists;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryListsCount;
- (id)suggestionMetadata;
- (double)turnaroundTime;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
