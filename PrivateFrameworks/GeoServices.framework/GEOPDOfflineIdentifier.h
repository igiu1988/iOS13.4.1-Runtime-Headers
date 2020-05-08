/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDOfflineIdentifier : PBCodable <NSCopying> {
    struct { 
        unsigned int has_offlineId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_latLng : 1; 
        unsigned int read_offlineName : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_latLng : 1; 
        unsigned int wrote_offlineId : 1; 
        unsigned int wrote_offlineName : 1; 
    }  _flags;
    GEOLatLng * _latLng;
    unsigned long long  _offlineId;
    NSString * _offlineName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLatLng;
@property (nonatomic) bool hasOfflineId;
@property (nonatomic, readonly) bool hasOfflineName;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic) unsigned long long offlineId;
@property (nonatomic, retain) NSString *offlineName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readLatLng;
- (void)_readOfflineName;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatLng;
- (bool)hasOfflineId;
- (bool)hasOfflineName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latLng;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)offlineId;
- (id)offlineName;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOfflineId:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setOfflineId:(unsigned long long)arg1;
- (void)setOfflineName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
