/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDNWActivity : PBCodable <NSCopying> {
    unsigned long long  _activityDomain;
    unsigned long long  _activityLabel;
    NSString * _activityUUID;
    NWAWDNWDeviceReport * _deviceReport;
    struct { 
        unsigned int activityDomain : 1; 
        unsigned int activityLabel : 1; 
        unsigned int timestamp : 1; 
        unsigned int isRetry : 1; 
    }  _has;
    bool  _isRetry;
    NWAWDNWL2Report * _l2Report;
    NSString * _parentActivityUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long activityDomain;
@property (nonatomic) unsigned long long activityLabel;
@property (nonatomic, retain) NSString *activityUUID;
@property (nonatomic, retain) NWAWDNWDeviceReport *deviceReport;
@property (nonatomic) bool hasActivityDomain;
@property (nonatomic) bool hasActivityLabel;
@property (nonatomic, readonly) bool hasActivityUUID;
@property (nonatomic, readonly) bool hasDeviceReport;
@property (nonatomic) bool hasIsRetry;
@property (nonatomic, readonly) bool hasL2Report;
@property (nonatomic, readonly) bool hasParentActivityUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isRetry;
@property (nonatomic, retain) NWAWDNWL2Report *l2Report;
@property (nonatomic, retain) NSString *parentActivityUUID;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned long long)activityDomain;
- (unsigned long long)activityLabel;
- (id)activityUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceReport;
- (id)dictionaryRepresentation;
- (bool)hasActivityDomain;
- (bool)hasActivityLabel;
- (bool)hasActivityUUID;
- (bool)hasDeviceReport;
- (bool)hasIsRetry;
- (bool)hasL2Report;
- (bool)hasParentActivityUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRetry;
- (id)l2Report;
- (void)mergeFrom:(id)arg1;
- (id)parentActivityUUID;
- (bool)readFrom:(id)arg1;
- (void)setActivityDomain:(unsigned long long)arg1;
- (void)setActivityLabel:(unsigned long long)arg1;
- (void)setActivityUUID:(id)arg1;
- (void)setDeviceReport:(id)arg1;
- (void)setHasActivityDomain:(bool)arg1;
- (void)setHasActivityLabel:(bool)arg1;
- (void)setHasIsRetry:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsRetry:(bool)arg1;
- (void)setL2Report:(id)arg1;
- (void)setParentActivityUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
