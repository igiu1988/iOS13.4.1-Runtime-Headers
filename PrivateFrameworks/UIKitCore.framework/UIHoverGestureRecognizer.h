/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIHoverGestureRecognizer : UIGestureRecognizer {
    UIHoverEvent * _currentHoverEvent;
    UITouch * _currentTouch;
    bool  _pausesWhilePanning;
    long long  _previousTrackpadFingerDownCount;
    long long  _trackpadFingerDownCount;
}

@property (getter=_pausesWhilePanning, setter=_setPausesWhilePanning:, nonatomic) bool pausesWhilePanning;
@property (getter=_previousTrackpadFingerDownCount, nonatomic, readonly) long long previousTrackpadFingerDownCount;
@property (getter=_trackpadFingerDownCount, nonatomic, readonly) long long trackpadFingerDownCount;

- (void).cxx_destruct;
- (bool)_affectedByGesture:(id)arg1;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (bool)_paused;
- (bool)_pausesWhilePanning;
- (long long)_previousTrackpadFingerDownCount;
- (void)_setPausesWhilePanning:(bool)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (long long)_trackpadFingerDownCount;
- (bool)_wantsHoverEvents;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)reset;

@end
