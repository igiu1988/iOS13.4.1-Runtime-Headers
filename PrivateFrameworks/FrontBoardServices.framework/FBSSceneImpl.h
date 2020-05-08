/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneImpl : FBSScene <FBSSceneAgentProxy, FBSSceneHandle, FBSSceneSnapshotRequestDelegate> {
    FBSSerialQueue * _callOutQueue;
    <FBSSceneClientAgent> * _callOutQueue_agent;
    bool  _callOutQueue_agentInvalidateCalled;
    id /* block */  _callOutQueue_agentMessageHandler;
    NSMutableArray * _callOutQueue_agentSessions;
    bool  _hasAgent;
    NSString * _identifier;
    FBSSceneIdentityToken * _identityToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    FBSSceneClientSettings * _lock_clientSettings;
    <FBSSceneDelegate> * _lock_delegate;
    NSOrderedSet * _lock_layers;
    FBSSceneSettings * _lock_settings;
    <FBSSceneUpdater> * _lock_updater;
    FBSSceneSpecification * _specification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_callOutQueue_invalidate;
- (void)_callOutQueue_invalidateAgent;
- (void)_calloutQueue_comsumeLock_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)_configureReceivedActions:(id)arg1;
- (bool)_hasAgent;
- (id)_initWithCallOutQueue:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (id)_initWithUpdater:(id)arg1 identifier:(id)arg2 specification:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (void)agent:(id)arg1 registerMessageHandler:(id /* block */)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)callOutQueue;
- (id)clientProcess;
- (id)clientSettings;
- (void)closeSession:(id)arg1;
- (id)counterpartAgent;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)hostProcess;
- (id)identifier;
- (id)identityToken;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (bool)invalidateSnapshotWithContext:(id)arg1;
- (id)layers;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (bool)performSnapshotWithContext:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (bool)snapshotRequestAllowSnapshot:(id)arg1;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;

@end
