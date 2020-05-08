/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometerData : NSObject <HDCoreMotionDatum, NSCopying, NSSecureCoding, SRSampling> {
    NSNumber * _averageSpeed;
    NSNumber * _currentSpeed;
    NSNumber * _distance;
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSNumber *averageSpeed;
@property (nonatomic, readonly) NSNumber *currentSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (bool)supportsSecureCoding;

- (id)averageSpeed;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpeed;
- (void)dealloc;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (long long)hd_compare:(id)arg1;
- (id)hd_datestamp;
- (id)hd_epochDatestamp;
- (id)hd_sourceID;
- (id)hd_unitForType:(id)arg1;

@end
