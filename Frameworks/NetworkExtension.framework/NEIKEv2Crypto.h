/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2Crypto : NSObject

+ (id)copyAllCertIdentities;
+ (id)copyAllCertificates;
+ (id)copyAuthenticationProtocolForAuthMethod:(unsigned long long)arg1 authData:(id)arg2;
+ (struct __SecCertificate { }*)copyCertificateFromPersistentData:(id)arg1;
+ (id)copyDHKeys:(unsigned long long)arg1;
+ (id)copyDataFromPersistentReference:(id)arg1;
+ (id)copyPersistentCertificateDataForCommonName:(id)arg1 matchingCertificateHash:(id)arg2;
+ (id)copyPersistentDataForCertificate:(struct __SecCertificate { }*)arg1;
+ (id)copyPersistentDataForIdentity:(struct __SecIdentity { }*)arg1;
+ (id)copyPersistentIdentityDataForCommonName:(id)arg1;
+ (struct __SecIdentity { }*)copySecIdentity:(id)arg1;
+ (id)copySignHashDataForSet:(id)arg1;
+ (id)copySignHashDataForSet:(id)arg1 authentication:(id)arg2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyTrustedKeyForCertificate:(id)arg1 remoteCAArray:(id)arg2 policyRef:(void*)arg3 enableRevocationCheck:(bool)arg4 strictRevocationCheck:(bool)arg5;
+ (id)createBase16EncodedDataForString:(const char *)arg1;
+ (id)createCertificateAuthorityPublicKeyHash:(struct __SecCertificate { }*)arg1;
+ (id)createDecryptedData:(id)arg1 algorithm:(id)arg2 key:(id)arg3 iv:(id)arg4 aad:(id)arg5 padDataToKeyLength:(bool)arg6;
+ (id)createEncryptedData:(id)arg1 algorithm:(id)arg2 key:(id)arg3 iv:(id)arg4 encryptionContext:(id)arg5 aad:(id)arg6 padDataToKeyLength:(bool)arg7;
+ (id)createHMACFromData:(id)arg1 key:(id)arg2 integrityAlgorithm:(unsigned long long)arg3;
+ (id)createHMACFromData:(id)arg1 key:(id)arg2 prfAlgorithm:(unsigned long long)arg3;
+ (id)createHashFromData:(id)arg1;
+ (id)createHashFromData:(id)arg1 algorithm:(unsigned long long)arg2;
+ (id)createHashFromData:(id)arg1 hashAlgorithm:(unsigned long long)arg2;
+ (id)createIVForEncryptionAlgorithm:(id)arg1 encryptContext:(id)arg2;
+ (id)createNATDetectionHashForInitiatorSPI:(id)arg1 responderSPI:(id)arg2 address:(id)arg3;
+ (id)createPRFPlusFromData:(id)arg1 key:(id)arg2 prfAlgorithm:(unsigned long long)arg3 outputLength:(unsigned int)arg4;
+ (struct __SecPolicy { }*)createPolicyWithHostname:(id)arg1;
+ (id)createRandomWithSize:(unsigned int)arg1;
+ (id)createSignHashProtocolForAuth:(id)arg1;
+ (bool)decryptChaChaPolyWithKey:(const char *)arg1 keyLen:(int)arg2 iv:(const char *)arg3 ivLen:(int)arg4 aad:(const char *)arg5 aadLen:(int)arg6 encryptedText:(const char *)arg7 len:(int)arg8 output:(char *)arg9 outputLen:(int)arg10;
+ (bool)decryptGCMWithKey:(const char *)arg1 keyLen:(int)arg2 iv:(const char *)arg3 ivLen:(int)arg4 aad:(const char *)arg5 aadLen:(int)arg6 encryptedText:(const char *)arg7 len:(int)arg8 output:(char *)arg9 outputLen:(int)arg10;
+ (bool)encryptChaChaPolyWithContext:(id)arg1 key:(id)arg2 iv:(id)arg3 aad:(const char *)arg4 aadLen:(int)arg5 plaintext:(const char *)arg6 len:(int)arg7 output:(char *)arg8 outputLen:(int)arg9;
+ (bool)encryptGCMWithContext:(id)arg1 aad:(const char *)arg2 aadLen:(int)arg3 plaintext:(const char *)arg4 len:(int)arg5 output:(char *)arg6 outputLen:(int)arg7;
+ (id)prototypeDHKeysForGroup:(unsigned long long)arg1;
+ (unsigned long long)signHashTypeForAuthentication:(id)arg1;
+ (bool)verifySignature:(id)arg1 octets:(id)arg2 hashAlgorithm:(unsigned long long)arg3 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg4 padding:(unsigned int)arg5;
+ (bool)verifySignature:(id)arg1 octets:(id)arg2 hashAlgorithm:(unsigned long long)arg3 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg4 padding:(unsigned int)arg5 sha2:(bool)arg6;

@end
