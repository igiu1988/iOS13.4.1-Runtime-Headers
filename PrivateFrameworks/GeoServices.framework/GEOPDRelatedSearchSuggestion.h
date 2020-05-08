/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRelatedSearchSuggestion : PBCodable <NSCopying> {
    NSString * _displayString;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayString : 1; 
        unsigned int read_searchBarDisplayToken : 1; 
        unsigned int read_suggestionEntryMetadata : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_displayString : 1; 
        unsigned int wrote_searchBarDisplayToken : 1; 
        unsigned int wrote_suggestionEntryMetadata : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchBarDisplayToken;
    NSData * _suggestionEntryMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, readonly) bool hasDisplayString;
@property (nonatomic, readonly) bool hasSearchBarDisplayToken;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, retain) NSString *searchBarDisplayToken;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readDisplayString;
- (void)_readSearchBarDisplayToken;
- (void)_readSuggestionEntryMetadata;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayString;
- (bool)hasDisplayString;
- (bool)hasSearchBarDisplayToken;
- (bool)hasSuggestionEntryMetadata;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchBarDisplayToken;
- (void)setDisplayString:(id)arg1;
- (void)setSearchBarDisplayToken:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (id)suggestionEntryMetadata;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
