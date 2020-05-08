/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDSleepDetailViewConsistencyDataSource : NSObject <WDChartDetailViewDataSource> {
    HKSleepAnalysis * _sleepAnalysis;
    HKSleepDay * _sleepDay;
    HKSleepPeriod * _sleepPeriod;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKSleepAnalysis *sleepAnalysis;
@property (nonatomic, readonly) HKSleepDay *sleepDay;
@property (nonatomic, readonly) HKSleepPeriod *sleepPeriod;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)detailSectionForRow:(long long)arg1 column:(long long)arg2;
- (id)initWithSleepAnalysis:(id)arg1;
- (id)mainSection;
- (long long)numberOfColumnsForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)sleepAnalysis;
- (id)sleepDay;
- (id)sleepPeriod;

@end
