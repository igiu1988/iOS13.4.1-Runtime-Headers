/* Generated by EzioChiu.
 */

@protocol RMAssetResolver

@required

- (NSURLSessionDataTask *)dataTaskWithAsset:(void *)arg1 queryParameters:(void *)arg2 statusUpdater:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: RMAsset *, NSDictionary *, RMConfigurationStatusUpdater *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSURLSessionDownloadTask *)downloadTaskWithAsset:(void *)arg1 queryParameters:(void *)arg2 statusUpdater:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: RMAsset *, NSDictionary *, RMConfigurationStatusUpdater *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*

@end