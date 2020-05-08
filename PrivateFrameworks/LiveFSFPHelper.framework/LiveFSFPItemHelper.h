/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

@interface LiveFSFPItemHelper : NSObject <NSFileProviderItem_Private> {
    long long  _attr_load;
    LiveFSFPEnumeratorDataContainer * _container;
    LiveFSFPExtensionHelper * _extension;
    NSNumber * _favoriteRank;
    NSString * _fh;
    NSString * _filename;
    NSString * _fullPath;
    unsigned long long  _inodeNum;
    bool  _isFetchingXattrValues;
    NSString * _itemIdentifier;
    NSMapTable * _itemNameCache;
    NSDate * _lastUsedDate;
    NSDate * _lastXattrValuesFetchDate;
    int  _liType;
    LiveFSFPItemHelper * _parent;
    NSString * _path;
    NSMutableDictionary * _pendingRenameCompletionBlocks;
    NSData * _tagData;
    NSObject<OS_dispatch_group> * _xattrFetchGroup;
    struct _LIFileAttributes { 
        unsigned long long __fa_rsvd0; 
        unsigned long long fa_validmask; 
        unsigned int fa_type; 
        unsigned int fa_mode; 
        unsigned int fa_nlink; 
        unsigned int fa_uid; 
        unsigned int fa_gid; 
        unsigned int fa_bsd_flags; 
        unsigned long long fa_size; 
        unsigned long long fa_allocsize; 
        unsigned long long fa_fileid; 
        unsigned long long fa_parentid; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_atime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_mtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_ctime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_birthtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_backuptime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_addedtime; 
    }  attributes;
    int  numChildren;
}

@property long long attr_load;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSNumber *childItemCount;
@property LiveFSFPEnumeratorDataContainer *container;
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
@property (retain) LiveFSFPExtensionHelper *extension;
@property (nonatomic, copy) NSNumber *favoriteRank;
@property (nonatomic, readonly, copy) NSString *fh;
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
@property (nonatomic, readonly, copy) NSString *fullPath;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, readonly) bool hidden;
@property unsigned long long inodeNum;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (retain) NSMapTable *itemNameCache;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion;
@property (nonatomic, copy) NSDate *lastUsedDate;
@property int liType;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (getter=isMostRecentVersionDownloaded, nonatomic, readonly) bool mostRecentVersionDownloaded;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (retain) LiveFSFPItemHelper *parent;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) NSString *preformattedMostRecentEditorName;
@property (nonatomic, readonly) NSString *preformattedOwnerName;
@property (readonly, copy) NSString *providerIdentifier;
@property (getter=isShared, nonatomic, readonly) bool shared;
@property (getter=isSharedByCurrentUser, nonatomic, readonly) bool sharedByCurrentUser;
@property (readonly, copy) NSString *sharingPermissions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *tagData;
@property (getter=isTopLevelSharedItem, nonatomic, readonly) bool topLevelSharedItem;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (getter=isUploaded, nonatomic, readonly) bool uploaded;
@property (getter=isUploading, nonatomic, readonly) bool uploading;
@property (nonatomic, readonly, copy) NSError *uploadingError;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSData *versionIdentifier;

+ (id)UTIForExtension:(id)arg1 liType:(int)arg2;
+ (int)dt_dir;
+ (int)dt_examine;
+ (int)dt_lnk;
+ (int)dt_reg;
+ (id)newItemForFH:(id)arg1 withReference:(int)arg2 name:(id)arg3 parent:(id)arg4 type:(int)arg5 attrs:(id)arg6 extension:(id)arg7;

- (void).cxx_destruct;
- (void)_fetchFavoriteRank:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchLastUsedDateWithProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchTagDataWithProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchXattrNamed:(id)arg1 proxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_fetchXattrValues;
- (void)afterRename:(id)arg1 performBlock:(id /* block */)arg2;
- (long long)attr_load;
- (id)br_pathExtension;
- (bool)calcNumberOfChildren:(id*)arg1;
- (unsigned long long)capabilities;
- (id)childItemCount;
- (id)container;
- (id)contentModificationDate;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (void)doDealloc;
- (id)documentSize;
- (bool)ensureFileHandleOrError:(id*)arg1;
- (id)extension;
- (id)favoriteRank;
- (id)fh;
- (id)filename;
- (id)fp_domainIdentifier;
- (id)fp_parentDomainIdentifier;
- (id)fullPath;
- (id)initItemForFH:(id)arg1 withReference:(int)arg2 name:(id)arg3 parent:(id)arg4 type:(int)arg5 attrs:(id)arg6 extension:(id)arg7;
- (unsigned long long)inodeNum;
- (bool)isDirectory;
- (bool)isDocument;
- (bool)isEqual:(id)arg1;
- (bool)isSymlink;
- (bool)isTrashed;
- (id)itemIdentifier;
- (id)itemNameCache;
- (id)lastUsedDate;
- (id)lastUsedTime;
- (int)liType;
- (id)parent;
- (id)parentItemIdentifier;
- (id)path;
- (void)performBlocksForRename:(id)arg1 onEHQueue:(bool)arg2;
- (void)prefetchXattrBasedValues;
- (void)recursivelyReparentChildren;
- (void)recursivelySetChildrenDeleted;
- (int)refreshAttrsHasAProblem:(id*)arg1;
- (void)resetFileHandle;
- (void)setAttr_load:(long long)arg1;
- (void)setAttributes:(id)arg1 time:(long long)arg2;
- (void)setAttributesLocked:(id)arg1 time:(long long)arg2;
- (void)setAttributesStale;
- (void)setContainer:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setFavoriteRank:(id)arg1;
- (void)setInodeNum:(unsigned long long)arg1;
- (void)setItemDeleted;
- (void)setItemNameCache:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setLiType:(int)arg1;
- (void)setNewParent:(id)arg1 andName:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setTagData:(id)arg1;
- (id)tagData;
- (id)typeIdentifier;
- (id)versionIdentifier;

@end
