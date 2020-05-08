/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSectionInfo : PBCodable <NSCopying> {
    unsigned int  _alertType;
    bool  _allowsNotifications;
    int  _authorizationStatus;
    bool  _criticalAlertSetting;
    NSString * _displayName;
    bool  _displaysCriticalBulletinsLegacy;
    bool  _excludeFromBulletinBoard;
    NSString * _factorySectionID;
    int  _groupingSetting;
    struct { 
        unsigned int alertType : 1; 
        unsigned int authorizationStatus : 1; 
        unsigned int groupingSetting : 1; 
        unsigned int lockScreenSetting : 1; 
        unsigned int notificationCenterLimit : 1; 
        unsigned int notificationCenterSetting : 1; 
        unsigned int phoneAuthorizationStatus : 1; 
        unsigned int pushSettings : 1; 
        unsigned int sectionCategory : 1; 
        unsigned int sectionType : 1; 
        unsigned int spokenNotificationSetting : 1; 
        unsigned int subsectionPriority : 1; 
        unsigned int suppressedSettings : 1; 
        unsigned int version : 1; 
        unsigned int allowsNotifications : 1; 
        unsigned int criticalAlertSetting : 1; 
        unsigned int displaysCriticalBulletinsLegacy : 1; 
        unsigned int excludeFromBulletinBoard : 1; 
        unsigned int iconsStripped : 1; 
        unsigned int phoneAllowsNotifications : 1; 
        unsigned int showsInLockScreen : 1; 
        unsigned int showsInNotificationCenter : 1; 
        unsigned int showsMessagePreview : 1; 
        unsigned int showsOnExternalDevices : 1; 
        unsigned int suppressFromSettings : 1; 
    }  _has;
    BLTPBSectionIcon * _icon;
    bool  _iconsStripped;
    int  _lockScreenSetting;
    unsigned int  _notificationCenterLimit;
    int  _notificationCenterSetting;
    bool  _phoneAllowsNotifications;
    int  _phoneAuthorizationStatus;
    unsigned int  _pushSettings;
    int  _sectionCategory;
    NSString * _sectionID;
    int  _sectionType;
    bool  _showsInLockScreen;
    bool  _showsInNotificationCenter;
    bool  _showsMessagePreview;
    bool  _showsOnExternalDevices;
    int  _spokenNotificationSetting;
    NSString * _subsectionID;
    int  _subsectionPriority;
    NSMutableArray * _subsections;
    bool  _suppressFromSettings;
    unsigned int  _suppressedSettings;
    NSString * _universalSectionID;
    unsigned int  _version;
    NSString * _watchSectionID;
}

@property (nonatomic) unsigned int alertType;
@property (nonatomic) bool allowsNotifications;
@property (nonatomic) int authorizationStatus;
@property (nonatomic) bool criticalAlertSetting;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool displaysCriticalBulletinsLegacy;
@property (nonatomic) bool excludeFromBulletinBoard;
@property (nonatomic, retain) NSString *factorySectionID;
@property (nonatomic) int groupingSetting;
@property (nonatomic) bool hasAlertType;
@property (nonatomic) bool hasAllowsNotifications;
@property (nonatomic) bool hasAuthorizationStatus;
@property (nonatomic) bool hasCriticalAlertSetting;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasDisplaysCriticalBulletinsLegacy;
@property (nonatomic) bool hasExcludeFromBulletinBoard;
@property (nonatomic, readonly) bool hasFactorySectionID;
@property (nonatomic) bool hasGroupingSetting;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic) bool hasIconsStripped;
@property (nonatomic) bool hasLockScreenSetting;
@property (nonatomic) bool hasNotificationCenterLimit;
@property (nonatomic) bool hasNotificationCenterSetting;
@property (nonatomic) bool hasPhoneAllowsNotifications;
@property (nonatomic) bool hasPhoneAuthorizationStatus;
@property (nonatomic) bool hasPushSettings;
@property (nonatomic) bool hasSectionCategory;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool hasSectionType;
@property (nonatomic) bool hasShowsInLockScreen;
@property (nonatomic) bool hasShowsInNotificationCenter;
@property (nonatomic) bool hasShowsMessagePreview;
@property (nonatomic) bool hasShowsOnExternalDevices;
@property (nonatomic) bool hasSpokenNotificationSetting;
@property (nonatomic, readonly) bool hasSubsectionID;
@property (nonatomic) bool hasSubsectionPriority;
@property (nonatomic) bool hasSuppressFromSettings;
@property (nonatomic) bool hasSuppressedSettings;
@property (nonatomic, readonly) bool hasUniversalSectionID;
@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) bool hasWatchSectionID;
@property (nonatomic, retain) BLTPBSectionIcon *icon;
@property (nonatomic) bool iconsStripped;
@property (nonatomic) int lockScreenSetting;
@property (nonatomic) unsigned int notificationCenterLimit;
@property (nonatomic) int notificationCenterSetting;
@property (nonatomic) bool phoneAllowsNotifications;
@property (nonatomic) int phoneAuthorizationStatus;
@property (nonatomic) unsigned int pushSettings;
@property (nonatomic) int sectionCategory;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) int sectionType;
@property (nonatomic) bool showsInLockScreen;
@property (nonatomic) bool showsInNotificationCenter;
@property (nonatomic) bool showsMessagePreview;
@property (nonatomic) bool showsOnExternalDevices;
@property (nonatomic) int spokenNotificationSetting;
@property (nonatomic, retain) NSString *subsectionID;
@property (nonatomic) int subsectionPriority;
@property (nonatomic, retain) NSMutableArray *subsections;
@property (nonatomic) bool suppressFromSettings;
@property (nonatomic) unsigned int suppressedSettings;
@property (nonatomic, retain) NSString *universalSectionID;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSString *watchSectionID;

+ (Class)subsectionsType;

- (void).cxx_destruct;
- (int)StringAsGroupingSetting:(id)arg1;
- (int)StringAsLockScreenSetting:(id)arg1;
- (int)StringAsNotificationCenterSetting:(id)arg1;
- (int)StringAsSpokenNotificationSetting:(id)arg1;
- (void)addSubsections:(id)arg1;
- (unsigned int)alertType;
- (bool)allowsNotifications;
- (int)authorizationStatus;
- (void)clearSubsections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)criticalAlertSetting;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)displaysCriticalBulletinsLegacy;
- (bool)excludeFromBulletinBoard;
- (id)factorySectionID;
- (int)groupingSetting;
- (id)groupingSettingAsString:(int)arg1;
- (bool)hasAlertType;
- (bool)hasAllowsNotifications;
- (bool)hasAuthorizationStatus;
- (bool)hasCriticalAlertSetting;
- (bool)hasDisplayName;
- (bool)hasDisplaysCriticalBulletinsLegacy;
- (bool)hasExcludeFromBulletinBoard;
- (bool)hasFactorySectionID;
- (bool)hasGroupingSetting;
- (bool)hasIcon;
- (bool)hasIconsStripped;
- (bool)hasLockScreenSetting;
- (bool)hasNotificationCenterLimit;
- (bool)hasNotificationCenterSetting;
- (bool)hasPhoneAllowsNotifications;
- (bool)hasPhoneAuthorizationStatus;
- (bool)hasPushSettings;
- (bool)hasSectionCategory;
- (bool)hasSectionID;
- (bool)hasSectionType;
- (bool)hasShowsInLockScreen;
- (bool)hasShowsInNotificationCenter;
- (bool)hasShowsMessagePreview;
- (bool)hasShowsOnExternalDevices;
- (bool)hasSpokenNotificationSetting;
- (bool)hasSubsectionID;
- (bool)hasSubsectionPriority;
- (bool)hasSuppressFromSettings;
- (bool)hasSuppressedSettings;
- (bool)hasUniversalSectionID;
- (bool)hasVersion;
- (bool)hasWatchSectionID;
- (unsigned long long)hash;
- (id)icon;
- (bool)iconsStripped;
- (bool)isEqual:(id)arg1;
- (int)lockScreenSetting;
- (id)lockScreenSettingAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)notificationCenterLimit;
- (int)notificationCenterSetting;
- (id)notificationCenterSettingAsString:(int)arg1;
- (bool)phoneAllowsNotifications;
- (int)phoneAuthorizationStatus;
- (unsigned int)pushSettings;
- (bool)readFrom:(id)arg1;
- (int)sectionCategory;
- (id)sectionID;
- (int)sectionType;
- (void)setAlertType:(unsigned int)arg1;
- (void)setAllowsNotifications:(bool)arg1;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setCriticalAlertSetting:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaysCriticalBulletinsLegacy:(bool)arg1;
- (void)setExcludeFromBulletinBoard:(bool)arg1;
- (void)setFactorySectionID:(id)arg1;
- (void)setGroupingSetting:(int)arg1;
- (void)setHasAlertType:(bool)arg1;
- (void)setHasAllowsNotifications:(bool)arg1;
- (void)setHasAuthorizationStatus:(bool)arg1;
- (void)setHasCriticalAlertSetting:(bool)arg1;
- (void)setHasDisplaysCriticalBulletinsLegacy:(bool)arg1;
- (void)setHasExcludeFromBulletinBoard:(bool)arg1;
- (void)setHasGroupingSetting:(bool)arg1;
- (void)setHasIconsStripped:(bool)arg1;
- (void)setHasLockScreenSetting:(bool)arg1;
- (void)setHasNotificationCenterLimit:(bool)arg1;
- (void)setHasNotificationCenterSetting:(bool)arg1;
- (void)setHasPhoneAllowsNotifications:(bool)arg1;
- (void)setHasPhoneAuthorizationStatus:(bool)arg1;
- (void)setHasPushSettings:(bool)arg1;
- (void)setHasSectionCategory:(bool)arg1;
- (void)setHasSectionType:(bool)arg1;
- (void)setHasShowsInLockScreen:(bool)arg1;
- (void)setHasShowsInNotificationCenter:(bool)arg1;
- (void)setHasShowsMessagePreview:(bool)arg1;
- (void)setHasShowsOnExternalDevices:(bool)arg1;
- (void)setHasSpokenNotificationSetting:(bool)arg1;
- (void)setHasSubsectionPriority:(bool)arg1;
- (void)setHasSuppressFromSettings:(bool)arg1;
- (void)setHasSuppressedSettings:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconsStripped:(bool)arg1;
- (void)setLockScreenSetting:(int)arg1;
- (void)setNotificationCenterLimit:(unsigned int)arg1;
- (void)setNotificationCenterSetting:(int)arg1;
- (void)setPhoneAllowsNotifications:(bool)arg1;
- (void)setPhoneAuthorizationStatus:(int)arg1;
- (void)setPushSettings:(unsigned int)arg1;
- (void)setSectionCategory:(int)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionType:(int)arg1;
- (void)setShowsInLockScreen:(bool)arg1;
- (void)setShowsInNotificationCenter:(bool)arg1;
- (void)setShowsMessagePreview:(bool)arg1;
- (void)setShowsOnExternalDevices:(bool)arg1;
- (void)setSpokenNotificationSetting:(int)arg1;
- (void)setSubsectionID:(id)arg1;
- (void)setSubsectionPriority:(int)arg1;
- (void)setSubsections:(id)arg1;
- (void)setSuppressFromSettings:(bool)arg1;
- (void)setSuppressedSettings:(unsigned int)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWatchSectionID:(id)arg1;
- (bool)showsInLockScreen;
- (bool)showsInNotificationCenter;
- (bool)showsMessagePreview;
- (bool)showsOnExternalDevices;
- (int)spokenNotificationSetting;
- (id)spokenNotificationSettingAsString:(int)arg1;
- (id)subsectionID;
- (int)subsectionPriority;
- (id)subsections;
- (id)subsectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subsectionsCount;
- (bool)suppressFromSettings;
- (unsigned int)suppressedSettings;
- (id)universalSectionID;
- (unsigned int)version;
- (id)watchSectionID;
- (void)writeTo:(id)arg1;

@end
