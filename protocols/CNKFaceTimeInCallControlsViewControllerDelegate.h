/* Generated by EzioChiu.
 */

@protocol CNKFaceTimeInCallControlsViewControllerDelegate

@required

- (void)didCreateTableViewForInCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1;
- (void)inCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1 didTap:(long long)arg2;
- (void)resetEffectsState;

@optional

- (void)inCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1 didAdd:(CNContact *)arg2;

@end
