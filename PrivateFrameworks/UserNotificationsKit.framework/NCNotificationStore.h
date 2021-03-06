/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationStore : NSObject {
    NSMutableDictionary * _notificationSections;
}

@property (nonatomic, readonly) unsigned long long notificationRequestsCount;
@property (nonatomic, retain) NSMutableDictionary *notificationSections;
@property (nonatomic, readonly) unsigned long long sectionsCount;

- (void).cxx_destruct;
- (bool)addNotificationRequest:(id)arg1;
- (id)init;
- (id)notificationRequestMatchingNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (unsigned long long)notificationRequestsCount;
- (id)notificationSections;
- (bool)removeNotificationRequest:(id)arg1;
- (bool)replaceNotificationRequest:(id)arg1;
- (unsigned long long)sectionsCount;
- (void)setNotificationSections:(id)arg1;

@end
