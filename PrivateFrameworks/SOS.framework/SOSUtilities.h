/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSUtilities : NSObject

+ (long long)SOSSelectableTriggerMechanismCapability;
+ (long long)SOSTriggerClickCount;
+ (long long)SOSTriggerMechanismForClickCount:(long long)arg1;
+ (id)_userFriendsDefaults;
+ (id)_userSOSDefaults;
+ (bool)autoCallRequiresSIM;
+ (bool)canTriggerSOSWithClicks;
+ (bool)canTriggerSOSWithVolumeLockHold;
+ (long long)currentSOSTriggerMechanism;
+ (long long)defaultSOSTriggerMechanism;
+ (bool)deviceHasHomeButton;
+ (bool)hasActiveSIMForClient:(id)arg1;
+ (bool)isAllowedToMessageSOSContacts;
+ (bool)isAutomaticCallCountdownEnabled;
+ (bool)isDeviceD2xOrNewer;
+ (bool)isIndiaSKU;
+ (bool)longPressTriggersEmergencySOS;
+ (bool)mustAllowThreeClickTrigger;
+ (bool)newtonTriggersEmergencySOS;
+ (id)newtonTriggersEmergencySOSNumber;
+ (void)setAllowedToMessageSOSContacts:(bool)arg1;
+ (void)setAutomaticCallCountdownEnabled:(bool)arg1;
+ (void)setLongPressTriggersEmergencySOS:(bool)arg1;
+ (void)setNewtonTriggersEmergencySOS:(bool)arg1;
+ (void)setNewtonTriggersEmergencySOSNumber:(id)arg1;
+ (void)setPlayAudioDuringCountdown:(bool)arg1;
+ (bool)shouldForceDisableAutoCallForClient:(id)arg1;
+ (bool)shouldPlayAudioDuringCountdown;

@end
