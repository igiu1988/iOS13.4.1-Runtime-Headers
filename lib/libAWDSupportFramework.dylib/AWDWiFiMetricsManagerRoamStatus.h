/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerRoamStatus : PBCodable <NSCopying> {
    unsigned long long  _associatedDur;
    unsigned int  _ccaInt;
    unsigned int  _ccaOthers;
    unsigned int  _ccaSelf;
    unsigned int  _ccaTotal;
    unsigned int  _flags;
    struct { 
        unsigned int associatedDur : 1; 
        unsigned int originBcnPer : 1; 
        unsigned int originFwTxPer : 1; 
        unsigned int originTxPer : 1; 
        unsigned int timestamp : 1; 
        unsigned int ccaInt : 1; 
        unsigned int ccaOthers : 1; 
        unsigned int ccaSelf : 1; 
        unsigned int ccaTotal : 1; 
        unsigned int flags : 1; 
        unsigned int hostReason : 1; 
        unsigned int latency : 1; 
        unsigned int motionState : 1; 
        unsigned int offChannelDt : 1; 
        unsigned int originAKMs : 1; 
        unsigned int originChannel : 1; 
        unsigned int originEnhancedSecurityType : 1; 
        unsigned int originPhyMode : 1; 
        unsigned int originRssi : 1; 
        unsigned int profileType : 1; 
        unsigned int reason : 1; 
        unsigned int roamScanDuration : 1; 
        unsigned int securityType : 1; 
        unsigned int status : 1; 
        unsigned int targetAKMs : 1; 
        unsigned int targetChannel : 1; 
        unsigned int targetEnhancedSecurityType : 1; 
        unsigned int targetPhyMode : 1; 
        unsigned int targetRssi : 1; 
        unsigned int lateRoam : 1; 
        unsigned int voipActive : 1; 
    }  _has;
    unsigned int  _hostReason;
    bool  _lateRoam;
    unsigned int  _latency;
    unsigned int  _motionState;
    unsigned int  _offChannelDt;
    unsigned int  _originAKMs;
    unsigned long long  _originBcnPer;
    unsigned int  _originChannel;
    unsigned int  _originEnhancedSecurityType;
    unsigned long long  _originFwTxPer;
    NSData * _originOui;
    unsigned int  _originPhyMode;
    int  _originRssi;
    unsigned long long  _originTxPer;
    unsigned int  _profileType;
    unsigned int  _reason;
    unsigned int  _roamScanDuration;
    unsigned int  _securityType;
    unsigned int  _status;
    unsigned int  _targetAKMs;
    unsigned int  _targetChannel;
    unsigned int  _targetEnhancedSecurityType;
    NSData * _targetOui;
    unsigned int  _targetPhyMode;
    int  _targetRssi;
    unsigned long long  _timestamp;
    bool  _voipActive;
}

@property (nonatomic) unsigned long long associatedDur;
@property (nonatomic) unsigned int ccaInt;
@property (nonatomic) unsigned int ccaOthers;
@property (nonatomic) unsigned int ccaSelf;
@property (nonatomic) unsigned int ccaTotal;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool hasAssociatedDur;
@property (nonatomic) bool hasCcaInt;
@property (nonatomic) bool hasCcaOthers;
@property (nonatomic) bool hasCcaSelf;
@property (nonatomic) bool hasCcaTotal;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasHostReason;
@property (nonatomic) bool hasLateRoam;
@property (nonatomic) bool hasLatency;
@property (nonatomic) bool hasMotionState;
@property (nonatomic) bool hasOffChannelDt;
@property (nonatomic) bool hasOriginAKMs;
@property (nonatomic) bool hasOriginBcnPer;
@property (nonatomic) bool hasOriginChannel;
@property (nonatomic) bool hasOriginEnhancedSecurityType;
@property (nonatomic) bool hasOriginFwTxPer;
@property (nonatomic, readonly) bool hasOriginOui;
@property (nonatomic) bool hasOriginPhyMode;
@property (nonatomic) bool hasOriginRssi;
@property (nonatomic) bool hasOriginTxPer;
@property (nonatomic) bool hasProfileType;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRoamScanDuration;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTargetAKMs;
@property (nonatomic) bool hasTargetChannel;
@property (nonatomic) bool hasTargetEnhancedSecurityType;
@property (nonatomic, readonly) bool hasTargetOui;
@property (nonatomic) bool hasTargetPhyMode;
@property (nonatomic) bool hasTargetRssi;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVoipActive;
@property (nonatomic) unsigned int hostReason;
@property (nonatomic) bool lateRoam;
@property (nonatomic) unsigned int latency;
@property (nonatomic) unsigned int motionState;
@property (nonatomic) unsigned int offChannelDt;
@property (nonatomic) unsigned int originAKMs;
@property (nonatomic) unsigned long long originBcnPer;
@property (nonatomic) unsigned int originChannel;
@property (nonatomic) unsigned int originEnhancedSecurityType;
@property (nonatomic) unsigned long long originFwTxPer;
@property (nonatomic, retain) NSData *originOui;
@property (nonatomic) unsigned int originPhyMode;
@property (nonatomic) int originRssi;
@property (nonatomic) unsigned long long originTxPer;
@property (nonatomic) unsigned int profileType;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int roamScanDuration;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int targetAKMs;
@property (nonatomic) unsigned int targetChannel;
@property (nonatomic) unsigned int targetEnhancedSecurityType;
@property (nonatomic, retain) NSData *targetOui;
@property (nonatomic) unsigned int targetPhyMode;
@property (nonatomic) int targetRssi;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool voipActive;

- (unsigned long long)associatedDur;
- (unsigned int)ccaInt;
- (unsigned int)ccaOthers;
- (unsigned int)ccaSelf;
- (unsigned int)ccaTotal;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (bool)hasAssociatedDur;
- (bool)hasCcaInt;
- (bool)hasCcaOthers;
- (bool)hasCcaSelf;
- (bool)hasCcaTotal;
- (bool)hasFlags;
- (bool)hasHostReason;
- (bool)hasLateRoam;
- (bool)hasLatency;
- (bool)hasMotionState;
- (bool)hasOffChannelDt;
- (bool)hasOriginAKMs;
- (bool)hasOriginBcnPer;
- (bool)hasOriginChannel;
- (bool)hasOriginEnhancedSecurityType;
- (bool)hasOriginFwTxPer;
- (bool)hasOriginOui;
- (bool)hasOriginPhyMode;
- (bool)hasOriginRssi;
- (bool)hasOriginTxPer;
- (bool)hasProfileType;
- (bool)hasReason;
- (bool)hasRoamScanDuration;
- (bool)hasSecurityType;
- (bool)hasStatus;
- (bool)hasTargetAKMs;
- (bool)hasTargetChannel;
- (bool)hasTargetEnhancedSecurityType;
- (bool)hasTargetOui;
- (bool)hasTargetPhyMode;
- (bool)hasTargetRssi;
- (bool)hasTimestamp;
- (bool)hasVoipActive;
- (unsigned long long)hash;
- (unsigned int)hostReason;
- (bool)isEqual:(id)arg1;
- (bool)lateRoam;
- (unsigned int)latency;
- (void)mergeFrom:(id)arg1;
- (unsigned int)motionState;
- (unsigned int)offChannelDt;
- (unsigned int)originAKMs;
- (unsigned long long)originBcnPer;
- (unsigned int)originChannel;
- (unsigned int)originEnhancedSecurityType;
- (unsigned long long)originFwTxPer;
- (id)originOui;
- (unsigned int)originPhyMode;
- (int)originRssi;
- (unsigned long long)originTxPer;
- (unsigned int)profileType;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (unsigned int)roamScanDuration;
- (unsigned int)securityType;
- (void)setAssociatedDur:(unsigned long long)arg1;
- (void)setCcaInt:(unsigned int)arg1;
- (void)setCcaOthers:(unsigned int)arg1;
- (void)setCcaSelf:(unsigned int)arg1;
- (void)setCcaTotal:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasAssociatedDur:(bool)arg1;
- (void)setHasCcaInt:(bool)arg1;
- (void)setHasCcaOthers:(bool)arg1;
- (void)setHasCcaSelf:(bool)arg1;
- (void)setHasCcaTotal:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasHostReason:(bool)arg1;
- (void)setHasLateRoam:(bool)arg1;
- (void)setHasLatency:(bool)arg1;
- (void)setHasMotionState:(bool)arg1;
- (void)setHasOffChannelDt:(bool)arg1;
- (void)setHasOriginAKMs:(bool)arg1;
- (void)setHasOriginBcnPer:(bool)arg1;
- (void)setHasOriginChannel:(bool)arg1;
- (void)setHasOriginEnhancedSecurityType:(bool)arg1;
- (void)setHasOriginFwTxPer:(bool)arg1;
- (void)setHasOriginPhyMode:(bool)arg1;
- (void)setHasOriginRssi:(bool)arg1;
- (void)setHasOriginTxPer:(bool)arg1;
- (void)setHasProfileType:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRoamScanDuration:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTargetAKMs:(bool)arg1;
- (void)setHasTargetChannel:(bool)arg1;
- (void)setHasTargetEnhancedSecurityType:(bool)arg1;
- (void)setHasTargetPhyMode:(bool)arg1;
- (void)setHasTargetRssi:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVoipActive:(bool)arg1;
- (void)setHostReason:(unsigned int)arg1;
- (void)setLateRoam:(bool)arg1;
- (void)setLatency:(unsigned int)arg1;
- (void)setMotionState:(unsigned int)arg1;
- (void)setOffChannelDt:(unsigned int)arg1;
- (void)setOriginAKMs:(unsigned int)arg1;
- (void)setOriginBcnPer:(unsigned long long)arg1;
- (void)setOriginChannel:(unsigned int)arg1;
- (void)setOriginEnhancedSecurityType:(unsigned int)arg1;
- (void)setOriginFwTxPer:(unsigned long long)arg1;
- (void)setOriginOui:(id)arg1;
- (void)setOriginPhyMode:(unsigned int)arg1;
- (void)setOriginRssi:(int)arg1;
- (void)setOriginTxPer:(unsigned long long)arg1;
- (void)setProfileType:(unsigned int)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setRoamScanDuration:(unsigned int)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTargetAKMs:(unsigned int)arg1;
- (void)setTargetChannel:(unsigned int)arg1;
- (void)setTargetEnhancedSecurityType:(unsigned int)arg1;
- (void)setTargetOui:(id)arg1;
- (void)setTargetPhyMode:(unsigned int)arg1;
- (void)setTargetRssi:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVoipActive:(bool)arg1;
- (unsigned int)status;
- (unsigned int)targetAKMs;
- (unsigned int)targetChannel;
- (unsigned int)targetEnhancedSecurityType;
- (id)targetOui;
- (unsigned int)targetPhyMode;
- (int)targetRssi;
- (unsigned long long)timestamp;
- (bool)voipActive;
- (void)writeTo:(id)arg1;

@end
