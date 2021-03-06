/* Generated by EzioChiu.
 */

@protocol SEEndPoint

@required

+ (id)endPointWithIdentifier:(NSString *)arg1 certificateData:(NSData *)arg2 error:(id*)arg3;
+ (id)revokedEndpointWithPublicKeyIdentifier:(NSData *)arg1 revocationAttestation:(NSData *)arg2 error:(id*)arg3;

- (NSError *)configurePrivateData:(NSData *)arg1 confidentialData:(NSData *)arg2 contaclessPersistentVisibility:(NSNumber *)arg3 wiredPersistentVisibility:(NSNumber *)arg4;
- (void)configurePrivateDataOffset:(unsigned short)arg1 privateDataLength:(unsigned short)arg2 confidentialDataOffset:(unsigned short)arg3 confidentialDataLength:(unsigned short)arg4 contaclessVisibility:(bool)arg5 wiredVisibility:(bool)arg6;
- (NSError *)decryptPrivacyData:(NSData *)arg1 serverPrivacyPublicKeyData:(NSData *)arg2 plainText:(id*)arg3;
- (NSError *)encryptPrivacyData:(NSData *)arg1 serverPrivacyPublicKeyData:(NSData *)arg2 ephemeralPublicKeyData:(id*)arg3 cipherText:(id*)arg4;
- (void)prependCertificateChain:(NSArray *)arg1;
- (NSError *)validateAuthorizedEndpointConfig:(NSData *)arg1;

@end
