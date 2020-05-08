/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackQueryResult : PBCodable <NSCopying> {
    NSMutableArray * _feedbackInfos;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_feedbackInfos : 1; 
        unsigned int read_nextPageToken : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_feedbackInfos : 1; 
        unsigned int wrote_nextPageToken : 1; 
    }  _flags;
    NSData * _nextPageToken;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *feedbackInfos;
@property (nonatomic, readonly) bool hasNextPageToken;
@property (nonatomic, retain) NSData *nextPageToken;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)feedbackInfoType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsFeedbackInfo:(id)arg1;
- (void)_readFeedbackInfos;
- (void)_readNextPageToken;
- (void)addFeedbackInfo:(id)arg1;
- (void)clearFeedbackInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackInfoAtIndex:(unsigned long long)arg1;
- (id)feedbackInfos;
- (unsigned long long)feedbackInfosCount;
- (bool)hasNextPageToken;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nextPageToken;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackInfos:(id)arg1;
- (void)setNextPageToken:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
