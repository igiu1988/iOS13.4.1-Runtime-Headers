/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSummaryMetricOption : FIUIWorkoutSummaryRowOption {
    unsigned long long  _metricType;
}

@property (nonatomic, readonly) unsigned long long metricType;

- (bool)evaluateWithWorkout:(id)arg1 supportedMetrics:(id)arg2;
- (id)initWithRowType:(unsigned long long)arg1 metricType:(unsigned long long)arg2 condition:(id /* block */)arg3;
- (unsigned long long)metricType;

@end
