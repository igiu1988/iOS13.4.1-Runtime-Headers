/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCameraMetadata : PBCodable <NSCopying> {
    int  _cameraNumber;
    struct { 
        unsigned int has_cameraNumber : 1; 
        unsigned int has_imageHeight : 1; 
        unsigned int has_imageWidth : 1; 
        unsigned int read_textureIds : 1; 
        unsigned int read_lensProjection : 1; 
        unsigned int read_position : 1; 
        unsigned int wrote_textureIds : 1; 
        unsigned int wrote_lensProjection : 1; 
        unsigned int wrote_position : 1; 
        unsigned int wrote_cameraNumber : 1; 
        unsigned int wrote_imageHeight : 1; 
        unsigned int wrote_imageWidth : 1; 
    }  _flags;
    int  _imageHeight;
    int  _imageWidth;
    GEOPDLensProjection * _lensProjection;
    GEOPDOrientedPosition * _position;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _textureIds;
}

@property (nonatomic) int cameraNumber;
@property (nonatomic) bool hasCameraNumber;
@property (nonatomic) bool hasImageHeight;
@property (nonatomic) bool hasImageWidth;
@property (nonatomic, readonly) bool hasLensProjection;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic) int imageHeight;
@property (nonatomic) int imageWidth;
@property (nonatomic, retain) GEOPDLensProjection *lensProjection;
@property (nonatomic, retain) GEOPDOrientedPosition *position;
@property (nonatomic, readonly) unsigned int*textureIds;
@property (nonatomic, readonly) unsigned long long textureIdsCount;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_addNoFlagsTextureId:(unsigned int)arg1;
- (void)_readLensProjection;
- (void)_readPosition;
- (void)_readTextureIds;
- (void)addTextureId:(unsigned int)arg1;
- (int)cameraNumber;
- (void)clearTextureIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraNumber;
- (bool)hasImageHeight;
- (bool)hasImageWidth;
- (bool)hasLensProjection;
- (bool)hasPosition;
- (unsigned long long)hash;
- (int)imageHeight;
- (int)imageWidth;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lensProjection;
- (void)mergeFrom:(id)arg1;
- (id)position;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCameraNumber:(int)arg1;
- (void)setHasCameraNumber:(bool)arg1;
- (void)setHasImageHeight:(bool)arg1;
- (void)setHasImageWidth:(bool)arg1;
- (void)setImageHeight:(int)arg1;
- (void)setImageWidth:(int)arg1;
- (void)setLensProjection:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setTextureIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)textureIdAtIndex:(unsigned long long)arg1;
- (unsigned int*)textureIds;
- (unsigned long long)textureIdsCount;
- (void)writeTo:(id)arg1;

@end