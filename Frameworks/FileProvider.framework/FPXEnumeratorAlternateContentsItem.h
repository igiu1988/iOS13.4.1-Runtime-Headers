/* Generated by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXEnumeratorAlternateContentsItem : NSObject <NSFileProviderItem_Private> {
    FPItem * _documentItem;
    NSDictionary * _resourceValues;
}

@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSNumber *childItemCount;
@property (readonly, copy) NSString *containerDisplayName;
@property (nonatomic, readonly, copy) NSDate *contentModificationDate;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSNumber *documentSize;
@property (getter=isDownloadRequested, readonly, copy) NSNumber *downloadRequested;
@property (getter=isDownloaded, nonatomic, readonly) bool downloaded;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (nonatomic, readonly, copy) NSError *downloadingError;
@property (getter=isExcludedFromSync, nonatomic, readonly) bool excludedFromSync;
@property (nonatomic, readonly) NSDictionary *extendedAttributes;
@property (nonatomic, readonly, copy) NSNumber *favoriteRank;
@property (readonly, copy) NSString *fileSystemFilename;
@property (readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly) <NSFileProviderItemFlags> *flags;
@property (getter=fp_isAddedByCurrentUser, nonatomic, readonly) bool fp_addedByCurrentUser;
@property (nonatomic, readonly) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly) bool fp_isContainer;
@property (readonly) bool fp_isContainerPristine;
@property (getter=fp_isLastModifiedByCurrentUser, nonatomic, readonly) bool fp_lastModifiedByCurrentUser;
@property (readonly, copy) NSString *fp_parentDomainIdentifier;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (getter=fp_isUbiquitous, readonly) bool fp_ubiquitous;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion;
@property (nonatomic, readonly, copy) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (getter=isMostRecentVersionDownloaded, nonatomic, readonly) bool mostRecentVersionDownloaded;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (nonatomic, readonly) NSString *preformattedMostRecentEditorName;
@property (nonatomic, readonly) NSString *preformattedOwnerName;
@property (readonly, copy) NSString *providerIdentifier;
@property (getter=isShared, nonatomic, readonly) bool shared;
@property (getter=isSharedByCurrentUser, nonatomic, readonly) bool sharedByCurrentUser;
@property (readonly, copy) NSString *sharingPermissions;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *tagData;
@property (getter=isTopLevelSharedItem, nonatomic, readonly) bool topLevelSharedItem;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (getter=isUploaded, nonatomic, readonly) bool uploaded;
@property (getter=isUploading, nonatomic, readonly) bool uploading;
@property (nonatomic, readonly, copy) NSError *uploadingError;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSData *versionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)childItemCount;
- (id)cloudContainerIdentifier;
- (id)containerDisplayName;
- (id)contentModificationDate;
- (id)creationDate;
- (id)displayName;
- (id)documentSize;
- (id)downloadingError;
- (id)favoriteRank;
- (id)filename;
- (id)fp_domainIdentifier;
- (bool)fp_isLastModifiedByCurrentUser;
- (id)fp_spotlightDomainIdentifier;
- (id)hasUnresolvedConflicts;
- (id)initWithOriginalDocumentItem:(id)arg1 alternateContentsURL:(id)arg2;
- (bool)isContainer;
- (bool)isContainerPristine;
- (id)isDownloadRequested;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isMostRecentVersionDownloaded;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTrashed;
- (bool)isUploaded;
- (bool)isUploading;
- (id)itemIdentifier;
- (id)lastUsedDate;
- (id)mostRecentEditorNameComponents;
- (id)ownerNameComponents;
- (id)parentItemIdentifier;
- (id)providerID;
- (id)sharingPermissions;
- (id)tagData;
- (id)typeIdentifier;
- (id)uploadingError;
- (id)userInfo;

@end
