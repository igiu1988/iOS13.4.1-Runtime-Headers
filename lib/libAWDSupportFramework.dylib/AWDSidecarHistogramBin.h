/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSidecarHistogramBin : PBCodable <NSCopying> {
    double  _binEnd;
    double  _binStart;
    struct { 
        unsigned int binEnd : 1; 
        unsigned int binStart : 1; 
        unsigned int value : 1; 
    }  _has;
    double  _value;
}

@property (nonatomic) double binEnd;
@property (nonatomic) double binStart;
@property (nonatomic) bool hasBinEnd;
@property (nonatomic) bool hasBinStart;
@property (nonatomic) bool hasValue;
@property (nonatomic) double value;

- (double)binEnd;
- (double)binStart;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBinEnd;
- (bool)hasBinStart;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBinEnd:(double)arg1;
- (void)setBinStart:(double)arg1;
- (void)setHasBinEnd:(bool)arg1;
- (void)setHasBinStart:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)writeTo:(id)arg1;

@end
