/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventUsageObservations : TPSAnalyticsEvent {
    NSNumber * _eventCount;
    NSString * _eventID;
    NSString * _experimentCampID;
    NSString * _experimentID;
}

@property (nonatomic, retain) NSNumber *eventCount;
@property (nonatomic, retain) NSString *eventID;
@property (nonatomic, readonly) NSString *experimentCampID;
@property (nonatomic, readonly) NSString *experimentID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventCount;
- (id)eventID;
- (id)eventName;
- (id)experimentCampID;
- (id)experimentID;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventID:(id)arg1 eventCount:(id)arg2;
- (void)setDataProvider:(id)arg1;
- (void)setEventCount:(id)arg1;
- (void)setEventID:(id)arg1;

@end
