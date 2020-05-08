/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCBundleSubscriptionLookUpEntryManager : NSObject {
    FCBundleSubscriptionLookUpEntry * _bundleSubscriptionLookUpEntry;
    FCKeyValueStore * _localStore;
}

@property (nonatomic, retain) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;
@property (nonatomic, retain) FCKeyValueStore *localStore;

- (void).cxx_destruct;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1;
- (void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(bool)arg3 isPurchaser:(bool)arg4 isAmplifyUser:(bool)arg5;
- (id)bundleSubscriptionLookUpEntry;
- (void)cleanupStaleExpiredEntry;
- (id)initWithLocalStore:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)localStore;
- (void)setBundleSubscriptionLookUpEntry:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)updateEntry:(id)arg1;

@end
