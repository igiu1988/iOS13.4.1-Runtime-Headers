/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMonotonicReferenceTime : NSObject {
    double  _startTimeStamp;
}

@property (nonatomic, readonly) double timeIntervalSinceNow;
@property (nonatomic, readonly) double timeIntervalToNow;

+ (double)_timeIntervalSinceInternalClockReference;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)now;
+ (id)referenceTimeForDate:(id)arg1;
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)arg1;

- (id)_initWithStartTime:(double)arg1;
- (id)date;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceTime:(id)arg1;
- (double)timeIntervalToNow;

@end
