/* Generated by EzioChiu.
 */

@protocol CFScriptDownloadDelegate <NSObject>

@required

- (NSString *)cachePath;
- (void)downloadedScript:(SACFClientFlowScript *)arg1;
- (void)scriptDownloadFailedForScript:(SACFClientFlowScript *)arg1 error:(NSError *)arg2;
- (void)scriptSavedToFilePath:(NSString *)arg1 forScript:(SACFClientFlowScript *)arg2;

@end