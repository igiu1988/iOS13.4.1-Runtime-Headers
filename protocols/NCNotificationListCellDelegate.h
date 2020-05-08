/* Generated by EzioChiu.
 */

@protocol NCNotificationListCellDelegate <NSObject>

@required

- (bool)notificationListCell:(NCNotificationListCell *)arg1 shouldPanHorizontallyWithTouch:(UITouch *)arg2;
- (void)notificationListCellDidHideCellActions:(NCNotificationListCell *)arg1 resetCellScrollPosition:(bool)arg2 animated:(bool)arg3;
- (void)notificationListCellDidRevealCellActions:(NCNotificationListCell *)arg1;
- (void)notificationListCellDidSignificantUserInteraction:(NCNotificationListCell *)arg1;
- (void)notificationListCellRequestsDefaultAction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NCNotificationListCell *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListCellRequestsDismissAction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NCNotificationListCell *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListCellRequestsPresentingLongLook:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NCNotificationListCell *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListCellRequestsPresentingManagementView:(void *)arg1 withPresentingView:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NCNotificationListCell *, UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NCNotificationSectionSettings *)notificationListCellRequestsSectionSettings:(NCNotificationListCell *)arg1 sectionIdentifier:(NSString *)arg2;
- (void)willTearDownNotificationListCell:(NCNotificationListCell *)arg1;

@optional

- (void)notificationListCell:(NCNotificationListCell *)arg1 didMoveToNewXPosition:(double)arg2;
- (bool)notificationListCellShouldPerformClipping:(NCNotificationListCell *)arg1;

@end
