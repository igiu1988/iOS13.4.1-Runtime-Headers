/* Generated by EzioChiu.
 */

@protocol NCNotificationManagementViewPresenterDelegate <NSObject>

@required

- (NCNotificationSectionSettings *)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;

@optional

- (void)notificationManagementViewPresenterDidDismissManagementView:(NCNotificationManagementViewPresenter *)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(NCNotificationManagementViewPresenter *)arg1;

@end
