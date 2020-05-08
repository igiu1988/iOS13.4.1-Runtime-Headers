/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWalletCategoryMapping : PBCodable <NSCopying> {
    struct { 
        unsigned int read_stylesAttributes : 1; 
        unsigned int read_walletCategory : 1; 
        unsigned int wrote_stylesAttributes : 1; 
        unsigned int wrote_walletCategory : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _stylesAttributes;
    NSString * _walletCategory;
}

@property (nonatomic, readonly) bool hasStylesAttributes;
@property (nonatomic, readonly) bool hasWalletCategory;
@property (nonatomic, retain) GEOStyleAttributes *stylesAttributes;
@property (nonatomic, retain) NSString *walletCategory;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readStylesAttributes;
- (void)_readWalletCategory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStylesAttributes;
- (bool)hasWalletCategory;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStylesAttributes:(id)arg1;
- (void)setWalletCategory:(id)arg1;
- (id)stylesAttributes;
- (id)walletCategory;
- (void)writeTo:(id)arg1;

@end
