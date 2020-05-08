/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackImageUploadParameters : PBCodable <NSCopying> {
    NSMutableArray * _images;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImage:(id)arg1;
- (void)clearImages;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)images;
- (unsigned long long)imagesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImages:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end