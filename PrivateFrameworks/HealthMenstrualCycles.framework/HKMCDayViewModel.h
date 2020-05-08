/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCDayViewModel : NSObject {
    HKMCDaySummary * _daySummary;
    unsigned long long  _fertileWindowLevel;
    bool  _fetched;
    unsigned long long  _menstruationLevel;
}

@property (nonatomic, readonly) HKMCDaySummary *daySummary;
@property (nonatomic, readonly) unsigned long long fertileWindowLevel;
@property (getter=isFetched, nonatomic, readonly) bool fetched;
@property (nonatomic, readonly) unsigned long long menstruationLevel;
@property (getter=isSupplementaryDataLogged, nonatomic, readonly) bool supplementaryDataLogged;

+ (id)dayViewModelWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 fetched:(bool)arg4;
+ (id)emptyDayViewModel;
+ (id)unfetchedDayViewModel;

- (void).cxx_destruct;
- (id)_initWithMenstruationLevel:(unsigned long long)arg1 fertileWindowLevel:(unsigned long long)arg2 daySummary:(id)arg3 fetched:(bool)arg4;
- (id)daySummary;
- (id)description;
- (unsigned long long)fertileWindowLevel;
- (bool)isEqual:(id)arg1;
- (bool)isFetched;
- (bool)isSupplementaryDataLogged;
- (unsigned long long)menstruationLevel;
- (id)redactedDescription;

@end
