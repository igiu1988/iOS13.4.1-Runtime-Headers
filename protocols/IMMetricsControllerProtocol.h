/* Generated by EzioChiu.
 */

@protocol IMMetricsControllerProtocol <NSObject>

@required

- (void)flushImmediately;
- (void)recordEvent:(IMAMSMetricsEvent *)arg1;
- (bool)shouldIgnoreDNU;
- (bool)shouldSuppressUserInfo;
- (NSString *)topic;

@end
