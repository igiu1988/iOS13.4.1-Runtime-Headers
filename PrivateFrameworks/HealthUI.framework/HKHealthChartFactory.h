/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHealthChartFactory : NSObject {
    HKChartDataCacheController * _chartDataCacheController;
    HKDateCache * _dateCache;
    HKDisplayCategoryController * _displayCategoryController;
    HKDisplayTypeController * _displayTypeController;
    HKHealthStore * _healthStore;
    NSDictionary * _identifierToDisplayTypeMapping;
    HKSampleTypeDateRangeController * _sampleTypeDateRangeController;
    HKSampleTypeUpdateController * _sampleTypeUpdateController;
    HKSelectedTimeScopeController * _selectedTimeScopeController;
    HKUnitPreferenceController * _unitPreferenceController;
    _HKWheelchairUseCharacteristicCache * _wheelchairUseCharacteristicCache;
}

@property (nonatomic, readonly) HKChartDataCacheController *chartDataCacheController;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) HKDisplayCategoryController *displayCategoryController;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) NSDictionary *identifierToDisplayTypeMapping;
@property (nonatomic, readonly) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (nonatomic, readonly) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (nonatomic, readonly) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;
@property (nonatomic, readonly) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;

+ (id)_standardIdentifierMappings;

- (void).cxx_destruct;
- (id)CHRRoomApplicationItems;
- (id)_customTypeIdentifierController:(id)arg1 displayDate:(id)arg2 secondaryIdentifier:(id)arg3;
- (id)_displayTypeForTypeIdentifier:(id)arg1;
- (id)_mapTypeIdentifierToDisplayType:(id)arg1;
- (long long)_resolvedTimeScopeForTypeIdentifier:(id)arg1 displayDateInterval:(id)arg2;
- (id)activityChartForDisplayDate:(id)arg1;
- (id)chartDataCacheController;
- (id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3;
- (id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(struct CGSize { double x1; double x2; })arg3 disableXAxis:(bool)arg4;
- (id)dateCache;
- (id)displayCategoryController;
- (id)displayTypeController;
- (id)healthStore;
- (id)identifierToDisplayTypeMapping;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)interactiveChartForTypeIdentifier:(id)arg1 secondaryTypeIdentifier:(id)arg2 displayDateInterval:(id)arg3;
- (id)sampleTypeDateRangeController;
- (id)sampleTypeUpdateController;
- (id)selectedTimeScopeController;
- (void)setIdentifierToDisplayTypeMapping:(id)arg1;
- (id)unitPreferenceController;
- (id)wheelchairUseCharacteristicCache;

@end
