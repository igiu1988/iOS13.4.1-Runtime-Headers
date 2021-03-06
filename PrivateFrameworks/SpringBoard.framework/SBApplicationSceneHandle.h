/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBApplicationSceneHandle : SBSceneHandle {
    SBApplication * _application;
    bool  _isSecure;
    long long  _layoutRole;
    NSString * _persistenceIdentifier;
    double  _userLaunchEventTime;
    unsigned long long  _userLaunchSignpostID;
}

@property (nonatomic, readonly) SBApplication *application;
@property (nonatomic) long long layoutRole;
@property (nonatomic, readonly) NSString *persistenceIdentifier;
@property (getter=isSecure, nonatomic, readonly) bool secure;

+ (id)lookupOrCreatePersistenceIDFromApplication:(id)arg1 sceneID:(id)arg2;
+ (id)sceneSpecificationForDisplayIdentity:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1;
- (id)_createApplicationSceneClientSettingsFromContext:(id)arg1 entity:(id)arg2 initialSceneSettings:(id)arg3;
- (id)_createApplicationSceneSettingsFromContext:(id)arg1 entity:(id)arg2;
- (id)_createApplicationSceneTransitionContextFromContext:(id)arg1 entity:(id)arg2;
- (id)_createParametersFromTransitionContext:(id)arg1 entity:(id)arg2;
- (id)_createProcessExecutionContextFromContext:(id)arg1 entity:(id)arg2;
- (id)_initWithApplication:(id)arg1 definition:(id)arg2 scene:(id)arg3 displayIdentity:(id)arg4;
- (id)_initWithApplication:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3;
- (id)_initWithDefinition:(id)arg1;
- (id)_initWithScene:(id)arg1;
- (void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4;
- (void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (id)_persistenceIdentifier;
- (id)application;
- (void)dealloc;
- (bool)isSecure;
- (long long)layoutRole;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewController;
- (id)newSceneViewWithReferenceSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 hostRequester:(id)arg3;
- (id)persistenceIdentifier;
- (void)setLayoutRole:(long long)arg1;

@end
