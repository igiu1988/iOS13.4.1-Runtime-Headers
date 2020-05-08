/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate> {
    NSArray * _eventRules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *eventRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_ruleWithUUID:(id)arg1;
- (id)dateForRuleWithUUID:(id)arg1 byEvaluatingForYear:(long long)arg2;
- (void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)eventRuleForLocalDate:(id)arg1;
- (id)eventRules;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2;
- (void)setEventRules:(id)arg1;

@end