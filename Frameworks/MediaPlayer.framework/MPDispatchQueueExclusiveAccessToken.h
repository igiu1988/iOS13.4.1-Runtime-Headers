/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPDispatchQueueExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {
    NSObject<OS_dispatch_queue> * _accessQueue;
}

+ (id)tokenWithQueue:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (void)assertHasExclusiveAccess;

@end
