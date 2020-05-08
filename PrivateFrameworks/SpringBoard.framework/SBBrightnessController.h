/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBBrightnessController : NSObject {
    struct BKSDisplayBrightnessTransaction { } * _brightnessDownTransaction;
    struct BKSDisplayBrightnessTransaction { } * _brightnessUpTransaction;
    bool  _debounce;
    NSMutableArray * _maximumBrightnessAssertions;
}

+ (id)sharedBrightnessController;

- (void).cxx_destruct;
- (void)_adjustBacklightLevel:(bool)arg1;
- (float)_calcButtonRepeatDelay;
- (void)_decreaseBrightnessAndRepeat;
- (void)_enterMaximumBrightnessMode;
- (void)_exitMaximumBrightnessMode;
- (void)_increaseBrightnessAndRepeat;
- (void)_setBrightnessLevel:(float)arg1 showHUD:(bool)arg2;
- (id)acquireMaximumBrightnessAssertionForReason:(id)arg1;
- (void)cancelBrightnessEvent;
- (void)handleBrightnessEvent:(struct __IOHIDEvent { }*)arg1;
- (void)setBrightnessLevel:(float)arg1;

@end