/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPMerchantLookupFeedback : PBCodable <NSCopying> {
    GEORPMerchantLookupContext * _context;
    GEORPMerchantLookupCorrections * _corrections;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_context : 1; 
        unsigned int read_corrections : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_context : 1; 
        unsigned int wrote_corrections : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPMerchantLookupContext *context;
@property (nonatomic, retain) GEORPMerchantLookupCorrections *corrections;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic, readonly) bool hasCorrections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readContext;
- (void)_readCorrections;
- (void)clearUnknownFields:(bool)arg1;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrections;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasCorrections;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCorrections:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end