/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUBundleSubscriptionAdContextProvider : NSObject <NUAdContextProvider> {
    NSArray * _bundleIAPs;
    bool  _bundleSubscriber;
}

@property (nonatomic, copy) NSArray *bundleIAPs;
@property (getter=isBundleSubscriber, nonatomic, readonly) bool bundleSubscriber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)bundleIAPs;
- (id)initWithBundleSubscriber:(bool)arg1 bundleIAPs:(id)arg2;
- (bool)isBundleSubscriber;
- (void)setBundleIAPs:(id)arg1;

@end
