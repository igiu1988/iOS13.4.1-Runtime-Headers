/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying> {
    double  _clicks;
    struct { 
        unsigned int clicks : 1; 
        unsigned int impressions : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    }  _has;
    double  _impressions;
    long long  _timestamp;
    int  _type;
}

@property (nonatomic) double clicks;
@property (nonatomic) bool hasClicks;
@property (nonatomic) bool hasImpressions;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) double impressions;
@property (nonatomic) long long timestamp;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (double)clicks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClicks;
- (bool)hasImpressions;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (double)impressions;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClicks:(double)arg1;
- (void)setHasClicks:(bool)arg1;
- (void)setHasImpressions:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setImpressions:(double)arg1;
- (void)setTimestamp:(long long)arg1;
- (void)setType:(int)arg1;
- (long long)timestamp;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
