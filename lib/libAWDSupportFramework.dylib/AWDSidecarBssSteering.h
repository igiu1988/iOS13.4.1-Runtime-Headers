/* Generated by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSidecarBssSteering : PBCodable <NSCopying> {
    unsigned int  _attemptPeerCount;
    unsigned int  _attemptStatus;
    unsigned int  _bssSyncChannel;
    unsigned int  _completionTime;
    struct { 
        unsigned int attemptPeerCount : 1; 
        unsigned int attemptStatus : 1; 
        unsigned int bssSyncChannel : 1; 
        unsigned int completionTime : 1; 
        unsigned int peerChannel : 1; 
        unsigned int policyCode : 1; 
        unsigned int selfInfraChannel : 1; 
        unsigned int targetChannel : 1; 
        unsigned int trafficType : 1; 
    }  _has;
    unsigned int  _peerChannel;
    unsigned int  _policyCode;
    unsigned int  _selfInfraChannel;
    unsigned int  _targetChannel;
    unsigned int  _trafficType;
}

@property (nonatomic) unsigned int attemptPeerCount;
@property (nonatomic) unsigned int attemptStatus;
@property (nonatomic) unsigned int bssSyncChannel;
@property (nonatomic) unsigned int completionTime;
@property (nonatomic) bool hasAttemptPeerCount;
@property (nonatomic) bool hasAttemptStatus;
@property (nonatomic) bool hasBssSyncChannel;
@property (nonatomic) bool hasCompletionTime;
@property (nonatomic) bool hasPeerChannel;
@property (nonatomic) bool hasPolicyCode;
@property (nonatomic) bool hasSelfInfraChannel;
@property (nonatomic) bool hasTargetChannel;
@property (nonatomic) bool hasTrafficType;
@property (nonatomic) unsigned int peerChannel;
@property (nonatomic) unsigned int policyCode;
@property (nonatomic) unsigned int selfInfraChannel;
@property (nonatomic) unsigned int targetChannel;
@property (nonatomic) unsigned int trafficType;

- (unsigned int)attemptPeerCount;
- (unsigned int)attemptStatus;
- (unsigned int)bssSyncChannel;
- (unsigned int)completionTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttemptPeerCount;
- (bool)hasAttemptStatus;
- (bool)hasBssSyncChannel;
- (bool)hasCompletionTime;
- (bool)hasPeerChannel;
- (bool)hasPolicyCode;
- (bool)hasSelfInfraChannel;
- (bool)hasTargetChannel;
- (bool)hasTrafficType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)peerChannel;
- (unsigned int)policyCode;
- (bool)readFrom:(id)arg1;
- (unsigned int)selfInfraChannel;
- (void)setAttemptPeerCount:(unsigned int)arg1;
- (void)setAttemptStatus:(unsigned int)arg1;
- (void)setBssSyncChannel:(unsigned int)arg1;
- (void)setCompletionTime:(unsigned int)arg1;
- (void)setHasAttemptPeerCount:(bool)arg1;
- (void)setHasAttemptStatus:(bool)arg1;
- (void)setHasBssSyncChannel:(bool)arg1;
- (void)setHasCompletionTime:(bool)arg1;
- (void)setHasPeerChannel:(bool)arg1;
- (void)setHasPolicyCode:(bool)arg1;
- (void)setHasSelfInfraChannel:(bool)arg1;
- (void)setHasTargetChannel:(bool)arg1;
- (void)setHasTrafficType:(bool)arg1;
- (void)setPeerChannel:(unsigned int)arg1;
- (void)setPolicyCode:(unsigned int)arg1;
- (void)setSelfInfraChannel:(unsigned int)arg1;
- (void)setTargetChannel:(unsigned int)arg1;
- (void)setTrafficType:(unsigned int)arg1;
- (unsigned int)targetChannel;
- (unsigned int)trafficType;
- (void)writeTo:(id)arg1;

@end