/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDebugSettings : PBCodable <NSCopying> {
    struct { 
        unsigned int has_mode : 1; 
    }  _flags;
    NSMutableArray * _keywords;
    int  _mode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMode;
@property (nonatomic, retain) NSMutableArray *keywords;
@property (nonatomic) int mode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)keywordsType;

- (void).cxx_destruct;
- (int)StringAsMode:(id)arg1;
- (void)addKeywords:(id)arg1;
- (void)clearKeywords;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)keywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keywordsCount;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setMode:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
