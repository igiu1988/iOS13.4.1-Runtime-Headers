/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDChartExperimentsChartPoint : NSObject <HKChartPoint> {
    <HKGraphSeriesBlockCoordinateInfo> * _experimentInfo;
    NSDate * _xValue;
    NSNumber * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *experimentInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *xValue;
@property (nonatomic, readonly) NSNumber *yValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)experimentInfo;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end