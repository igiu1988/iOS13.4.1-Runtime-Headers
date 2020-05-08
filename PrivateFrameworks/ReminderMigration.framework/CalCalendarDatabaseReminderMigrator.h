/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

@interface CalCalendarDatabaseReminderMigrator : NSObject <CalReminderMigrator> {
    <CalReminderMigrationDefaultsProvider> * _defaultsProvider;
    <CalReminderKitProvider> * _reminderKitProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CalReminderMigrationDefaultsProvider> *defaultsProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CalReminderKitProvider> *reminderKitProvider;
@property (readonly) Class superclass;

+ (long long)_accountTypeForStore:(const void*)arg1;
+ (id)_attemptAccountMigrationForStore:(const void*)arg1 withContext:(id)arg2 accountType:(long long*)arg3;
+ (bool)_attemptMigrationForStore:(const void*)arg1 withContext:(id)arg2;
+ (id)_colorStringForCalendar:(const void*)arg1;
+ (id)_identifierForCalendar:(const void*)arg1;
+ (id)_identifierForReminder:(const void*)arg1;
+ (id)_identifierForStore:(const void*)arg1;
+ (void)_migrateCalendarAsReminderList:(const void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4;
+ (void)_migrateReminder:(const void*)arg1 withContext:(id)arg2 listChangeItem:(id)arg3;
+ (void)_migrateReminderListsInStore:(const void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4;
+ (void)_migrateRemindersInCalendar:(const void*)arg1 withContext:(id)arg2 listChangeItem:(id)arg3;
+ (bool)_preCheckStoreForPossibleMigrationDisablingRemindersIfNeeded:(const void*)arg1 withContext:(id)arg2 accountType:(long long*)arg3 identifier:(id*)arg4;
+ (void)_removeRemindersDataAfterSuccessfulMigrationFromDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; id x26; bool x27; struct __CFSet {} *x28; id x29; bool x30; }*)arg1 withContext:(id)arg2;
+ (void)_setWasMigratedAndClearSyncTokenInAllCalendarsForStore:(const void*)arg1 withContext:(id)arg2;
+ (bool)_shouldMigrateCalendarAsReminderList:(const void*)arg1;
+ (void)_visitCalendarForMigrationAsReminderList:(const void*)arg1 withContext:(id)arg2 accountChangeItem:(id)arg3 accountType:(long long)arg4;

- (void).cxx_destruct;
- (bool)_attemptMigrationForDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; id x26; bool x27; struct __CFSet {} *x28; id x29; bool x30; }*)arg1 inCalendarDirectory:(id)arg2 withContext:(id)arg3;
- (bool)_attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; id x26; bool x27; struct __CFSet {} *x28; id x29; bool x30; }*)arg1;
- (bool)_attemptMigrationWithHomeDirectory:(id)arg1;
- (bool)_performMigrationForCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; id x26; bool x27; struct __CFSet {} *x28; id x29; bool x30; }*)arg1 inCalendarDirectory:(id)arg2 withContext:(id)arg3;
- (void)_performPreMigrationTasksInCalendarDirectory:(id)arg1 withContext:(id)arg2;
- (bool)attemptMigrationWithCalendarDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; id x26; bool x27; struct __CFSet {} *x28; id x29; bool x30; }*)arg1;
- (bool)attemptMigrationWithHomeDirectory:(id)arg1;
- (id)defaultsProvider;
- (id)initWithReminderKitProvider:(id)arg1 defaultsProvider:(id)arg2;
- (id)reminderKitProvider;

@end
