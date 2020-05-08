/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDInitialOfflineSuggestionParameters : PBCodable <NSCopying> {
    GEOLocation * _location;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
