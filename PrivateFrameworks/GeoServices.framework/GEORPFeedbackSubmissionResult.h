/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackSubmissionResult : PBCodable <NSCopying> {
    NSString * _feedbackId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *feedbackId;
@property (nonatomic, readonly) bool hasFeedbackId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackId;
- (bool)hasFeedbackId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
