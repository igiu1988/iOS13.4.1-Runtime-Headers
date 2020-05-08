/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataServiceVersionUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int read_index : 1; 
        unsigned int read_layer : 1; 
        unsigned int read_sourceVersion : 1; 
        unsigned int read_targetVersion : 1; 
        unsigned int wrote_index : 1; 
        unsigned int wrote_layer : 1; 
        unsigned int wrote_sourceVersion : 1; 
        unsigned int wrote_targetVersion : 1; 
    }  _flags;
    GEOMapLayerDataServiceLayerIndex * _index;
    GEOMapLayerDataServiceLayer * _layer;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOMapLayerDataServiceVersion * _sourceVersion;
    GEOMapLayerDataServiceVersion * _targetVersion;
}

@property (nonatomic, readonly) bool hasIndex;
@property (nonatomic, readonly) bool hasLayer;
@property (nonatomic, readonly) bool hasSourceVersion;
@property (nonatomic, readonly) bool hasTargetVersion;
@property (nonatomic, retain) GEOMapLayerDataServiceLayerIndex *index;
@property (nonatomic, retain) GEOMapLayerDataServiceLayer *layer;
@property (nonatomic, retain) GEOMapLayerDataServiceVersion *sourceVersion;
@property (nonatomic, retain) GEOMapLayerDataServiceVersion *targetVersion;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readIndex;
- (void)_readLayer;
- (void)_readSourceVersion;
- (void)_readTargetVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasLayer;
- (bool)hasSourceVersion;
- (bool)hasTargetVersion;
- (unsigned long long)hash;
- (id)index;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)layer;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setTargetVersion:(id)arg1;
- (id)sourceVersion;
- (id)targetVersion;
- (void)writeTo:(id)arg1;

@end
