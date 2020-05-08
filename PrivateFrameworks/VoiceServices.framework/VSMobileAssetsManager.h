/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSMobileAssetsManager : NSObject {
    NSObject<OS_dispatch_queue> * _assetQueryQueue;
    NSObject<OS_dispatch_queue> * _downloadQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetQueryQueue;

+ (id)_languagesFromAttributes:(id)arg1;
+ (void)amendVoiceWithDefaultSettings:(id)arg1;
+ (id)bundleIdentifierForVoiceType:(long long)arg1;
+ (id)getLatestAssetFromArray:(id)arg1;
+ (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
+ (id)installedVoiceResources;
+ (bool)isVoiceAssetWellDefined:(id)arg1;
+ (id)pickCorrectAssetFromLocalAssets:(id)arg1;
+ (id)preinstallAssetsDirectory;
+ (id)queryForLanguage:(id)arg1 forType:(long long)arg2 voicename:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;
+ (id)queryForVoiceResourceAsset:(id)arg1 returnTypes:(long long)arg2;
+ (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
+ (id)selectVoiceResourceAssetForLanguage:(id)arg1;
+ (id)sharedManager;
+ (id)voiceResourceFromAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_builtInVoiceForLanguage:(id)arg1;
- (void)_downloadAsset:(id)arg1 options:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_getResults:(id)arg1;
- (id)_getVoiceAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;
- (id)_installedVoiceResourceAssetForLanguage:(id)arg1;
- (id)_localVoiceForLanguage:(id)arg1 gender:(long long)arg2;
- (id)_nonCacheVoiceSelectionForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
- (void)_purgeAsset:(id)arg1;
- (id)activeVoiceAssets;
- (void)amendVoiceWithDefaultSettings:(id)arg1;
- (id)assetQueryQueue;
- (id)builtInVoices;
- (void)cancelDownload:(id)arg1 completion:(id /* block */)arg2;
- (void)cleanOldVoiceResources;
- (id)cleanUnusedVoiceAssets;
- (id)downloadCatalog:(id)arg1 options:(id)arg2;
- (void)downloadCatalog:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadVoiceAsset:(id)arg1 discretionary:(bool)arg2 progressUpdateHandler:(id /* block */)arg3;
- (void)downloadVoiceAsset:(id)arg1 discretionary:(bool)arg2 useBattery:(bool)arg3 progressUpdateHandler:(id /* block */)arg4;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(bool)arg2 progressUpdateHandler:(id /* block */)arg3;
- (void)downloadVoiceResource:(id)arg1 discretionary:(bool)arg2 completion:(id /* block */)arg3;
- (id)inactiveVoiceAssets;
- (id)init;
- (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
- (id)installedVoiceResources;
- (id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1;
- (void)migrateAssetIfNeededWithAssetType:(id)arg1;
- (void)migrateAssets;
- (void)populateVoiceData:(id)arg1 fromAsset:(id)arg2;
- (id)preinstallAssetsMetadata;
- (id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2;
- (void)purgeAsset:(id)arg1;
- (void)removeVoiceAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)removeVoiceResource:(id)arg1 completion:(id /* block */)arg2;
- (void)resetCache;
- (id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2;
- (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
- (id)selectVoiceResourceAssetForLanguage:(id)arg1;
- (void)setAssetQueryQueue:(id)arg1;
- (id)voiceAssetFromPreinstallMetadata:(id)arg1;
- (id)voiceAssetWithName:(id)arg1 localOnly:(bool)arg2 outError:(id*)arg3;
- (id)voiceDataFromAsset:(id)arg1;

@end