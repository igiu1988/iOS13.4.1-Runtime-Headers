/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {
    NSMutableArray * _localizedStrings;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *localizedStrings;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)localizedStringType;

- (void).cxx_destruct;
- (void)addLocalizedString:(id)arg1;
- (id)bestLocalizedName;
- (void)clearLocalizedStrings;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedStringAtIndex:(unsigned long long)arg1;
- (id)localizedStrings;
- (unsigned long long)localizedStringsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
