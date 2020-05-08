/* Generated by EzioChiu.
 */

@protocol GEODataSession <NSObject>

@required

- (<GEODataSessionTask> *)taskWithRequest:(GEODataRequest *)arg1 delegate:(id <GEODataSessionTaskDelegate>)arg2 delegateQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (<GEODataSessionTask> *)taskWithRequest:(GEODataRequest *)arg1 priority:(float)arg2 delegate:(id <GEODataSessionTaskDelegate>)arg3 delegateQueue:(NSObject<OS_dispatch_queue> *)arg4;

@end