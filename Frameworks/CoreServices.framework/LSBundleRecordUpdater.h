/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSBundleRecordUpdater : LSRecordBuilder {
    struct LSBundleData { 
        unsigned int _clas; 
        unsigned long long _bundleFlags; 
        unsigned int _plistContentFlags; 
        unsigned int _itemFlags; 
        unsigned char _iconFlags; 
        unsigned short _archFlags; 
        unsigned int platform; 
        unsigned int _hfsType; 
        int _mtime; 
        int _rtime; 
        struct LSVersionNumber { 
            unsigned char _opaque[32]; 
        } _version; 
        struct LSVersionNumber { 
            unsigned char _opaque[32]; 
        } _minSystemVersion; 
        struct LSVersionNumber { 
            unsigned char _opaque[32]; 
        } _maxSystemVersion; 
        struct LSVersionNumber { 
            unsigned char _opaque[32]; 
        } _execSDKVersion; 
        unsigned int appStoreToolsBuildVersion; 
        unsigned int machOUUIDs; 
        unsigned long long sequenceNumber; 
        unsigned long long compatibilityState; 
        unsigned long long itemID; 
        unsigned int deviceFamilies; 
        unsigned int teamID; 
        unsigned int identifier; 
        unsigned int exactIdentifier; 
        unsigned int name; 
        unsigned int displayName; 
        unsigned int counterpartIdentifiers; 
        unsigned int filename; 
        unsigned int bundleVersion; 
        unsigned int shortVersionString; 
        unsigned int installType; 
        unsigned long long installFailureReason; 
        unsigned int signerIdentity; 
        unsigned int codeInfoIdentifier; 
        unsigned int signerOrganization; 
        unsigned int appType; 
        unsigned long long staticDiskUsage; 
        unsigned long long purchaserDSID; 
        unsigned long long downloaderDSID; 
        unsigned long long familyID; 
        unsigned int vendorName; 
        unsigned int itemName; 
        unsigned long long storefront; 
        unsigned long long versionIdentifier; 
        unsigned int sourceAppIdentifier; 
        unsigned int appVariant; 
        unsigned long long ratingRank; 
        unsigned int ratingLabel; 
        unsigned long long genreID; 
        unsigned int genre; 
        unsigned int primaryIconName; 
        unsigned int iconsDict; 
        unsigned int iconFileNames; 
        unsigned int execPath; 
        unsigned int libraryPath; 
        unsigned int libraryItems; 
        unsigned int claims; 
        unsigned int types; 
        unsigned int plugins; 
        unsigned int extensionPoints; 
        unsigned int activityTypes; 
        unsigned int schemesWhitelist; 
        unsigned int bgPermittedIDs; 
        unsigned int alias; 
        unsigned int appContainerAlias; 
        unsigned int dataContainerAlias; 
        unsigned int container; 
        unsigned char revision; 
        unsigned char retries; 
        unsigned char containingDirectoryClass; 
        unsigned char _reserved4; 
        unsigned int plistRarities; 
        unsigned int commonPlistEntries; 
        unsigned int entitlements; 
        unsigned int groupContainers; 
        unsigned int sandboxEnvironmentVariables; 
        unsigned int siriActionDefinitionURLs; 
        unsigned int localizedDisplayName; 
        unsigned int localizedShortDisplayName; 
        unsigned int localizedNameWithContext[1]; 
        unsigned int managedPersonas; 
        unsigned int _reserved5; 
    }  _bundleData;
    unsigned int  _bundleID;
    NSString * _bundleIdentifier;
    struct LSContext { 
        _LSDatabase *db; 
    }  _context;
    bool  _hasContext;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(bool)arg2;
- (void)parsePlaceholderMetadata:(id)arg1;
- (void)parseSINFDictionary:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (bool)updateBundleRecord:(id*)arg1;

@end
