/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDElectrocardiogramOverviewViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver, HKOnboardingSetupViewDelegate, HRFeatureRegulatoryReenableFeatureActionDelegate, HROnboardingManagerDelegate, WDElectrocardiogramFilterDataProviderDelegate> {
    WDElectrocardiogramListDataProvider * _dataProvider;
    HKDisplayType * _displayType;
    <HKDataMetadataSectionProtocol> * _educationSection;
    WDElectrocardiogramFilterDataProvider * _filterDataProvider;
    HKHeartRhythmAvailability * _heartRhythmAvailability;
    HROnboardingManager * _onboardingManager;
    long long  _placeholderCellCount;
    bool  _previousElectrocardiogramDisabledCacheValue;
    WDProfile * _profile;
    UITapGestureRecognizer * _tripleTapToSettingsRecognizer;
}

@property (nonatomic, retain) WDElectrocardiogramListDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (nonatomic, retain) <HKDataMetadataSectionProtocol> *educationSection;
@property (nonatomic, retain) WDElectrocardiogramFilterDataProvider *filterDataProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (nonatomic, retain) HROnboardingManager *onboardingManager;
@property (nonatomic) long long placeholderCellCount;
@property (nonatomic) bool previousElectrocardiogramDisabledCacheValue;
@property (nonatomic) WDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tripleTapToSettingsRecognizer;

- (void).cxx_destruct;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForDescription;
- (id)_cellForFavorites;
- (id)_cellForRegulatoryPane;
- (id)_cellForSampleAtIndex:(long long)arg1 section:(long long)arg2;
- (id)_cellWithDisclosureIndicatorAndText:(id)arg1 value:(id)arg2;
- (id)_dataListViewControllerWithFilterType:(long long)arg1;
- (id)_electrocardiogramSetupContainerView;
- (long long)_filterTypeForDataSectionRow:(long long)arg1;
- (bool)_isDisplayTypeFavorited;
- (bool)_isPrimaryProfile;
- (id)_recordingDisabledHeaderView;
- (void)_reloadElectrocardiogramSetupTableHeaderView;
- (void)_reloadTableViewAndScrollToTop;
- (id)_sectionHeaderViewWithTitle:(id)arg1;
- (bool)_shouldShowElectrocardiogramSetupTableHeaderView;
- (id)_showAllResultsCellForType:(long long)arg1;
- (void)_showDataSourcesAndAccessController;
- (void)_startOnboardingForFirstTime:(bool)arg1;
- (unsigned long long)availabilityState;
- (void)beginOnboardingForOnboardingSetupView:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)didSelectReenableFeatureForProductName:(id)arg1;
- (void)didTapOnAtrialFibrillationNotificationLearnMore;
- (void)didTapOnElectrocardiogram:(id)arg1;
- (id)displayType;
- (id)educationSection;
- (void)electrocardiogramFilterDataProvider:(id)arg1 didUpdateCount:(long long)arg2 type:(long long)arg3;
- (id)filterDataProvider;
- (id)heartRhythmAvailability;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (void)isFavorited:(bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)onboardingManager;
- (long long)placeholderCellCount;
- (bool)previousElectrocardiogramDisabledCacheValue;
- (id)profile;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (struct WDElectrocardiogramOverviewSectionInfo { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; })sectionInfo;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setEducationSection:(id)arg1;
- (void)setFilterDataProvider:(id)arg1;
- (void)setHeartRhythmAvailability:(id)arg1;
- (void)setOnboardingManager:(id)arg1;
- (void)setPlaceholderCellCount:(long long)arg1;
- (void)setPreviousElectrocardiogramDisabledCacheValue:(bool)arg1;
- (void)setProfile:(id)arg1;
- (void)setTripleTapToSettingsRecognizer:(id)arg1;
- (bool)shouldShowRecordingDisabledHeader;
- (void)showInternalSettings;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)tripleTapToSettingsRecognizer;
- (struct WDElectrocardiogramOverviewUserConfigurationRowInfo { long long x1; long long x2; long long x3; })userConfigurationRowInfo;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
