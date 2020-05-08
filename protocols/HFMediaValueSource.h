/* Generated by EzioChiu.
 */

@protocol HFMediaValueSource <NSObject>

@required

- (NSError *)cachedPlaybackStateWriteErrorForRouteID:(NSString *)arg1;
- (bool)hasPendingWritesForRouteID:(NSString *)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(NSString *)arg1;
- (<HFMediaProfileContainer> *)mediaProfileContainerForRouteID:(NSString *)arg1;
- (NAFuture *)writePlaybackState:(long long)arg1 playbackArchive:(HFPlaybackArchive *)arg2 forRouteID:(NSString *)arg3;

@end
