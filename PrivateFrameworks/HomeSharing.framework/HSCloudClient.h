/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudClient : NSObject <HSCloudAvailability> {
    bool  _active;
    ICConnectionConfiguration * _configuration;
    unsigned long long  _daemonConfiguration;
    ICCloudClient * _icCloudClient;
    long long  _preferredVideoQuality;
    id /* block */  _updateInProgressChangedHandler;
    id /* block */  _updateJaliscoInProgressChangedHandler;
    id /* block */  _updateSagaInProgressChangedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateInProgressChangedHandler;
@property (nonatomic, copy) id /* block */ updateJaliscoInProgressChangedHandler;
@property (nonatomic, copy) id /* block */ updateSagaInProgressChangedHandler;

- (void).cxx_destruct;
- (id)_ICCloudItemIDListFromHSCloudItemIDList:(id)arg1;
- (id)_ICConnectionConfigurationFromHSConnectionConfiguration:(id)arg1;
- (void)_serverJaliscoUpdateInProgressDidChange;
- (void)_serverSagaUpdateInProgressDidChange;
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateAndStartInitialImport:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (void)becomeActive;
- (bool)canSetItemProperty:(id)arg1;
- (bool)canSetPlaylistProperty:(id)arg1;
- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id /* block */)arg1;
- (long long)cloudAddToPlaylistBehavior;
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)deauthenticateWithCompletionHandler:(id /* block */)arg1;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;
- (void)disableJaliscoGeniusWithCompletionHandler:(id /* block */)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(id /* block */)arg1;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasProperNetworkConditionsToShowCloudMedia;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)isAuthenticatedWithCompletionHandler:(id /* block */)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isCellularDataRestricted;
- (bool)isCellularDataRestrictedForMusic;
- (bool)isCellularDataRestrictedForStoreApps;
- (bool)isCellularDataRestrictedForVideos;
- (bool)isMediaKindDisabledForJaliscoLibrary:(long long)arg1;
- (void)loadArtworkInfoForContainerSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(id /* block */)arg1;
- (void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadIsSagaUpdateInProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(id /* block */)arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(id /* block */)arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(id /* block */)arg1;
- (void)loadJaliscoUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(id /* block */)arg1;
- (void)loadSagaUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (void)loadScreenshotInfoForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSubscriptionPersistentID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeJaliscoLibraryWithCompletionHander:(id /* block */)arg1;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetConfiguration:(id)arg1;
- (void)resignActive;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setUpdateInProgressChangedHandler:(id /* block */)arg1;
- (void)setUpdateJaliscoInProgressChangedHandler:(id /* block */)arg1;
- (void)setUpdateSagaInProgressChangedHandler:(id /* block */)arg1;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)updateArtistHeroImages;
- (id /* block */)updateInProgressChangedHandler;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)updateJaliscoInProgressChangedHandler;
- (void)updateJaliscoLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)updateSagaInProgressChangedHandler;
- (void)updateSagaLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;
- (void)uploadItemProperties;

@end
