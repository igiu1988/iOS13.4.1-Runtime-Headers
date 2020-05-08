/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint> {
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    NSDate * _xEnd;
    NSDate * _xStart;
    NSNumber * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, retain) NSDate *xEnd;
@property (nonatomic, retain) NSDate *xStart;
@property (nonatomic, retain) NSNumber *yValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)description;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setUserInfo:(id)arg1;
- (void)setXEnd:(id)arg1;
- (void)setXStart:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)userInfo;
- (id)xEnd;
- (id)xStart;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
