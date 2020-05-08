/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGAnimator : NSObject {
    bool  _animating;
    PXGAnimationDataStore * _animationDataStore;
    PXGAnimatorLayout * _animatorLayout;
    long long  _computeCount;
    PXGSpriteDataStore * _doubleSidedSpriteDataStore;
    bool  _isSkippingAnimations;
    double  _lastUpdateTime;
    unsigned int  _numberOfProlongatedSprites;
    PXGSpriteDataStore * _oldAnimationPresentationSpriteDataStore;
    double  _speed;
    PXGIndexSetArray * _spriteIndexesByGroupIndex;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, readonly) long long computeCount;
@property (nonatomic) double speed;

- (void).cxx_destruct;
- (void)_stopAllAnimations;
- (void)computeAnimationStateForTime:(double)arg1 inputSpriteDataStore:(id)arg2 inputChangeDetails:(id)arg3 inputLayout:(id)arg4 viewportShift:(struct CGPoint { double x1; double x2; })arg5 animationPresentationSpriteDataStore:(id)arg6 animationTargetSpriteDataStore:(id)arg7 animationChangeDetails:(out id*)arg8 animationLayout:(out id*)arg9;
- (long long)computeCount;
- (void)dealloc;
- (id)init;
- (bool)isAnimating;
- (void)retargetAnimationsAfterStartTime:(double)arg1 newStartTime:(double)arg2;
- (void)setAnimating:(bool)arg1;
- (void)setSpeed:(double)arg1;
- (double)speed;

@end
