/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPM2NamedEntitiesScored : PBCodable <NSCopying> {
    NSString * _bundleId;
    bool  _error;
    bool  _exclusionSpec;
    struct { 
        unsigned int resultSizeLog10 : 1; 
        unsigned int error : 1; 
        unsigned int exclusionSpec : 1; 
        unsigned int limitHit : 1; 
        unsigned int timeLimited : 1; 
        unsigned int timeSpec : 1; 
    }  _has;
    bool  _limitHit;
    unsigned int  _resultSizeLog10;
    bool  _timeLimited;
    bool  _timeSpec;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) bool error;
@property (nonatomic) bool exclusionSpec;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasExclusionSpec;
@property (nonatomic) bool hasLimitHit;
@property (nonatomic) bool hasResultSizeLog10;
@property (nonatomic) bool hasTimeLimited;
@property (nonatomic) bool hasTimeSpec;
@property (nonatomic) bool limitHit;
@property (nonatomic) unsigned int resultSizeLog10;
@property (nonatomic) bool timeLimited;
@property (nonatomic) bool timeSpec;

- (void).cxx_destruct;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)error;
- (bool)exclusionSpec;
- (bool)hasBundleId;
- (bool)hasError;
- (bool)hasExclusionSpec;
- (bool)hasLimitHit;
- (bool)hasResultSizeLog10;
- (bool)hasTimeLimited;
- (bool)hasTimeSpec;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)limitHit;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resultSizeLog10;
- (void)setBundleId:(id)arg1;
- (void)setError:(bool)arg1;
- (void)setExclusionSpec:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasExclusionSpec:(bool)arg1;
- (void)setHasLimitHit:(bool)arg1;
- (void)setHasResultSizeLog10:(bool)arg1;
- (void)setHasTimeLimited:(bool)arg1;
- (void)setHasTimeSpec:(bool)arg1;
- (void)setLimitHit:(bool)arg1;
- (void)setResultSizeLog10:(unsigned int)arg1;
- (void)setTimeLimited:(bool)arg1;
- (void)setTimeSpec:(bool)arg1;
- (bool)timeLimited;
- (bool)timeSpec;
- (void)writeTo:(id)arg1;

@end
