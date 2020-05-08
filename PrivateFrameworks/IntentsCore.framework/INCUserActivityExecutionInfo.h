/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCUserActivityExecutionInfo : INCExecutionInfo {
    NSString * _userActivityType;
}

@property (nonatomic, readonly, copy) NSString *userActivityType;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3;
- (bool)canRunOnLocalDevice;
- (id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)userActivityType;

@end
