/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGM2MaybeInformationShown : PBCodable <NSCopying> {
    int  _extracted;
    struct { 
        unsigned int extracted : 1; 
    }  _has;
    NSString * _key;
}

@property (nonatomic) int extracted;
@property (nonatomic) bool hasExtracted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (int)StringAsExtracted:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)extracted;
- (id)extractedAsString:(int)arg1;
- (bool)hasExtracted;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExtracted:(int)arg1;
- (void)setHasExtracted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
