/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _feedbackComponentTypes;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_feedbackComponentTypes : 1; 
        unsigned int read_pageInfo : 1; 
        unsigned int read_sortParameters : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_feedbackComponentTypes : 1; 
        unsigned int wrote_pageInfo : 1; 
        unsigned int wrote_sortParameters : 1; 
    }  _flags;
    GEORPPageInfo * _pageInfo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPSortParameters * _sortParameters;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*feedbackComponentTypes;
@property (nonatomic, readonly) unsigned long long feedbackComponentTypesCount;
@property (nonatomic, readonly) bool hasPageInfo;
@property (nonatomic, readonly) bool hasSortParameters;
@property (nonatomic, retain) GEORPPageInfo *pageInfo;
@property (nonatomic, retain) GEORPSortParameters *sortParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeedbackComponentTypes:(id)arg1;
- (void)_addNoFlagsFeedbackComponentType:(int)arg1;
- (void)_readFeedbackComponentTypes;
- (void)_readPageInfo;
- (void)_readSortParameters;
- (void)addFeedbackComponentType:(int)arg1;
- (void)clearFeedbackComponentTypes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;
- (int*)feedbackComponentTypes;
- (id)feedbackComponentTypesAsString:(int)arg1;
- (unsigned long long)feedbackComponentTypesCount;
- (bool)hasPageInfo;
- (bool)hasSortParameters;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pageInfo;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackComponentTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPageInfo:(id)arg1;
- (void)setSortParameters:(id)arg1;
- (id)sortParameters;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
