/* Generated by EzioChiu.
 */

@protocol NCNotificationDestinationDelegate <NCNotificationSectionSettingsProvider>

@required

- (void)destination:(void *)arg1 executeAction:(void *)arg2 forNotificationRequest:(void *)arg3 requestAuthentication:(void *)arg4 withParameters:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: <NCNotificationDestination> *, NCNotificationAction *, NCNotificationRequest *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)destination:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 forNotificationRequest:(void *)arg3 withParameters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <NCNotificationDestination> *, NCNotificationAction *, NCNotificationRequest *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)destination:(id <NCNotificationDestination>)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;

@optional

- (void)destination:(id <NCNotificationDestination>)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <NCNotificationDestination>)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <NCNotificationDestination>)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(NSString *)arg3;

@end
