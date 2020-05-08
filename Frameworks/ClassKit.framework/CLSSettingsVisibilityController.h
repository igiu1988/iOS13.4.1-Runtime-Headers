/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser * _currentUser;
    bool  _needToUpdateCurrentUser;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)cachedCurrentUserAppleID;
- (id)currentUser;
- (void)currentUserChanged;
- (void)dealloc;
- (id)init;
- (bool)settingsUIVisible;

@end
