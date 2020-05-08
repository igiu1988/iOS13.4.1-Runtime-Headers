/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBusinessItemController : NSObject {
    BCSBusinessItemPersistentStore * _businessItemPersistentStore;
}

@property (nonatomic, readonly) BCSBusinessItemPersistentStore *businessItemPersistentStore;

- (void).cxx_destruct;
- (id)businessItemPersistentStore;
- (bool)chatSuggestVisibilityForBusinessItem:(id)arg1;
- (bool)deleteBusinessItemFromPersistentStore;
- (bool)deleteBusinessItemIfExpiredWithBusinessItemObject:(id)arg1;
- (void)fetchBusinessItemWithBizID:(id)arg1 TTL:(double)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchBusinessItemsWithBusinessItemBucket:(struct { long long x1; long long x2; })arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
