/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSTemplateIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    bool  _areSettingsLoaded;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultIconSize;
    bool  _hasPurgedUnneededItems;
    bool  _historyDidFinishLoading;
    NSMutableDictionary * _hostsToRequestSets;
    WBSSiteMetadataImageCache * _imageCache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _pendingSVGImageRenderingRequests;
    NSMutableSet * _pendingTemplateIconFallbackRequestHosts;
    NSMutableSet * _pendingTemplateIconRequestHosts;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    NSMutableDictionary * _requestsToDelayedResponses;
    NSCache * _requestsToResponses;
    NSMutableDictionary * _templateIconsDataForHosts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultIconSize;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (nonatomic) <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didAddHistoryItems:(id)arg1;
- (void)_didLoadHistory:(id)arg1;
- (void)_didRemoveHistoryItems:(id)arg1;
- (void)_generateResponseForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_imageForRequest:(id)arg1 getThemeColor:(id*)arg2;
- (bool)_isLocalIconRequest:(id)arg1;
- (id)_monogramForRequest:(id)arg1 themeColor:(id)arg2;
- (void)_notifyDidLoadIconForHost:(id)arg1;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (void)_purgeUnneededTemplateIconsIfReady;
- (void)_registerRequest:(id)arg1;
- (void)_removeTemplateIconsDataForHost:(id)arg1;
- (void)_requestTemplateIconForRequest:(id)arg1;
- (void)_saveTemplateIcon:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(bool)arg4;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1;
- (bool)_shouldRequestTemplateIconForURL:(id)arg1 allowRefresh:(bool)arg2;
- (id)_templateIconForURL:(id)arg1 getThemeColor:(id*)arg2;
- (bool)_templateIconRetainerIsReadyForCleanUp;
- (void)_updateTemplateIconsDataForHost:(id)arg1 image:(id)arg2 themeColor:(id)arg3 isSavedToDisk:(bool)arg4;
- (void)_upgradeCacheVersionIfNeeded;
- (void)addTemplateIconAtURL:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(bool)arg4;
- (bool)canHandleRequest:(id)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultIconSize;
- (void)emptyCaches;
- (bool)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (id)imageDirectoryURL;
- (id)init;
- (id)initWithImageDirectoryURL:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (void)purgeUnneededCacheEntries;
- (void)releaseTemplateIconForHost:(id)arg1;
- (void)releaseTemplateIconForURLString:(id)arg1;
- (void)releaseTemplateIconsForHosts:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)retainTemplateIconForHost:(id)arg1;
- (void)retainTemplateIconForURLString:(id)arg1;
- (void)retainTemplateIconsForHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)setDefaultIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProviderDelegate:(id)arg1;
- (bool)shouldRequestTemplateIconForURL:(id)arg1 allowRefresh:(bool)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)templateIconForURL:(id)arg1 getThemeColor:(id*)arg2;

@end
