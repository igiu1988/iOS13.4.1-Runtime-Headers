/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartDisplayType : HKDisplayType {
    UIColor * _color;
    HKGraphSeries * _graphSeries;
    NSString * _specifiedDisplayName;
    NSString * _specifiedUnitName;
    HKInteractiveChartDataFormatter * _specifiedValueFormatter;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) HKGraphSeries *graphSeries;
@property (nonatomic, readonly) NSString *specifiedDisplayName;
@property (nonatomic, readonly) NSString *specifiedUnitName;
@property (nonatomic, readonly) HKInteractiveChartDataFormatter *specifiedValueFormatter;

- (void).cxx_destruct;
- (id)_initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitDisplayNameOverrides:(id)arg3 chartingRules:(id)arg4 unitName:(id)arg5 valueFormatter:(id)arg6 dataTypeCode:(long long)arg7;
- (long long)_internalDisplayTypeIdentifier;
- (id)color;
- (id)colorWithDisplayCategoryController:(id)arg1;
- (id)description;
- (id)displayName;
- (id)graphSeries;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(long long)arg4;
- (id)initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitName:(id)arg3 valueFormatter:(id)arg4 dataTypeCode:(long long)arg5;
- (void)setColor:(id)arg1;
- (id)specifiedDisplayName;
- (id)specifiedUnitName;
- (id)specifiedValueFormatter;
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;

@end
