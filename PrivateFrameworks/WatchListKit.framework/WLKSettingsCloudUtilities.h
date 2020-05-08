/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKSettingsCloudUtilities : NSObject

+ (id)_connection;
+ (void)_fetchSyncDictionary:(id /* block */)arg1;
+ (void)_postChangeDictionaryToCloud:(id)arg1 completion:(id /* block */)arg2;
+ (id)_queue;
+ (id)_syncDictionaryForAppSettings:(id)arg1;
+ (id)_syncDictionaryForLocalStore;
+ (bool)cloudSyncEnabled;
+ (void)deleteAllHistoryWithCompletion:(id /* block */)arg1;
+ (void)forceUpdateWithCompletion:(id /* block */)arg1;
+ (void)resetAccountWithCompletion:(id /* block */)arg1;
+ (bool)synchronizeSettingsFromCloudIfNeeded:(id*)arg1;
+ (void)synchronizeSettingsFromCloudIfNeededWithCompletion:(id /* block */)arg1;
+ (void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(id /* block */)arg3;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(bool)arg2 completion:(id /* block */)arg3;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(bool)arg2 removeEntry:(bool)arg3 completion:(id /* block */)arg4;
+ (void)updateCloudStoreWithCompletion:(id /* block */)arg1;
+ (void)updateLocalStoreWithCompletion:(id /* block */)arg1;

@end
