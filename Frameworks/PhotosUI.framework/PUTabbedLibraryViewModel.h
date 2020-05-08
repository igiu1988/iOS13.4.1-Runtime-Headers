/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTabbedLibraryViewModel : NSObject <PXUIKeyCommandNamespace> {
    PXPreloadScheduler * _preloadScheduler;
    PUTabbedLibrarySettings * _settings;
    NSArray * _tabInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *namespaceIdentifier;
@property (nonatomic, retain) PXPreloadScheduler *preloadScheduler;
@property (nonatomic, retain) PUTabbedLibrarySettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tabInfos;

+ (id)supportedNavigationDestinationTypes;
+ (id)viewModelWithDefaultParameters;

- (void).cxx_destruct;
- (bool)_ppt_shouldShowBlankTab;
- (bool)_ppt_shouldShowNilTab;
- (bool)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowPhotosTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1;
- (int)contentModeForNavigationDestinationType:(long long)arg1;
- (id)initWithSettings:(id)arg1 preloadScheduler:(id)arg2;
- (id)namespaceIdentifier;
- (void)performKeyCommand:(id)arg1 withRootParticipant:(id)arg2;
- (id)preloadScheduler;
- (void)setPreloadScheduler:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTabInfos:(id)arg1;
- (id)settings;
- (id)tabInfoForContentMode:(int)arg1;
- (id)tabInfos;
- (bool)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2;
- (id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2;
- (void)uiKeyCommandsWithDelegate:(id)arg1 addedIntoArray:(id)arg2;

@end
