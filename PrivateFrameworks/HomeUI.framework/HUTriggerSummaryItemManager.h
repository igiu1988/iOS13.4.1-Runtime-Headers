/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerSummaryItemManager : HFItemManager {
    HFStaticItem * _actionSetsGridItem;
    HFItem * _actionSetsInstructionItem;
    HFItem * _addActionItem;
    HUTriggerActionFlow * _currentFlow;
    HFItem * _deleteTriggerItem;
    HFItem * _durationFooterItem;
    HFItem * _durationPickerItem;
    bool  _durationPickerShown;
    HFTriggerDurationSummaryItem * _durationSummaryItem;
    HFItem * _enableItem;
    HFItem * _mediaInstructionsItem;
    HFItem * _mediaRowItem;
    HFStaticItem * _serviceActionsGridItem;
    HFItem * _serviceActionsInstructionItem;
    HUShortcutItem * _shortcutItem;
    HFItem * _shortcutsInstructionItem;
    HFStaticItemProvider * _staticItemProvider;
    HFItem * _testTriggerItem;
    HFTriggerBuilder * _triggerBuilder;
    HUTriggerBuilderItem * _triggerBuilderItem;
    HFItem * _triggersInstructionItem;
    HFStaticItemProvider * _unsupportedItemProvider;
}

@property (nonatomic, retain) HFStaticItem *actionSetsGridItem;
@property (nonatomic, retain) HFItem *actionSetsInstructionItem;
@property (nonatomic, retain) HFItem *addActionItem;
@property (nonatomic, retain) HUTriggerActionFlow *currentFlow;
@property (nonatomic, retain) HFItem *deleteTriggerItem;
@property (nonatomic, retain) HFItem *durationFooterItem;
@property (nonatomic, retain) HFItem *durationPickerItem;
@property (nonatomic) bool durationPickerShown;
@property (nonatomic, retain) HFTriggerDurationSummaryItem *durationSummaryItem;
@property (nonatomic, retain) HFItem *enableItem;
@property (nonatomic, retain) HFItem *mediaInstructionsItem;
@property (nonatomic, retain) HFItem *mediaRowItem;
@property (nonatomic, retain) HFStaticItem *serviceActionsGridItem;
@property (nonatomic, retain) HFItem *serviceActionsInstructionItem;
@property (nonatomic, retain) HUShortcutItem *shortcutItem;
@property (nonatomic, retain) HFItem *shortcutsInstructionItem;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, retain) HFItem *testTriggerItem;
@property (nonatomic, retain) HFTriggerBuilder *triggerBuilder;
@property (nonatomic, retain) HUTriggerBuilderItem *triggerBuilderItem;
@property (nonatomic, retain) HFItem *triggersInstructionItem;
@property (nonatomic, retain) HFStaticItemProvider *unsupportedItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildShortcutOwnedTriggerItemProvidersForHome:(id)arg1;
- (id)_buildStandardTriggerItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)_currentSectionIdentifiers;
- (id)_currentSectionIdentifiersForShortcutOwnedTriggers;
- (id)_currentSectionIdentifiersForStandardTriggers;
- (id)_identifierForSection:(unsigned long long)arg1;
- (bool)_isInEditMode;
- (id)_itemsToHideForStandardTriggerInSet:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)arg1;
- (bool)_shouldShowDeleteItem;
- (bool)_shouldShowDurationItems;
- (bool)_shouldShowTestItem;
- (bool)_showActionSetsInstructionItem;
- (bool)_showEnableSwitch;
- (bool)_showTriggerSummary;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_triggerDeleteInstructionItemString;
- (id)_triggerServiceActionsInstructionDescription;
- (id)_triggerTestActionsInstructionDescription;
- (id)_unsupportedTriggers;
- (id)actionSetsGridItem;
- (id)actionSetsInstructionItem;
- (long long)actionSetsSection;
- (id)addActionItem;
- (id)currentFlow;
- (id)deleteTriggerItem;
- (id)durationFooterItem;
- (id)durationPickerItem;
- (bool)durationPickerShown;
- (id)durationSummaryItem;
- (id)enableItem;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;
- (id)instructionSections;
- (id)mediaInstructionsItem;
- (id)mediaRowItem;
- (id)serviceActionsGridItem;
- (id)serviceActionsInstructionItem;
- (long long)serviceActionsSection;
- (void)setActionSetsGridItem:(id)arg1;
- (void)setActionSetsInstructionItem:(id)arg1;
- (void)setAddActionItem:(id)arg1;
- (void)setCurrentFlow:(id)arg1;
- (void)setDeleteTriggerItem:(id)arg1;
- (void)setDurationFooterItem:(id)arg1;
- (void)setDurationPickerItem:(id)arg1;
- (void)setDurationPickerShown:(bool)arg1;
- (void)setDurationSummaryItem:(id)arg1;
- (void)setEnableItem:(id)arg1;
- (void)setMediaInstructionsItem:(id)arg1;
- (void)setMediaRowItem:(id)arg1;
- (void)setServiceActionsGridItem:(id)arg1;
- (void)setServiceActionsInstructionItem:(id)arg1;
- (void)setShortcutItem:(id)arg1;
- (void)setShortcutsInstructionItem:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setTestTriggerItem:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (void)setTriggerBuilderItem:(id)arg1;
- (void)setTriggersInstructionItem:(id)arg1;
- (void)setUnsupportedItemProvider:(id)arg1;
- (id)shortcutItem;
- (id)shortcutsInstructionItem;
- (id)staticItemProvider;
- (id)testTriggerItem;
- (id)triggerBuilder;
- (void)triggerBuilderDidChange;
- (id)triggerBuilderItem;
- (id)triggersInstructionItem;
- (id)unsupportedItemProvider;
- (long long)unsupportedItemSectionIndex;

@end
