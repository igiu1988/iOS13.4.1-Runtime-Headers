/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface _VUISBInstallProgressStateTransition : _VUISBIconProgressTransition {
    double  _duration;
    double  _fraction;
    long long  _fromState;
    CAMediaTimingFunction * _timingFunction;
    long long  _toState;
    double  _totalElapsedTime;
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;

- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;
- (void)_updateView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)dealloc;
- (bool)isCompleteWithView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;

@end
