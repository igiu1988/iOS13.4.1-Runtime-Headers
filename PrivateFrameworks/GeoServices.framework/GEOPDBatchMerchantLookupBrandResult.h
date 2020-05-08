/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchMerchantLookupBrandResult : PBCodable <NSCopying> {
    struct { 
        unsigned int has_statusCode : 1; 
    }  _flags;
    NSMutableArray * _merchantLookupBrandResults;
    int  _statusCode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *merchantLookupBrandResults;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)merchantLookupBrandResultType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addMerchantLookupBrandResult:(id)arg1;
- (void)clearMerchantLookupBrandResults;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)merchantLookupBrandResultAtIndex:(unsigned long long)arg1;
- (id)merchantLookupBrandResults;
- (unsigned long long)merchantLookupBrandResultsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setMerchantLookupBrandResults:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
