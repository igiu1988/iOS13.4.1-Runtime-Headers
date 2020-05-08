/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCreativeController : NSObject <ADWebProcessDelegate, WKNavigationDelegate, _WKInputDelegate> {
    NSString * _adSpaceIdentifier;
    bool  _browserContextControllerDidLoad;
    bool  _contentVisible;
    NSString * _creativeIdentifier;
    ADWebView * _creativeView;
    <ADCreativeControllerDelegate> * _delegate;
    ADWebViewGestureRecognizer * _gestureRecognizer;
    bool  _isExpandedCreativePresented;
    bool  _isVideoAd;
    id /* block */  _loadCompletion;
    ADAdImpressionPublicAttributes * _publicAttributes;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    bool  _shouldBlockNavigation;
    bool  _tapWasRecognized;
    <ADWebProcessProxy> * _webProcessProxy;
}

@property (nonatomic, copy) NSString *adSpaceIdentifier;
@property (nonatomic) bool browserContextControllerDidLoad;
@property (getter=isContentVisible, nonatomic) bool contentVisible;
@property (nonatomic, copy) NSString *creativeIdentifier;
@property (nonatomic, readonly) ADWebView *creativeView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADCreativeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ADWebViewGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExpandedCreativePresented;
@property (nonatomic) bool isVideoAd;
@property (nonatomic, copy) id /* block */ loadCompletion;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *publicAttributes;
@property (nonatomic, retain) _WKRemoteObjectInterface *remoteObjectInterface;
@property (nonatomic) bool shouldBlockNavigation;
@property (readonly) Class superclass;
@property (nonatomic) bool tapWasRecognized;

- (void).cxx_destruct;
- (void)_callLoadCompletionWithError:(id)arg1;
- (id)_customUserAgentString;
- (id)_incrementCreativeIdentifier;
- (void)_navigationAttemptBlockedDueToAccidentalTapForMRAIDActionType:(long long)arg1;
- (bool)_navigationIsBlocked;
- (void)_requestOpenURL:(id)arg1;
- (void)_resetGestureFlags;
- (void)_tapGestureTimerDidExpireForRequestedActionType:(long long)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_updateWebProcessProxyVisibility;
- (id)_userAgentForUserAgentString:(id)arg1;
- (bool)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
- (void)adSpaceActionViewControllerWillDismiss:(id)arg1;
- (void)adSpaceActionViewControllerWillPresent:(id)arg1;
- (id)adSpaceIdentifier;
- (bool)browserContextControllerDidLoad;
- (bool)contentVisible;
- (id)creativeIdentifier;
- (id)creativeView;
- (void)dealloc;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCreativeView;
- (id)gestureRecognizer;
- (bool)isContentVisible;
- (bool)isExpandedCreativePresented;
- (bool)isVideoAd;
- (void)loadAdImpression:(id)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)loadCompletion;
- (id)publicAttributes;
- (id)remoteObjectInterface;
- (void)resetVideoPlaytime;
- (void)setAdSpaceIdentifier:(id)arg1;
- (void)setBrowserContextControllerDidLoad:(bool)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setCreativeIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setIsExpandedCreativePresented:(bool)arg1;
- (void)setIsVideoAd:(bool)arg1;
- (void)setLoadCompletion:(id /* block */)arg1;
- (void)setPublicAttributes:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setShouldBlockNavigation:(bool)arg1;
- (void)setTapWasRecognized:(bool)arg1;
- (bool)shouldBlockNavigation;
- (bool)tapWasRecognized;
- (void)tearDown;
- (void)unregisterExportedObjectInterface;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessVideoAdJSOCreativeViewLoaded;
- (void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1;
- (void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1;
- (void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2;
- (void)webProcessVideoAdJSODidCallViewabilityChanged:(bool)arg1 playTime:(float)arg2 volume:(float)arg3;
- (void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2;
- (void)webProcessVideoAdJSOGetVideoInfo:(id /* block */)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end