/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface _SBValueConvergenceAnimatorEngine : NSObject {
    NSMutableSet * _animators;
    CADisplayLink * _displayLink;
    NSMutableSet * _finishedAnimators;
}

+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_ensureDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)_tearDownDisplayLink;
- (void)_updateDisplayLink;
- (id)init;
- (bool)isRunningAnimator:(id)arg1;
- (void)startAnimator:(id)arg1;
- (void)stopAnimator:(id)arg1;
- (void)updateAnimator:(id)arg1;

@end
