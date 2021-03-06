/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserListItemManager : HFItemManager {
    HFHomeBuilder * _homeBuilder;
}

@property (nonatomic, readonly) HFHomeBuilder *homeBuilder;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_homeFuture;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)homeBuilder;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2;

@end
