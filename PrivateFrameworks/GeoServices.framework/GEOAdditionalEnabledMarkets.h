/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_offlineMarkets : 1; 
        unsigned int read_transitMarkets : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_offlineMarkets : 1; 
        unsigned int wrote_transitMarkets : 1; 
    }  _flags;
    NSMutableArray * _offlineMarkets;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _transitMarkets;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *offlineMarkets;
@property (nonatomic, readonly) NSArray *queryItems;
@property (nonatomic, readonly) NSDictionary *queryParameters;
@property (nonatomic, retain) NSMutableArray *transitMarkets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)_additionalEnabledTransitMarkets;
+ (id)additionalEnabledMarkets;
+ (bool)isValid:(id)arg1;
+ (Class)offlineMarketType;
+ (Class)transitMarketType;

- (void).cxx_destruct;
- (void)_addNoFlagsOfflineMarket:(id)arg1;
- (void)_addNoFlagsTransitMarket:(id)arg1;
- (void)_readOfflineMarkets;
- (void)_readTransitMarkets;
- (void)addOfflineMarket:(id)arg1;
- (void)addTransitMarket:(id)arg1;
- (void)clearOfflineMarkets;
- (void)clearTransitMarkets;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)offlineMarketAtIndex:(unsigned long long)arg1;
- (id)offlineMarkets;
- (unsigned long long)offlineMarketsCount;
- (id)queryItems;
- (id)queryParameters;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)reload;
- (void)setOfflineMarkets:(id)arg1;
- (void)setTransitMarkets:(id)arg1;
- (id)transitMarketAtIndex:(unsigned long long)arg1;
- (id)transitMarkets;
- (unsigned long long)transitMarketsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
