/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientInfo : NSObject {
    NSString * _cachedHostname;
    NSObject<OS_dispatch_queue> * _hostCallbackQueue;
    struct MGNotificationTokenStruct { } * _hostNotificationToken;
}

@property (nonatomic, readonly) NSString *hostname;

+ (id)sharedClientInfo;

- (void).cxx_destruct;
- (id)_init;
- (void)_refreshHostname;
- (void)dealloc;
- (id)hostname;
- (id)init;

@end
