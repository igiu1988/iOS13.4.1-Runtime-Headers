/* Generated by EzioChiu.
 */

@protocol SXDebugLayoutOptionsProviding <NSObject>

@required

- (void)addObserver:(id <SXDebugLayoutOptionsObserving>)arg1;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;
- (void)removeObserver:(id <SXDebugLayoutOptionsObserving>)arg1;

@end
