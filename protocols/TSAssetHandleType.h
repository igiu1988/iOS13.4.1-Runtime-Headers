/* Generated by EzioChiu.
 */

@protocol TSAssetHandleType

@required

- (void)downloadWithGroup:(OS_dispatch_group *)arg1;
- (UIImage *)fallbackImage;
- (NSString *)filePath;
- (NSString *)uniqueKey;

@optional

- (<TSAssetDataProviderType> *)assetDataProvider;

@end
