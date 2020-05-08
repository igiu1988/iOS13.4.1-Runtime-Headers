/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSiriHistoryItemManager : HFItemManager {
    HFStaticItem * _deleteSiriHistoryItem;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) HFStaticItem *deleteSiriHistoryItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)deleteSiriHistoryItem;
- (id)didSelectItemAtIndexPath:(id)arg1;
- (id)didUpdateItemAtIndexPath:(id)arg1;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;
- (void)setDeleteSiriHistoryItem:(id)arg1;

@end
