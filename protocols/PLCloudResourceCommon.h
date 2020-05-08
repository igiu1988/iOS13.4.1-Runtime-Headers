/* Generated by EzioChiu.
 */

@protocol PLCloudResourceCommon <NSObject>

@required

- (NSString *)assetUuid;
- (short)cloudLocalState;
- (CPLResource *)cplResourceIncludeFile:(bool)arg1;
- (unsigned long long)cplType;
- (NSString *)filePath;
- (unsigned long long)fileSize;
- (NSString *)fingerprint;
- (long long)height;
- (bool)isAvailable;
- (bool)isLocallyAvailable;
- (NSDate *)lastOnDemandDownloadDate;
- (NSDate *)lastPrefetchDate;
- (NSManagedObjectID *)objectID;
- (short)prefetchCount;
- (NSDate *)prunedAt;
- (unsigned int)resourceRecipeID;
- (CPLScopedIdentifier *)scopedIdentifier;
- (void)setCloudLocalState:(short)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setLastOnDemandDownloadDate:(NSDate *)arg1;
- (void)setLastPrefetchDate:(NSDate *)arg1;
- (void)setPrefetchCount:(short)arg1;
- (void)setPrunedAt:(NSDate *)arg1;
- (unsigned long long)sourceCplType;
- (NSString *)utiString;
- (long long)width;

@end
