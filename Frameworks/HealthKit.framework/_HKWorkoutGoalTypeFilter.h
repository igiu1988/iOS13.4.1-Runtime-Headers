/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutGoalTypeFilter : _HKFilter {
    unsigned long long  _goalType;
    unsigned long long  _operatorType;
}

@property (nonatomic, readonly) unsigned long long goalType;
@property (nonatomic, readonly) unsigned long long operatorType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithGoalType:(unsigned long long)arg1 operatorType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)goalType;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
