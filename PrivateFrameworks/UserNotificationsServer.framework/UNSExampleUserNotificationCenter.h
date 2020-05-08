/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSExampleUserNotificationCenter : NSObject {
    PTTestRecipe * _basicTestRecipe;
    UNUserNotificationCenter * _userNotificationCenter;
}

- (void).cxx_destruct;
- (id)_basicPostUpdateRecipe;
- (id)_existingNotificationRequestForIdentifier:(id)arg1;
- (id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2;
- (void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2;
- (id)_userNotificationCenter;
- (id)init;
- (id)latestNotificationRequestIdentifier;
- (void)publish;
- (void)publish:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1;
- (void)removeAllNotifications;
- (id)sectionIdentifier;
- (void)update;

@end
