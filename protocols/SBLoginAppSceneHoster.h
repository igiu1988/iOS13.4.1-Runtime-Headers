/* Generated by EzioChiu.
 */

@protocol SBLoginAppSceneHoster <NSObject>

@required

- (UIView *)contentView;
- (bool)deferHIDEvents;
- (<SBLoginAppSceneHosterDelegate> *)delegate;
- (SBApplication *)hostedApp;
- (NSString *)hostedAppBundleID;
- (NSString *)hostedSceneIdentifier;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setDeferHIDEvents:(bool)arg1;
- (void)setDelegate:(id <SBLoginAppSceneHosterDelegate>)arg1;
- (void)updateSettingsWithTransitionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, FBSSceneTransitionContext *, id /* block */, FBSMutableSceneSettings *, void*

@end
