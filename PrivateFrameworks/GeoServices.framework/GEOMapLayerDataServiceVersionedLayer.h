/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataServiceVersionedLayer : PBCodable <NSCopying> {
    struct { 
        unsigned int read_layer : 1; 
        unsigned int read_version : 1; 
        unsigned int wrote_layer : 1; 
        unsigned int wrote_version : 1; 
    }  _flags;
    GEOMapLayerDataServiceLayer * _layer;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOMapLayerDataServiceVersion * _version;
}

@property (nonatomic, readonly) bool hasLayer;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) GEOMapLayerDataServiceLayer *layer;
@property (nonatomic, retain) GEOMapLayerDataServiceVersion *version;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readLayer;
- (void)_readVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLayer;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)layer;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
