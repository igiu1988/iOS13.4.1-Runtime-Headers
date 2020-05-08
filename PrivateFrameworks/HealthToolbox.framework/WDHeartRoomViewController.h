/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDHeartRoomViewController : WDHealthDataCategoryViewController <HKDisplayTypeContextViewDelegate, HKHeartRateQueryHandler, HKInteractiveChartViewObserver> {
    NSDateInterval * _currentHeartChartDateInterval;
    long long  _currentHeartChartTimeScope;
    long long  _currentSelectedContextIndex;
    NSDate * _displayDate;
    NSArray * _heartRateContextItems;
    NSArray * _heartRateContextResults;
    NSUUID * _heartRateQueryUUID;
    HKHeartRateQueryUtility * _heartRateQueryUtility;
    long long  _preferredSelectedContext;
}

@property (nonatomic, copy) NSDateInterval *currentHeartChartDateInterval;
@property (nonatomic) long long currentHeartChartTimeScope;
@property (nonatomic) long long currentSelectedContextIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *defaultHeartRateContextResults;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *displayDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *heartRateContextItems;
@property (nonatomic, retain) NSArray *heartRateContextResults;
@property (nonatomic, copy) NSUUID *heartRateQueryUUID;
@property (nonatomic, retain) HKHeartRateQueryUtility *heartRateQueryUtility;
@property (nonatomic) long long preferredSelectedContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allContextSampleTypes;
- (id)_chartedHeartRateTypes;
- (id)_displayTypeForContext:(long long)arg1;
- (bool)_shouldShowChartSection;
- (void)_showChartRowIfNecessary;
- (void)applyPreferredDisplayType;
- (id)contextItemsFromDisplayTypeContextResults:(id)arg1;
- (void)contextView:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;
- (id)currentHeartChartDateInterval;
- (long long)currentHeartChartTimeScope;
- (long long)currentSelectedContextIndex;
- (void)dataForHeartRateContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(id /* block */)arg4;
- (id)dateStringForContextResult:(id)arg1;
- (id)defaultHeartRateContextResults;
- (id)description;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (id)displayDate;
- (long long)distributionStyleForHeartRateContext:(long long)arg1;
- (void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (id)heartRateContextItems;
- (id)heartRateContextResults;
- (id)heartRateQueryUUID;
- (id)heartRateQueryUtility;
- (bool)infoButtonHiddenForTimeScope:(long long)arg1 contextResult:(id)arg2;
- (id)initWithProfile:(id)arg1 displayDate:(id)arg2;
- (long long)preferredSelectedContext;
- (void)pushControllerForSessionType:(long long)arg1 title:(id)arg2;
- (id)quantityTypeIdentifierForHeartRateContext:(long long)arg1;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2;
- (void)selectContextItemAtIndex:(long long)arg1 animated:(bool)arg2;
- (void)setCurrentHeartChartDateInterval:(id)arg1;
- (void)setCurrentHeartChartTimeScope:(long long)arg1;
- (void)setCurrentSelectedContextIndex:(long long)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setHeartRateContextItems:(id)arg1;
- (void)setHeartRateContextResults:(id)arg1;
- (void)setHeartRateQueryUUID:(id)arg1;
- (void)setHeartRateQueryUtility:(id)arg1;
- (void)setPreferredSelectedContext:(long long)arg1;
- (void)setupHeartChartViewController;
- (id)titleForDisplayTypeContextResult:(id)arg1;
- (void)updateChartForCurrentlySelectedOverlay;
- (id)valueForDisplayTypeContextResult:(id)arg1;
- (void)viewDidLoad;

@end
