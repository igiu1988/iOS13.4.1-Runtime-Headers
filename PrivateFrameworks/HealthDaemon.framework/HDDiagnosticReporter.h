/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiagnosticReporter : NSObject

+ (bool)_isUnexpectedFailureReason:(int)arg1;
+ (void)_reportSnapshotWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(id)arg4 thresholdValues:(id)arg5;
+ (void)reportDatabaseMigrationFailureWithContext:(id)arg1;
+ (void)reportNotFinalSeriesSampleWithClass:(Class)arg1 count:(long long)arg2 datumCount:(long long)arg3 reason:(id)arg4;
+ (void)reportQueryDurationWithServer:(id)arg1 dataCount:(long long)arg2 duration:(double)arg3;

@end
