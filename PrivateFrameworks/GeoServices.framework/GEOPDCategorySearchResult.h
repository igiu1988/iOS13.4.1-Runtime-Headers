/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCategorySearchResult : PBCodable <NSCopying> {
    NSMutableArray * _browseCategorys;
    GEOPDSCategorySearchResultSection * _categorySearchResultSection;
    GEOPDRelatedSearchSuggestion * _defaultRelatedSearchSuggestion;
    GEOMapRegion * _displayMapRegion;
    bool  _enablePartialClientization;
    struct { 
        unsigned int has_enablePartialClientization : 1; 
        unsigned int has_isChainResultSet : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_browseCategorys : 1; 
        unsigned int read_categorySearchResultSection : 1; 
        unsigned int read_defaultRelatedSearchSuggestion : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_relatedSearchSuggestions : 1; 
        unsigned int read_resultDetourInfos : 1; 
        unsigned int read_searchClientBehavior : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_browseCategorys : 1; 
        unsigned int wrote_categorySearchResultSection : 1; 
        unsigned int wrote_defaultRelatedSearchSuggestion : 1; 
        unsigned int wrote_displayMapRegion : 1; 
        unsigned int wrote_relatedSearchSuggestions : 1; 
        unsigned int wrote_resultDetourInfos : 1; 
        unsigned int wrote_searchClientBehavior : 1; 
        unsigned int wrote_enablePartialClientization : 1; 
        unsigned int wrote_isChainResultSet : 1; 
    }  _flags;
    bool  _isChainResultSet;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _relatedSearchSuggestions;
    NSMutableArray * _resultDetourInfos;
    GEOPDSearchClientBehavior * _searchClientBehavior;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *browseCategorys;
@property (nonatomic, retain) GEOPDSCategorySearchResultSection *categorySearchResultSection;
@property (nonatomic, retain) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion;
@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic) bool enablePartialClientization;
@property (nonatomic, readonly) bool hasCategorySearchResultSection;
@property (nonatomic, readonly) bool hasDefaultRelatedSearchSuggestion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic) bool hasEnablePartialClientization;
@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic, readonly) bool hasSearchClientBehavior;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) NSMutableArray *relatedSearchSuggestions;
@property (nonatomic, retain) NSMutableArray *resultDetourInfos;
@property (nonatomic, retain) GEOPDSearchClientBehavior *searchClientBehavior;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)browseCategoryType;
+ (bool)isValid:(id)arg1;
+ (Class)relatedSearchSuggestionType;
+ (Class)resultDetourInfoType;

- (void).cxx_destruct;
- (void)_addNoFlagsBrowseCategory:(id)arg1;
- (void)_addNoFlagsRelatedSearchSuggestion:(id)arg1;
- (void)_addNoFlagsResultDetourInfo:(id)arg1;
- (void)_readBrowseCategorys;
- (void)_readCategorySearchResultSection;
- (void)_readDefaultRelatedSearchSuggestion;
- (void)_readDisplayMapRegion;
- (void)_readRelatedSearchSuggestions;
- (void)_readResultDetourInfos;
- (void)_readSearchClientBehavior;
- (void)addBrowseCategory:(id)arg1;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (id)browseCategorys;
- (unsigned long long)browseCategorysCount;
- (id)categorySearchResultSection;
- (void)clearBrowseCategorys;
- (void)clearRelatedSearchSuggestions;
- (void)clearResultDetourInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultRelatedSearchSuggestion;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (bool)enablePartialClientization;
- (bool)hasCategorySearchResultSection;
- (bool)hasDefaultRelatedSearchSuggestion;
- (bool)hasDisplayMapRegion;
- (bool)hasEnablePartialClientization;
- (bool)hasIsChainResultSet;
- (bool)hasSearchClientBehavior;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (id)relatedSearchSuggestions;
- (unsigned long long)relatedSearchSuggestionsCount;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (id)resultDetourInfos;
- (unsigned long long)resultDetourInfosCount;
- (id)searchClientBehavior;
- (void)setBrowseCategorys:(id)arg1;
- (void)setCategorySearchResultSection:(id)arg1;
- (void)setDefaultRelatedSearchSuggestion:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setEnablePartialClientization:(bool)arg1;
- (void)setHasEnablePartialClientization:(bool)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setRelatedSearchSuggestions:(id)arg1;
- (void)setResultDetourInfos:(id)arg1;
- (void)setSearchClientBehavior:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end