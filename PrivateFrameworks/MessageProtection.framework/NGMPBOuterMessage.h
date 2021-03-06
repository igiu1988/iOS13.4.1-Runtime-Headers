/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface NGMPBOuterMessage : PBCodable <NSCopying> {
    NSData * _encryptedPayload;
    NSData * _ephemeralPubKey;
    NSData * _keyValidator;
    NSData * _signature;
}

@property (nonatomic, retain) NSData *encryptedPayload;
@property (nonatomic, retain) NSData *ephemeralPubKey;
@property (nonatomic, readonly) bool hasKeyValidator;
@property (nonatomic, retain) NSData *keyValidator;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedPayload;
- (id)ephemeralPubKey;
- (bool)hasKeyValidator;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyValidator;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEncryptedPayload:(id)arg1;
- (void)setEphemeralPubKey:(id)arg1;
- (void)setKeyValidator:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
