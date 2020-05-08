/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAFilterVisitsSettings : NSObject {
    NSSet * _enabledLoiTypes;
    double  _entryDisplayOnBudget;
    double  _exitDisplayOnBudget;
    double  _maxSuspiciousDuration;
    double  _minInterVisitDistance;
    unsigned long long  _minNSigmaBetweenVisits;
    double  _minObservationInterval;
}

@property (nonatomic, readonly) NSSet *enabledLoiTypes;
@property (nonatomic, readonly) double entryDisplayOnBudget;
@property (nonatomic, readonly) double exitDisplayOnBudget;
@property (nonatomic, readonly) double maxSuspiciousDuration;
@property (nonatomic, readonly) double minInterVisitDistance;
@property (nonatomic, readonly) unsigned long long minNSigmaBetweenVisits;
@property (nonatomic, readonly) double minObservationInterval;

+ (id)defaultVisitsEnabledLoiTypes;

- (void).cxx_destruct;
- (id)enabledLoiTypes;
- (id)enabledLoiTypesToString;
- (double)entryDisplayOnBudget;
- (double)exitDisplayOnBudget;
- (id)initWithDefaults;
- (id)initWithMaxSuspiciousDuration:(double)arg1 minInterVisitDistance:(double)arg2 minNSigmaBetweenVisits:(unsigned long long)arg3 entryDisplayOnBudget:(double)arg4 exitDisplayOnBudget:(double)arg5 enabledLoiTypes:(id)arg6 minObservationInterval:(double)arg7;
- (id)initWithMaxSuspiciousDurationOrDefault:(id)arg1 minInterVisitDistanceOrDefault:(id)arg2 minNSigmaBetweenVisitsOrDefault:(id)arg3 entryDisplayOnBudgetOrDefault:(id)arg4 exitDisplayOnBudgetOrDefault:(id)arg5 enabledLoiTypesOrDefault:(id)arg6 minObservationIntervalOrDefault:(id)arg7;
- (double)maxSuspiciousDuration;
- (double)minInterVisitDistance;
- (unsigned long long)minNSigmaBetweenVisits;
- (double)minObservationInterval;

@end