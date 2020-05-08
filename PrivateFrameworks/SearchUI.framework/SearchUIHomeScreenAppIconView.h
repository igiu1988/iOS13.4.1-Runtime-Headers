/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIHomeScreenAppIconView : SBIconView <LSApplicationWorkspaceObserverProtocol, SBIconViewDelegate, SBLeafIconDataSource> {
    NSURL * _applicationBundleURL;
    LSApplicationProxy * _applicationProxy;
    NSString * _applicationShortcutWidgetBundleIdentifier;
    <SearchUIHomeScreenEngagementDelegate> * _engagementDelegate;
    SFSearchResult * _searchResult;
    unsigned long long  _variant;
}

@property (nonatomic, copy) NSURL *applicationBundleURL;
@property (retain) LSApplicationProxy *applicationProxy;
@property (nonatomic, copy) NSString *applicationShortcutWidgetBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIHomeScreenEngagementDelegate> *engagementDelegate;
@property (readonly) unsigned long long hash;
@property (retain) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long variant;

+ (id)applicationShortcutService;
+ (id)cacheForVariant:(unsigned long long)arg1;
+ (struct CGPath { }*)shadowPathForIconFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)appIconsChanged:(id)arg1;
- (id)applicationBundleURL;
- (id)applicationBundleURLForShortcutsWithIconView:(id)arg1;
- (id)applicationProxy;
- (id)applicationShortcutWidgetBundleIdentifier;
- (id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1;
- (void)dealloc;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)didMoveToWindow;
- (id)engagementDelegate;
- (void)fetchApplicationShortcutInfoForIcon:(id)arg1;
- (void)fetchIconImageForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)iconTapped:(id)arg1;
- (id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2;
- (long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (bool)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)iconViewCanBeginDrags:(id)arg1;
- (bool)iconViewShouldBeginShortcutsPresentation:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (id)init;
- (bool)isTimedOutForIcon:(id)arg1;
- (void)launchIcon;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)resetImageWithAppIcon:(id)arg1;
- (id)searchResult;
- (void)setApplicationBundleURL:(id)arg1;
- (void)setApplicationProxy:(id)arg1;
- (void)setApplicationShortcutWidgetBundleIdentifier:(id)arg1;
- (void)setEngagementDelegate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (bool)shouldHideShortcutsForAppIcon:(id)arg1;
- (bool)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (unsigned long long)variant;

@end
