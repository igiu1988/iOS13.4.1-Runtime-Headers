/* Generated by EzioChiu.
 */

@protocol SRAuthorizationPromptServiceInterface <NSObject>

@required

- (void)deleteAllSamples;
- (void)requestAuthorizationForBundle:(NSString *)arg1 services:(NSSet *)arg2;
- (void)showAppsAndStudies;
- (void)showPendingAuthUIForBundlePath:(NSString *)arg1 services:(NSSet *)arg2;
- (void)showResearchData;
- (void)showStudyAuthorizationForBundlePath:(NSString *)arg1;

@end
