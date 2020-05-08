/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAccessorySettingsSiriOutputVoiceItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver> {
    HUSiriLanguageOptionItemProvider * _accentOptionItemProvider;
    HFAccessorySettingSiriLanguageAdapter * _adapter;
    HUSiriLanguageOptionItemProvider * _genderOptionItemProvider;
}

@property (nonatomic, retain) HUSiriLanguageOptionItemProvider *accentOptionItemProvider;
@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUSiriLanguageOptionItemProvider *genderOptionItemProvider;
@property (nonatomic, readonly, copy) HFAccessorySettingGroupItem *groupItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)accentOptionItemProvider;
- (id)adapter;
- (id)genderOptionItemProvider;
- (id)groupItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)setAccentOptionItemProvider:(id)arg1;
- (void)setGenderOptionItemProvider:(id)arg1;
- (void)siriLanguageAdapter:(id)arg1 availableLanguageOptionsDidChange:(id)arg2;
- (void)siriLanguageAdapter:(id)arg1 selectedLanguageOptionDidChange:(id)arg2;
- (id)updateSelectionWithOptionItem:(id)arg1;

@end
