/* Generated by EzioChiu.
 */

@protocol FCMutableTodayPrivateData <FCTodayPrivateData>

@required

- (NSSet *)autoFavoriteTagIDs;
- (FCBundleSubscription *)bundleSubscription;
- (<FCDerivedPersonalizationData><NSCoding> *)derivedPersonalizationData;
- (NSSet *)mutedTagIDs;
- (NSNumber *)onboardingVersion;
- (NSSet *)purchasedTagIDs;
- (NSArray *)rankedAllSubscribedTagIDs;
- (NSDictionary *)recentlyReadHistoryItems;
- (NSArray *)recentlySeenHistoryItems;
- (void)setAutoFavoriteTagIDs:(NSSet *)arg1;
- (void)setBundleSubscription:(FCBundleSubscription *)arg1;
- (void)setDerivedPersonalizationData:(id <FCDerivedPersonalizationData><NSCoding>)arg1;
- (void)setMutedTagIDs:(NSSet *)arg1;
- (void)setOnboardingVersion:(NSNumber *)arg1;
- (void)setPurchasedTagIDs:(NSSet *)arg1;
- (void)setRankedAllSubscribedTagIDs:(NSArray *)arg1;
- (void)setRecentlyReadHistoryItems:(NSDictionary *)arg1;
- (void)setRecentlySeenHistoryItems:(NSArray *)arg1;

@end
