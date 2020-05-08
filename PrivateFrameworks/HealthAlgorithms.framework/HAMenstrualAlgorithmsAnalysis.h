/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

@interface HAMenstrualAlgorithmsAnalysis : NSObject {
    NSArray * _fertilityPredictions;
    NSArray * _menstruationPredictions;
    HAMenstrualAlgorithmsStats * _stats;
}

@property (nonatomic, retain) NSArray *fertilityPredictions;
@property (nonatomic, retain) NSArray *menstruationPredictions;
@property (nonatomic, retain) HAMenstrualAlgorithmsStats *stats;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

- (void).cxx_destruct;
- (id)fertilityPredictions;
- (id)menstruationPredictions;
- (void)setFertilityPredictions:(id)arg1;
- (void)setMenstruationPredictions:(id)arg1;
- (void)setStats:(id)arg1;
- (id)stats;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (id)hkmc_description;
- (id)hkmc_fertileWindowProjections;
- (id)hkmc_menstruationProjections;
- (id)hkmc_statistics;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)hdmc_demoAnalysisWithStartDayIndex:(long long)arg1;

@end
