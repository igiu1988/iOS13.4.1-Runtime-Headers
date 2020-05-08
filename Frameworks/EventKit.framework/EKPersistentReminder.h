/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentReminder : EKPersistentCalendarItem

+ (Class)meltedClass;
+ (id)reminderWithRandomUUID;

- (id)completionDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)displayOrder;
- (id)dueDate;
- (bool)dueDateAllDay;
- (id)dueDateTimeZone;
- (int)entityType;
- (id)firstAlertDate;
- (void)setCompletionDate:(id)arg1;
- (void)setDisplayOrder:(unsigned long long)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDueDateAllDay:(bool)arg1;
- (void)setDueDateTimeZone:(id)arg1;
- (void)setFirstAlertDate:(id)arg1;

@end