/* Generated by EzioChiu.
 */

@protocol VCUserNotificationManagerDelegate <NSObject>

@required

- (void)notificationManager:(VCUserNotificationManager *)arg1 didDismissTriggerWithIdentifier:(NSString *)arg2;
- (void)notificationManager:(VCUserNotificationManager *)arg1 receivedConfirmationToRunTriggerWithIdentifier:(NSString *)arg2;

@end
