/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCustomFeedback : PBCodable <NSSecureCoding, _CPCustomFeedback, _CPProcessableFeedback> {
    int  _feedbackType;
    NSData * _jsonFeedback;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) int feedbackType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *jsonFeedback;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)jsonFeedback;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setJsonFeedback:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
