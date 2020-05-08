/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPULayerAnimation : QLPUAnimationGroup <CAAnimationDelegate> {
    CAAnimation * __animation;
    double  _beginTime;
    bool  _isAnimationRunning;
    NSString * _key;
    CALayer * _layer;
    float  _speed;
    double  _timeOffset;
}

@property (setter=_setAnimation:, nonatomic, retain) CAAnimation *_animation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) CALayer *layer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animation;
- (void)_setAnimation:(id)arg1;
- (void)_updateLayerAnimation;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)description;
- (void)finishImmediately;
- (id)init;
- (id)initWithLayer:(id)arg1 key:(id)arg2;
- (bool)isReadyToComplete;
- (id)key;
- (id)layer;
- (void)setSpeed:(float)arg1 timeOffset:(double)arg2 beginTime:(double)arg3;

@end
