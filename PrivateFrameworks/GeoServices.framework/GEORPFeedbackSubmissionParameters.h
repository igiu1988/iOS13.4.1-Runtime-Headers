/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackSubmissionParameters : PBCodable <NSCopying> {
    NSString * _clientSubmissionUuid;
    GEORPFeedbackCommonContext * _commonContext;
    GEORPFeedbackCommonCorrections * _commonCorrections;
    GEORPFeedbackDetails * _details;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientSubmissionUuid : 1; 
        unsigned int read_commonContext : 1; 
        unsigned int read_commonCorrections : 1; 
        unsigned int read_details : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_clientSubmissionUuid : 1; 
        unsigned int wrote_commonContext : 1; 
        unsigned int wrote_commonCorrections : 1; 
        unsigned int wrote_details : 1; 
        unsigned int wrote_type : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *clientSubmissionUuid;
@property (nonatomic, retain) GEORPFeedbackCommonContext *commonContext;
@property (nonatomic, retain) GEORPFeedbackCommonCorrections *commonCorrections;
@property (nonatomic, retain) GEORPFeedbackDetails *details;
@property (nonatomic, readonly) bool hasClientSubmissionUuid;
@property (nonatomic, readonly) bool hasCommonContext;
@property (nonatomic, readonly) bool hasCommonCorrections;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)_readClientSubmissionUuid;
- (void)_readCommonContext;
- (void)_readCommonCorrections;
- (void)_readDetails;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientSubmissionUuid;
- (id)commonContext;
- (id)commonCorrections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasClientSubmissionUuid;
- (bool)hasCommonContext;
- (bool)hasCommonCorrections;
- (bool)hasDetails;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientSubmissionUuid:(id)arg1;
- (void)setCommonContext:(id)arg1;
- (void)setCommonCorrections:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
