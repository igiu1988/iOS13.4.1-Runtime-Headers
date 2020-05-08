/* Generated by EzioChiu.
 */

@protocol NNMKSyncStateManager <NSObject>

@required

- (<NNMKSyncStateManagerDelegate> *)delegate;
- (bool)isInitialSyncRestricted;
- (NSNumber *)pairedDeviceScreenScale;
- (NSValue *)pairedDeviceScreenSize;
- (bool)pairedDeviceSupportsMailContentProtectedChannel;
- (bool)pairedDeviceSupportsMultipleMailboxes;
- (bool)pairedDeviceSupportsStandaloneMode;
- (NSString *)pairingStorePath;
- (void)reportInitialSyncDidComplete;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncDidFailWithError:(NSError *)arg1;
- (void)reportInitialSyncProgress:(double)arg1;
- (void)setDelegate:(id <NNMKSyncStateManagerDelegate>)arg1;
- (bool)willPresentNotificationForMessage:(NNMKMessage *)arg1;

@end
