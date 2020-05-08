/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController {
    <BSInvalidatable> * _colorSamplingAssertion;
    <BSInvalidatable> * _wallpaperRequiredAssertion;
}

@property (nonatomic, retain) <BSInvalidatable> *colorSamplingAssertion;
@property (nonatomic, readonly, copy) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;
@property (nonatomic, readonly, copy) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property (nonatomic, readonly) SBWorkspaceTransitionRequest *transitionRequest;
@property (nonatomic, retain) <BSInvalidatable> *wallpaperRequiredAssertion;

- (void).cxx_destruct;
- (void)__startAnimation;
- (bool)__wantsInitialProgressStateChange;
- (void)_begin;
- (void)_cleanupAnimation;
- (void)_dismissBannerAnimated:(bool)arg1;
- (id)_getTransitionWindow;
- (id)_primaryAppOrAnyAppFromSet:(id)arg1;
- (bool)_shouldDismissBanner;
- (id)colorSamplingAssertion;
- (id)fromApplicationSceneEntity;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (void)setColorSamplingAssertion:(id)arg1;
- (void)setWallpaperRequiredAssertion:(id)arg1;
- (id)toApplicationSceneEntity;
- (id)transitionRequest;
- (id)wallpaperRequiredAssertion;

@end
