/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface HBXUnitSupport : NSObject {
    HKDisplayTypeController * _displayTypeController;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (id)displayTypeController;
- (id)initWithUnitPreferenceController:(id)arg1 displayTypeController:(id)arg2;
- (id)localizedDisplayNameForUnit:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1;
- (id)preferredUnitForType:(id)arg1;
- (id)unitPreferenceController;
- (void)updatePreferredUnit:(id)arg1 forType:(id)arg2;

@end
