/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPResultEngagementFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPResultEngagementFeedback> {
    bool  _actionEngaged;
    int  _actionTarget;
    int  _destination;
    bool  _matchesUnengagedSuggestion;
    _CPSearchResultForFeedback * _result;
    unsigned long long  _timestamp;
    NSString * _titleText;
    int  _triggerEvent;
}

@property (nonatomic) bool actionEngaged;
@property (nonatomic) int actionTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destination;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool matchesUnengagedSuggestion;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (id)actionDestinationFromResult:(id)arg1 actionEngaged:(bool)arg2 destination:(int)arg3;
- (bool)actionEngaged;
- (int)actionTarget;
- (int)destination;
- (id)dictionaryRepresentation;
- (id)feedbackJSON;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)matchesUnengagedSuggestion;
- (bool)readFrom:(id)arg1;
- (id)result;
- (void)setActionEngaged:(bool)arg1;
- (void)setActionTarget:(int)arg1;
- (void)setDestination:(int)arg1;
- (void)setMatchesUnengagedSuggestion:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (id)titleText;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
