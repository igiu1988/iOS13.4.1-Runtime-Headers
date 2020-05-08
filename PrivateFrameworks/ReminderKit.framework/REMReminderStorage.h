/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMReminderStorage : NSObject <NSCopying, NSSecureCoding, REMExternalSyncMetadataWritableProviding, REMObjectIDProviding> {
    REMObjectID * _accountID;
    NSArray * _alarms;
    bool  _allDay;
    NSArray * _attachments;
    bool  _completed;
    NSDate * _completionDate;
    REMContactRepresentation * _contactHandles;
    unsigned long long  _copyGeneration;
    NSDate * _creationDate;
    NSString * _daCalendarItemUniqueIdentifier;
    REMCRMergeableStringDocument * _deserializedNotesDocumentCache;
    REMCRMergeableStringDocument * _deserializedTitleDocumentCache;
    REMDisplayDate * _displayDate;
    NSDateComponents * _dueDateComponents;
    long long  _flagged;
    bool  _hasDeserializedNotesDocument;
    bool  _hasDeserializedTitleDocument;
    unsigned long long  _icsDisplayOrder;
    NSURL * _icsUrl;
    NSData * _importedICSData;
    NSDate * _lastBannerPresentationDate;
    NSDate * _lastModifiedDate;
    REMObjectID * _listID;
    NSData * _notesDocumentData;
    REMObjectID * _objectID;
    REMObjectID * _parentReminderID;
    unsigned long long  _priority;
    NSArray * _recurrenceRules;
    REMResolutionTokenMap * _resolutionTokenMap;
    NSData * _siriFoundInAppsData;
    long long  _siriFoundInAppsUserConfirmation;
    NSDateComponents * _startDateComponents;
    unsigned long long  _storeGeneration;
    NSSet * _subtaskIDsToUndelete;
    NSString * _timeZone;
    NSData * _titleDocumentData;
    REMUserActivity * _userActivity;
    NSString * daPushKey;
    NSString * daSyncToken;
    NSString * externalIdentifier;
    NSString * externalModificationTag;
}

@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, retain) NSArray *alarms;
@property (nonatomic) bool allDay;
@property (nonatomic, retain) NSArray *attachments;
@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, copy) NSDate *completionDate;
@property (nonatomic, retain) REMContactRepresentation *contactHandles;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *daCalendarItemUniqueIdentifier;
@property (nonatomic, copy) NSString *daPushKey;
@property (nonatomic, copy) NSString *daSyncToken;
@property (nonatomic, copy) REMDisplayDate *displayDate;
@property (nonatomic, copy) NSDateComponents *dueDateComponents;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic) long long flagged;
@property (nonatomic) unsigned long long icsDisplayOrder;
@property (nonatomic, copy) NSURL *icsUrl;
@property (nonatomic, retain) NSData *importedICSData;
@property (nonatomic, readonly) bool isOverdue;
@property (nonatomic, readonly) bool isRecurrent;
@property (nonatomic, copy) NSDate *lastBannerPresentationDate;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSString *legacyNotificationIdentifier;
@property (nonatomic, retain) REMObjectID *listID;
@property (nonatomic, retain) NSData *notesDocumentData;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentReminderID;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NSArray *recurrenceRules;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, copy) NSData *siriFoundInAppsData;
@property (nonatomic) long long siriFoundInAppsUserConfirmation;
@property (nonatomic, copy) NSDateComponents *startDateComponents;
@property (nonatomic, retain) NSSet *subtaskIDsToUndelete;
@property (nonatomic, copy) NSString *timeZone;
@property (nonatomic, retain) NSData *titleDocumentData;
@property (nonatomic, copy) REMUserActivity *userActivity;

+ (id)cdEntityName;
+ (bool)isDate:(id)arg1 overdueAtReferenceDate:(id)arg2 allDay:(bool)arg3 showAllDayRemindersAsOverdue:(bool)arg4;
+ (id)newObjectID;
+ (id)notesReplicaIDSourceWithAccountID:(id)arg1 reminderID:(id)arg2;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)titleReplicaIDSourceWithAccountID:(id)arg1 reminderID:(id)arg2;

- (void).cxx_destruct;
- (id)accountID;
- (id)alarms;
- (bool)allDay;
- (id)attachments;
- (id)completionDate;
- (id)contactHandles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)daCalendarItemUniqueIdentifier;
- (id)daPushKey;
- (id)daSyncToken;
- (id)debugDescription;
- (id)description;
- (id)displayDate;
- (id)dueDateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)externalModificationTag;
- (long long)flagged;
- (unsigned long long)hash;
- (unsigned long long)icsDisplayOrder;
- (id)icsUrl;
- (id)importedICSData;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 listID:(id)arg2 accountID:(id)arg3;
- (bool)isCompleted;
- (bool)isEqual:(id)arg1;
- (bool)isOverdue;
- (bool)isRecurrent;
- (id)lastBannerPresentationDate;
- (id)lastModifiedDate;
- (id)legacyNotificationIdentifier;
- (id)listID;
- (id)notesDocument;
- (id)notesDocumentData;
- (id)notesReplicaIDSource;
- (id)objectID;
- (id)parentReminderID;
- (unsigned long long)priority;
- (id)recurrenceRules;
- (id)remObjectID;
- (id)resolutionTokenMap;
- (void)setAccountID:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAttachments:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setContactHandles:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDaCalendarItemUniqueIdentifier:(id)arg1;
- (void)setDaPushKey:(id)arg1;
- (void)setDaSyncToken:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setDueDateComponents:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setFlagged:(long long)arg1;
- (void)setIcsDisplayOrder:(unsigned long long)arg1;
- (void)setIcsUrl:(id)arg1;
- (void)setImportedICSData:(id)arg1;
- (void)setLastBannerPresentationDate:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setListID:(id)arg1;
- (void)setNotesDocument:(id)arg1;
- (void)setNotesDocumentData:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setParentReminderID:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setResolutionTokenMap:(id)arg1;
- (void)setSiriFoundInAppsData:(id)arg1;
- (void)setSiriFoundInAppsUserConfirmation:(long long)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (void)setSubtaskIDsToUndelete:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitleDocument:(id)arg1;
- (void)setTitleDocumentData:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (id)siriFoundInAppsData;
- (long long)siriFoundInAppsUserConfirmation;
- (id)startDateComponents;
- (unsigned long long)storeGeneration;
- (id)subtaskIDsToUndelete;
- (id)timeZone;
- (id)titleDocument;
- (id)titleDocumentData;
- (id)titleReplicaIDSource;
- (void)updateDisplayDate;
- (id)userActivity;

@end
