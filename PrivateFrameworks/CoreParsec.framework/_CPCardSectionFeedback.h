/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCardSectionFeedback : PBCodable <NSSecureCoding, _CPCardSectionFeedback, _CPProcessableFeedback> {
    _CPCardSectionForFeedback * _cardSection;
    NSString * _cardSectionId;
    NSString * _resultId;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) _CPCardSectionForFeedback *cardSection;
@property (nonatomic, copy) NSString *cardSectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)cardSection;
- (id)cardSectionId;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultId;
- (void)setCardSection:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setResultId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
