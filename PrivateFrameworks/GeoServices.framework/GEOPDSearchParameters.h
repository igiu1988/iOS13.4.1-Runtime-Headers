/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int has_searchType : 1; 
        unsigned int has_sortOrder : 1; 
        unsigned int has_supportDirectionIntentSearch : 1; 
        unsigned int has_supportDymSuggestion : 1; 
        unsigned int has_supportSearchResultSection : 1; 
        unsigned int has_supportUnresolvedDirectionIntent : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_recentRouteInfo : 1; 
        unsigned int read_retainedSearch : 1; 
        unsigned int read_searchFilter : 1; 
        unsigned int read_searchLocationParameters : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_searchStructureIntentType : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int read_suggestionEntry : 1; 
        unsigned int read_suggestionMetadata : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_recentRouteInfo : 1; 
        unsigned int wrote_retainedSearch : 1; 
        unsigned int wrote_searchFilter : 1; 
        unsigned int wrote_searchLocationParameters : 1; 
        unsigned int wrote_searchString : 1; 
        unsigned int wrote_searchStructureIntentType : 1; 
        unsigned int wrote_suggestionEntryMetadata : 1; 
        unsigned int wrote_suggestionEntry : 1; 
        unsigned int wrote_suggestionMetadata : 1; 
        unsigned int wrote_viewportInfo : 1; 
        unsigned int wrote_maxResults : 1; 
        unsigned int wrote_searchType : 1; 
        unsigned int wrote_sortOrder : 1; 
        unsigned int wrote_supportDirectionIntentSearch : 1; 
        unsigned int wrote_supportDymSuggestion : 1; 
        unsigned int wrote_supportSearchResultSection : 1; 
        unsigned int wrote_supportUnresolvedDirectionIntent : 1; 
    }  _flags;
    unsigned int  _maxResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRecentRouteInfo * _recentRouteInfo;
    GEOPDRetainedSearchMetadata * _retainedSearch;
    GEOPDSSearchFilter * _searchFilter;
    GEOPDSSearchLocationParameters * _searchLocationParameters;
    NSString * _searchString;
    GEOPDSSearchStructureIntentRequestType * _searchStructureIntentType;
    int  _searchType;
    int  _sortOrder;
    GEOPDAutocompleteEntry * _suggestionEntry;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    bool  _supportDirectionIntentSearch;
    bool  _supportDymSuggestion;
    bool  _supportSearchResultSection;
    bool  _supportUnresolvedDirectionIntent;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasRecentRouteInfo;
@property (nonatomic, readonly) bool hasRetainedSearch;
@property (nonatomic, readonly) bool hasSearchFilter;
@property (nonatomic, readonly) bool hasSearchLocationParameters;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, readonly) bool hasSearchStructureIntentType;
@property (nonatomic) bool hasSearchType;
@property (nonatomic) bool hasSortOrder;
@property (nonatomic, readonly) bool hasSuggestionEntry;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasSuggestionMetadata;
@property (nonatomic) bool hasSupportDirectionIntentSearch;
@property (nonatomic) bool hasSupportDymSuggestion;
@property (nonatomic) bool hasSupportSearchResultSection;
@property (nonatomic) bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) GEOPDRecentRouteInfo *recentRouteInfo;
@property (nonatomic, retain) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic, retain) GEOPDSSearchFilter *searchFilter;
@property (nonatomic, retain) GEOPDSSearchLocationParameters *searchLocationParameters;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) GEOPDSSearchStructureIntentRequestType *searchStructureIntentType;
@property (nonatomic) int searchType;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) GEOPDAutocompleteEntry *suggestionEntry;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) NSData *suggestionMetadata;
@property (nonatomic) bool supportDirectionIntentSearch;
@property (nonatomic) bool supportDymSuggestion;
@property (nonatomic) bool supportSearchResultSection;
@property (nonatomic) bool supportUnresolvedDirectionIntent;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)_readRecentRouteInfo;
- (void)_readRetainedSearch;
- (void)_readSearchFilter;
- (void)_readSearchLocationParameters;
- (void)_readSearchString;
- (void)_readSearchStructureIntentType;
- (void)_readSuggestionEntry;
- (void)_readSuggestionEntryMetadata;
- (void)_readSuggestionMetadata;
- (void)_readViewportInfo;
- (void)clearSensitiveFields;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasRecentRouteInfo;
- (bool)hasRetainedSearch;
- (bool)hasSearchFilter;
- (bool)hasSearchLocationParameters;
- (bool)hasSearchString;
- (bool)hasSearchStructureIntentType;
- (bool)hasSearchType;
- (bool)hasSortOrder;
- (bool)hasSuggestionEntry;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasSuggestionMetadata;
- (bool)hasSupportDirectionIntentSearch;
- (bool)hasSupportDymSuggestion;
- (bool)hasSupportSearchResultSection;
- (bool)hasSupportUnresolvedDirectionIntent;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)recentRouteInfo;
- (id)retainedSearch;
- (id)searchFilter;
- (id)searchLocationParameters;
- (id)searchString;
- (id)searchStructureIntentType;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setHasSortOrder:(bool)arg1;
- (void)setHasSupportDirectionIntentSearch:(bool)arg1;
- (void)setHasSupportDymSuggestion:(bool)arg1;
- (void)setHasSupportSearchResultSection:(bool)arg1;
- (void)setHasSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRecentRouteInfo:(id)arg1;
- (void)setRetainedSearch:(id)arg1;
- (void)setSearchFilter:(id)arg1;
- (void)setSearchLocationParameters:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchStructureIntentType:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSuggestionEntry:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSupportDirectionIntentSearch:(bool)arg1;
- (void)setSupportDymSuggestion:(bool)arg1;
- (void)setSupportSearchResultSection:(bool)arg1;
- (void)setSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)sortOrder;
- (id)sortOrderAsString:(int)arg1;
- (id)suggestionEntry;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (bool)supportDirectionIntentSearch;
- (bool)supportDymSuggestion;
- (bool)supportSearchResultSection;
- (bool)supportUnresolvedDirectionIntent;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
