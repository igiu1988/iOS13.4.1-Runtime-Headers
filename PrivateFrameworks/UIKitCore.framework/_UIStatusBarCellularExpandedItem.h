/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarCellularExpandedItem : _UIStatusBarCellularItem {
    _UIStatusBarBadgeView * _badgeView;
}

@property (nonatomic, retain) _UIStatusBarBadgeView *badgeView;

+ (id)badgeDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(bool)arg4;

- (void).cxx_destruct;
- (void)_create_badgeView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
