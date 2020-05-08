/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WANWActivityStatistics : NSObject {
    NSArray * _activityUUIDs;
    unsigned int  _awdMetricID;
    PBCodable * _awdReport;
    NSArray * _externallyVisibleActivityUUIDs;
    bool  _fromInitWithPBCodableData;
}

@property (retain) NSArray *activityUUIDs;
@property (nonatomic) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;
@property (retain) NSArray *externallyVisibleActivityUUIDs;

- (void).cxx_destruct;
- (id)activityUUIDs;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (id)externallyVisibleActivityUUIDs;
- (id)initWithPBCodableData:(id)arg1;
- (id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2;
- (void)setActivityUUIDs:(id)arg1;
- (void)setAwdMetricID:(unsigned int)arg1;
- (void)setAwdReport:(id)arg1;
- (void)setExternallyVisibleActivityUUIDs:(id)arg1;

@end
