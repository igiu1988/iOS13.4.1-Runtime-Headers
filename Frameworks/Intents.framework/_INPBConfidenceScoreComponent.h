/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBConfidenceScoreComponent : PBCodable <NSCopying, NSSecureCoding, _INPBConfidenceScoreComponent> {
    bool  __encodeLegacyGloryData;
    struct { 
        unsigned int score : 1; 
    }  _has;
    float  _score;
    NSString * _source;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) float score;
@property (nonatomic, copy) NSString *source;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasScore;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(float)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)writeTo:(id)arg1;

@end
