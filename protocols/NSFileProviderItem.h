/* Generated by EzioChiu.
 */

@protocol NSFileProviderItem <NSObject>

@required

- (NSString *)filename;
- (NSString *)itemIdentifier;
- (NSString *)parentItemIdentifier;
- (NSString *)typeIdentifier;

@optional

- (unsigned long long)capabilities;
- (NSNumber *)childItemCount;
- (NSDate *)contentModificationDate;
- (NSDate *)creationDate;
- (NSNumber *)documentSize;
- (NSError *)downloadingError;
- (NSDictionary *)extendedAttributes;
- (NSNumber *)favoriteRank;
- (<NSFileProviderItemFlags> *)flags;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isExcludedFromSync;
- (bool)isMostRecentVersionDownloaded;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTrashed;
- (bool)isUploaded;
- (bool)isUploading;
- (NSFileProviderItemVersion *)itemVersion;
- (NSDate *)lastUsedDate;
- (NSPersonNameComponents *)mostRecentEditorNameComponents;
- (NSPersonNameComponents *)ownerNameComponents;
- (NSData *)tagData;
- (NSError *)uploadingError;
- (NSDictionary *)userInfo;
- (NSData *)versionIdentifier;

@end