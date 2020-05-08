/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {
    HKDisplayType * _displayType;
    HKHealthStore * _healthStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
- (id)displayType;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2;
- (id /* block */)mappingFunctionForContext:(id)arg1;
- (id)operationForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2;

@end
