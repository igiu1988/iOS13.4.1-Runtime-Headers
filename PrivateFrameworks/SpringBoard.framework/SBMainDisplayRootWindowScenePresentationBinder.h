/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {
    UIWindowScene * _disconnectedFromScene;
    NSMutableArray * _disconnectionAssertions;
    UIRootSceneWindow * _rootWindow;
}

@property (nonatomic, readonly) UIRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_disconnectFromRenderServer;
- (void)_reconnectToRenderServer;
- (id)assertDisconnectionFromRenderServerForReason:(id)arg1;
- (id)init;
- (id)rootWindow;

@end
