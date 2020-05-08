/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoUpdatedAccountsForProvisioningResponse : PBCodable <NSCopying> {
    NSData * _accountsOnDeviceData;
    NSData * _accountsRequiringProvisioningData;
    struct { 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
}

@property (nonatomic, retain) NSData *accountsOnDeviceData;
@property (nonatomic, retain) NSData *accountsRequiringProvisioningData;
@property (nonatomic, readonly) bool hasAccountsOnDeviceData;
@property (nonatomic, readonly) bool hasAccountsRequiringProvisioningData;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool pending;

- (void).cxx_destruct;
- (id)accountsOnDeviceData;
- (id)accountsRequiringProvisioningData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountsOnDeviceData;
- (bool)hasAccountsRequiringProvisioningData;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setAccountsOnDeviceData:(id)arg1;
- (void)setAccountsRequiringProvisioningData:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
