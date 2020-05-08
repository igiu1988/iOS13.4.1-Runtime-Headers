/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventFeedRequested : TPSAnalyticsEvent {
    NSString * _clientError;
    NSString * _serviceError;
    bool  _tipFeed;
}

@property (nonatomic, retain) NSString *clientError;
@property (nonatomic, retain) NSString *serviceError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)clientError;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initRulesFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2;
- (id)initTipFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)serviceError;
- (void)setClientError:(id)arg1;
- (void)setServiceError:(id)arg1;

@end
