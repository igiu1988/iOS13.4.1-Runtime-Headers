/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPPropertyPredicate : PBCodable <NSCopying> {
    int  _comparisonType;
    struct { 
        unsigned int comparisonType : 1; 
    }  _has;
    NSString * _property;
    MPPMediaPredicateValue * _value;
}

@property (nonatomic) int comparisonType;
@property (nonatomic) bool hasComparisonType;
@property (nonatomic, readonly) bool hasProperty;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *property;
@property (nonatomic, retain) MPPMediaPredicateValue *value;

- (void).cxx_destruct;
- (int)comparisonType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComparisonType;
- (bool)hasProperty;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)property;
- (bool)readFrom:(id)arg1;
- (void)setComparisonType:(int)arg1;
- (void)setHasComparisonType:(bool)arg1;
- (void)setProperty:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
