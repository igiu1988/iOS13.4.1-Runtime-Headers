/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding> {
    long long  _bundleSubscriptionStatus;
    long long  _channelSubscriptionStatus;
    NSHashTable * _observers;
    unsigned long long  _viewingLocation;
}

@property (nonatomic) long long bundleSubscriptionStatus;
@property (nonatomic) long long channelSubscriptionStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewingLocation;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)bundleSubscriptionStatus;
- (long long)channelSubscriptionStatus;
- (id)init;
- (void)notifyObservers;
- (id)observers;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)setBundleSubscriptionStatus:(long long)arg1;
- (void)setChannelSubscriptionStatus:(long long)arg1;
- (void)setViewingLocation:(unsigned long long)arg1;
- (unsigned long long)viewingLocation;

@end