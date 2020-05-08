/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPParticipant : PBCodable <NSCopying> {
    long long  _acceptTimestamp;
    bool  _acceptedInProcess;
    CKDPDate * _acceptedTimestampDate;
    CKDPContactInformation * _contactInformation;
    bool  _createdInProcess;
    struct { 
        unsigned int acceptTimestamp : 1; 
        unsigned int keyHealth : 1; 
        unsigned int outOfNetworkKeyType : 1; 
        unsigned int participantType : 1; 
        unsigned int permission : 1; 
        unsigned int publicKeyVersion : 1; 
        unsigned int state : 1; 
        unsigned int acceptedInProcess : 1; 
        unsigned int createdInProcess : 1; 
        unsigned int isInNetwork : 1; 
        unsigned int isOrgUser : 1; 
    }  _has;
    CKDPDate * _inviteTimestampDate;
    CKDPIdentifier * _inviterId;
    bool  _isInNetwork;
    bool  _isOrgUser;
    int  _keyHealth;
    int  _outOfNetworkKeyType;
    NSData * _outOfNetworkPrivateKey;
    CKDPIdentifier * _participantId;
    int  _participantType;
    int  _permission;
    CKDPProtectionInfo * _protectionInfo;
    NSData * _protectionInfoPublicKey;
    CKDPProtectionInfo * _publicKey;
    int  _publicKeyVersion;
    int  _state;
    CKDPIdentifier * _userId;
}

@property (nonatomic) long long acceptTimestamp;
@property (nonatomic) bool acceptedInProcess;
@property (nonatomic, retain) CKDPDate *acceptedTimestampDate;
@property (nonatomic, retain) CKDPContactInformation *contactInformation;
@property (nonatomic) bool createdInProcess;
@property (nonatomic) bool hasAcceptTimestamp;
@property (nonatomic) bool hasAcceptedInProcess;
@property (nonatomic, readonly) bool hasAcceptedTimestampDate;
@property (nonatomic, readonly) bool hasContactInformation;
@property (nonatomic) bool hasCreatedInProcess;
@property (nonatomic, readonly) bool hasInviteTimestampDate;
@property (nonatomic, readonly) bool hasInviterId;
@property (nonatomic) bool hasIsInNetwork;
@property (nonatomic) bool hasIsOrgUser;
@property (nonatomic) bool hasKeyHealth;
@property (nonatomic) bool hasOutOfNetworkKeyType;
@property (nonatomic, readonly) bool hasOutOfNetworkPrivateKey;
@property (nonatomic, readonly) bool hasParticipantId;
@property (nonatomic) bool hasParticipantType;
@property (nonatomic) bool hasPermission;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasProtectionInfoPublicKey;
@property (nonatomic, readonly) bool hasPublicKey;
@property (nonatomic) bool hasPublicKeyVersion;
@property (nonatomic) bool hasState;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic, retain) CKDPDate *inviteTimestampDate;
@property (nonatomic, retain) CKDPIdentifier *inviterId;
@property (nonatomic) bool isInNetwork;
@property (nonatomic) bool isOrgUser;
@property (nonatomic) int keyHealth;
@property (nonatomic) int outOfNetworkKeyType;
@property (nonatomic, retain) NSData *outOfNetworkPrivateKey;
@property (nonatomic, retain) CKDPIdentifier *participantId;
@property (nonatomic) int participantType;
@property (nonatomic) int permission;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) NSData *protectionInfoPublicKey;
@property (nonatomic, retain) CKDPProtectionInfo *publicKey;
@property (nonatomic) int publicKeyVersion;
@property (nonatomic) int state;
@property (nonatomic, retain) CKDPIdentifier *userId;

- (void).cxx_destruct;
- (int)StringAsKeyHealth:(id)arg1;
- (int)StringAsParticipantType:(id)arg1;
- (int)StringAsPermission:(id)arg1;
- (int)StringAsState:(id)arg1;
- (id)_participantTypeCKLogValue;
- (id)_permissionCKLogValue;
- (id)_stateCKLogValue;
- (long long)acceptTimestamp;
- (bool)acceptedInProcess;
- (id)acceptedTimestampDate;
- (id)contactInformation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createdInProcess;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAcceptTimestamp;
- (bool)hasAcceptedInProcess;
- (bool)hasAcceptedTimestampDate;
- (bool)hasContactInformation;
- (bool)hasCreatedInProcess;
- (bool)hasInviteTimestampDate;
- (bool)hasInviterId;
- (bool)hasIsInNetwork;
- (bool)hasIsOrgUser;
- (bool)hasKeyHealth;
- (bool)hasOutOfNetworkKeyType;
- (bool)hasOutOfNetworkPrivateKey;
- (bool)hasParticipantId;
- (bool)hasParticipantType;
- (bool)hasPermission;
- (bool)hasProtectionInfo;
- (bool)hasProtectionInfoPublicKey;
- (bool)hasPublicKey;
- (bool)hasPublicKeyVersion;
- (bool)hasState;
- (bool)hasUserId;
- (unsigned long long)hash;
- (id)inviteTimestampDate;
- (id)inviterId;
- (bool)isEqual:(id)arg1;
- (bool)isInNetwork;
- (bool)isOrgUser;
- (int)keyHealth;
- (id)keyHealthAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outOfNetworkKeyType;
- (id)outOfNetworkPrivateKey;
- (id)participantId;
- (int)participantType;
- (id)participantTypeAsString:(int)arg1;
- (int)permission;
- (id)permissionAsString:(int)arg1;
- (id)protectionInfo;
- (id)protectionInfoPublicKey;
- (id)publicKey;
- (int)publicKeyVersion;
- (bool)readFrom:(id)arg1;
- (void)setAcceptTimestamp:(long long)arg1;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setAcceptedTimestampDate:(id)arg1;
- (void)setContactInformation:(id)arg1;
- (void)setCreatedInProcess:(bool)arg1;
- (void)setHasAcceptTimestamp:(bool)arg1;
- (void)setHasAcceptedInProcess:(bool)arg1;
- (void)setHasCreatedInProcess:(bool)arg1;
- (void)setHasIsInNetwork:(bool)arg1;
- (void)setHasIsOrgUser:(bool)arg1;
- (void)setHasKeyHealth:(bool)arg1;
- (void)setHasOutOfNetworkKeyType:(bool)arg1;
- (void)setHasParticipantType:(bool)arg1;
- (void)setHasPermission:(bool)arg1;
- (void)setHasPublicKeyVersion:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setInviteTimestampDate:(id)arg1;
- (void)setInviterId:(id)arg1;
- (void)setIsInNetwork:(bool)arg1;
- (void)setIsOrgUser:(bool)arg1;
- (void)setKeyHealth:(int)arg1;
- (void)setOutOfNetworkKeyType:(int)arg1;
- (void)setOutOfNetworkPrivateKey:(id)arg1;
- (void)setParticipantId:(id)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPermission:(int)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setProtectionInfoPublicKey:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyVersion:(int)arg1;
- (void)setState:(int)arg1;
- (void)setUserId:(id)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (id)userId;
- (void)writeTo:(id)arg1;

@end
