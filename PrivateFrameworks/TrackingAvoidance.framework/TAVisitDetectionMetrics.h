/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAVisitDetectionMetrics : NSObject {
    double  _distanceToPreviousVisit;
    unsigned long long  _nSigmaBetweenVisits;
    double  _residualDistanceToPreviousVisit;
}

@property (nonatomic, readonly) double distanceToPreviousVisit;
@property (nonatomic, readonly) unsigned long long nSigmaBetweenVisits;
@property (nonatomic, readonly) double residualDistanceToPreviousVisit;

- (double)distanceToPreviousVisit;
- (id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3;
- (unsigned long long)nSigmaBetweenVisits;
- (double)residualDistanceToPreviousVisit;

@end
