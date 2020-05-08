/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface AWDVisualVoicemailServiceAccountStateUpdated : PBCodable <NSCopying> {
    struct { 
        unsigned int serviceState : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _serviceState;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasServiceState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long serviceState;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServiceState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)serviceState;
- (void)setHasServiceState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setServiceState:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
