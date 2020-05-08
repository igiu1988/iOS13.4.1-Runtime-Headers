/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCloudStoreStatusResponse : PBCodable <NSCopying> {
    NSData * _accountInfoData;
    bool  _cloudStoreIsSetup;
    NSData * _errorData;
    struct { 
        unsigned int cloudStoreIsSetup : 1; 
        unsigned int pending : 1; 
    }  _has;
    bool  _pending;
}

@property (nonatomic, retain) NSData *accountInfoData;
@property (nonatomic) bool cloudStoreIsSetup;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasAccountInfoData;
@property (nonatomic) bool hasCloudStoreIsSetup;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool pending;

- (void).cxx_destruct;
- (id)accountInfoData;
- (bool)cloudStoreIsSetup;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasAccountInfoData;
- (bool)hasCloudStoreIsSetup;
- (bool)hasErrorData;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setAccountInfoData:(id)arg1;
- (void)setCloudStoreIsSetup:(bool)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasCloudStoreIsSetup:(bool)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
