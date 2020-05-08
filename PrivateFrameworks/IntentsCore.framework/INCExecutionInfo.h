/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExecutionInfo : NSObject <NSCopying> {
    INAppInfo * _appInfo;
    NSURL * _containingAppBundleURL;
    NSString * _displayableAppBundleId;
    NSString * _launchableAppBundleId;
}

@property (nonatomic, readonly) INAppInfo *_appInfo;
@property (nonatomic, readonly) LSApplicationProxy *_applicationProxy;
@property (nonatomic, readonly) bool canRunOnLocalDevice;
@property (nonatomic, readonly, copy) NSURL *containingAppBundleURL;
@property (nonatomic, readonly, copy) NSString *displayableAppBundleId;
@property (nonatomic, readonly, copy) NSString *launchableAppBundleId;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_appInfo;
- (id)_applicationProxy;
- (id)_initWithLaunchableAppBundleId:(id)arg1 displayableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3;
- (bool)canRunOnLocalDevice;
- (id)containingAppBundleURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayableAppBundleId;
- (id)launchableAppBundleId;

@end
