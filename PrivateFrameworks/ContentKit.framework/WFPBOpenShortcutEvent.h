/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFPBOpenShortcutEvent : PBCodable <NSCopying> {
    unsigned int  _actionCount;
    NSString * _addToSiriBundleIdentifier;
    NSString * _galleryIdentifier;
    struct { 
        unsigned int actionCount : 1; 
        unsigned int source : 1; 
    }  _has;
    NSString * _key;
    int  _source;
}

@property (nonatomic) unsigned int actionCount;
@property (nonatomic, retain) NSString *addToSiriBundleIdentifier;
@property (nonatomic, retain) NSString *galleryIdentifier;
@property (nonatomic) bool hasActionCount;
@property (nonatomic, readonly) bool hasAddToSiriBundleIdentifier;
@property (nonatomic, readonly) bool hasGalleryIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasSource;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (unsigned int)actionCount;
- (id)addToSiriBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)galleryIdentifier;
- (bool)hasActionCount;
- (bool)hasAddToSiriBundleIdentifier;
- (bool)hasGalleryIdentifier;
- (bool)hasKey;
- (bool)hasSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionCount:(unsigned int)arg1;
- (void)setAddToSiriBundleIdentifier:(id)arg1;
- (void)setGalleryIdentifier:(id)arg1;
- (void)setHasActionCount:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
