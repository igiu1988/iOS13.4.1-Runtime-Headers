/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPM2TopicItemDonation : PBCodable <NSCopying> {
    struct { 
        unsigned int isNew : 1; 
        unsigned int source : 1; 
    }  _has;
    int  _isNew;
    int  _source;
}

@property (nonatomic) bool hasIsNew;
@property (nonatomic) bool hasSource;
@property (nonatomic) int isNew;
@property (nonatomic) int source;

- (int)StringAsIsNew:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsNew;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)isNew;
- (id)isNewAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsNew:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setIsNew:(int)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
