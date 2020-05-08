/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddressObjectGeocodingResult : PBCodable <NSCopying> {
    NSMutableArray * _disambiguationLabels;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)disambiguationLabelType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (id)disambiguationLabels;
- (unsigned long long)disambiguationLabelsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
