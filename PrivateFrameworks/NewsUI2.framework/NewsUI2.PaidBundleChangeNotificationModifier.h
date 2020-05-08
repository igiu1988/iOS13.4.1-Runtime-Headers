/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.PaidBundleChangeNotificationModifier : NSObject <FCBundleSubscriptionChangeObserver> {
    void bundleSubscriptionManager;
    void configurationManager;
    void notificationController;
    void purchaseProvider;
    void tagService;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end