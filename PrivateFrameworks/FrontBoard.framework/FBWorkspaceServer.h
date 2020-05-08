/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceServer : NSObject <FBWorkspaceServerConfiguring> {
    BSServiceConnection * _connection;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sceneIDToSceneHandlerMap;
    NSMutableArray * _waitForConnectBlocks;
    <FBWorkspaceServerDelegate> * _weak_delegate;
    BSServiceConnectionEndpointInjector * _workspaceServiceInjector;
}

@property (nonatomic, readonly) <FBWorkspaceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_handlerForSceneID:(id)arg1;
- (id)_queue;
- (void)_queue_setConnection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithConfigurator:(id /* block */)arg1;
- (void)invalidate;
- (void)queue_enqueueConnectBlock:(id /* block */)arg1;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (oneway void)requestSceneWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)sceneID:(id)arg1 didReceiveActions:(id)arg2;
- (oneway void)sceneID:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterSceneEventHandler:(id)arg1 forSceneID:(id)arg2;

@end
