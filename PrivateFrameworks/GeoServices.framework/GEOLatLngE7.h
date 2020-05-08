/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLatLngE7 : PBCodable <NSCopying> {
    int  _latE7;
    int  _lngE7;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int latE7;
@property (nonatomic) int lngE7;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)latE7;
- (int)lngE7;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLatE7:(int)arg1;
- (void)setLngE7:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
