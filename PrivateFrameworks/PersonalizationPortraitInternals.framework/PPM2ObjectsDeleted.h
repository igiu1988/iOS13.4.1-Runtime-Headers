/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPM2ObjectsDeleted : PBCodable <NSCopying> {
    int  _domain;
    bool  _error;
    struct { 
        unsigned int domain : 1; 
        unsigned int source : 1; 
        unsigned int error : 1; 
    }  _has;
    int  _source;
}

@property (nonatomic) int domain;
@property (nonatomic) bool error;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasSource;
@property (nonatomic) int source;

- (int)StringAsDomain:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (bool)error;
- (bool)hasDomain;
- (bool)hasError;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setError:(bool)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
