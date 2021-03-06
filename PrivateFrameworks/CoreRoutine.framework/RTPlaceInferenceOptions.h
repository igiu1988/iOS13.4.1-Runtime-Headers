/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPlaceInferenceOptions : NSObject <NSSecureCoding> {
    NSArray * _accessPoints;
    double  _distance;
    NSDate * _endDate;
    unsigned long long  _fidelityPolicy;
    long long  _limit;
    RTLocation * _location;
    NSArray * _locations;
    NSDate * _startDate;
    bool  _useBackground;
}

@property (nonatomic, readonly) NSArray *accessPoints;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long fidelityPolicy;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly) RTLocation *location;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool useBackground;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessPoints;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)fidelityPolicy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3;
- (id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3 distance:(double)arg4 location:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8 useBackground:(bool)arg9;
- (id)initWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (long long)limit;
- (id)location;
- (id)locations;
- (id)startDate;
- (bool)useBackground;

@end
