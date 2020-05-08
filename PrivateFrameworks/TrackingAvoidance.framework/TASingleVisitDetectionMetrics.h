/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TASingleVisitDetectionMetrics : NSObject {
    TAInterVisitMetricPerDevice * _interVisitMetrics;
    unsigned long long  _loiType;
}

@property (nonatomic, readonly) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (nonatomic, readonly) unsigned long long loiType;

- (void).cxx_destruct;
- (id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2;
- (id)interVisitMetrics;
- (unsigned long long)loiType;

@end
