/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TASuspiciousDevice : NSObject <NSCopying> {
    NSData * _address;
    NSDate * _date;
    TAMetricsDetection * _detectionMetrics;
    NSDictionary * _detectionSummary;
    TASPAdvertisement * _latestAdvertisement;
    NSArray * _locationHistory;
}

@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) TAMetricsDetection *detectionMetrics;
@property (nonatomic, readonly, copy) NSDictionary *detectionSummary;
@property (nonatomic, readonly, copy) TASPAdvertisement *latestAdvertisement;
@property (nonatomic, readonly, copy) NSArray *locationHistory;

- (void).cxx_destruct;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (id)detectionMetrics;
- (id)detectionSummary;
- (id)initWithLatestAdv:(id)arg1 detectionSummary:(id)arg2 date:(id)arg3 locHistory:(id)arg4 detectionMetrics:(id)arg5;
- (id)latestAdvertisement;
- (id)locationHistory;

@end