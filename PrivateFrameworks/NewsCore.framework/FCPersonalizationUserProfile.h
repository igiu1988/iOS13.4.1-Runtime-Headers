/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationUserProfile : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _autofavoritedTagIDs;
    FCBundleSubscription * _bundleSubscription;
    NSSet * _mutedTagIDs;
    NSSet * _purchasedTagIDs;
    NSSet * _readArticleIDs;
    NSSet * _seenArticleIDs;
    NSSet * _subscribedTagIDs;
}

@property (nonatomic, readonly, copy) NSSet *autofavoritedTagIDs;
@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (nonatomic, readonly) NSSet *readArticleIDs;
@property (nonatomic, readonly) NSSet *seenArticleIDs;
@property (nonatomic, readonly, copy) NSSet *subscribedTagIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)autofavoritedTagIDs;
- (id)bundleSubscription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 autofavoritedTagIDs:(id)arg3 purchasedTagIDs:(id)arg4 bundleSubscription:(id)arg5;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 autofavoritedTagIDs:(id)arg3 purchasedTagIDs:(id)arg4 readArticleIDs:(id)arg5 seenArticleIDs:(id)arg6 bundleSubscription:(id)arg7;
- (id)mutedTagIDs;
- (id)purchasedTagIDs;
- (id)readArticleIDs;
- (id)seenArticleIDs;
- (id)subscribedTagIDs;

@end
