/* Generated by EzioChiu.
 */

@protocol SBLockScreenCallHandling <NSObject>

@required

- (void)emergencyDialerExitedWithError:(NSError *)arg1;
- (void)exitEmergencyDialerAnimated:(bool)arg1;
- (bool)isMakingEmergencyCall;
- (void)launchEmergencyDialer;
- (void)launchEmergencyDialerAnimated:(bool)arg1;
- (void)launchInCallAlert;

@end
