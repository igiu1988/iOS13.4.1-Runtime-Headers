/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver, SKStoreProductViewControllerDelegate> {
    NSString * _appName;
    WFiTunesSessionManager * _currentAppNameLookupSessionManager;
    bool  _skipLookup;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly) ICApp *app;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) WFiTunesSessionManager *currentAppNameLookupSessionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ recoveryCompletionHandler;
@property (nonatomic) bool skipLookup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKStoreProductViewController *viewController;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)mustBeAvailableForDisplay;
+ (bool)refreshesAvailabilityOnApplicationResume;

- (void).cxx_destruct;
- (id)app;
- (id)appIdentifier;
- (id)appName;
- (id)appNotInstalledError;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)currentAppNameLookupSessionManager;
- (void)dealloc;
- (id)eventDictionary;
- (id)initWithDefinition:(id)arg1;
- (void)refreshAvailability;
- (void)setAppName:(id)arg1;
- (void)setCurrentAppNameLookupSessionManager:(id)arg1;
- (void)setSkipLookup:(bool)arg1;
- (bool)skipLookup;
- (id)stateQueue;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)productViewControllerDidFinish:(id)arg1;
- (id /* block */)recoveryCompletionHandler;
- (void)setRecoveryCompletionHandler:(id /* block */)arg1;
- (void)setViewController:(id)arg1;
- (void)showAppStoreForApp:(id)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)viewController;

@end
