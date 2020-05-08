/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPairedSyncSyncReport : PBCodable <NSCopying> {
    NSString * _activityName;
    unsigned int  _defaultByteCount;
    NSString * _gizmoBuild;
    NSString * _gizmoHardware;
    struct { 
        unsigned int syncDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int defaultByteCount : 1; 
        unsigned int recordCount : 1; 
        unsigned int syncByteCount : 1; 
        unsigned int syncErrorCode : 1; 
        unsigned int syncType : 1; 
        unsigned int timeoutCount : 1; 
        unsigned int urgentByteCount : 1; 
        unsigned int isAutomated : 1; 
        unsigned int sawADropout : 1; 
    }  _has;
    bool  _isAutomated;
    unsigned int  _recordCount;
    bool  _sawADropout;
    unsigned int  _syncByteCount;
    unsigned long long  _syncDuration;
    unsigned int  _syncErrorCode;
    unsigned int  _syncType;
    unsigned int  _timeoutCount;
    unsigned long long  _timestamp;
    unsigned int  _urgentByteCount;
}

@property (nonatomic, retain) NSString *activityName;
@property (nonatomic) unsigned int defaultByteCount;
@property (nonatomic, retain) NSString *gizmoBuild;
@property (nonatomic, retain) NSString *gizmoHardware;
@property (nonatomic, readonly) bool hasActivityName;
@property (nonatomic) bool hasDefaultByteCount;
@property (nonatomic, readonly) bool hasGizmoBuild;
@property (nonatomic, readonly) bool hasGizmoHardware;
@property (nonatomic) bool hasIsAutomated;
@property (nonatomic) bool hasRecordCount;
@property (nonatomic) bool hasSawADropout;
@property (nonatomic) bool hasSyncByteCount;
@property (nonatomic) bool hasSyncDuration;
@property (nonatomic) bool hasSyncErrorCode;
@property (nonatomic) bool hasSyncType;
@property (nonatomic) bool hasTimeoutCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUrgentByteCount;
@property (nonatomic) bool isAutomated;
@property (nonatomic) unsigned int recordCount;
@property (nonatomic) bool sawADropout;
@property (nonatomic) unsigned int syncByteCount;
@property (nonatomic) unsigned long long syncDuration;
@property (nonatomic) unsigned int syncErrorCode;
@property (nonatomic) unsigned int syncType;
@property (nonatomic) unsigned int timeoutCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int urgentByteCount;

- (id)activityName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)defaultByteCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gizmoBuild;
- (id)gizmoHardware;
- (bool)hasActivityName;
- (bool)hasDefaultByteCount;
- (bool)hasGizmoBuild;
- (bool)hasGizmoHardware;
- (bool)hasIsAutomated;
- (bool)hasRecordCount;
- (bool)hasSawADropout;
- (bool)hasSyncByteCount;
- (bool)hasSyncDuration;
- (bool)hasSyncErrorCode;
- (bool)hasSyncType;
- (bool)hasTimeoutCount;
- (bool)hasTimestamp;
- (bool)hasUrgentByteCount;
- (unsigned long long)hash;
- (bool)isAutomated;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)recordCount;
- (bool)sawADropout;
- (void)setActivityName:(id)arg1;
- (void)setDefaultByteCount:(unsigned int)arg1;
- (void)setGizmoBuild:(id)arg1;
- (void)setGizmoHardware:(id)arg1;
- (void)setHasDefaultByteCount:(bool)arg1;
- (void)setHasIsAutomated:(bool)arg1;
- (void)setHasRecordCount:(bool)arg1;
- (void)setHasSawADropout:(bool)arg1;
- (void)setHasSyncByteCount:(bool)arg1;
- (void)setHasSyncDuration:(bool)arg1;
- (void)setHasSyncErrorCode:(bool)arg1;
- (void)setHasSyncType:(bool)arg1;
- (void)setHasTimeoutCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUrgentByteCount:(bool)arg1;
- (void)setIsAutomated:(bool)arg1;
- (void)setRecordCount:(unsigned int)arg1;
- (void)setSawADropout:(bool)arg1;
- (void)setSyncByteCount:(unsigned int)arg1;
- (void)setSyncDuration:(unsigned long long)arg1;
- (void)setSyncErrorCode:(unsigned int)arg1;
- (void)setSyncType:(unsigned int)arg1;
- (void)setTimeoutCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUrgentByteCount:(unsigned int)arg1;
- (unsigned int)syncByteCount;
- (unsigned long long)syncDuration;
- (unsigned int)syncErrorCode;
- (unsigned int)syncType;
- (unsigned int)timeoutCount;
- (unsigned long long)timestamp;
- (unsigned int)urgentByteCount;
- (void)writeTo:(id)arg1;

@end
