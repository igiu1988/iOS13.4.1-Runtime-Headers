/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarItem : EKObject

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSArray *alarms;
@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, readonly) NSArray *attendees;
@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic, readonly) NSString *calendarItemExternalIdentifier;
@property (nonatomic, retain) NSString *calendarItemIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) bool hasAlarms;
@property (nonatomic, readonly) bool hasAttendees;
@property (nonatomic, readonly) bool hasNotes;
@property (nonatomic, readonly) bool hasRecurrenceRules;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSData *localStructuredData;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSArray *recurrenceRules;
@property (nonatomic, copy) NSData *structuredData;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;

+ (bool)_shouldDeleteAndAddForMoveFromCalendar:(id)arg1 toCalendar:(id)arg2;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)timeZoneFromTimeZoneName:(id)arg1 withFloatingTimeZone:(id)arg2;
+ (id)timeZoneNameFromTimeZone:(id)arg1;

- (id)URL;
- (id)UUID;
- (void)_addAttachment:(id)arg1;
- (void)_addDefaultAlarms;
- (void)_addDetachedItem:(id)arg1;
- (void)_addExceptionDate:(id)arg1;
- (void)_adjustAfterRebaseForMovingFromOldSource:(id)arg1 toNewSource:(id)arg2 committingItem:(id)arg3;
- (void)_clearFieldsAfterMovingToNewCalendarOnSameSource;
- (id)_customObjectForKey:(id)arg1 local:(bool)arg2;
- (id)_dataFromStructuredDataDictionary:(id)arg1;
- (void)_deletePersistentItemAndDetachedItems:(id)arg1 forCommittingItem:(id)arg2;
- (void)_deleteSelfAndDetached;
- (bool)_excludeAlarmDueToConnectionTrigger:(id)arg1;
- (id)_generateNewUniqueID;
- (bool)_hadAttendees;
- (bool)_hadRecurrenceRules;
- (bool)_isExternallyOrganizedInvitationWithAttendees:(bool)arg1;
- (void)_moveToCalendar:(id)arg1 forCommittingItem:(id)arg2;
- (void)_recursivelyPerformBlockOnSelfAndDetachedItems:(id /* block */)arg1 forCommittingItem:(id)arg2;
- (void)_removeAttachment:(id)arg1;
- (void)_removeAttendee:(id)arg1;
- (void)_removeDefaultAlarms;
- (void)_removeDetachedItem:(id)arg1;
- (void)_removeExceptionDate:(id)arg1;
- (void)_setCalendarRecursively:(id)arg1 forCommittingItem:(id)arg2;
- (void)_setCustomObject:(id)arg1 forKey:(id)arg2 local:(bool)arg3;
- (void)_setSelfAttendee:(id)arg1;
- (id)_structuredDataDictionaryFromData:(id)arg1;
- (void)_updateDefaultAlarms;
- (void)_updateHasAttendeesIfNeeded;
- (void)_updateHasNotesIfNeeded;
- (void)_updateHasRecurrenceRulesIfNeeded;
- (void)_updateModifiedAlarmByAcknowledging;
- (bool)_validateDeletable:(id*)arg1;
- (void)_willCommit;
- (id)action;
- (unsigned long long)actionsState;
- (void)addAlarm:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)alarms;
- (id)allAlarms;
- (bool)allowsAlarmModifications;
- (bool)allowsAttendeesModifications;
- (bool)allowsCalendarModifications;
- (bool)allowsRecurrenceModifications;
- (bool)allowsSpansOtherThanThisEvent;
- (id)appLink;
- (id)appLinkData;
- (id)attachments;
- (id)attendeeForMe;
- (id)attendeeMatchingEmailAddress:(id)arg1;
- (id)attendees;
- (id)attendeesRaw;
- (id)calendar;
- (id)calendarItemExternalIdentifier;
- (id)calendarItemIdentifier;
- (id)calendarScale;
- (bool)canMoveToCalendar:(id)arg1 error:(id*)arg2;
- (bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (id)clientLocation;
- (id)contactIdentifiers;
- (id)creationDate;
- (id)customObjectForKey:(id)arg1;
- (bool)defaultAlarmWasDeleted;
- (id)defaultAlarms;
- (id)description;
- (id)detachedItems;
- (id)ekExceptionDates;
- (id)endTimeZone;
- (id)endTimeZoneName;
- (id)exceptionDates;
- (id)exportToICS;
- (id)externalData;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalScheduleID;
- (id)externalURI;
- (id)filterAttendeesPendingDeletion:(id)arg1;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (bool)hasAlarms;
- (bool)hasAttendees;
- (bool)hasNotes;
- (bool)hasRecurrenceRules;
- (long long)indexForAlarm:(id)arg1;
- (bool)isAlarmAcknowledgedPropertyDirty;
- (bool)isAllDay;
- (bool)isEditable;
- (bool)isExternallyOrganizedInvitation;
- (bool)isFloating;
- (bool)isOnlyAlarmAcknowledgedPropertyDirty;
- (bool)isOrganizedBySharedCalendarOwner;
- (bool)isSelfOrganized;
- (bool)isSelfOrganizedInvitation;
- (id)lastModifiedDate;
- (id)localCustomObjectForKey:(id)arg1;
- (id)localStructuredData;
- (id)location;
- (unsigned int)modifiedProperties;
- (void)moveToCalendar:(id)arg1;
- (id)notes;
- (id)organizer;
- (id)originalItem;
- (id)participantMatchingContact:(id)arg1;
- (id)preferredLocation;
- (unsigned long long)priority;
- (id)recurrenceRules;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)removeAlarm:(id)arg1;
- (void)removeAllSnoozedAlarms;
- (void)removeAttendee:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (bool)requiresDetach;
- (id)selfAttendee;
- (long long)selfParticipantStatus;
- (int)selfParticipantStatusRaw;
- (int)sequenceNumber;
- (void)setAction:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setAllAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAppLink:(id)arg1;
- (void)setAppLinkData:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCalendarItemIdentifier:(id)arg1;
- (void)setCalendarScale:(id)arg1;
- (void)setClientLocation:(id)arg1;
- (void)setContactIdentifiers:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCustomObject:(id)arg1 forKey:(id)arg2;
- (void)setDefaultAlarmWasDeleted:(bool)arg1;
- (void)setDetachedItems:(id)arg1;
- (void)setEkExceptionDates:(id)arg1;
- (void)setEndTimeZone:(id)arg1;
- (void)setEndTimeZoneName:(id)arg1;
- (void)setExceptionDates:(id)arg1;
- (void)setExternalData:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalScheduleID:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLocalCustomObject:(id)arg1 forKey:(id)arg2;
- (void)setLocalStructuredData:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNotes:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setSelfAttendee:(id)arg1;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedDate:(id)arg1;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (void)setSharedItemCreatedTimeZoneName:(id)arg1;
- (void)setSharedItemModifiedByAddress:(id)arg1;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedDate:(id)arg1;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (void)setSharedItemModifiedTimeZoneName:(id)arg1;
- (void)setStartTimeZone:(id)arg1;
- (void)setStartTimeZoneName:(id)arg1;
- (void)setStructuredData:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setStructuredLocationWithoutPrediction:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelStartLocation:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)sharedItemCreatedByAddress;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemCreatedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedDate;
- (id)sharedItemCreatedTimeZone;
- (id)sharedItemCreatedTimeZoneName;
- (id)sharedItemModifiedByAddress;
- (id)sharedItemModifiedByDisplayName;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedDate;
- (id)sharedItemModifiedTimeZone;
- (id)sharedItemModifiedTimeZoneName;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)sortedAlarms;
- (id)startDateForRecurrence;
- (id)startTimeZone;
- (id)startTimeZoneName;
- (id)structuredData;
- (id)structuredLocation;
- (id)structuredLocationWithoutPrediction;
- (id)timeZone;
- (id)title;
- (id)travelStartLocation;
- (id)uniqueID;
- (id)uniqueId;
- (void)updateWithAppLink:(id)arg1 usedSelectedText:(bool*)arg2;
- (bool)validate:(id*)arg1;
- (void)willSave;

@end
