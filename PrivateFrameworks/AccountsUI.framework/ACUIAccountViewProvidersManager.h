/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAccountViewProvidersManager : NSObject {
    NSDictionary * _accountTypeToPluginNameMap;
    NSMutableDictionary * _pluginCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_accountViewProviderPluginForAccountTypeID:(id)arg1;
- (id)_loadAccountViewProviderPluginWithName:(id)arg1;
- (id)configurationInfoForCreatingAccountWithType:(id)arg1;
- (id)configurationInfoForViewingAccount:(id)arg1;
- (Class)controllerClassForCreatingAccountWithType:(id)arg1;
- (id)init;
- (bool)setDelegate:(id)arg1 forSignInController:(id)arg2 forAccountWithType:(id)arg3;
- (Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
- (Class)viewControllerClassForViewingAccount:(id)arg1;

@end
