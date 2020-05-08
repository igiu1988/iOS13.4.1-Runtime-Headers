/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventClientACSuggestions : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    struct { 
        unsigned int has_overallLatencyInMs : 1; 
        unsigned int has_keypressStatus : 1; 
        unsigned int has_selectedIndex : 1; 
        unsigned int has_selectedSectionIndex : 1; 
        unsigned int has_trigger : 1; 
        unsigned int has_withinSectionSelectedIndex : 1; 
        unsigned int has_isRerankerTriggered : 1; 
        unsigned int has_isRetainedQuery : 1; 
        unsigned int has_shouldDifferentiateClientAndServerResults : 1; 
        unsigned int read_entries : 1; 
        unsigned int read_queryTokens : 1; 
        unsigned int read_query : 1; 
        unsigned int wrote_entries : 1; 
        unsigned int wrote_overallLatencyInMs : 1; 
        unsigned int wrote_queryTokens : 1; 
        unsigned int wrote_query : 1; 
        unsigned int wrote_keypressStatus : 1; 
        unsigned int wrote_selectedIndex : 1; 
        unsigned int wrote_selectedSectionIndex : 1; 
        unsigned int wrote_trigger : 1; 
        unsigned int wrote_withinSectionSelectedIndex : 1; 
        unsigned int wrote_isRerankerTriggered : 1; 
        unsigned int wrote_isRetainedQuery : 1; 
        unsigned int wrote_shouldDifferentiateClientAndServerResults : 1; 
    }  _flags;
    bool  _isRerankerTriggered;
    bool  _isRetainedQuery;
    int  _keypressStatus;
    long long  _overallLatencyInMs;
    NSString * _query;
    NSMutableArray * _queryTokens;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _selectedIndex;
    int  _selectedSectionIndex;
    bool  _shouldDifferentiateClientAndServerResults;
    int  _trigger;
    int  _withinSectionSelectedIndex;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic) bool hasIsRerankerTriggered;
@property (nonatomic) bool hasIsRetainedQuery;
@property (nonatomic) bool hasKeypressStatus;
@property (nonatomic) bool hasOverallLatencyInMs;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasSelectedIndex;
@property (nonatomic) bool hasSelectedSectionIndex;
@property (nonatomic) bool hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) bool hasTrigger;
@property (nonatomic) bool hasWithinSectionSelectedIndex;
@property (nonatomic) bool isRerankerTriggered;
@property (nonatomic) bool isRetainedQuery;
@property (nonatomic) int keypressStatus;
@property (nonatomic) long long overallLatencyInMs;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, retain) NSMutableArray *queryTokens;
@property (nonatomic) int selectedIndex;
@property (nonatomic) int selectedSectionIndex;
@property (nonatomic) bool shouldDifferentiateClientAndServerResults;
@property (nonatomic) int trigger;
@property (nonatomic) int withinSectionSelectedIndex;

+ (Class)entriesType;
+ (bool)isValid:(id)arg1;
+ (Class)queryTokensType;

- (void).cxx_destruct;
- (int)StringAsKeypressStatus:(id)arg1;
- (int)StringAsTrigger:(id)arg1;
- (void)_addNoFlagsEntries:(id)arg1;
- (void)_addNoFlagsQueryTokens:(id)arg1;
- (void)_readEntries;
- (void)_readQuery;
- (void)_readQueryTokens;
- (void)addEntries:(id)arg1;
- (void)addQueryTokens:(id)arg1;
- (void)clearEntries;
- (void)clearQueryTokens;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (bool)hasIsRerankerTriggered;
- (bool)hasIsRetainedQuery;
- (bool)hasKeypressStatus;
- (bool)hasOverallLatencyInMs;
- (bool)hasQuery;
- (bool)hasSelectedIndex;
- (bool)hasSelectedSectionIndex;
- (bool)hasShouldDifferentiateClientAndServerResults;
- (bool)hasTrigger;
- (bool)hasWithinSectionSelectedIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRerankerTriggered;
- (bool)isRetainedQuery;
- (int)keypressStatus;
- (id)keypressStatusAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)overallLatencyInMs;
- (id)query;
- (id)queryTokens;
- (id)queryTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryTokensCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)selectedIndex;
- (int)selectedSectionIndex;
- (void)setEntries:(id)arg1;
- (void)setHasIsRerankerTriggered:(bool)arg1;
- (void)setHasIsRetainedQuery:(bool)arg1;
- (void)setHasKeypressStatus:(bool)arg1;
- (void)setHasOverallLatencyInMs:(bool)arg1;
- (void)setHasSelectedIndex:(bool)arg1;
- (void)setHasSelectedSectionIndex:(bool)arg1;
- (void)setHasShouldDifferentiateClientAndServerResults:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setHasWithinSectionSelectedIndex:(bool)arg1;
- (void)setIsRerankerTriggered:(bool)arg1;
- (void)setIsRetainedQuery:(bool)arg1;
- (void)setKeypressStatus:(int)arg1;
- (void)setOverallLatencyInMs:(long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryTokens:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)setSelectedSectionIndex:(int)arg1;
- (void)setShouldDifferentiateClientAndServerResults:(bool)arg1;
- (void)setTrigger:(int)arg1;
- (void)setWithinSectionSelectedIndex:(int)arg1;
- (bool)shouldDifferentiateClientAndServerResults;
- (int)trigger;
- (id)triggerAsString:(int)arg1;
- (int)withinSectionSelectedIndex;
- (void)writeTo:(id)arg1;

@end
