/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkCollectionSyncFlags : NSObject {
    NSMutableSet * _lockSyncHoldRequestorPointers;
    bool  _postSyncNotificationWhenUnlocking;
    bool  _syncAllowed;
    int  _syncLockFileDescriptor;
    long long  _syncNotificationType;
    bool  _unlockSyncRequested;
}

@property (nonatomic, readonly) NSMutableSet *lockSyncHoldRequestorPointers;
@property (nonatomic) bool postSyncNotificationWhenUnlocking;
@property (nonatomic, readonly) bool syncAllowed;
@property (nonatomic) int syncLockFileDescriptor;
@property (nonatomic) long long syncNotificationType;
@property (nonatomic) bool unlockSyncRequested;

- (void).cxx_destruct;
- (id)initWithSyncAllowed:(bool)arg1;
- (id)lockSyncHoldRequestorPointers;
- (bool)postSyncNotificationWhenUnlocking;
- (void)setPostSyncNotificationWhenUnlocking:(bool)arg1;
- (void)setSyncLockFileDescriptor:(int)arg1;
- (void)setSyncNotificationType:(long long)arg1;
- (void)setUnlockSyncRequested:(bool)arg1;
- (bool)syncAllowed;
- (int)syncLockFileDescriptor;
- (long long)syncNotificationType;
- (bool)unlockSyncRequested;

@end
