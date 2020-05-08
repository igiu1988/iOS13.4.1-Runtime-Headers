/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXMagicalMomentsPredictionScorer : NSObject {
    NSArray * _correlatedEvents;
    NSMutableDictionary * _cumulativeScoresWithDecayedWeightsByIdentifier;
    NSMutableOrderedSet * _dateSetForDecay;
    NSMutableDictionary * _finalPredictionConfidences;
    NSCountedSet * _globalAppLaunches;
    NSMutableDictionary * _relevanceWeightsByIdentifier;
    NSCountedSet * _relevantAppLaunches;
    NSString * _topScoringIdentifier;
    unsigned long long  _totalRelevantLaunchesForAllBundleIds;
    double  _totalScaledCumulativeScoresForAllBundleIds;
}

- (void).cxx_destruct;
- (void)computeModelConfidences;
- (void)computeRelevanceScoresForAllRelevantBundleIds;
- (void)computeTimeDecayedCumulativeScores;
- (id)cumulativeScoresWithDecayedWeightsByIdentifier;
- (id)dateSetForDecay;
- (id)generatePredictions;
- (id)getPredictionsFromFinalConfidences;
- (void)getRelevantAppLaunchCountsAndDateSetFromCorrelationData;
- (id)initWithCorrelatedEvents:(id)arg1 andGlobalAppLaunchCountedSet:(id)arg2;
- (double)maximumRelevanceWeightForMMScoring;
- (unsigned long long)minimumNumberOfDaysOfObservationsRequiredForSubExpertToMakePredictions;
- (unsigned long long)minimumNumberOfGlobalObservationsOfBundleIdForMMScoring;
- (unsigned long long)minimumNumberOfRelevantObservationsOfBundleIdForMMScoring;
- (double)minimumRelevanceWeightForMMScoring;
- (id)relevanceScoreWithRelevantLaunchCount:(unsigned long long)arg1 globalLaunchCount:(unsigned long long)arg2;
- (id)relevanceWeightsByIdentifier;
- (id)relevantAppLaunches;
- (void)scaleAllScoresWithTopScoringFactor;
- (double)scalingFactorFromTopPrediction;
- (id)startOfDayForDate:(id)arg1;
- (bool)subExpertCanMakeHighConfidencePredictions;
- (bool)subExpertCanMakeHighConfidencePredictionsForBundleIdGivenRelevantLaunchCount:(unsigned long long)arg1 globalLaunchCount:(unsigned long long)arg2;
- (bool)subExpertHasObservedEnoughLaunchesForMultipleAppsToMakePredictions;
- (bool)subExpertHasObservedEnoughLaunchesForOneAppToMakePredictions;
- (bool)subExpertHasWitnessedEnoughRelevantAppLaunches;
- (id)topScoringIdentifier;
- (unsigned long long)totalRelevantLaunchesForAllBundleIds;

@end
