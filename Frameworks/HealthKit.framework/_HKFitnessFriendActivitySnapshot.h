/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriendActivitySnapshot : HKSample <ASCloudKitCodable, HDCoding, NSCopying> {
    double  _activeHours;
    double  _activeHoursGoal;
    long long  _amm;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    double  _energyBurned;
    double  _energyBurnedGoal;
    NSUUID * _friendUUID;
    bool  _hasCarriedForwardGoals;
    double  _mmg;
    double  _mmv;
    double  _pushCount;
    long long  _snapshotIndex;
    NSDate * _snapshotUploadedDate;
    NSUUID * _sourceUUID;
    double  _stepCount;
    NSNumber * _timeZoneOffsetFromUTCForNoon;
    double  _walkingAndRunningDistance;
    long long  _wheelchairUse;
}

@property (nonatomic) double activeHours;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic, readonly) double activeHoursGoalPercentage;
@property (nonatomic) long long amm;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic, readonly) double briskMinutesGoalPercentage;
@property (nonatomic, readonly) ASCodableCloudKitActivitySnapshot *codableSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic, readonly) double energyBurnedGoalPercentage;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (nonatomic) bool hasCarriedForwardGoals;
@property (readonly) unsigned long long hash;
@property (nonatomic) double mmg;
@property (nonatomic, readonly) HKQuantity *mmgQuantity;
@property (nonatomic, readonly) double mmgp;
@property (nonatomic) double mmv;
@property (nonatomic, readonly) HKQuantity *mmvQuantity;
@property (nonatomic) double pushCount;
@property (nonatomic) long long snapshotIndex;
@property (nonatomic, retain) NSDate *snapshotUploadedDate;
@property (nonatomic, retain) NSUUID *sourceUUID;
@property (nonatomic) double stepCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, retain) NSNumber *timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) long long wheelchairUse;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)arg1 sourceUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 snapshotIndex:(long long)arg5 snapshotUploadedDate:(id)arg6;
+ (id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceUUID:(id)arg4;
+ (id)_mostSignificantSnapshotAmongSnapshots:(id)arg1;
+ (id)snapshotWithActivitySummary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_mostSignificantSnapshot:(id)arg1;
- (double)activeHours;
- (double)activeHoursGoal;
- (double)activeHoursGoalPercentage;
- (id)activitySummary;
- (long long)amm;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (double)briskMinutesGoalPercentage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)energyBurned;
- (double)energyBurnedGoal;
- (double)energyBurnedGoalPercentage;
- (id)friendUUID;
- (bool)hasCarriedForwardGoals;
- (id)initWithCoder:(id)arg1;
- (double)mmg;
- (double)mmgp;
- (double)mmv;
- (double)pushCount;
- (void)setActiveHours:(double)arg1;
- (void)setActiveHoursGoal:(double)arg1;
- (void)setAmm:(long long)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setEnergyBurned:(double)arg1;
- (void)setEnergyBurnedGoal:(double)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasCarriedForwardGoals:(bool)arg1;
- (void)setMmg:(double)arg1;
- (void)setMmv:(double)arg1;
- (void)setPushCount:(double)arg1;
- (void)setSnapshotIndex:(long long)arg1;
- (void)setSnapshotUploadedDate:(id)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setStepCount:(double)arg1;
- (void)setTimeZoneOffsetFromUTCForNoon:(id)arg1;
- (void)setWalkingAndRunningDistance:(double)arg1;
- (void)setWheelchairUse:(long long)arg1;
- (long long)snapshotIndex;
- (id)snapshotUploadedDate;
- (id)sourceUUID;
- (double)stepCount;
- (id)timeZone;
- (id)timeZoneOffsetFromUTCForNoon;
- (double)walkingAndRunningDistance;
- (long long)wheelchairUse;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

+ (id)_fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (id)fitnessFriendActivitySnapshotWithRecord:(id)arg1 friendUUID:(id)arg2;

- (id)codableSnapshot;
- (bool)isAmm;
- (double)mmPercent;
- (id)mmgQuantity;
- (id)mmvQuantity;
- (id)recordWithZoneID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
