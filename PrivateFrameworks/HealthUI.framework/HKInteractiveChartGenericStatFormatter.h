/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartGenericStatFormatter : HKInteractiveChartDataFormatter {
    <HKInteractiveChartRangeProvider> * _chartRangeProvider;
    NSArray * _configuredStatItems;
    long long  _context;
    NSArray * _overrideStatFormatterItemOptions;
}

@property (nonatomic, retain) <HKInteractiveChartRangeProvider> *chartRangeProvider;
@property (nonatomic, retain) NSArray *configuredStatItems;
@property (nonatomic) long long context;
@property (nonatomic, retain) NSArray *overrideStatFormatterItemOptions;

+ (long long)mapSingleItemToStatisticsType:(id)arg1;

- (void).cxx_destruct;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;
- (id)_makeSelectedRangeDataWithMin:(double)arg1 max:(double)arg2 unit:(id)arg3 statisticsType:(long long)arg4;
- (id)chartRangeProvider;
- (void)configureFormatterForDisplayType:(id)arg1 quantityType:(id)arg2 chartRangeProvider:(id)arg3 timeScope:(long long)arg4 context:(long long)arg5;
- (id)configuredStatItems;
- (long long)context;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)overrideStatFormatterItemOptions;
- (void)setChartRangeProvider:(id)arg1;
- (void)setConfiguredStatItems:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setOverrideStatFormatterItemOptions:(id)arg1;

@end
