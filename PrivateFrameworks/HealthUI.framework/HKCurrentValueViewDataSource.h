/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartCurrentValueViewDataSource> {
    HKDateCache * _dateCache;
    NSString * _dateIntervalString;
    HKDisplayCategoryController * _displayCategoryController;
    HKDisplayType * _displayType;
    HKHealthStore * _healthStore;
    UIFont * _majorFont;
    UIFont * _minorFont;
    bool  _pendingData;
    NSArray * _selectedRangeData;
    HKSelectedRangeFormatter * _selectedRangeFormatter;
    UIColor * _titleColor;
    UIColor * _valueColor;
    <HKCurrentValueViewDataSourceValueRangeFormatter> * _valueRangeFormatter;
}

@property (nonatomic, retain) HKDateCache *dateCache;
@property (nonatomic, retain) NSString *dateIntervalString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayCategoryController *displayCategoryController;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic) bool pendingData;
@property (nonatomic, retain) NSArray *selectedRangeData;
@property (nonatomic, retain) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIColor *valueColor;
@property (nonatomic) <HKCurrentValueViewDataSourceValueRangeFormatter> *valueRangeFormatter;

+ (id)defaultStringForValueRange:(id)arg1 timeScope:(long long)arg2;

- (void).cxx_destruct;
- (id)_dividerForRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3;
- (bool)_isAudioExposureDisplayType;
- (bool)_isDataMinMax;
- (bool)_isMenstruationDisplayType;
- (long long)_numberOfColumns;
- (bool)_rangeDataIsBloodPressure:(id)arg1;
- (bool)_rangeDataIsMenstruation:(id)arg1;
- (bool)_rangeDataIsSleep:(id)arg1;
- (id)_selectedRangeDataForColumnAtIndex:(long long)arg1;
- (id)attributedTitleStringForCurrentValueView:(id)arg1;
- (id)attributedValueStringForCurrentValueView:(id)arg1;
- (id)dateCache;
- (id)dateIntervalString;
- (id)displayCategoryController;
- (id)displayType;
- (id)healthStore;
- (id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4;
- (id)majorFont;
- (id)minorFont;
- (bool)pendingData;
- (id)secondaryStringForCurrentValueView:(id)arg1;
- (id)secondaryTextColorForCurrentValueView:(id)arg1;
- (id)selectedRangeData;
- (id)selectedRangeFormatter;
- (void)setDateCache:(id)arg1;
- (void)setDateIntervalString:(id)arg1;
- (void)setDisplayCategoryController:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMajorFont:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (void)setPendingData:(bool)arg1;
- (void)setSelectedRangeData:(id)arg1;
- (void)setSelectedRangeFormatter:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setValueColor:(id)arg1;
- (void)setValueRangeFormatter:(id)arg1;
- (id)textColorForCurrentValueView:(id)arg1;
- (id)titleColor;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)valueColor;
- (id)valueRangeFormatter;

@end