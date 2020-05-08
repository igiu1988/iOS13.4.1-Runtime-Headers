/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCompetition : NSObject <NSCopying> {
    NSUUID * _UUID;
    long long  _currentCacheIndex;
    NSDate * _currentDateOverride;
    NSDateComponents * _durationDateComponents;
    long long  _lastPushedCacheIndex;
    unsigned long long  _maximumNumberOfPointsPerDay;
    NSArray * _opponentScores;
    NSArray * _preferredVictoryBadgeStyles;
    NSArray * _scores;
    NSDateComponents * _startDateComponents;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic) long long currentCacheIndex;
@property (nonatomic, retain) NSDate *currentDateOverride;
@property (nonatomic, retain) NSDateComponents *durationDateComponents;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long endDateCacheIndex;
@property (nonatomic, readonly) bool hasCalculatedFinalScore;
@property (nonatomic, readonly) bool hasPushedFinalScore;
@property (nonatomic, readonly) bool isDailyScoreCapped;
@property (nonatomic, readonly) bool isFirstDayOfCompetition;
@property (nonatomic, readonly) bool isLastDayOfCompetition;
@property (nonatomic, readonly) bool isScoreTied;
@property (nonatomic, readonly) NSDate *lastDayOfCompetition;
@property (nonatomic) long long lastPushedCacheIndex;
@property (nonatomic) unsigned long long maximumNumberOfPointsPerDay;
@property (nonatomic, readonly) unsigned long long myDailyAverageScore;
@property (nonatomic, readonly) unsigned long long myTotalScore;
@property (nonatomic, readonly) unsigned long long numberOfDaysRemaining;
@property (nonatomic, readonly) unsigned long long opponentDailyAverageScore;
@property (nonatomic, retain) NSArray *opponentScores;
@property (nonatomic, readonly) unsigned long long opponentTotalScore;
@property (nonatomic, retain) NSArray *preferredVictoryBadgeStyles;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, readonly) long long stage;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, retain) NSDateComponents *startDateComponents;
@property (nonatomic, readonly) unsigned int victoryBadgeStyle;

+ (id)codableDatabaseCompetitionsFromCompetitions:(id)arg1 withFriendWithUUID:(id)arg2 withType:(long long)arg3;
+ (id)competitionWithCodableCompetition:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)_scoresForParticipant:(long long)arg1;
- (id)codableCompetition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentCacheIndex;
- (id)currentDate;
- (id)currentDateOverride;
- (unsigned long long)dailyScoreForParticipant:(long long)arg1 onDate:(id)arg2;
- (id)daysWonByParticipant:(long long)arg1;
- (id)description;
- (id)durationDateComponents;
- (id)endDate;
- (long long)endDateCacheIndex;
- (bool)hasCalculatedFinalScore;
- (bool)hasPushedFinalScore;
- (id)init;
- (bool)isDailyScoreCapped;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCompetition:(id)arg1;
- (bool)isFirstDayOfCompetition;
- (bool)isLastDayOfCompetition;
- (bool)isParticipantWinning:(long long)arg1;
- (bool)isScoreTied;
- (id)lastDayOfCompetition;
- (long long)lastPushedCacheIndex;
- (unsigned long long)maximumNumberOfPointsPerDay;
- (unsigned long long)myDailyAverageScore;
- (unsigned long long)myTotalScore;
- (unsigned long long)numberOfDaysRemaining;
- (unsigned long long)opponentDailyAverageScore;
- (id)opponentScores;
- (unsigned long long)opponentTotalScore;
- (id)preferredVictoryBadgeStyles;
- (id)scores;
- (void)setCurrentCacheIndex:(long long)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (void)setDurationDateComponents:(id)arg1;
- (void)setLastPushedCacheIndex:(long long)arg1;
- (void)setMaximumNumberOfPointsPerDay:(unsigned long long)arg1;
- (void)setOpponentScores:(id)arg1;
- (void)setPreferredVictoryBadgeStyles:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setUUID:(id)arg1;
- (long long)stage;
- (id)startDate;
- (id)startDateComponents;
- (unsigned int)victoryBadgeStyle;

@end
