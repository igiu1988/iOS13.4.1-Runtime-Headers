/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSlotResolution : NSObject {
    _ATXDataStore * _dataStore;
}

+ (double)exponentialDecay:(double)arg1 withHalflife:(double)arg2;
+ (bool)isNotLaunchedWithinShortTimeSpan:(id)arg1;
+ (bool)matchForCurrentGeohash:(long long)arg1 rowGeohash:(long long)arg2;
+ (void)setDistributionBasedScoreInputsForDayOfWeekForItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[669]; float x4; }*)arg1 withLaunchDistribution:(id)arg2;
+ (void)setDistributionBasedScoreInputsForItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[669]; float x4; }*)arg1 withGeoHashResolution:(unsigned long long)arg2 withLaunchCounts:(id)arg3;
+ (void)setDistributionBasedScoreInputsForTimeOfDayForItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[669]; float x4; }*)arg1 withLaunchDistribution:(id)arg2;
+ (void)setSlotLogProbabilityForCandidateActionPredictions:(id)arg1;
+ (void)setSlotResolutionPredictionItemForTopUpcomingMediaActionContainer:(id)arg1 appActionPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[669]; float x4; }*)arg2 appActionLogProbability:(double)arg3;
+ (id)sharedInstance;
+ (bool)shouldCountRowForGeohashIndividualContextStatistics:(long long)arg1 rowGeohash:(long long)arg2;
+ (bool)shouldCountRowForGeohashOccurrencesCalculationForCurrentGeohash:(long long)arg1 rowGeohash:(long long)arg2;
+ (id)yearMonthDayComponentsForDate:(id)arg1;

- (void).cxx_destruct;
- (id)actionPredictionsForStatistics:(id)arg1;
- (id)actionPredictionsForStatistics:(id)arg1 appActionPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[669]; float x4; }*)arg2 appActionLogProbability:(double)arg3 scoreLogger:(id)arg4;
- (id)fastStatisticsOnSlotsForBundleId:(id)arg1 actionType:(id)arg2 currentDate:(id)arg3 previousLocationUUID:(id)arg4 currentLocationUUID:(id)arg5 currentMotionType:(long long)arg6 currentGeohash:(long long)arg7 currentCoarseGeohash:(long long)arg8;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)statisticsForActionKey:(id)arg1;
- (id)statisticsForActionKey:(id)arg1 currentDate:(id)arg2 previousLocationUUID:(id)arg3 currentLocationUUID:(id)arg4 currentMotionType:(long long)arg5 currentGeohash:(long long)arg6 currentCoarseGeohash:(long long)arg7;
- (id)updateStatisticsWithFeedbackForBundleId:(id)arg1 actionType:(id)arg2 statistics:(id)arg3 currentDate:(id)arg4 currentGeohash:(long long)arg5 currentCoarseGeohash:(long long)arg6;
- (id)updateStatisticsWithHigherLevelFeaturesForStatistics:(id)arg1;

@end
