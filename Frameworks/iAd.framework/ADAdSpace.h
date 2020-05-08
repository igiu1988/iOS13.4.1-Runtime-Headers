/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpace : NSObject <ADCreativeControllerDelegate, ADWebViewActionViewControllerDelegate, NewsTransparencyViewControllerDelegate> {
    bool  _actionInProgress;
    bool  _actionViewControllerReadyForPresentation;
    bool  _actionViewControllerWantsDismissal;
    bool  _adLibManagedVideo;
    bool  _adRequestMade;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    ADSInternalSize * _containerSize;
    ADContext * _context;
    ADCreativeController * _creativeController;
    ADAdActionPublicAttributes * _currentActionPublicAttributes;
    ADAdImpressionPublicAttributes * _currentAdImpressionPublicAttributes;
    UIViewController * _customActionViewController;
    bool  _didInstallCreativeView;
    bool  _fastVisibilityContextIsFeed;
    bool  _firedAdStatusEvent;
    bool  _hasImpressed;
    NSString * _identifier;
    float  _lastPlayTime;
    double  _lastSlowCheck;
    float  _lastVolume;
    ADMRAIDAction * _mraidAction;
    NewsTransparencyViewController * _newsViewController;
    bool  _prerollVideo;
    NSArray * _prerollVideoAssets;
    bool  _privacyRequestInProgress;
    long long  _progressMileStoneMet;
    unsigned long long  _reUseCount;
    <ADAdRecipient> * _recipient;
    ADSInternalSize * _reorientedContainerSize;
    long long  _requestOrientation;
    bool  _requiresFastVisibiltyTestOnly;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectedAdFrame;
    NSURL * _serverURL;
    bool  _serviceAdSpaceRequestInProgress;
    bool  _shouldMonitorVisibility;
    bool  _shouldPresentActionViewControllerWhenReady;
    bool  _shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
    float  _totalDuration;
    int  _videoPlayCount;
    long long  _visibility;
    bool  _visibilityCheckScheduled;
    float  _visibilityPercentage;
    ADWebViewActionViewController * _webViewActionViewController;
}

@property (nonatomic) bool actionInProgress;
@property (nonatomic) bool actionViewControllerReadyForPresentation;
@property (nonatomic) bool actionViewControllerWantsDismissal;
@property (nonatomic) bool adLibManagedVideo;
@property (nonatomic) bool adRequestMade;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (nonatomic, readonly) ADAdSpaceConfiguration *configuration;
@property (nonatomic, readonly) NSString *connectionAssertionIdentifier;
@property (nonatomic, retain) ADSInternalSize *containerSize;
@property (nonatomic, copy) ADContext *context;
@property (nonatomic, retain) ADCreativeController *creativeController;
@property (nonatomic, retain) ADAdActionPublicAttributes *currentActionPublicAttributes;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes;
@property (nonatomic, retain) UIViewController *customActionViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didInstallCreativeView;
@property (nonatomic) bool fastVisibilityContextIsFeed;
@property (nonatomic) bool firedAdStatusEvent;
@property (nonatomic) bool hasImpressed;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) float lastPlayTime;
@property (nonatomic) double lastSlowCheck;
@property (nonatomic) float lastVolume;
@property (nonatomic, retain) ADMRAIDAction *mraidAction;
@property (nonatomic, retain) NewsTransparencyViewController *newsViewController;
@property (nonatomic) bool prerollVideo;
@property (nonatomic, retain) NSArray *prerollVideoAssets;
@property (nonatomic) bool privacyRequestInProgress;
@property (nonatomic) long long progressMileStoneMet;
@property (nonatomic) unsigned long long reUseCount;
@property (nonatomic) <ADAdRecipient> *recipient;
@property (nonatomic, retain) ADSInternalSize *reorientedContainerSize;
@property (nonatomic) long long requestOrientation;
@property (nonatomic) bool requiresFastVisibiltyTestOnly;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectedAdFrame;
@property (nonatomic, copy) NSURL *serverURL;
@property (nonatomic) bool serviceAdSpaceRequestInProgress;
@property (nonatomic) bool shouldMonitorVisibility;
@property (nonatomic) bool shouldPresentActionViewControllerWhenReady;
@property (nonatomic) bool shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
@property (readonly) Class superclass;
@property (nonatomic) float totalDuration;
@property (nonatomic) int videoPlayCount;
@property (nonatomic) long long visibility;
@property (nonatomic) bool visibilityCheckScheduled;
@property (nonatomic) float visibilityPercentage;
@property (nonatomic, retain) ADWebViewActionViewController *webViewActionViewController;

+ (id)ADIdentifierNameForCreativeType:(int)arg1;

- (void).cxx_destruct;
- (void)_clientApplicationDidBecomeActive;
- (void)_clientApplicationDidEnterBackground;
- (void)_closeConnectionIfNecessary;
- (void)_considerPresentingActionViewController;
- (void)_considerPresentingWebViewActionViewControllerWithURL:(id)arg1;
- (void)_handleMRAIDActionPresentation;
- (void)_notifiyCreativeControllerOfActionViewControllerPresentation;
- (void)_openURLInBrowser:(id)arg1;
- (void)_presentPrivacyViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_close;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_dismissViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_pauseBannerMedia;
- (void)_remote_resumeBannerMedia;
- (void)_requestAdFromAdServingDaemon;
- (void)_tearDownCreativeController;
- (void)_tearDownCustomActionViewController;
- (void)_tearDownWebActionViewController;
- (id)_updateIdentifier;
- (id)_videoAssetsForVideoURL:(id)arg1;
- (void)actionCompletedWithSystemEvent:(int)arg1;
- (bool)actionInProgress;
- (bool)actionViewControllerReadyForPresentation;
- (bool)actionViewControllerWantsDismissal;
- (bool)adLibManagedVideo;
- (bool)adRequestMade;
- (id)advertisingSection;
- (id)authenticationUserName;
- (void)beginActionFromFrame:(id)arg1 tapLocation:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)canReuseForContext:(id)arg1;
- (void)cancelBannerViewAction;
- (void)captureEvent:(id)arg1 forAd:(id)arg2 completion:(id /* block */)arg3;
- (void)captureEvent:(id)arg1 forAd:(id)arg2 forVideoState:(long long)arg3 completion:(id /* block */)arg4;
- (void)captureUnloadEventForAd:(id)arg1 completion:(id /* block */)arg2;
- (void)close;
- (id)configuration;
- (id)connectionAssertionIdentifier;
- (id)containerSize;
- (id)context;
- (id)creativeController;
- (void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
- (void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
- (void)creativeControllerVideoCompletedWithVolume:(float)arg1;
- (void)creativeControllerVideoCreativeViewLoaded;
- (void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoMuted:(float)arg1;
- (void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoViewabilityChanged:(bool)arg1 playTime:(float)arg2 volume:(float)arg3;
- (void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2;
- (void)creativeControllerViewDidRequestCloseWithTapLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)creativeControllerViewDidRequestCreateCalendarEvent:(id)arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)creativeControllerViewDidRequestExpandURL:(id)arg1 withMaximumSize:(struct CGSize { double x1; double x2; })arg2 withTapLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)creativeControllerViewDidRequestOpenURL:(id)arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)currentActionPublicAttributes;
- (id)currentAdImpressionPublicAttributes;
- (struct CGSize { double x1; double x2; })currentAdSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)customActionViewController;
- (void)dealloc;
- (id)description;
- (void)determineActionForTapAtLocation:(struct CGPoint { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withMRAIDAction:(id)arg3 completeHandler:(id /* block */)arg4;
- (bool)didInstallCreativeView;
- (void)dismissCustomActionViewController;
- (void)dismissWebViewActionViewControlller:(id)arg1;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)fastVisibilityContextIsFeed;
- (bool)firedAdStatusEvent;
- (bool)hasImpressed;
- (id)identifier;
- (void)impressionPublicAttributesDidLoad:(id)arg1;
- (id)initForRecipient:(id)arg1;
- (void)installCreativeView;
- (void)internalAdTypeDidChange;
- (bool)isInternalDeepLinkURL:(id)arg1;
- (float)lastPlayTime;
- (double)lastSlowCheck;
- (float)lastVolume;
- (long long)modalPresentationStyle;
- (id)mraidAction;
- (void)newsTransparencyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)newsTransparencyViewControllerDidDismiss:(id)arg1;
- (void)newsTransparencyViewControllerDidLinkOut:(id)arg1;
- (void)newsTransparencyViewControllerDidLoad:(id)arg1;
- (void)newsTransparencyViewControllerDidRenderView:(id)arg1;
- (id)newsViewController;
- (void)openURL:(id)arg1 fromFrame:(id)arg2 tapLocation:(id)arg3;
- (bool)prerollVideo;
- (id)prerollVideoAssets;
- (void)presentActionViewController:(id)arg1;
- (bool)privacyRequestInProgress;
- (void)proceedWithClosing:(bool)arg1;
- (long long)progressMileStoneMet;
- (unsigned long long)reUseCount;
- (id)recipient;
- (void)refuseBannerViewAction;
- (id)reorientedContainerSize;
- (void)reportNativeClickEvent;
- (long long)requestOrientation;
- (bool)requiresFastVisibiltyTestOnly;
- (void)safariViewControllerDidFinish:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectedAdFrame;
- (id)serverURL;
- (bool)serviceAdSpaceRequestInProgress;
- (void)setActionInProgress:(bool)arg1;
- (void)setActionViewControllerReadyForPresentation:(bool)arg1;
- (void)setActionViewControllerWantsDismissal:(bool)arg1;
- (void)setAdLibManagedVideo:(bool)arg1;
- (void)setAdRequestMade:(bool)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setContainerSize:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreativeController:(id)arg1;
- (void)setCurrentActionPublicAttributes:(id)arg1;
- (void)setCurrentAdImpressionPublicAttributes:(id)arg1;
- (void)setCustomActionViewController:(id)arg1;
- (void)setDidInstallCreativeView:(bool)arg1;
- (void)setFastVisibilityContextIsFeed:(bool)arg1;
- (void)setFiredAdStatusEvent:(bool)arg1;
- (void)setHasImpressed:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastPlayTime:(float)arg1;
- (void)setLastSlowCheck:(double)arg1;
- (void)setLastVolume:(float)arg1;
- (void)setMraidAction:(id)arg1;
- (void)setNewsViewController:(id)arg1;
- (void)setPrerollVideo:(bool)arg1;
- (void)setPrerollVideoAssets:(id)arg1;
- (void)setPrivacyRequestInProgress:(bool)arg1;
- (void)setProgressMileStoneMet:(long long)arg1;
- (void)setReUseCount:(unsigned long long)arg1;
- (void)setRecipient:(id)arg1;
- (void)setReorientedContainerSize:(id)arg1;
- (void)setRequestOrientation:(long long)arg1;
- (void)setRequiresFastVisibiltyTestOnly:(bool)arg1;
- (void)setSelectedAdFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setServerURL:(id)arg1;
- (void)setServiceAdSpaceRequestInProgress:(bool)arg1;
- (void)setShouldMonitorVisibility:(bool)arg1;
- (void)setShouldPresentActionViewControllerWhenReady:(bool)arg1;
- (void)setShouldTearDownCreativeControllerAfterDismissingRemoteActionViewController:(bool)arg1;
- (void)setTotalDuration:(float)arg1;
- (void)setVideoPlayCount:(int)arg1;
- (void)setVisibility:(long long)arg1;
- (void)setVisibilityCheckScheduled:(bool)arg1;
- (void)setVisibilityPercentage:(float)arg1;
- (void)setWebViewActionViewController:(id)arg1;
- (bool)shouldMonitorVisibility;
- (bool)shouldPresentActionViewControllerWhenReady;
- (bool)shouldTearDownCreativeControllerAfterDismissingRemoteActionViewController;
- (void)showAdTransparency;
- (void)startVisibilityMonitoring;
- (void)stopVisibilityMonitoring;
- (float)totalDuration;
- (void)uninstallCreativeView;
- (void)updateCreativeControllerVisibility;
- (void)updateVisibility;
- (void)useSafariViewControllerToOpenURL:(id)arg1;
- (int)videoPlayCount;
- (long long)visibility;
- (bool)visibilityCheckScheduled;
- (float)visibilityPercentage;
- (id)webViewActionViewController;
- (void)webViewActionViewControllerHomeButtonWasTapped:(id)arg1;

@end
