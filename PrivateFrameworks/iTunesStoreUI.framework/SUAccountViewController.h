/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUAccountViewController : SUStorePageViewController {
    ACAccount * _account;
    NSURL * _accountURL;
    bool  _failed;
    SUMescalSession * _mescalSession;
    long long  _mescalState;
    NSString * _primingSignature;
    long long  _style;
    NSDictionary * _tidHeaders;
}

@property (getter=_mescalSession, nonatomic, readonly) SUMescalSession *_mescalSession;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) long long style;

+ (id)_latestAccountViewController;

- (void).cxx_destruct;
- (id)_URLByRemovingBlacklistedParametersWithURL:(id)arg1;
- (id)_authenticationQueryParametersForStyle:(long long)arg1;
- (id)_bagKeyForStyle:(long long)arg1;
- (void)_closeMescalSession;
- (void)_didEnterBackground:(id)arg1;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2;
- (id)_mescalSession;
- (bool)_shouldUseWebViewFastPath;
- (id)account;
- (id)copyArchivableContext;
- (void)enqueueFetchOperation;
- (void)handleFailureWithError:(id)arg1;
- (id)init;
- (id)initWithExternalAccountURL:(id)arg1;
- (id)newFetchOperation;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id*)arg3;
- (void)setAccount:(id)arg1;
- (void)setStyle:(long long)arg1;
- (bool)shouldSignRequests;
- (long long)style;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
