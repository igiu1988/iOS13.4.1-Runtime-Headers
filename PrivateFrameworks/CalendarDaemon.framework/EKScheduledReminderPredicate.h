/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface EKScheduledReminderPredicate : EKPredicate {
    NSDate * _day;
    unsigned long long  _maxResults;
}

@property (nonatomic, retain) NSDate *day;
@property (nonatomic) unsigned long long maxResults;

+ (id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; id x26; bool x27; struct __CFSet {} *x28; id x29; bool x30; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)day;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxResults;
- (void)setDay:(id)arg1;
- (void)setMaxResults:(unsigned long long)arg1;

@end
