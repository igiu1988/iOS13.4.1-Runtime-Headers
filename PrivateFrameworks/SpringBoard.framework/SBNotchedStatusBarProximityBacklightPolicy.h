/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate> {
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition * _enablementCondition;
    SBProximitySettings * _lazy_proximitySettings;
    bool  _objectInProximity;
    _SBProximityTouchHandlingViewController * _proxTouchHandlingViewController;
    _SBProximityTouchHandlingWindow * _proxTouchHandlingWindow;
    unsigned long long  _timesEnabledWithObjectInProximity;
    unsigned long long  _touchesReceivedWithObjectInProximity;
}

@property (setter=_setProximitySettings:, nonatomic, retain) SBProximitySettings *_proximitySettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createNewEnablementCondition;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(bool)arg1;
- (id)_proximitySettings;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)_setHandleTouchesIfNecessary:(bool)arg1;
- (void)_setProximitySettings:(id)arg1;
- (void)condition:(id)arg1 enablementDidChange:(bool)arg2;
- (void)dealloc;
- (void)didHitAllowedRegion:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithBacklightController:(id)arg1;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(bool)arg2;

@end
