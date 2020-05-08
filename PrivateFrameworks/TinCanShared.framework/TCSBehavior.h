/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface TCSBehavior : NSObject {
    int  _firstUnlockToken;
    bool  _isAppleInternalInstall;
    bool  _isM8Device;
    bool  _isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
    NSString * _regionCode;
}

@property (nonatomic, readonly) bool isAppleInternalInstall;
@property (nonatomic, readonly) bool isM8Device;
@property (nonatomic, readonly) bool isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (nonatomic, readonly) NSString *regionCode;

+ (bool)_isAppleInternalInstall;
+ (bool)_isM8Device;
+ (bool)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (id)_regionCode;
+ (bool)isAppleInternalInstall;
+ (bool)isM8Device;
+ (bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (id)regionCode;
+ (id)sharedBehavior;

- (void).cxx_destruct;
- (void)_handleDeviceFirstUnlock;
- (void)dealloc;
- (id)init;
- (bool)isAppleInternalInstall;
- (bool)isM8Device;
- (bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
- (id)regionCode;

@end
