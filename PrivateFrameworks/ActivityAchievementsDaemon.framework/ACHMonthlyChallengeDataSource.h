/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

@interface ACHMonthlyChallengeDataSource : NSObject {
    ACHActivitySummaryUtility * _activitySummaryUtility;
    HDDatabaseTransactionContext * _databaseContext;
    HDProfile * _profile;
    ACHWorkoutUtility * _workoutUtility;
}

@property (nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (nonatomic, copy) HDDatabaseTransactionContext *databaseContext;
@property (nonatomic) HDProfile *profile;
@property (nonatomic) ACHWorkoutUtility *workoutUtility;

- (void).cxx_destruct;
- (id)activitySummaryUtility;
- (double)caloriesDuringDateComponentInterval:(id)arg1;
- (id)databaseContext;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1;
- (id)initWithProfile:(id)arg1 activitySummaryUtility:(id)arg2 workoutUtility:(id)arg3;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1;
- (id)profile;
- (void)setActivitySummaryUtility:(id)arg1;
- (void)setDatabaseContext:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setWorkoutUtility:(id)arg1;
- (double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1;
- (id)workoutUtility;

@end
