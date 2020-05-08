/* Generated by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCXboxOneSControllerProfile : GCExtendedGamepad <_GCACHomeButtonDelegate> {
    _GCACHomeButton * _acHome;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)menuButton;
- (id)name;
- (id)productCategory;
- (void)setEnableTimeForHaptics:(bool)arg1;
- (void)setHapticMotor:(int)arg1 frequency:(float)arg2;
- (void)setPlayerIndex:(long long)arg1;
- (void)toggleSuspendResume;
- (void)triggerHapticsForDuration:(float)arg1;

@end
