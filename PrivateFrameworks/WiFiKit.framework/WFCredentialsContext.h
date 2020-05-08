/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFCredentialsContext : NSObject <SFPasswordSharingServiceDelegate, WFContextPresenting, WFCredentialsProviderContext> {
    long long  _availableAuthTraits;
    NSArray * _availableTLSIdentities;
    id /* block */  _cancellationHandler;
    id /* block */  _completionHandler;
    bool  _enterprise;
    WFNetworkScanRecord * _network;
    SFPasswordSharingService * _passwordSharingService;
    bool  _passwordSharingSupported;
    WFNetworkProfile * _profile;
    UIViewController<WFNetworkView> * _provider;
    id /* block */  _providerCallback;
    long long  _requestedFields;
    bool  _shouldReactivatePasswordSharing;
    bool  _weakSecurity;
}

@property (nonatomic) long long availableAuthTraits;
@property (nonatomic, retain) NSArray *availableTLSIdentities;
@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnterprise, nonatomic) bool enterprise;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsDismissal;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) SFPasswordSharingService *passwordSharingService;
@property (getter=isPasswordSharingSupported, nonatomic) bool passwordSharingSupported;
@property (nonatomic, retain) WFNetworkProfile *profile;
@property (nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, copy) id /* block */ providerCallback;
@property (nonatomic) long long requestedFields;
@property (nonatomic) bool shouldReactivatePasswordSharing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *username;
@property (getter=isWeakSecurity, nonatomic) bool weakSecurity;

- (void).cxx_destruct;
- (void)activatePasswordSharing;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (long long)availableAuthTraits;
- (id)availableTLSIdentities;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (id /* block */)completionHandler;
- (void)deactivatePasswordSharingWithReactivation:(bool)arg1;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)finishWithError:(id)arg1 forNetwork:(id)arg2 profile:(id)arg3;
- (void)gatherCredentials:(id /* block */)arg1;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2 authTraits:(long long)arg3;
- (bool)isEnterprise;
- (bool)isPasswordSharingSupported;
- (bool)isWeakSecurity;
- (void)launchSettings;
- (bool)needsDismissal;
- (id)network;
- (id)passwordSharingService;
- (id)profile;
- (id)provider;
- (id /* block */)providerCallback;
- (long long)requestedFields;
- (long long)securityMode;
- (void)service:(id)arg1 receivedNetworkInfo:(id)arg2;
- (bool)service:(id)arg1 shouldPromptForNetwork:(id)arg2;
- (void)setAvailableAuthTraits:(long long)arg1;
- (void)setAvailableTLSIdentities:(id)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEnterprise:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPasswordSharingService:(id)arg1;
- (void)setPasswordSharingSupported:(bool)arg1;
- (void)setProfile:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setProviderCallback:(id /* block */)arg1;
- (void)setRequestedFields:(long long)arg1;
- (void)setShouldReactivatePasswordSharing:(bool)arg1;
- (void)setWeakSecurity:(bool)arg1;
- (bool)shouldReactivatePasswordSharing;
- (id)username;
- (bool)validateCredentials;
- (bool)validatePassword;

@end