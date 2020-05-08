/* Generated by EzioChiu.
 */

@protocol AFUISiriViewControllerDataSource <NSObject>

@required

- (NSArray *)bulletinsForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)contextAppInfosForSiriViewController:(AFUISiriViewController *)arg1;
- (unsigned long long)lockStateForSiriViewController:(AFUISiriViewController *)arg1;
- (AFBulletin *)siriViewController:(AFUISiriViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;

@optional

- (NSArray *)currentCarPlaySupportedOEMAppsForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)starkAppBundleIdentifierContextForSiriViewController:(AFUISiriViewController *)arg1;

@end
