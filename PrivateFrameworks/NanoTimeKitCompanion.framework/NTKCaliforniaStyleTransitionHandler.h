/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCaliforniaStyleTransitionHandler : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centerPoint;
    CLKDevice * _device;
    unsigned long long  _dial;
    struct CGPoint { double x1; double x2; } * _fadeInHourMarkersCenterPoints;
    struct CGPoint { double x1; double x2; } * _fadeOutHourMarkersCenterPoints;
    double  _fraction;
    unsigned long long  _hourMarkersCount;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } centerPoint;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) unsigned long long dial;
@property (nonatomic) struct CGPoint { double x1; double x2; }*fadeInHourMarkersCenterPoints;
@property (nonatomic) struct CGPoint { double x1; double x2; }*fadeOutHourMarkersCenterPoints;
@property (nonatomic) double fraction;
@property (nonatomic) unsigned long long hourMarkersCount;

- (void).cxx_destruct;
- (double)animationDurationForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)animationProgressForHourMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (double)animationStartTimeForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })centerPoint;
- (id)device;
- (unsigned long long)dial;
- (struct CGPoint { double x1; double x2; }*)fadeInHourMarkersCenterPoints;
- (struct CGPoint { double x1; double x2; }*)fadeOutHourMarkersCenterPoints;
- (double)fraction;
- (unsigned long long)hourMarkersCount;
- (id)initWithDevice:(id)arg1;
- (double)opacityForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })positionForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;
- (void)setCenterPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDevice:(id)arg1;
- (void)setDial:(unsigned long long)arg1;
- (void)setFadeInHourMarkersCenterPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setFadeOutHourMarkersCenterPoints:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setFraction:(double)arg1;
- (void)setHourMarkersCount:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForMarkerAtIndex:(unsigned long long)arg1 markerType:(unsigned long long)arg2;

@end
