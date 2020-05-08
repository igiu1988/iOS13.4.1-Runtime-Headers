/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMessageListItemChange : NSObject <EFPubliclyDescribable, NSSecureCoding> {
    NSArray * _ccList;
    NSNumber * _conversationID;
    NSNumber * _conversationNotificationLevel;
    NSNumber * _count;
    NSDate * _date;
    <EMCollectionItemID> * _displayMessageItemID;
    <EMMessageListItemChangeFlagColors> * _flagColors;
    ECMessageFlags * _flags;
    NSNumber * _hasAttachments;
    NSNumber * _hasUnflagged;
    NSNumber * _isBlocked;
    bool  _isCCMe;
    bool  _isToMe;
    NSNumber * _isVIP;
    NSArray * _mailboxObjectIDs;
    NSArray * _mailboxes;
    NSArray * _senderList;
    <EMMessageListItemChangeSubject> * _subject;
    <EMMessageListItemChangeSummary> * _summary;
    NSArray * _toList;
}

@property (nonatomic, copy) NSArray *ccList;
@property (nonatomic, retain) NSNumber *conversationID;
@property (nonatomic, retain) NSNumber *conversationNotificationLevel;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <EMCollectionItemID> *displayMessageItemID;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, copy) <EMMessageListItemChangeFlagColors> *flagColors;
@property (nonatomic, retain) ECMessageFlags *flags;
@property (nonatomic, retain) NSNumber *hasAttachments;
@property (nonatomic, retain) NSNumber *hasUnflagged;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *isBlocked;
@property bool isCCMe;
@property bool isToMe;
@property (nonatomic, retain) NSNumber *isVIP;
@property (nonatomic, copy) NSArray *mailboxObjectIDs;
@property (nonatomic, copy) NSArray *mailboxes;
@property (nonatomic, copy) NSArray *senderList;
@property (nonatomic, retain) <EMMessageListItemChangeSubject> *subject;
@property (nonatomic, copy) <EMMessageListItemChangeSummary> *summary;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *toList;

+ (id)changeForKeyPaths:(id)arg1 ofItem:(id)arg2;
+ (id)changeFrom:(id)arg1 to:(id)arg2;
+ (id)changesForKeyPaths:(id)arg1 ofItems:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_changeDescriptionsForInternal:(bool)arg1 useDebugDescriptions:(bool)arg2;
- (id)_descriptionForInternal:(bool)arg1 useDebugDescriptions:(bool)arg2;
- (void)addChange:(id)arg1;
- (bool)applyToMessageListItem:(id)arg1;
- (id)ccList;
- (id)conversationID;
- (id)conversationNotificationLevel;
- (id)count;
- (id)date;
- (id)debugDescription;
- (id)description;
- (id)displayMessageItemID;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)flagColors;
- (id)flags;
- (id)hasAttachments;
- (id)hasUnflagged;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)isBlocked;
- (bool)isCCMe;
- (bool)isEqual:(id)arg1;
- (bool)isToMe;
- (id)isVIP;
- (id)mailboxObjectIDs;
- (id)mailboxes;
- (id)senderList;
- (void)setCcList:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setConversationNotificationLevel:(id)arg1;
- (void)setCount:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDisplayMessageItemID:(id)arg1;
- (void)setFlagColors:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setHasAttachments:(id)arg1;
- (void)setHasUnflagged:(id)arg1;
- (void)setIsBlocked:(id)arg1;
- (void)setIsCCMe:(bool)arg1;
- (void)setIsToMe:(bool)arg1;
- (void)setIsVIP:(id)arg1;
- (void)setMailboxObjectIDs:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setSenderList:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setToList:(id)arg1;
- (id)subject;
- (id)summary;
- (id)toList;

@end
