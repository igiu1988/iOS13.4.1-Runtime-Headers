/* Generated by EzioChiu.
 */

@protocol ATXSearchFeedbackListenerTarget <NSObject>

@required

- (void)logAppFeedback:(ATXResponse *)arg1 consumerSubType:(unsigned char)arg2 engagementType:(unsigned long long)arg3 bundleIdentifier:(NSString *)arg4 bundleIdsShown:(NSArray *)arg5;
- (void)sendActionResponse:(ATXActionResponse *)arg1;

@end
