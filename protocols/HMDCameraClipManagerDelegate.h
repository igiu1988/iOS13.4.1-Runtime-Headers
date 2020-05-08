/* Generated by EzioChiu.
 */

@protocol HMDCameraClipManagerDelegate <NSObject>

@optional

- (void)clipManager:(HMDCameraClipManager *)arg1 didAddSignificantEventNotification:(HMDCameraClipSignificantEventNotification *)arg2;
- (void)clipManager:(HMDCameraClipManager *)arg1 didDeleteClip:(HMCameraClip *)arg2;
- (bool)clipManager:(HMDCameraClipManager *)arg1 shouldAddNotificationForSignificantEvent:(HMCameraClipSignificantEvent *)arg2 withHomePresence:(id <HMDHomePresenceCheck>)arg3;
- (void)clipManagerDidBecomeAvailable:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidBecomeUnavailable:(HMDCameraClipManager *)arg1;
- (void)clipManagerDidDisableCloudStorage:(HMDCameraClipManager *)arg1;

@end
