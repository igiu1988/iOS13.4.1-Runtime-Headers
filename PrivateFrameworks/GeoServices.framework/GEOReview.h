/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReview : PBCodable <NSCopying> {
    struct { 
        unsigned int has_reviewTime : 1; 
        unsigned int has_score : 1; 
        unsigned int has_isChinaSuppressed : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_languageCode : 1; 
        unsigned int read_reviewer : 1; 
        unsigned int read_snippet : 1; 
        unsigned int read_uid : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_languageCode : 1; 
        unsigned int wrote_reviewTime : 1; 
        unsigned int wrote_reviewer : 1; 
        unsigned int wrote_score : 1; 
        unsigned int wrote_snippet : 1; 
        unsigned int wrote_uid : 1; 
        unsigned int wrote_isChinaSuppressed : 1; 
    }  _flags;
    bool  _isChinaSuppressed;
    NSString * _languageCode;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _reviewTime;
    GEOUser * _reviewer;
    double  _score;
    NSString * _snippet;
    NSString * _uid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsChinaSuppressed;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic) bool hasReviewTime;
@property (nonatomic, readonly) bool hasReviewer;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasSnippet;
@property (nonatomic, readonly) bool hasUid;
@property (nonatomic) bool isChinaSuppressed;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) double reviewTime;
@property (nonatomic, retain) GEOUser *reviewer;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *snippet;
@property (nonatomic, retain) NSString *uid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readLanguageCode;
- (void)_readReviewer;
- (void)_readSnippet;
- (void)_readUid;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsChinaSuppressed;
- (bool)hasLanguageCode;
- (bool)hasReviewTime;
- (bool)hasReviewer;
- (bool)hasScore;
- (bool)hasSnippet;
- (bool)hasUid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isChinaSuppressed;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)reviewTime;
- (id)reviewer;
- (double)score;
- (void)setHasIsChinaSuppressed:(bool)arg1;
- (void)setHasReviewTime:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setIsChinaSuppressed:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setReviewTime:(double)arg1;
- (void)setReviewer:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSnippet:(id)arg1;
- (void)setUid:(id)arg1;
- (id)snippet;
- (id)uid;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
