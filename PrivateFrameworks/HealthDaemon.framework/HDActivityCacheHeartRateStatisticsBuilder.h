/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject {
    long long  _activityCacheIndex;
    HKHeartRateSummaryStatistics * _allDayStatistics;
    NSMutableDictionary * _averageCalculatorsByWorkoutUUID;
    NSMutableDictionary * _breatheSessionDateIntervalBySessionUUID;
    NSMutableDictionary * _breatheSessionReadingsBySessionUUID;
    NSMutableArray * _breatheStatistics;
    NSDateInterval * _dateInterval;
    NSDateComponents * _dateOfBirthComponents;
    struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { 
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *__begin_; 
        struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { 
            struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *__value_; 
        } __end_cap_; 
    }  _heartRateSamples;
    NSMutableDictionary * _recoveryReadingsByWorkoutUUID;
    HKQuantity * _restingHeartRate;
    HKQuantity * _walkingAverageHeartRate;
    NSMutableArray * _workoutRecoveryStatistics;
    NSMutableArray * _workoutStatistics;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { 
            struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__value_; 
        } __end_cap_; 
    }  _workouts;
}

@property (nonatomic, readonly) HKHeartRateSummary *heartRateSummary;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addBeatsPerSecond:(double)arg1 time:(double)arg2 toSessionStatistics:(id)arg3;
- (void)_addHeartRateSamples:(const struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x1; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x2; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x_3_1_1; } x3; }*)arg1 toStatistics:(id)arg2;
- (void)_addHeartRateSamplesToAllStatistics:(const struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x1; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x2; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x_3_1_1; } x3; }*)arg1;
- (void)_addHeartRateStatisticsForNewWorkouts:(const struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x1; struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x_3_1_1; } x3; }*)arg1;
- (id)_averageCalculatorForWorkoutStatistics:(id)arg1;
- (id)_filteredRecoveryReadings:(id)arg1;
- (id)_recoveryReadingsForWorkoutStatistics:(id)arg1;
- (id)_sessionReadingsForBreatheStatistics:(id)arg1;
- (void)_updateMetricsForBreatheStatistics:(id)arg1;
- (void)_updateMetricsForSessionStatistics:(id)arg1;
- (void)_updateMetricsForWorkoutRecoveryStatistics:(id)arg1;
- (void)_updateMetricsForWorkoutStatistics:(id)arg1;
- (void)addBreatheSessions:(const struct vector<HDActivityCacheStatisticsBuilderBreatheSample, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample> > { struct HDActivityCacheStatisticsBuilderBreatheSample {} *x1; struct HDActivityCacheStatisticsBuilderBreatheSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderBreatheSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderBreatheSample> > { struct HDActivityCacheStatisticsBuilderBreatheSample {} *x_3_1_1; } x3; }*)arg1;
- (void)addHeartRateSamples:(const struct vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x1; struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x2; struct __compressed_pair<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample *, std::__1::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample> > { struct HDActivityCacheHeartRateStatisticsBuilderHeartRateSample {} *x_3_1_1; } x3; }*)arg1;
- (void)addWorkouts:(const struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x1; struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x_3_1_1; } x3; }*)arg1;
- (id)heartRateDateInterval;
- (id)heartRateSummary;
- (id)initWithDateInterval:(id)arg1 activityCacheIndex:(long long)arg2;
- (id)restingHeartRate;
- (void)setDateOfBirthComponents:(id)arg1;
- (id)walkingAverageHeartRate;

@end
