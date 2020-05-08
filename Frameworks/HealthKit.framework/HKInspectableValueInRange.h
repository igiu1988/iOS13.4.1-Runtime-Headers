/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKInspectableValueInRange : NSObject <NSSecureCoding> {
    HKInspectableValueCollection * _currentValue;
    NSDate * _date;
    HKInspectableValue * _highValue;
    HKInspectableValue * _lowValue;
    NSString * _unitString;
}

@property (nonatomic, readonly) HKInspectableValueCollection *currentValue;
@property (nonatomic, readonly) long long currentValueRelation;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) bool hasRenderableContent;
@property (nonatomic, readonly) HKInspectableValue *highValue;
@property (nonatomic, readonly) double highValueDoubleRepresentation;
@property (nonatomic, readonly) HKInspectableValue *lowValue;
@property (nonatomic, readonly) double lowValueDoubleRepresentation;
@property (nonatomic, readonly, copy) NSString *unitString;

+ (bool)supportsSecureCoding;
+ (id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;

- (void).cxx_destruct;
- (void)_assertValidRange;
- (double)_doubleForValue:(id)arg1;
- (double)_doubleForValueCollection:(id)arg1;
- (id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;
- (void)_setUnitString:(id)arg1;
- (id)currentValue;
- (long long)currentValueRelation;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRenderableContent;
- (id)highValue;
- (double)highValueDoubleRepresentation;
- (id)initWithCoder:(id)arg1;
- (id)lowValue;
- (double)lowValueDoubleRepresentation;
- (void)setDate:(id)arg1;
- (id)unitString;

@end