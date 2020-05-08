/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMotionManager : NSObject {
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _attitude;
    double  _coefficient;
    SBFInfiniteImpulseResponseFilter * _motionFilterAW;
    SBFInfiniteImpulseResponseFilter * _motionFilterAX;
    SBFInfiniteImpulseResponseFilter * _motionFilterAY;
    SBFInfiniteImpulseResponseFilter * _motionFilterAZ;
    SBFInfiniteImpulseResponseFilter * _motionFilterPitch;
    SBFInfiniteImpulseResponseFilter * _motionFilterRoll;
    SBFInfiniteImpulseResponseFilter * _motionFilterX;
    SBFInfiniteImpulseResponseFilter * _motionFilterY;
    SBFInfiniteImpulseResponseFilter * _motionFilterYaw;
    SBFInfiniteImpulseResponseFilter * _motionFilterZ;
    CMMotionManager * _motionManager;
    bool  _motionManagerPaused;
    double  _pitch;
    unsigned long long  _referenceFrame;
    double  _roll;
    double  _threshold;
    double  _x;
    double  _y;
    double  _yaw;
    double  _z;
}

@property (nonatomic) double accelerometerUpdateInterval;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } attitude;
@property (nonatomic) double deviceMotionUpdateInterval;
@property (nonatomic, readonly) SBFInfiniteImpulseResponseFilter *motionFilterX;
@property (nonatomic, readonly) SBFInfiniteImpulseResponseFilter *motionFilterY;
@property (nonatomic, readonly) SBFInfiniteImpulseResponseFilter *motionFilterZ;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;
@property (nonatomic, readonly) double yaw;
@property (nonatomic, readonly) double z;

- (void).cxx_destruct;
- (void)_createFilters;
- (double)accelerometerUpdateInterval;
- (struct { double x1; double x2; double x3; double x4; })attitude;
- (void)createMotionManager;
- (double)deviceMotionUpdateInterval;
- (id)init;
- (id)initWithCoefficient:(double)arg1;
- (id)initWithCoefficient:(double)arg1 threshold:(double)arg2;
- (bool)isDeviceMotionAvailable;
- (id)motionFilterX;
- (id)motionFilterY;
- (id)motionFilterZ;
- (void)pauseDeviceMotionUpdates;
- (double)pitch;
- (double)roll;
- (void)setAccelerometerUpdateInterval:(double)arg1;
- (void)setDeviceMotionUpdateInterval:(double)arg1;
- (void)startDeviceAccelerometerUpdates;
- (void)startDeviceMotionUpdates;
- (void)stopDeviceAccelerometerUpdates;
- (void)stopDeviceMotionUpdates;
- (double)x;
- (double)y;
- (double)yaw;
- (double)z;
- (bool)zeroMovementSinceLastFrame;

@end
