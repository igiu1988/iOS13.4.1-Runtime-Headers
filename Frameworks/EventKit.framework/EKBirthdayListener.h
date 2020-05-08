/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    bool  _needsReset;
    NSObject<OS_dispatch_queue> * _updateJobQueue;
    CalLimitingQueue * _updateQueue;
}

+ (id)eventStoreProvider;
+ (id)sharedListener;

- (void).cxx_destruct;
- (void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3;
- (void)_localeChanged;
- (void)addBirthdayCalendars;
- (id)allContactsWithBirthdays;
- (bool)areBirthdaysEnabled;
- (id)birthdayCalendarsCreateIfNeeded:(bool)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(bool)arg5;
- (id)birthdayCalendarsInStore:(id)arg1;
- (void)checkForFailures;
- (void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3;
- (void)contactsReset;
- (void)disableBirthdayCalendars;
- (void)disableBirthdayCalendarsInStore:(id)arg1;
- (id)eventStore;
- (id)initSingleton;
- (void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4;
- (void)reset;
- (void)resetAllBirthdaysInStore:(id)arg1;

@end