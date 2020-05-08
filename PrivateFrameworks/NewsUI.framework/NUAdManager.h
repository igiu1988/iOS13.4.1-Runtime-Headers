/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdManager : NSObject <NUAdAnalyticsProvider, NUAdContextProvider, NUAdProvider> {
    NUAdStore * _adStore;
    <NUAdManagerConfigurationProvider> * _configurationProvider;
    <NUDevice> * _device;
    NUAdInterstitial * _interstitialAdPendingLoad;
}

@property (nonatomic, readonly) NUAdStore *adStore;
@property (nonatomic, readonly) <NUAdManagerConfigurationProvider> *configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NUAdInterstitial *interstitialAdPendingLoad;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3 layoutOptions:(id)arg4 completion:(id /* block */)arg5;
- (id)adStore;
- (id)adWithIdentifier:(id)arg1;
- (void)bannerViewDidLoad:(id)arg1;
- (void)bannerViewDidUnload:(id)arg1;
- (void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(id /* block */)arg4;
- (id)configurationProvider;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3;
- (id)defaultArticleDefinition;
- (id)defaultBodyDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultIssueDefinition;
- (id)defaultRootDefinition;
- (id)device;
- (id)inArticleContextConstructor;
- (id)initWithConfigurationProvider:(id)arg1 device:(id)arg2;
- (id)interstitialAdPendingLoad;
- (id)interstitialContextConstructor;
- (void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)prerollBodyDefinition;
- (id)prerollContextConstructor;
- (void)prerollForContextProviders:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)prerollHeaderDefinition;
- (id)prerollRootDefinition;
- (void)setInterstitialAdPendingLoad:(id)arg1;
- (void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)videoInTodayHeaderDefinition;
- (id)videoPlaylistAdBodyDefinition;
- (id)videoPlaylistAdContextConstructor;
- (void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)videoPlaylistAdRootDefinition;

@end
