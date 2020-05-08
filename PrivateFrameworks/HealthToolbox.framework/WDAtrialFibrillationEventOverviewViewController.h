/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDAtrialFibrillationEventOverviewViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver, HKOnboardingSetupViewDelegate, HRFeatureRegulatoryReenableFeatureActionDelegate, HROnboardingManagerDelegate, UITextViewDelegate> {
    <WDDataListViewControllerDataProvider> * _dataProvider;
    long long  _detectionState;
    HKDisplayType * _displayType;
    HKHeartRhythmAvailability * _heartRhythmAvailability;
    HKKeyValueDomain * _keyValueDomain;
    NSDate * _latestAnalyzedSampleDate;
    <HKDataMetadataSectionProtocol> * _metaDataSection;
    HROnboardingManager * _onboardingManager;
    bool  _previousAtrialFibrillationDetectionDisabledCacheValue;
    WDProfile * _profile;
    NSArray * _sectionsToDisplay;
    long long  _totalSampleCount;
    UITapGestureRecognizer * _tripleTapToSettingsRecognizer;
    NSArray * _userConfigurationRowsToDisplay;
    long long  _visibleSampleCount;
}

@property (nonatomic, retain) <WDDataListViewControllerDataProvider> *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long detectionState;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (nonatomic, retain) HKKeyValueDomain *keyValueDomain;
@property (nonatomic, retain) NSDate *latestAnalyzedSampleDate;
@property (nonatomic, retain) <HKDataMetadataSectionProtocol> *metaDataSection;
@property (nonatomic, retain) HROnboardingManager *onboardingManager;
@property (nonatomic) bool previousAtrialFibrillationDetectionDisabledCacheValue;
@property (nonatomic, retain) WDProfile *profile;
@property (nonatomic, retain) NSArray *sectionsToDisplay;
@property (readonly) Class superclass;
@property (nonatomic) long long totalSampleCount;
@property (nonatomic, retain) UITapGestureRecognizer *tripleTapToSettingsRecognizer;
@property (nonatomic, retain) NSArray *userConfigurationRowsToDisplay;
@property (nonatomic) long long visibleSampleCount;

- (void).cxx_destruct;
- (void)_appDidEnterForeground;
- (id)_atrialFibrillationDetectionDisabledHeaderView;
- (id)_atrialFibrillationSetupContainerView;
- (id)_cellForAFibEducationalMaterialInTable:(id)arg1 atIndex:(long long)arg2;
- (id)_cellForAFibEventInTable:(id)arg1 atIndexPath:(id)arg2;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForDataTypeDescription;
- (id)_cellForFavorites;
- (id)_cellForRegulatory;
- (id)_cellForShowAll;
- (void)_getLatestAnalyzedSampleDate;
- (bool)_isDisplayTypeFavorited;
- (bool)_isPrimaryProfile;
- (id)_pushDataSourcesAndAccessController;
- (id)_pushShowAllViewController;
- (void)_recomputeTotalSampleCount;
- (void)_reloadAllData;
- (void)_reloadAtrialFibrillationSetupTableHeaderView;
- (void)_reloadTableViewAndScrollToTop;
- (id)_sectionHeaderViewWithTitle:(id)arg1;
- (bool)_shouldShowAtrialFibrillationSetupTableHeaderView;
- (void)_showInternalSettingsViewController;
- (void)_startOnboardingForFirstTime:(bool)arg1;
- (void)_updateDetectionState;
- (void)beginOnboardingForOnboardingSetupView:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (long long)detectionState;
- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)didEnableAtrialFibrillationNotifications;
- (void)didSelectReenableFeatureForProductName:(id)arg1;
- (id)displayType;
- (id)heartRhythmAvailability;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (void)isFavorited:(bool)arg1;
- (id)keyValueDomain;
- (id)latestAnalyzedSampleDate;
- (id)metaDataSection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)onboardingManager;
- (bool)previousAtrialFibrillationDetectionDisabledCacheValue;
- (id)profile;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (id)sectionsToDisplay;
- (void)setDataProvider:(id)arg1;
- (void)setDetectionState:(long long)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setHeartRhythmAvailability:(id)arg1;
- (void)setKeyValueDomain:(id)arg1;
- (void)setLatestAnalyzedSampleDate:(id)arg1;
- (void)setMetaDataSection:(id)arg1;
- (void)setOnboardingManager:(id)arg1;
- (void)setPreviousAtrialFibrillationDetectionDisabledCacheValue:(bool)arg1;
- (void)setProfile:(id)arg1;
- (void)setSectionsToDisplay:(id)arg1;
- (void)setTotalSampleCount:(long long)arg1;
- (void)setTripleTapToSettingsRecognizer:(id)arg1;
- (void)setUserConfigurationRowsToDisplay:(id)arg1;
- (void)setVisibleSampleCount:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)totalSampleCount;
- (id)tripleTapToSettingsRecognizer;
- (id)userConfigurationRowsToDisplay;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (long long)visibleSampleCount;

@end
