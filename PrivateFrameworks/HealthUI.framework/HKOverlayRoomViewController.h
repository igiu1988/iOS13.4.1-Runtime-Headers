/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOverlayRoomViewController : HKViewController <HKDisplayTypeSectionedContextViewDelegate, HKInteractiveChartViewObserver, HKSampleTypeDateRangeControllerObserver, HKSampleTypeUpdateControllerObserver> {
    HKOverlayRoomApplicationItems * _applicationItems;
    HKInteractiveChartOverlayViewController * _chartController;
    NSObject<OS_dispatch_queue> * _contextUpdateQueue;
    long long  _controllerMode;
    NSDateInterval * _currentChartDateInterval;
    long long  _currentChartTimeScope;
    HKOverlayContextLocation * _currentSelectedContextLocation;
    NSDate * _displayDate;
    HKOverlayContextLocation * _initialSelectedContextLocation;
    HKValueRange * _initialVisibleDateRange;
    NSArray * _overlayContextSections;
    HKDisplayType * _primaryDisplayType;
    HKDisplayTypeSectionedContextView * _sectionedContextView;
    bool  _shouldSelectInitialOverlay;
    bool  _userHasOverriddenPreferredOverlay;
}

@property (nonatomic, retain) HKOverlayRoomApplicationItems *applicationItems;
@property (nonatomic, retain) HKInteractiveChartOverlayViewController *chartController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *contextUpdateQueue;
@property (nonatomic) long long controllerMode;
@property (nonatomic, copy) NSDateInterval *currentChartDateInterval;
@property (nonatomic) long long currentChartTimeScope;
@property (nonatomic, retain) HKOverlayContextLocation *currentSelectedContextLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *displayDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKOverlayContextLocation *initialSelectedContextLocation;
@property (nonatomic, retain) HKValueRange *initialVisibleDateRange;
@property (nonatomic, retain) NSArray *overlayContextSections;
@property (nonatomic, retain) HKDisplayType *primaryDisplayType;
@property (nonatomic, retain) HKDisplayTypeSectionedContextView *sectionedContextView;
@property (nonatomic) bool shouldSelectInitialOverlay;
@property (readonly) Class superclass;
@property (nonatomic) bool userHasOverriddenPreferredOverlay;

- (void).cxx_destruct;
- (long long)_contextItemCount;
- (id)_contextViewBackgroundColor;
- (id)_currentChartEffectiveVisibleRange;
- (id)_currentIndexPath;
- (id)_findNavigationController;
- (void)_invalidateContextItems;
- (void)_layoutNoVerticalExpansion:(id)arg1;
- (id)_makeSeparatorView;
- (void)_pinView:(id)arg1 toSafeAreaOf:(id)arg2;
- (void)_refreshContextItemsAndUpdateChart:(bool)arg1;
- (void)_refreshUpdatedItemsWithChartUpdate:(bool)arg1 invalidateChartItems:(bool)arg2;
- (void)_selectContextItemAtLocation:(id)arg1 animated:(bool)arg2;
- (void)_selectPreferredItem;
- (void)_setupInterface;
- (void)_setupOverlayContextItems;
- (void)_setupPrimaryDisplayType;
- (bool)_shouldUpdateContextItemsForChanges:(id)arg1;
- (void)_showAllFilters:(id)arg1;
- (void)_updateChartForOverlaySelection:(id)arg1 previousSelection:(id)arg2;
- (void)_updateContextTiles;
- (bool)_usePreferredOverlayAndAllFiltersButton;
- (id)applicationItems;
- (id)chartController;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)contextUpdateQueue;
- (void)contextView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)contextView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)controllerMode;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)currentChartDateInterval;
- (long long)currentChartTimeScope;
- (id)currentSelectedContextLocation;
- (void)dealloc;
- (id)description;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (id)displayDate;
- (void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)initialSelectedContextLocation;
- (id)initialVisibleDateRange;
- (void)newDataArrivedWithValueRange:(id)arg1;
- (id)overlayContextSections;
- (id)primaryDisplayType;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (void)reloadOverlayContextItems;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2;
- (id)sectionedContextView;
- (void)setApplicationItems:(id)arg1;
- (void)setChartController:(id)arg1;
- (void)setContextUpdateQueue:(id)arg1;
- (void)setControllerMode:(long long)arg1;
- (void)setCurrentChartDateInterval:(id)arg1;
- (void)setCurrentChartTimeScope:(long long)arg1;
- (void)setCurrentSelectedContextLocation:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setInitialSelectedContextLocation:(id)arg1;
- (void)setInitialVisibleDateRange:(id)arg1;
- (void)setOverlayContextSections:(id)arg1;
- (void)setPrimaryDisplayType:(id)arg1;
- (void)setSectionedContextView:(id)arg1;
- (void)setShouldSelectInitialOverlay:(bool)arg1;
- (void)setUserHasOverriddenPreferredOverlay:(bool)arg1;
- (bool)shouldSelectInitialOverlay;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (bool)userHasOverriddenPreferredOverlay;
- (void)viewDidLoad;

@end