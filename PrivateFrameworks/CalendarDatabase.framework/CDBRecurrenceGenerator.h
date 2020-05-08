/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBRecurrenceGenerator : CalRecurrenceGenerator

- (id)_copyOccurrenceDatesWithBirthdayEvent:(void*)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(bool)arg6;
- (void)_prepareForCalRecurrence:(void*)arg1 locked:(bool)arg2;
- (void)_setupForCalEvent:(void*)arg1 locked:(bool)arg2;
- (id)computeRecurrenceEndDateForCalEvent:(void*)arg1 recurrenceRule:(void*)arg2 locked:(bool)arg3;
- (id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(bool)arg6;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5;

@end
