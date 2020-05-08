/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventRuleMatched : TPSAnalyticsEvent {
    NSString * _contentID;
    NSString * _ruleID;
}

@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *ruleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)contentID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1 ruleID:(id)arg2;
- (id)ruleID;
- (void)setContentID:(id)arg1;
- (void)setRuleID:(id)arg1;

@end
