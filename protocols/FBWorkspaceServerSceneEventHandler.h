/* Generated by EzioChiu.
 */

@protocol FBWorkspaceServerSceneEventHandler <NSObject>

@required

- (void)sceneDidReceiveActions:(NSSet *)arg1;
- (void)sceneDidReceiveMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: FBSSceneMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, void*
- (void)sceneDidUpdateClientSettings:(FBSSceneClientSettingsDiff *)arg1 transitionContext:(FBSSceneTransitionContext *)arg2;

@end
