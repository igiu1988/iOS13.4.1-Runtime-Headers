/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRating : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxScore : 1; 
        unsigned int has_score : 1; 
        unsigned int has_numRatingsUsedForScore : 1; 
        unsigned int has_ratingType : 1; 
    }  _flags;
    double  _maxScore;
    int  _numRatingsUsedForScore;
    int  _ratingType;
    double  _score;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMaxScore;
@property (nonatomic) bool hasNumRatingsUsedForScore;
@property (nonatomic) bool hasRatingType;
@property (nonatomic) bool hasScore;
@property (nonatomic) double maxScore;
@property (nonatomic) int numRatingsUsedForScore;
@property (nonatomic) int ratingType;
@property (nonatomic) double score;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;

- (void).cxx_destruct;
- (int)StringAsRatingType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxScore;
- (bool)hasNumRatingsUsedForScore;
- (bool)hasRatingType;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)maxScore;
- (void)mergeFrom:(id)arg1;
- (int)numRatingsUsedForScore;
- (int)ratingType;
- (id)ratingTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasMaxScore:(bool)arg1;
- (void)setHasNumRatingsUsedForScore:(bool)arg1;
- (void)setHasRatingType:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setMaxScore:(double)arg1;
- (void)setNumRatingsUsedForScore:(int)arg1;
- (void)setRatingType:(int)arg1;
- (void)setScore:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end