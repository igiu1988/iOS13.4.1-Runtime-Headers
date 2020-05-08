/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding> {
    NSTimeZone * _localTimeZone;
    NSDictionary * _timeRanges;
}

@property (nonatomic, readonly) NSTimeZone *localTimeZone;
@property (nonatomic, readonly) NSDictionary *timeRanges;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1 timeZone:(id)arg2;
- (id)_dateWhenOpenNextAfterDate:(id)arg1 timeZone:(id)arg2;
- (void)_printOpenHoursForTheWeek;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1 timeZone:(id)arg2;
- (bool)_validTimeRange:(id)arg1;
- (long long)_weekdayIndexFromWeekdayString:(id)arg1;
- (long long)_weekdayOrdinalFromDate:(id)arg1;
- (long long)_weekdayOrdinalFromDate:(id)arg1 timeZone:(id)arg2;
- (id)_weekdayStringFromWeekdayIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateWhenOpenNextAfterDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHoursMessages:(id)arg1 timeZone:(id)arg2;
- (id)initWithHoursPeriodMessage:(id)arg1 timeZone:(id)arg2;
- (id)initWithJSONObj:(id)arg1 timeZone:(id)arg2;
- (id)initWithOpenHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithTimeRanges:(id)arg1 timeZone:(id)arg2;
- (bool)isOpenAtDate:(id)arg1;
- (bool)isOpenAtDate:(id)arg1 timeZone:(id)arg2;
- (id)localTimeZone;
- (id)timeRanges;

@end
