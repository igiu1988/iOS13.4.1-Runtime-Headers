/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMHandle : NSObject <NSSecureCoding> {
    long long  _IDStatus;
    NSString * _IDWithTrimmedServer;
    NSString * _IDWithoutResource;
    NSString * _abFirstName;
    NSString * _abFullName;
    NSString * _abLastName;
    NSString * _abNickname;
    IMAccount * _account;
    int  _addressBookIdentifier;
    unsigned int  _authRequestStatus;
    bool  _beingTornDown;
    bool  _blockNotifications;
    unsigned long long  _capabilities;
    NSDictionary * _certs;
    CNContact * _cnContact;
    NSString * _countryCode;
    NSString * _displayID;
    NSArray * _emails;
    NSDictionary * _extraProps;
    NSDate * _feedUpdatedDate;
    NSString * _firstName;
    NSString * _formattedNumber;
    NSString * _fullName;
    NSSet * _groups;
    NSString * _guid;
    bool  _hasCheckedCardMap;
    bool  _hasCheckedForSuggestions;
    bool  _hasCheckedPhoneNumber;
    bool  _hasSuggestedName;
    bool  _hasTemporaryWatch;
    NSString * _id;
    NSDate * _idleSince;
    bool  _isAnonymous;
    NSNumber * _isApple;
    bool  _isBot;
    NSNumber * _isBusiness;
    NSNumber * _isMako;
    bool  _isMobile;
    NSString * _lastName;
    MKMapItem * _mapItem;
    NSData * _mapItemBannerImageData;
    NSData * _mapItemImageData;
    NSString * _nickname;
    NSString * _normalizedFormOfID;
    NSMutableArray * _notificationNameQueue;
    NSMutableArray * _notificationQueue;
    int  _notificationQueueCount;
    NSDictionary * _otherServiceIDs;
    IMPerson * _person;
    NSString * _personCentricID;
    struct __CFPhoneNumber { } * _phoneNumberRef;
    NSData * _pictureData;
    unsigned long long  _prevStatus;
    NSString * _prevStatusMsg;
    long long  _priority;
    NSString * _processedStatusMsg;
    unsigned long long  _resourceIndex;
    NSAttributedString * _richStatusMsg;
    unsigned long long  _status;
    NSString * _statusMsg;
    NSString * _suggestedName;
    NSString * _uncanonicalID;
    NSString * _uniqueName;
    NSDate * _whenStatusChanged;
    NSDate * _whenWentOffline;
}

@property (nonatomic, readonly, retain) NSString *ID;
@property (nonatomic) long long IDStatus;
@property (nonatomic, readonly, retain) NSString *IDWithoutResource;
@property (nonatomic, readonly, retain) NSString *_displayNameWithAbbreviation;
@property (nonatomic, readonly, retain) IMAccount *account;
@property (nonatomic, readonly, retain) NSArray *accountSiblingsArray;
@property (nonatomic, readonly, retain) NSString *accountTypeName;
@property (nonatomic, readonly) int addressBookIdentifier;
@property (nonatomic, readonly) unsigned int authRequestStatus;
@property (nonatomic, readonly, retain) id bestAccountSibling;
@property (nonatomic, readonly) id bestSibling;
@property (nonatomic, readonly) bool canBeAdded;
@property (nonatomic, readonly) bool canBeDeleted;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, retain) CNContact *cnContact;
@property (nonatomic, readonly, retain) NSString *countryCode;
@property (nonatomic, readonly, retain) NSString *displayID;
@property (nonatomic, readonly, retain) NSString *email;
@property (nonatomic, readonly, retain) NSArray *emails;
@property (nonatomic, readonly, retain) NSArray *existingAccountSiblingsArray;
@property (nonatomic, readonly, retain) NSDictionary *extraProperties;
@property (nonatomic, readonly, retain) NSDate *feedUpdatedDate;
@property (nonatomic, readonly, retain) NSString *firstName;
@property (nonatomic, readonly, retain) NSString *fullName;
@property (nonatomic, readonly, retain) NSSet *groups;
@property (nonatomic, readonly, retain) NSArray *groupsArray;
@property (nonatomic, readonly, retain) NSString *guid;
@property (nonatomic, readonly) bool hasAudio;
@property (nonatomic) bool hasCheckedForSuggestions;
@property (nonatomic, readonly) bool hasConferencing;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasMultiwayAudio;
@property (nonatomic, readonly) bool hasMultiwayVideo;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNoConferencingCaps;
@property (nonatomic, readonly) bool hasOtherSiblings;
@property (nonatomic) bool hasSuggestedName;
@property (nonatomic, readonly) bool hasVideo;
@property (nonatomic, readonly, retain) NSString *idleString;
@property (nonatomic, readonly) double idleTime;
@property (nonatomic, readonly) bool isAnonymous;
@property (setter=setBlocked:, nonatomic) bool isBlocked;
@property (nonatomic, readonly) bool isBot;
@property (nonatomic, readonly) bool isBuddy;
@property (nonatomic, readonly) bool isConferenceAvailable;
@property (nonatomic, readonly) bool isLoginIMHandle;
@property (nonatomic, readonly) bool isLoginIMHandleForAnyAccount;
@property (nonatomic, readonly) bool isMobile;
@property (nonatomic, readonly) bool isSystemUser;
@property (nonatomic, readonly) bool isVisiblyBlocked;
@property (nonatomic, readonly, retain) NSString *lastName;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) NSData *mapItemBannerImageData;
@property (nonatomic, retain) NSData *mapItemImageData;
@property (nonatomic, readonly, retain) NSString *mobileDeviceName;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *nameAndEmail;
@property (nonatomic, readonly, retain) NSString *nameAndID;
@property (nonatomic, readonly, retain) NSString *nameOfStatus;
@property (nonatomic, readonly, retain) NSString *nickname;
@property (nonatomic, readonly, retain) NSString *normalizedID;
@property (nonatomic, readonly, retain) NSString *offlineString;
@property (nonatomic, readonly, retain) NSString *originalID;
@property (nonatomic, retain) NSDictionary *otherServiceIDs;
@property (setter=setIMPerson:, nonatomic, retain) IMPerson *person;
@property (nonatomic, retain) NSString *personCentricID;
@property (nonatomic, readonly, retain) NSData *pictureData;
@property (nonatomic, readonly) unsigned long long previousStatus;
@property (nonatomic, readonly, retain) NSString *previousStatusMessage;
@property (nonatomic) long long priority;
@property (nonatomic, readonly, retain) NSString *resource;
@property (nonatomic, readonly, retain) NSAttributedString *richStatusMessage;
@property (nonatomic, readonly, retain) NSString *server;
@property (nonatomic, readonly, retain) IMServiceImpl *service;
@property (nonatomic, readonly, retain) NSSet *siblings;
@property (nonatomic, readonly, retain) NSArray *siblingsArray;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly, retain) NSString *statusMessage;
@property (nonatomic, copy) NSString *suggestedName;
@property (nonatomic, readonly) double timeSinceStatusChanged;
@property (nonatomic, readonly) double timeSinceWentOffline;
@property (nonatomic, readonly, retain) NSString *uniqueName;
@property (nonatomic, readonly) bool watchingIMHandle;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (void)_loadStatusNames;
+ (void)bestHandlesForPersons:(id)arg1 completion:(id /* block */)arg2;
+ (void)bestHandlesForPersons:(id)arg1 useExtendedAsyncLookup:(bool)arg2 completion:(id /* block */)arg3;
+ (id)bestIMHandleInArray:(id)arg1;
+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (void)handlesForPersons:(id)arg1 useBestHandle:(bool)arg2 useExtendedAsyncLookup:(bool)arg3 completion:(id /* block */)arg4;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)nameOfStatus:(unsigned long long)arg1;
+ (bool)notificationsEnabled;
+ (void)setNotificationsEnabled:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (void)validHandlesForPersons:(id)arg1 completion:(id /* block */)arg2;
+ (void)validHandlesForPersons:(id)arg1 useExtendedAsyncLookup:(bool)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)ID;
- (long long)IDStatus;
- (id)IDWithoutResource;
- (id)_IDWithTrimmedServer;
- (id)__imcnContactWithKeys:(id)arg1;
- (id)_abPersonCreateIfNeeded;
- (bool)_allowedByScreenTime;
- (id)_bestChatSibling;
- (id)_cachedPerson;
- (id)_chatSiblings;
- (id)_chatSiblingsArray;
- (void)_clearABPersonLookup;
- (void)_clearABProperties;
- (void)_clearStatusMessageURLCache;
- (id)_contactID;
- (void)_contactStoreDidChange:(id)arg1;
- (void)_createPhoneNumberRefIfNeeded;
- (id)_displayNameWithAbbreviation;
- (id)_displayNameWithContact:(id)arg1;
- (id)_displayNameWithNicknameIfAvailable;
- (id)_fallbackCNContactWithAllKeys;
- (void)_fetchBusinessInfo;
- (void)_fetchMapItemBannerImageDataForMapItem:(id)arg1;
- (void)_fetchMapItemImageDataForMapItem:(id)arg1;
- (void)_filterStatusMessage;
- (id)_formattedPhoneNumber;
- (id)_handleInfo;
- (bool)_hasABName;
- (bool)_hasServiceNameProperties;
- (void)_imPersonPictureChanged:(id)arg1;
- (bool)_isChatSiblingOf:(id)arg1;
- (bool)_isMyIDInList:(id)arg1;
- (void)_mapItemBannerImageDataFetchedWithResponse:(id)arg1 statusCode:(long long)arg2 resultData:(id)arg3 remoteURLConnectionError:(id)arg4;
- (void)_mapItemFetchedWithMapItems:(id)arg1 error:(id)arg2;
- (void)_mapItemImageDataFetchedWithResponse:(id)arg1 statusCode:(long long)arg2 resultData:(id)arg3 remoteURLConnectionError:(id)arg4;
- (id)_nameForComparisonPreferFirst:(bool)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postOnScreenChangedNotificationForProperty:(id)arg1;
- (void)_registerForNotifications;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendRemoteLogDumpRequest;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (bool)_setCapabilities:(unsigned long long)arg1;
- (void)_setCountryCode:(id)arg1 updateSiblings:(bool)arg2;
- (void)_setExtraProperties:(id)arg1;
- (void)_setIDStatus:(long long)arg1;
- (void)_setOriginalID:(id)arg1;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(bool)arg3;
- (void)_setOriginalID:(id)arg1 updateSiblings:(bool)arg2;
- (void)_stopRetainingAccount:(id)arg1;
- (void)_updateOriginalID:(id)arg1;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (id)account;
- (id)accountSiblingsArray;
- (id)accountTypeName;
- (int)addressBookIdentifier;
- (bool)areABPropertiesRecent;
- (unsigned int)authRequestStatus;
- (void)beginNotificationQueue;
- (id)bestAccountSibling;
- (id)bestIMHandleForAccount:(id)arg1;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (id)bestIMHandleForService:(id)arg1;
- (id)bestSibling;
- (bool)canBeAdded;
- (bool)canBeDeleted;
- (unsigned long long)capabilities;
- (id)chatSiblingsArray;
- (void)clearABPerson;
- (id)cnContact;
- (id)cnContactWithKeys:(id)arg1;
- (long long)compareAccountNames:(id)arg1;
- (long long)compareFirstNames:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (long long)compareLastNames:(id)arg1;
- (long long)compareNormalizedIDs:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)customPictureData;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)dependentIMHandles;
- (id)description;
- (id)displayID;
- (id)displayNameForChat:(id)arg1;
- (id)email;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)existingAccountSiblingsArray;
- (id)existingChatSiblingsArray;
- (id)existingIMHandleWithoutResource;
- (id)extraProperties;
- (id)feedUpdatedDate;
- (id)firstName;
- (id)fmfHandle;
- (id)fmfSiblingHandles;
- (id)fullName;
- (id)groups;
- (id)groupsArray;
- (id)guid;
- (bool)hasAudio;
- (bool)hasCapability:(unsigned long long)arg1;
- (bool)hasCheckedForSuggestions;
- (bool)hasConferencing;
- (bool)hasLocation;
- (bool)hasMultiwayAudio;
- (bool)hasMultiwayVideo;
- (bool)hasName;
- (bool)hasOtherSiblings;
- (bool)hasResource;
- (bool)hasServer;
- (bool)hasSuggestedName;
- (bool)hasVideo;
- (unsigned long long)hash;
- (id)idleString;
- (double)idleTime;
- (id)imHandleForOtherAccount:(id)arg1;
- (id)imHandleWithoutResource;
- (id)immediateNameWithNeedsSuggestedNameFetch:(bool*)arg1 useSuggestedName:(bool)arg2;
- (id)init;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isAccountSiblingOf:(id)arg1;
- (bool)isAnonymous;
- (bool)isApple;
- (bool)isBetterThanIMHandle:(id)arg1;
- (bool)isBlocked;
- (bool)isBot;
- (bool)isBuddy;
- (bool)isBusiness;
- (bool)isConferenceAvailable;
- (bool)isContact;
- (bool)isLoginIMHandle;
- (bool)isLoginIMHandleForAnyAccount;
- (bool)isMako;
- (bool)isMobile;
- (bool)isSiblingOf:(id)arg1;
- (bool)isSystemUser;
- (bool)isVisiblyBlocked;
- (id)lastName;
- (id)mapItem;
- (id)mapItemBannerImageData;
- (id)mapItemImageData;
- (bool)matchesIMHandle:(id)arg1;
- (id)mobileDeviceName;
- (id)name;
- (id)nameAndEmail;
- (id)nameAndID;
- (id)nameOfStatus;
- (id)nickname;
- (id)normalizedID;
- (id)offlineString;
- (id)originalID;
- (id)otherServiceIDs;
- (id)person;
- (id)personCentricID;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)pictureData;
- (void)postNotificationName:(id)arg1;
- (unsigned long long)previousStatus;
- (id)previousStatusMessage;
- (long long)priority;
- (void)propertiesChanged:(id)arg1;
- (id)publicAPIPropertiesDictionary;
- (void)releaseNotificationQueue;
- (void)requestValueOfProperty:(id)arg1;
- (bool)resetABPerson;
- (void)resetABProperties;
- (void)resetUniqueName;
- (id)resource;
- (id)richStatusMessage;
- (void)scheduleSuggestedNameFetchIfNecessary;
- (void)sendNotificationABPersonChanged;
- (id)server;
- (id)service;
- (void)setAnonymous:(bool)arg1;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setCnContact:(id)arg1;
- (void)setCustomPictureData:(id)arg1;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (void)setEmail:(id)arg1;
- (void)setEmail:(id)arg1 andUpdateABPerson:(bool)arg2;
- (void)setEmails:(id)arg1;
- (void)setEmails:(id)arg1 andUpdateABPerson:(bool)arg2;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(bool)arg4;
- (void)setHasCheckedForSuggestions:(bool)arg1;
- (void)setHasSuggestedName:(bool)arg1;
- (void)setHasTemporaryWatch:(bool)arg1;
- (void)setIDStatus:(long long)arg1;
- (void)setIMPerson:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsBot:(bool)arg1;
- (void)setIsMobile:(bool)arg1;
- (void)setLocalNickname:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapItemBannerImageData:(id)arg1;
- (void)setMapItemImageData:(id)arg1;
- (void)setOtherServiceIDs:(id)arg1;
- (void)setPersonCentricID:(id)arg1;
- (void)setPersonStatus:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setStatus:(unsigned long long)arg1 message:(id)arg2 richMessage:(id)arg3;
- (void)setSuggestedName:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (bool)shouldQueueNotifications;
- (id)siblings;
- (id)siblingsArray;
- (unsigned int)sortOrderInGroup:(id)arg1;
- (unsigned long long)status;
- (void)statusChanged:(unsigned long long)arg1;
- (void)statusChanged:(unsigned long long)arg1 message:(id)arg2;
- (id)statusMessage;
- (void)statusMessageChanged:(id)arg1;
- (id)suggestedName;
- (double)timeSinceStatusChanged;
- (double)timeSinceWentOffline;
- (id)uniqueName;
- (void)updateCNContact:(id)arg1;
- (bool)watchingIMHandle;

// Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore

- (bool)hasNoConferencingCaps;

@end
