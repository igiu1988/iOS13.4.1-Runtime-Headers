/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAvatarEnvironment : NSObject {
    AVTAvatar * _avatar;
    SCNNode * _defaultLightingNode;
    SCNNode * _defaultPointOfView;
    SCNNode * _environmentNode;
    SCNScene * _scene;
    SCNMaterial * _shadowPlaneMaterial;
    SCNNode * _specializedLightingNode;
    SCNNode * _trackingLostIndicator;
    bool  _trackingLostIndicatorVisible;
    SCNNode * _whitePlane;
}

@property (nonatomic, readonly) SCNNode *defaultPointOfView;
@property (nonatomic, readonly) SCNNode *environmentNode;
@property (nonatomic, readonly) bool faceIsFullyVisible;
@property (nonatomic) float fadeFactor;
@property (nonatomic) bool showReticle;

+ (void)triggerCrossFadeFromImage:(id)arg1 withScene:(id)arg2 pointOfView:(id)arg3 device:(id)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)avatarDidChange:(id)arg1 arMode:(bool)arg2;
- (id)defaultEnvironmentNode;
- (id)defaultPointOfView;
- (void)didSnapshot;
- (id)environmentNode;
- (bool)faceIsFullyVisible;
- (float)fadeFactor;
- (void)hideReticle;
- (void)hideTrackingLossIndicator;
- (id)initAndInstallInScene:(id)arg1;
- (void)setFadeFactor:(float)arg1;
- (void)setShowReticle:(bool)arg1;
- (bool)showReticle;
- (void)showTrackingLossIndicator;
- (id)transitionTextureWithSize:(struct CGSize { double x1; double x2; })arg1 renderer:(id)arg2;
- (void)updateARMode:(bool)arg1;
- (void)updateSpecializedLighting;
- (void)willSnapshot;

@end
