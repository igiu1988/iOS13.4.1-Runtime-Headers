/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMExternalSyncMetadataWritableProviding, REMObjectIDProviding> {
    REMObjectID * _accountID;
    NSString * _badgeEmblem;
    NSArray * _calDAVNotifications;
    REMColor * _color;
    unsigned long long  _copyGeneration;
    NSDictionary * _daBulkRequests;
    long long  _daDisplayOrder;
    NSString * _daExternalIdentificationTag;
    bool  _daIsEventOnlyContainer;
    bool  _daIsImmutable;
    bool  _daIsNotificationsCollection;
    bool  _daIsReadOnly;
    bool  _hasDeserializedReminderIDsMergeableOrdering;
    bool  _isGroup;
    bool  _isPlaceholder;
    NSDate * _lastUserAccessDate;
    NSString * _name;
    REMObjectID * _objectID;
    REMObjectID * _parentAccountID;
    REMObjectID * _parentListID;
    NSData * _reminderIDsMergeableOrderingData;
    NSSet * _reminderIDsToUndelete;
    bool  _remindersICSDisplayOrderChanged;
    REMResolutionTokenMap * _resolutionTokenMap;
    NSString * _sharedOwnerAddress;
    REMObjectID * _sharedOwnerID;
    NSString * _sharedOwnerName;
    NSArray * _sharees;
    long long  _sharingStatus;
    bool  _showingLargeAttachments;
    unsigned long long  _storeGeneration;
    NSString * daPushKey;
    NSString * daSyncToken;
    NSString * externalIdentifier;
    NSString * externalModificationTag;
}

@property (nonatomic, retain) REMObjectID *accountID;
@property (nonatomic, retain) NSString *badgeEmblem;
@property (nonatomic, retain) NSArray *calDAVNotifications;
@property (nonatomic, retain) REMColor *color;
@property (nonatomic, retain) NSDictionary *daBulkRequests;
@property (nonatomic) long long daDisplayOrder;
@property (nonatomic, retain) NSString *daExternalIdentificationTag;
@property (nonatomic) bool daIsEventOnlyContainer;
@property (nonatomic) bool daIsImmutable;
@property (nonatomic) bool daIsNotificationsCollection;
@property (nonatomic) bool daIsReadOnly;
@property (nonatomic, copy) NSString *daPushKey;
@property (nonatomic, copy) NSString *daSyncToken;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic) bool isGroup;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, copy) NSDate *lastUserAccessDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) REMObjectID *parentAccountID;
@property (nonatomic, retain) REMObjectID *parentListID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) NSData *reminderIDsMergeableOrderingData;
@property (nonatomic, retain) NSSet *reminderIDsToUndelete;
@property (nonatomic) bool remindersICSDisplayOrderChanged;
@property (nonatomic, retain) REMResolutionTokenMap *resolutionTokenMap;
@property (nonatomic, copy) NSString *sharedOwnerAddress;
@property (nonatomic, retain) REMObjectID *sharedOwnerID;
@property (nonatomic, copy) NSString *sharedOwnerName;
@property (nonatomic, retain) NSArray *sharees;
@property (nonatomic) long long sharingStatus;
@property (nonatomic) bool showingLargeAttachments;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id*)arg2;
+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)badgeEmblem;
- (id)calDAVNotifications;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daBulkRequests;
- (long long)daDisplayOrder;
- (id)daExternalIdentificationTag;
- (bool)daIsEventOnlyContainer;
- (bool)daIsImmutable;
- (bool)daIsNotificationsCollection;
- (bool)daIsReadOnly;
- (id)daPushKey;
- (id)daSyncToken;
- (id)debugDescription;
- (id)description;
- (id)displayName;
- (id)ekColor;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)externalModificationTag;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(bool)arg4 reminderIDsMergeableOrdering:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(bool)arg4 reminderIDsMergeableOrderingData:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (bool)isPlaceholder;
- (id)lastUserAccessDate;
- (id)name;
- (id)objectID;
- (id)parentAccountID;
- (id)parentListID;
- (id)remObjectID;
- (id)reminderIDsMergeableOrdering;
- (id)reminderIDsMergeableOrderingData;
- (id)reminderIDsToUndelete;
- (bool)remindersICSDisplayOrderChanged;
- (id)resolutionTokenMap;
- (void)setAccountID:(id)arg1;
- (void)setBadgeEmblem:(id)arg1;
- (void)setCalDAVNotifications:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDaBulkRequests:(id)arg1;
- (void)setDaDisplayOrder:(long long)arg1;
- (void)setDaExternalIdentificationTag:(id)arg1;
- (void)setDaIsEventOnlyContainer:(bool)arg1;
- (void)setDaIsImmutable:(bool)arg1;
- (void)setDaIsNotificationsCollection:(bool)arg1;
- (void)setDaIsReadOnly:(bool)arg1;
- (void)setDaPushKey:(id)arg1;
- (void)setDaSyncToken:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setIsGroup:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setLastUserAccessDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setParentAccountID:(id)arg1;
- (void)setParentListID:(id)arg1;
- (void)setReminderIDsMergeableOrderingData:(id)arg1;
- (void)setReminderIDsToUndelete:(id)arg1;
- (void)setRemindersICSDisplayOrderChanged:(bool)arg1;
- (void)setResolutionTokenMap:(id)arg1;
- (void)setSharedOwnerAddress:(id)arg1;
- (void)setSharedOwnerID:(id)arg1;
- (void)setSharedOwnerName:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSharingStatus:(long long)arg1;
- (void)setShowingLargeAttachments:(bool)arg1;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (id)sharedOwnerAddress;
- (id)sharedOwnerID;
- (id)sharedOwnerName;
- (id)sharees;
- (long long)sharingStatus;
- (bool)showingLargeAttachments;
- (unsigned long long)storeGeneration;

@end