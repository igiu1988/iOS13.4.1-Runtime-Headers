/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying> {
    NSMutableArray * _defaultTags;
    NSMutableArray * _disabledPortraitTags;
    NSMutableArray * _optionalTags;
}

@property (nonatomic, retain) NSMutableArray *defaultTags;
@property (nonatomic, retain) NSMutableArray *disabledPortraitTags;
@property (nonatomic, retain) NSMutableArray *optionalTags;

+ (Class)defaultTagsType;
+ (Class)disabledPortraitTagsType;
+ (Class)optionalTagsType;

- (void).cxx_destruct;
- (void)addDefaultTags:(id)arg1;
- (void)addDisabledPortraitTags:(id)arg1;
- (void)addOptionalTags:(id)arg1;
- (void)clearDefaultTags;
- (void)clearDisabledPortraitTags;
- (void)clearOptionalTags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultTags;
- (id)defaultTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultTagsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disabledPortraitTags;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disabledPortraitTagsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)optionalTags;
- (id)optionalTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optionalTagsCount;
- (bool)readFrom:(id)arg1;
- (void)setDefaultTags:(id)arg1;
- (void)setDisabledPortraitTags:(id)arg1;
- (void)setOptionalTags:(id)arg1;
- (void)writeTo:(id)arg1;

@end
