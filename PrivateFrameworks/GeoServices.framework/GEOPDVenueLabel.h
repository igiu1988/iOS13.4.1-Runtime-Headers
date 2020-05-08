/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueLabel : PBCodable <NSCopying> {
    NSString * _detail;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_detail : 1; 
        unsigned int read_nameShort : 1; 
        unsigned int read_name : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_detail : 1; 
        unsigned int wrote_nameShort : 1; 
        unsigned int wrote_name : 1; 
    }  _flags;
    NSString * _name;
    NSString * _nameShort;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *detail;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameShort;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameShort;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readDetail;
- (void)_readName;
- (void)_readNameShort;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (bool)hasDetail;
- (bool)hasName;
- (bool)hasNameShort;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)nameShort;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameShort:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
