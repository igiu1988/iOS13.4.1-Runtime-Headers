/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
 */

@interface PSDataUsageSpecifier : PSSpecifier {
    <PSBillingPeriodSource> * _billingPeriodSource;
    NSString * _bundleID;
    PSDataUsageStatisticsCache * _statisticsCache;
    unsigned long long  _type;
}

@property (nonatomic) <PSBillingPeriodSource> *billingPeriodSource;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) PSDataUsageStatisticsCache *statisticsCache;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)billingPeriodSource;
- (id)bundleID;
- (unsigned long long)dataUsage;
- (id)dataUsageString;
- (id)initWithType:(unsigned long long)arg1 bundleID:(id)arg2 statisticsCache:(id)arg3;
- (void)setBillingPeriodSource:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setStatisticsCache:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)statisticsCache;
- (unsigned long long)type;

@end