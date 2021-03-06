/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@interface WebAppSceneDelegate : UIResponder <UIWindowSceneDelegate> {
    bool  _sceneHasEverEnteredForeground;
    bool  _wasSuspendedUnderLock;
    WebAppViewController * _webApp;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (bool)_shouldReloadWebAppOnLaunch;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;

@end
