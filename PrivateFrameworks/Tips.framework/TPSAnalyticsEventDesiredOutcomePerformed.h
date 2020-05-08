/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventDesiredOutcomePerformed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    NSString * _context;
    NSDate * _desiredOutcomePerformedDate;
    NSString * _displayType;
    NSString * _experimentCampID;
    NSString * _experimentID;
    double  _timeToDesiredOutcome;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic, retain) NSString *experimentCampID;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic) double timeToDesiredOutcome;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)bundleID;
- (id)contentID;
- (id)context;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experimentCampID;
- (id)experimentID;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1;
- (id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 experimentID:(id)arg4 experimentCampID:(id)arg5 displayType:(id)arg6 timeToDesiredOutcome:(double)arg7;
- (id)initWithContentID:(id)arg1 desiredOutcomePerformedDate:(id)arg2;
- (void)setBundleID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setExperimentCampID:(id)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setTimeToDesiredOutcome:(double)arg1;
- (double)timeToDesiredOutcome;

@end
