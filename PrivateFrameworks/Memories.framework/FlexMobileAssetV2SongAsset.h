/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset {
    MAAsset * _mobileAsset;
}

@property (readonly) MAAsset *mobileAsset;

- (void).cxx_destruct;
- (id)_metadataForAssetWithNewestContentVersion;
- (unsigned long long)assetStatus;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (bool)contentUpdateAvaliable;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)initWithAssetID:(id)arg1 asset:(id)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6;
- (id)mobileAsset;

@end
