/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAvatarAssetLibrary : NSObject {
    NSMutableArray * _assets;
    NSMutableDictionary * _assetsByName;
}

+ (id)sharedAvatarAssetLibrary;

- (void).cxx_destruct;
- (id)assetWithType:(long long)arg1 identifier:(id)arg2;
- (id)assetsWithType:(long long)arg1;
- (void)reload;

@end
