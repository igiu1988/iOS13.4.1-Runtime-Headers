/* Generated by EzioChiu.
 */

@protocol DNDSStateProviderDataSource <NSObject>

@required

- (unsigned long long)currentInterruptionBehaviorSettingForStateProvider:(DNDSStateProvider *)arg1;
- (unsigned long long)currentLostModeStateForStateProvider:(DNDSStateProvider *)arg1;
- (NSArray *)currentlyActiveModeAssertionsForStateProvider:(DNDSStateProvider *)arg1;
- (NSDateInterval *)stateProvider:(DNDSStateProvider *)arg1 activeDateIntervalForModeAssertion:(DNDModeAssertion *)arg2;

@end
