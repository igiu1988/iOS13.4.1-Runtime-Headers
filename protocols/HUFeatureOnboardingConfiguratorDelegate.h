/* Generated by EzioChiu.
 */

@protocol HUFeatureOnboardingConfiguratorDelegate <HUConfiguratorDelegate>

@required

- (UIViewController<HUConfigurationViewController> *)getNextViewControllerForOnboardingInput:(NSDictionary *)arg1;
- (void)restartCurrentOnboarding;

@end
