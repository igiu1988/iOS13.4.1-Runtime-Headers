/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODurationInNavigationMode : PBCodable <NSCopying> {
    double  _duration;
    struct { 
        unsigned int has_duration : 1; 
        unsigned int has_type : 1; 
    }  _flags;
    int  _type;
}

@property (nonatomic) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasDuration;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
