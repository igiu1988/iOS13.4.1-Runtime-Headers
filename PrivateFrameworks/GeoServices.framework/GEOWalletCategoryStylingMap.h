/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying> {
    NSMutableArray * _mappings;
}

@property (nonatomic, retain) NSMutableArray *mappings;

+ (bool)isValid:(id)arg1;
+ (Class)mappingsType;

- (void).cxx_destruct;
- (void)addMappings:(id)arg1;
- (void)clearMappings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mappings;
- (id)mappingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mappingsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMappings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
