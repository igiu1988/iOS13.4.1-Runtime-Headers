/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKWebContentViewController : MKPlaceSectionViewController <MKInfoCardThemeListener, MKModuleViewControllerProtocol, MKWebBridgeDelegate, WKNavigationDelegate, WKUIDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    MKWebBridge * _bridge;
    WKNavigation * _currentWebNavigation;
    <MKWebContentViewControllerDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    bool  _loading;
    NSURL * _resolvedURL;
    NSURL * _url;
    WKWebView * _webView;
    MKWebViewFactoryItem * _webViewFactoryItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKWebContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (void)initialize;
+ (id)resolvedURLForRelativeURL:(id)arg1;

- (void).cxx_destruct;
- (void)_addLoadingSpinner;
- (bool)_canShowWhileLocked;
- (void)_cancel;
- (void)_finishLoading;
- (void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(id /* block */)arg1;
- (void)_removeLoadingSpinner;
- (void)_removeModuleWithCallbackHandler:(id /* block */)arg1;
- (void)_resetBridge;
- (void)_setHeight:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setHeight:(id)arg1 callbackHandler:(id /* block */)arg2;
- (void)_startLoading;
- (void)dealloc;
- (id)delegate;
- (void)infoCardThemeChanged;
- (id)initWithURL:(id)arg1;
- (bool)isLoading;
- (void)setDelegate:(id)arg1;
- (id)url;
- (void)viewDidLoad;
- (void)webBridgeDidConnect:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;

@end
