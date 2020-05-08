/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

@interface SWViewController : UIViewController <WKNavigationDelegate, WKUIDelegate> {
    <SWContentRuleManager> * _contentRuleManager;
    <SWDatastoreSynchronizationManager> * _datastoreSynchronizationManager;
    <SWDocumentStateReporting> * _documentStateReporter;
    <SWErrorReporting> * _errorReporter;
    SWLoader * _loader;
    <SWLogger> * _logger;
    <SWMessageHandlerManager> * _messageHandlerManager;
    <SWNavigationManager> * _navigationManager;
    <SWReachabilityProvider> * _reachabilityProvider;
    <SWScriptsManager> * _scriptsManager;
    <SWSessionManager> * _sessionManager;
    <SWSetupManager> * _setupManager;
    <SWProcessTerminationManager> * _terminationManager;
    <SWTimeoutManager> * _timeoutManager;
    WKWebView * _webView;
}

@property (nonatomic) bool allowsRemoteInspection;
@property (nonatomic, readonly) <SWContentRuleManager> *contentRuleManager;
@property (nonatomic, readonly) <SWDatastoreSynchronizationManager> *datastoreSynchronizationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SWDocumentStateReporting> *documentStateReporter;
@property (nonatomic, readonly) <SWErrorReporting> *errorReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SWLoader *loader;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly) <SWMessageHandlerManager> *messageHandlerManager;
@property (nonatomic, readonly) <SWNavigationManager> *navigationManager;
@property (nonatomic, readonly) <SWReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SWScriptsManager> *scriptsManager;
@property (nonatomic, readonly) <SWSessionManager> *sessionManager;
@property (nonatomic, readonly) <SWSetupManager> *setupManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SWProcessTerminationManager> *terminationManager;
@property (nonatomic, readonly) <SWTimeoutManager> *timeoutManager;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (bool)allowsRemoteInspection;
- (id)contentRuleManager;
- (id)datastoreSynchronizationManager;
- (id)documentStateReporter;
- (id)errorReporter;
- (id)initWithWebView:(id)arg1 setupManager:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 navigationManager:(id)arg5 errorReporter:(id)arg6 documentStateReporter:(id)arg7 timeoutManager:(id)arg8 terminationManager:(id)arg9 contentRuleManager:(id)arg10 reachabilityProvider:(id)arg11 logger:(id)arg12 sessionManager:(id)arg13 datastoreSynchronizationManager:(id)arg14;
- (void)initiateLoadingWithLoader:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadURL:(id)arg1;
- (id)loader;
- (id)logger;
- (id)messageHandlerManager;
- (id)navigationManager;
- (id)reachabilityProvider;
- (id)scriptsManager;
- (id)sessionManager;
- (void)setAllowsRemoteInspection:(bool)arg1;
- (void)setLoader:(id)arg1;
- (id)setupManager;
- (id)terminationManager;
- (id)timeoutManager;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
- (bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
