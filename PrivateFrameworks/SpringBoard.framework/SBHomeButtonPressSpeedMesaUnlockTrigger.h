/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    bool  _bioUnlockOccurred;
    bool  _buttonIsDown;
    bool  _fingerIsOn;
    double  _slowPressDuration;
    BSTimer * _slowPressTimer;
    bool  _timerFired;
}

@property (nonatomic) double slowPressDuration;
@property (getter=_slowPressTimer, setter=_setSlowPressTimer:, nonatomic, retain) BSTimer *slowPressTimer;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_evaluateUnlock;
- (bool)_isPrimed;
- (bool)_isTimerRunning;
- (void)_setSlowPressTimer:(id)arg1;
- (id)_slowPressTimer;
- (void)_startTimer;
- (void)_timerFired;
- (bool)bioUnlock;
- (id)description;
- (void)fingerOff;
- (id)init;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)screenOff;
- (void)setSlowPressDuration:(double)arg1;
- (double)slowPressDuration;
- (id)succinctDescriptionBuilder;

@end